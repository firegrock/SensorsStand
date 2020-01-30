/* Automation Studio generated header file */
/* Do not edit ! */
/* ComauLib  */

#ifndef _COMAULIB_
#define _COMAULIB_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef enum TComauRobotState
{	ST_CR_IDLE,
	ST_CR_MOVE,
	Init
} TComauRobotState;

typedef struct TComauTarget
{	float x;
	float y;
	float z;
	float a;
	float e;
	float r;
	float j1;
	float j2;
	float j3;
	float j4;
	float j5;
	float j6;
} TComauTarget;

typedef struct TComauControl
{	struct TComauTarget Target;
	plcbit Move;
	plcbit Homing;
} TComauControl;

typedef struct TComauRobotEPLInterface
{	unsigned char DI1_I2001Out;
	signed long InMotionTypeINT_l2002Out;
	signed long InDintPaleteID_l2003Out;
	signed long InDintX_l2004Out;
	signed long InDintY_l2005Out;
	signed long InDintZ_l2006Out;
	signed long InDintA_l2007Out;
	signed long InDintE_l2008Out;
	signed long InDintR_l2009Out;
	signed long InDintJoint1_l200AOut;
	signed long InDintJoint2_l200BOut;
	signed long InDintJoint3_l200COut;
	signed long InDintJoint4_l200DOut;
	signed long InDintJoint5_l200EOut;
	signed long InDintJoint6_l200FOut;
	signed long InDintSmth_l2010Out;
	unsigned char InFlag1_l2011Out;
	unsigned char InFlag2_l2012Out;
	unsigned char DI2_I2013Out;
	unsigned char DO1_l2014ln;
	signed long OutRealX_l2015ln;
	signed long OutRealY_l2016ln;
	signed long OutRealZ_l2017ln;
	signed long OutRealA_l2018ln;
	signed long OutRealE_l2019ln;
	signed long OutRealR_l201Aln;
	signed long OutJoint1Real_l201Bln;
	signed long OutJoint2Real_l201Cln;
	signed long OutJoint3Real_l201Dln;
	signed long OutJoint4Real_l201Eln;
	signed long OutJoint5Real_l201Fln;
	signed long OutJoint6Real_l2020ln;
	signed long OutSmth_l2021ln;
	signed long OutDint1_l2022ln;
	signed long OutDint2_l2023ln;
	unsigned char OutFlag1_l2024In;
	unsigned char OutFlag2_l2025In;
	unsigned char DO2_l2026ln;
} TComauRobotEPLInterface;

typedef struct FBComauRobot
{
	/* VAR_INPUT (analog) */
	struct TComauControl Control;
	/* VAR_OUTPUT (analog) */
	enum TComauRobotState State;
	struct TComauRobotEPLInterface EPLInterface;
	/* VAR_INPUT (digital) */
	plcbit Init;
} FBComauRobot_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void FBComauRobot(struct FBComauRobot* inst);


#ifdef __cplusplus
};
#endif
#endif /* _COMAULIB_ */

