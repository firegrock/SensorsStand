
TYPE
	TComauControl : 	STRUCT 
		Target : TComauTarget;
		Move : BOOL;
		Homing : BOOL;
	END_STRUCT;
	TComauRobotEPLInterface : 	STRUCT 
		DI1_I2001Out : USINT;
		InMotionTypeINT_l2002Out : DINT; (*2 - demo motion, 254 - ultrasonic distance sensor, 253 - laser distance sensor, 252 - *)
		InDintPaleteID_l2003Out : DINT;
		InDintX_l2004Out : DINT;
		InDintY_l2005Out : DINT;
		InDintZ_l2006Out : DINT;
		InDintA_l2007Out : DINT;
		InDintE_l2008Out : DINT;
		InDintR_l2009Out : DINT;
		InDintJoint1_l200AOut : DINT;
		InDintJoint2_l200BOut : DINT;
		InDintJoint3_l200COut : DINT;
		InDintJoint4_l200DOut : DINT;
		InDintJoint5_l200EOut : DINT;
		InDintJoint6_l200FOut : DINT;
		InDintSmth_l2010Out : DINT;
		InFlag1_l2011Out : USINT;
		InFlag2_l2012Out : USINT;
		DI2_I2013Out : USINT;
		DO1_l2014ln : USINT;
		OutRealX_l2015ln : DINT;
		OutRealY_l2016ln : DINT;
		OutRealZ_l2017ln : DINT;
		OutRealA_l2018ln : DINT;
		OutRealE_l2019ln : DINT;
		OutRealR_l201Aln : DINT;
		OutJoint1Real_l201Bln : DINT;
		OutJoint2Real_l201Cln : DINT;
		OutJoint3Real_l201Dln : DINT;
		OutJoint4Real_l201Eln : DINT;
		OutJoint5Real_l201Fln : DINT;
		OutJoint6Real_l2020ln : DINT;
		OutSmth_l2021ln : DINT;
		OutDint1_l2022ln : DINT;
		OutDint2_l2023ln : DINT;
		OutFlag1_l2024In : USINT;
		OutFlag2_l2025In : USINT;
		DO2_l2026ln : USINT;
	END_STRUCT;
	TComauRobotState : 
		(
		ST_CR_IDLE,
		ST_CR_MOVE,
		Init,
		ST_CR_TAKING,
		ST_CR_RETURN
		);
	TComauTarget : 	STRUCT 
		x : REAL;
		y : REAL;
		z : REAL;
		a : REAL;
		e : REAL;
		r : REAL;
		j1 : REAL;
		j2 : REAL;
		j3 : REAL;
		j4 : REAL;
		j5 : REAL;
		j6 : REAL;
	END_STRUCT;
END_TYPE
