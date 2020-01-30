
{REDUND_ERROR} FUNCTION_BLOCK FBComauRobot (*ComauRobot function block*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		Init : {REDUND_UNREPLICABLE} BOOL;
	END_VAR
	VAR_OUTPUT
		State : TComauRobotState := 1;
		EPLInterface : TComauRobotEPLInterface;
	END_VAR
	VAR_INPUT
		Control : TComauControl;
	END_VAR
END_FUNCTION_BLOCK
