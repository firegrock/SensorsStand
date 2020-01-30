
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void packData()
{
	memset(Server_1.outData_buffer, 0, sizeof(Server_1.outData_buffer));
	
	strcat (Server_1.outData_buffer, "sensors: ");
	
	itoa(laserDistance, &buff);
	strcat (Server_1.outData_buffer, buff);
	strcat (Server_1.outData_buffer, ", ");
	
	itoa(ultrasonicDistance, &buff);
	strcat (Server_1.outData_buffer, buff);
	strcat (Server_1.outData_buffer, ", ");
	
	itoa(XUAH0203S_status, &buff); //photosensor
	strcat (Server_1.outData_buffer, buff);
	strcat (Server_1.outData_buffer, ", ");
	
	itoa(XS7D1A1PAL2_status, &buff); //inductive sensor
	strcat (Server_1.outData_buffer, buff);
	strcat (Server_1.outData_buffer, ", ");
	
	itoa(ODGA44A5_status, &buff); //contrast tag sensor
	strcat (Server_1.outData_buffer, buff);
	strcat (Server_1.outData_buffer, ", ");
	
	itoa(XT118B1PCL2_status, &buff); //capacitive sensor
	strcat (Server_1.outData_buffer, buff);
	strcat (Server_1.outData_buffer, ", ");
	
	itoa(XUB9BPANL2_status, &buff); //photoelectric sensor
	strcat (Server_1.outData_buffer, buff);
	
	//the end of data pack
	strcat (Server_1.outData_buffer, ";");
}

void _INIT ProgramInit(void)
{

}

void _CYCLIC ProgramCyclic(void)
{
	switch(Server_1.sStep)
	{
		case 0:
			Server_1.UdpOpen_1.enable = 1;
			Server_1.UdpOpen_1.pIfAddr = 0;
			Server_1.UdpOpen_1.port = 12051;	
			Server_1.UdpOpen_1.options = 0;
			UdpOpen(&Server_1.UdpOpen_1);	
		
			if(Server_1.UdpOpen_1.status == 0) 
			{
				Server_1.sStep = 1;	
			}
			else if (Server_1.UdpOpen_1.status == ERR_FUB_BUSY)
			{
			
			}
			else  //(* Goto Error Step *)
			{
				Server_1.sStep = 10;
			}
			break;
		case 1:
			Server_1.UdpRecv_1.enable = 1;
			Server_1.UdpRecv_1.ident = Server_1.UdpOpen_1.ident;	//(* Client Ident from AsUDP.UDP_Open *)
			Server_1.UdpRecv_1.pData = (UDINT)&Server_1.inData_buffer[0];	//(* Where to store the incoming data *)
			Server_1.UdpRecv_1.datamax = sizeof(Server_1.inData_buffer);	//(* Lenght of data buffer *)
			Server_1.UdpRecv_1.flags = 0;
			Server_1.UdpRecv_1.pIpAddr = (UDINT)&Server_1.client_address[0];	//(* IP Address of the Client *)
			UdpRecv(&Server_1.UdpRecv_1);	//(* Call the Function*)
			
			if(Server_1.UdpRecv_1.status == 0)  //(* Data received *)
			{
				Server_1.sStep = 2;
			}
			else if (Server_1.UdpRecv_1.status == udpERR_NO_DATA)//(* No data received - wait *)
			{
				Server_1.sStep = 2;				//(* No Data received *)
			}
			else if (Server_1.UdpRecv_1.status == ERR_FUB_BUSY) //(* UdpRecv not finished -> redo *)					
			{	
				//(* Busy *)
			}
			else
			{
				Server_1.sStep = 10;
			}
			break;
			
		case 2:	//(* Send Data back to Client *)
			packData();
			
			Server_1.UdpSend_1.enable = 1;
			Server_1.UdpSend_1.ident = Server_1.UdpOpen_1.ident;	//(* Client Ident from AsUDP.UDP_Open *)
			Server_1.UdpSend_1.pHost = (UDINT)&Server_1.client_address[0];	//(* IP Address of the Client *)
			Server_1.UdpSend_1.port = Server_1.UdpRecv_1.port;		//(* Port number of the Client *)
			Server_1.UdpSend_1.pData = (UDINT)&Server_1.outData_buffer[0];	//(* Which data to send *)
			Server_1.UdpSend_1.datalen = sizeof(Server_1.outData_buffer);	//(* Length of data to send *)
			Server_1.UdpSend_1.flags = 0;
			UdpSend(&Server_1.UdpSend_1);	//(* Call the Function*)
			
			if (Server_1.UdpSend_1.status == 0)  //(* Data sent *)
			{
				Server_1.sStep = 1;
			}
			else if(Server_1.UdpSend_1.status == ERR_FUB_BUSY)  //(* UdpSend not finished -> redo *)						
			{
				//(* Busy *)
			}
			else  //(* Goto Error Step *)
			{	
				Server_1.sStep = 10;
			}
			break;
		case 3: //recieve data from client with checking previlige status
			
			break;
		case 10:
			/*TODO: ?????????? ??????*/
			break;
	}
}

void _EXIT ProgramExit(void)
{

}

