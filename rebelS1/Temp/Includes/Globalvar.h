/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1572353820_2_
#define _BUR_1572353820_2_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
 #define ultrasonicCoef 17195.2f
 #define laserCoef 8965.49f
#else
 _GLOBAL_CONST float ultrasonicCoef;
 _GLOBAL_CONST float laserCoef;
#endif


/* Variables */
_GLOBAL plcbit outputEndPackFlag;
_GLOBAL float targetAngleJ6;
_GLOBAL float targetAngleJ5;
_GLOBAL float targetAngleJ4;
_GLOBAL float targetAngleJ3;
_GLOBAL float targetAngleJ2;
_GLOBAL float targetAngleJ1;
_GLOBAL float targetCoordR;
_GLOBAL float targetCoordE;
_GLOBAL float targetCoordA;
_GLOBAL float targetCoordZ;
_GLOBAL signed short targetCoordY;
_GLOBAL signed short targetCoordX;
_GLOBAL signed long motionType;
_GLOBAL plcbit outputBeginPackFlag;
_GLOBAL float laserDistance;
_GLOBAL float ultrasonicDistance;
_GLOBAL plcbit XUB9BPANL2_status;
_GLOBAL plcbit XT118B1PCL2_status;
_GLOBAL plcbit ODGA44A5_status;
_GLOBAL plcbit XS7D1A1PAL2_status;
_GLOBAL plcbit XUAH0203S_status;
_GLOBAL signed short XUK8TAE2MM12_value;
_GLOBAL signed short XX930A2A2M12_value;
_GLOBAL unsigned char typeOfFunctionality;
_GLOBAL signed short palNum;
_GLOBAL float xcoord;
_GLOBAL struct FBComauRobot Robot;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/ComauLib/ComauLib.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1572353820_2_ */

