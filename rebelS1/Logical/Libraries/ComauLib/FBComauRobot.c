
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "ComauLib.h"
#ifdef __cplusplus
	};
#endif
/* ComauRobot function block */
void FBComauRobot(struct FBComauRobot* inst)
{
	if(inst->Init)
	{
		inst->EPLInterface.DI1_I2001Out=0;
		inst->EPLInterface.InMotionTypeINT_l2002Out = 0;
		inst->EPLInterface.InDintPaleteID_l2003Out = 0;
		
		inst->EPLInterface.InDintX_l2004Out = 317 * 1000;
		inst->EPLInterface.InDintY_l2005Out = 279 * 1000;
		inst->EPLInterface.InDintZ_l2006Out = 44 * 1000;
		inst->EPLInterface.InDintA_l2007Out = -81.625 * 1000;
		inst->EPLInterface.InDintE_l2008Out = 100.529 * 1000;
		inst->EPLInterface.InDintR_l2009Out = 92.591 * 1000;
		
		inst->EPLInterface.InDintJoint1_l200AOut = -0.063 * 1000;
		inst->EPLInterface.InDintJoint2_l200BOut = -0.541 * 1000;
		inst->EPLInterface.InDintJoint3_l200COut = -90.429 * 1000;
		inst->EPLInterface.InDintJoint4_l200DOut = -0.213 * 1000;
		inst->EPLInterface.InDintJoint5_l200EOut = -86.496 * 1000;
		inst->EPLInterface.InDintJoint6_l200FOut = -1.971 * 1000;
		
		inst->Init=0;
		inst->State=ST_CR_IDLE;
		return;
	}
	
	switch (inst->State)
	{
		/*case ST_CR_HOMING:
			inst->EPLInterface.DI1_I2001Out=1;
			inst->EPLInterface.InDintX_l2004Out = 317 * 1000;
			inst->EPLInterface.InDintY_l2005Out = 279 * 1000;
			inst->EPLInterface.InDintZ_l2006Out = 44 * 1000;
			inst->EPLInterface.InDintA_l2007Out = -81 * 1000;
			inst->EPLInterface.InDintE_l2008Out = 100 * 1000;
			inst->EPLInterface.InDintR_l2009Out = 92.591 * 1000;
			inst->Control.Move=0;
			inst->State=ST_CR_IDLE;
			break;*/
		case ST_CR_MOVE:
			if(inst->EPLInterface.DO2_l2026ln == 0)
			{
				inst->EPLInterface.DI1_I2001Out = 0;
				inst->State=ST_CR_IDLE;
			}
			
			break;
		case ST_CR_IDLE:
			if(inst->Control.Move == 1 && inst->EPLInterface.DO2_l2026ln == 1	)
			{
				inst->EPLInterface.DI1_I2001Out=1;
				inst->EPLInterface.InDintX_l2004Out = inst->Control.Target.x;
				inst->EPLInterface.InDintY_l2005Out = inst->Control.Target.y;
				inst->EPLInterface.InDintZ_l2006Out = inst->Control.Target.z;
				inst->EPLInterface.InDintA_l2007Out = inst->Control.Target.a;
				inst->EPLInterface.InDintE_l2008Out = inst->Control.Target.e;
				inst->EPLInterface.InDintR_l2009Out = inst->Control.Target.r;
				inst->Control.Move=0;
				inst->State=ST_CR_MOVE;
			}
			break;
		case ST_CR_TAKING:
			if(inst->EPLInterface.DO2_l2026ln == 1 && inst->Control.Move == 1)
			{
				inst->EPLInterface.DI1_I2001Out=1;
			}
			break;
	}
}
