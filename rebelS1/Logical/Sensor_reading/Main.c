
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	typeOfFunctionality = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	laserDistance = XUK8TAE2MM12_value/laserCoef;
	ultrasonicDistance = XX930A2A2M12_value/ultrasonicCoef;
	
}

void _EXIT ProgramExit(void)
{

}

