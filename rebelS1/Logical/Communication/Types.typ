
TYPE
	Server_typ : 	STRUCT  (*UDP Server Variables*)
		sStep : UINT; (*UDP Server Step Variable*)
		client_address : STRING[20]; (*Address of the client connection to the Server*)
		UdpOpen_1 : UdpOpen; (*AsUDP.UdpOpen FUB*)
		UdpConnect_1 : UdpConnect; (*AsUDP.UdpConnect FUB*)
		UdpSend_1 : UdpSend; (*AsUDP.UdpSend FUB*)
		UdpRecv_1 : UdpRecv; (*AsUDP.UdpRecv FUB*)
		UdpDisconnect_1 : UdpDisconnect; (*AsUDP.UdpDisconnect FUB*)
		UdpClose_1 : UdpClose; (*AsUDP.UdpClose FUB*)
		outData_buffer : ARRAY[0..100]OF UDINT; (*Data buffer ( receive and send )*)
		privClient : STRING[20];
		inData_buffer : ARRAY[0..100]OF UDINT;
	END_STRUCT;
END_TYPE
