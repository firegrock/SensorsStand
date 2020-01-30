/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1572353820_7_
#define _BUR_1572353820_7_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef struct Server_typ
{	unsigned short sStep;
	plcstring client_address[21];
	struct UdpOpen UdpOpen_1;
	struct UdpConnect UdpConnect_1;
	struct UdpSend UdpSend_1;
	struct UdpRecv UdpRecv_1;
	struct UdpDisconnect UdpDisconnect_1;
	struct UdpClose UdpClose_1;
	unsigned long outData_buffer[101];
	plcstring privClient[21];
	unsigned long inData_buffer[101];
} Server_typ;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Communication/Types.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1572353820_7_ */

