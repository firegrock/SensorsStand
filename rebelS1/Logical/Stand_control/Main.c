
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	typeOfFunctionality = 0;
	palNum = 1;
	xcoord = 421;
	Robot.Init=1;
	FBComauRobot(&Robot);
	i = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	/*
	if (typeOfFunctionality == 0)
	{
		Robot.EPLInterface.InMotionTypeINT_l2002Out = 0;
		//insert your code here
		FBComauRobot(&Robot);
	}
	
	else if(typeOfFunctionality == 1)
	{
		Robot.EPLInterface.InMotionTypeINT_l2002Out = 1;
		//Robot.EPLInterface.InMotionTypeINT_l2002Out = motionType;
		FBComauRobot(&Robot);
		
		if(Robot.State == ST_CR_IDLE && Robot.EPLInterface.DO2_l2026ln == 1)
		{
			if(palNum == 1)
			{
				xcoord = 421;
			}
			else if(palNum == 10)
			{
				palNum = 1;
				xcoord = 421;
			}
			else
			{
				xcoord = xcoord - 30;
			}
			switch(i)
			{
				case 0:
					Robot.Control.Target.x = xcoord * 1000;
					Robot.Control.Target.y = 396 * 1000;
					Robot.Control.Target.z = 130 * 1000;
					Robot.Control.Target.a = 0 * 1000;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 10.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i++;
					break;
				case 1:
					Robot.Control.Target.x = xcoord * 1000;
					Robot.Control.Target.y = 396 * 1000;
					Robot.Control.Target.z = 46 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 10.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i++;
					break;
				case 2:
					Robot.Control.Target.x = xcoord * 1000;
					Robot.Control.Target.y = 396 * 1000;
					Robot.Control.Target.z = 130 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 100 * 1000;
					Robot.Control.Target.r = 10.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i++;
					break;
				case 3:
					Robot.Control.Target.x = 400 * 1000;
					Robot.Control.Target.y = 214.546 * 1000;
					Robot.Control.Target.z = 102.642 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 10.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i++;
					break;
				case 4:
					Robot.Control.Target.x = 710 * 1000;
					Robot.Control.Target.y = 214.546 * 1000;
					Robot.Control.Target.z = 102.642 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 10.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i++;
					break;
				case 5:
					Robot.Control.Target.x = 710 * 1000;
					Robot.Control.Target.y = -195.093 * 1000;
					Robot.Control.Target.z = 102.642 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 10.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
				/*dfsadsadsadsadsadsad*/
		/*		case 6:
					Robot.Control.Target.x = 501 * 1000;
					Robot.Control.Target.y = -195.093 * 1000;
					Robot.Control.Target.z = 102.642 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 10.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
				case 7:
					Robot.Control.Target.x = 501 * 1000;
					Robot.Control.Target.y = -195.093 * 1000;
					Robot.Control.Target.z = 60 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 100.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
				case 8:
					Robot.Control.Target.x = 501 * 1000;
					Robot.Control.Target.y = -450 * 1000;
					Robot.Control.Target.z = 60 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 100.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
				case 9:
					Robot.Control.Target.x = 501 * 1000;
					Robot.Control.Target.y = 0;
					Robot.Control.Target.z = 60 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 100.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
				case 10:
					Robot.Control.Target.x = 341 * 1000;
					Robot.Control.Target.y = 0;
					Robot.Control.Target.z = 60 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 100.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
				/* sadsadwdddwsferf */
		/*		case 11:
					Robot.Control.Target.x = 341 * 1000;
					Robot.Control.Target.y = -450 * 1000;
					Robot.Control.Target.z = 60 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 100.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
				case 12:
					Robot.Control.Target.x = 181 * 1000;
					Robot.Control.Target.y = -450 * 1000;
					Robot.Control.Target.z = 60 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 100.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
				case 13:
					Robot.Control.Target.x = 181 * 1000;
					Robot.Control.Target.y = -210;
					Robot.Control.Target.z = 60 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 100.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
				
				case 14:
					Robot.Control.Target.x = 501 * 1000;
					Robot.Control.Target.y = -205;
					Robot.Control.Target.z = 60 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 10.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
					
				case 15:
					Robot.Control.Target.x = xcoord * 1000;
					Robot.Control.Target.y = 396 * 1000;
					Robot.Control.Target.z = 130 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 10.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
					
				case 16:
					Robot.Control.Target.x = xcoord * 1000;
					Robot.Control.Target.y = 396 * 1000;
					Robot.Control.Target.z = 46 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 10.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
					
				case 17:
					Robot.Control.Target.x = xcoord * 1000;
					Robot.Control.Target.y = 396 * 1000;
					Robot.Control.Target.z = 130 * 1000;
					Robot.Control.Target.a = 0;
					Robot.Control.Target.e = 180 * 1000;
					Robot.Control.Target.r = 10.814 * 1000;
					Robot.Control.Move=1;
					FBComauRobot(&Robot);
					i = 0;
					break;
					palNum++;
			}
		}
		
		else if (typeOfFunctionality == 2)
		{
			Robot.EPLInterface.InMotionTypeINT_l2002Out = 0;
			//insert your code here
			FBComauRobot(&Robot);
		}
		else if (typeOfFunctionality == 3)
		{
			Robot.EPLInterface.InMotionTypeINT_l2002Out = 0;
			//insert your code here
			FBComauRobot(&Robot);
		}
	}*/
}

void _EXIT ProgramExit(void)
{

}

void examineSensor(senID, palID)
{
	
}
