class Bones
{
	// Units ----------------------------------------------------------------------
	
	class RangeBone_Imperial // AGM-65
	{
		type = "linear";
		source = "targetDist";
		sourceScale=0.00054; // nm
		//sourceScale=0.001; // km
		min = 0;
		max = 10;
		minPos[] = {0.08,0.4};
		maxPos[] = {0.08,0.6};
	};
	class RangeBone_Metric // AGM-65
	{
		type = "linear";
		source = "targetDist";
		//sourceScale=0.00054; // nm
		sourceScale=0.001; // km
		min = 0;
		max = 12;
		minPos[] = {0.08,0.4};
		maxPos[] = {0.08,0.6};
	};
	class RadarAltitudeBone_Imperial
	{
		type="linear";
		source="altitudeAGL";
		sourceScale=3.28084; // ft
		min=0;
		max=1500;
		minPos[]={0.71,0.40};
		maxPos[]={0.71,0.60};
	};
	class RadarAltitudeBone_Metric
	{
		type="linear";
		source="altitudeAGL";
		sourceScale=1; // m
		min=0;
		max=500;
		minPos[]={0.71,0.40};
		maxPos[]={0.71,0.60};
	};
	class VspeedBone_Imperial
	{
		type="linear";
		source="vspeed";
		sourceScale=1.9685; // 100ft/min
		min=-100;
		max=100;
		minPos[]={0.93,0.40};
		maxPos[]={0.93,0.60};
	};
	class VspeedBone_Metric
	{
		type="linear";
		source="vspeed";
		sourceScale=1; // 100ft/min
		min=-10;
		max=10;
		minPos[]={0.93,0.40};
		maxPos[]={0.93,0.60};
	};
	// ---------------------------------------------------------------------------------
	
	class HDG_Tape_WYPT_Indicator
	{
		type="vector";
		source="wppoint";
		pos0[]=	{ 0.500				, 0.927};
		pos10[]={ "0.500 + 0.3/4"	, 0.927};
	};
	class Limit_HDG_Tape
	{
		type = "limit";
		limits[] = {0.350,0.927,0.650,0.927};
	};
	class Limit0109 //HMCS
	{
		type = "limit";
		limits[] = {0.20,0.20,0.80,0.80};
	};
	class HorizonVector //HMCS 025050
	{
		type = "horizontoview";
		pos0[] = 	{0.50,0.50};
		pos10[] = 	{1.00,1.00};
		angle = 0;
	};
	class CCIP_HMCS //HMCS
	{
		type="vector";
		source="impactpointtoview";
		pos0[]=	{0.50,0.50};
		pos10[]={0.85,0.85};
	};
	class TGP_point //HMCS
	{
		type = "vector";
		source = "pilotcameratoview";
		pos0[]=	{0.50,0.50};
		pos10[]={0.85,0.85};
	};
	class STPT_2_VIEW //HMCS
	{
		type = "vector";
		source = "wppointtoview";
		pos0[]=	{0.50,0.50};
		pos10[]={0.85,0.85};
	}
	class Target //HMCS
	{
		type = "vector";
		source = "targetToView";
		//pos0[] = {0.498,0.38};
		//pos10[] = {1.166,1.215};
		pos0[]=	{0.50,0.50};
		pos10[]={0.85,0.85};
	};
	/*class HorizonVector //HMCS 0306
	{
		type = "horizontoview";
		pos0[] = 	{0.50,0.50};
		pos10[] = 	{0.95,0.95};
		angle = 0;
	};
	class CCIP_HMCS //HMCS
	{
		type="vector";
		source="impactpointtoview";
		pos0[]=	{0.50,0.50};
		pos10[]={0.79,0.79}; //77-78
	};
	class TGP_point //HMCS
	{
		type = "vector";
		source = "pilotcameratoview";
		pos0[]=	{0.50,0.50};
		pos10[]={0.79,0.79}; //77-78
	};
	class STPT_2_VIEW //HMCS
	{
		type = "vector";
		source = "wppointtoview";
		pos0[]=	{0.50,0.50};
		pos10[]={0.79,0.79};
	}
	class Target //HMCS
	{
		type = "vector";
		source = "targetToView";
		pos0[]=	{0.50,0.50};
		pos10[]={0.79,0.79};
	};*/
	class WeaponAim //HMCS
	{
		type = "fixed";
		pos[] = {0.5,0.5};
	};
	class HorizonIndicatorBank //HMCS
	{
		type = "rotational";
		source = "horizonBank";
		sourceScale = 1.0;
		center[] = {0.90,0.80};
		min = "-3.1415927";
		max = "3.1415927";
		minAngle = 180;
		maxAngle = -180;
		aspectRatio = 1;
	};
	class HorizonDive_Left //HMCS
	{
		source = "horizonDive";
		type = "rotational";
		center[] = {0.90,0.80};
		min = "-3.14159265359 / 2";
		max = "3.14159265359 / 2";
		minAngle = 90;
		maxAngle = -90;
		aspectRatio = 1;
	};
	class HorizonDive_Right //HMCS
	{
		source = "horizonDive";
		type = "rotational";
		center[] = {0.90,0.80};
		min = "-3.14159265359 / 2";
		max = "3.14159265359 / 2";
		minAngle = -90;
		maxAngle = 90;
		aspectRatio = 1;
	};
	class RadarContact
	{
		type = "fixed";
		pos[] = {0,0};
	};
	class TGP_SPI
	{
		type = "vector";
		source = "pilotcamera";
		pos0[] =	{0.50,0.32};
		pos10[] =	{1.75,1.57};
		//pos10[] = {1.382,1.145};
	};
	class ForwardVec
	{
		type = "vector";
		source = "forward";
		pos0[] = {0.0,0.0};
		pos10[] = {0.0,0.0};
	};
	class ILS_H
	{
		type = "ils";
		pos0[] = {0.5,0.32};
		pos3[] = {0.7,0.32};
	};
	class ILS_W: ILS_H
	{
		pos3[] = {0.5,0.53};
	};
	class Velocity
	{
		type="vector";
		source="velocity";
		pos0[]=	{"0.5+0.000","0.32+0.000"}; // +0.800 esta un pco pasadito
		pos10[]={"0.5+0.700","0.32+0.700"}; //0.876
	};
	class Velocity_Pitch_Ladder
	{
		type="vector";
		source="velocity";
		pos0[]=	{0.000,0.000};
		pos10[]={0.700,0.700};
	};
	class Level0: Velocity
	{
		type="horizon";
		angle=0;
	};
	class LevelP05: Level0
	{
		angle=5;
	};
	class LevelM05: Level0
	{
		angle=-5;
	};
	class LevelP10: Level0
	{
		angle=10;
	};
	class LevelM10: Level0
	{
		angle=-10;
	};
	class LevelP15: Level0
	{
		angle=15;
	};
	class LevelM15: Level0
	{
		angle=-15;
	};
	class LevelP20: Level0
	{
		angle=20;
	};
	class LevelM20: Level0
	{
		angle=-20;
	};
	class LevelP25: Level0
	{
		angle=25;
	};
	class LevelM25: Level0
	{
		angle=-25;
	};
	class LevelP30: Level0
	{
		angle=30;
	};
	class LevelM30: Level0
	{
		angle=-30;
	};
	class LevelP35: Level0
	{
		angle=35;
	};
	class LevelM35: Level0
	{
		angle=-35;
	};
	class LevelP40: Level0
	{
		angle=40;
	};
	class LevelM40: Level0
	{
		angle=-40;
	};
	class LevelP45: Level0
	{
		angle=45;
	};
	class LevelM45: Level0
	{
		angle=-45;
	};
	class LevelP50: Level0
	{
		angle=50;
	};
	class LevelM50: Level0
	{
		angle=-50;
	};
	class LevelP55: Level0
	{
		angle=55;
	};
	class LevelM55: Level0
	{
		angle=-55;
	};
	class LevelP60: Level0
	{
		angle=60;
	};
	class LevelM60: Level0
	{
		angle=-60;
	};
	class LevelP65: Level0
	{
		angle=65;
	};
	class LevelM65: Level0
	{
		angle=-65;
	};
	class LevelP70: Level0
	{
		angle=70;
	};
	class LevelM70: Level0
	{
		angle=-70;
	};
	class LevelP75: Level0
	{
		angle=75;
	};
	class LevelM75: Level0
	{
		angle=-75;
	};
	class LevelP80: Level0
	{
		angle=80;
	};
	class LevelM80: Level0
	{
		angle=-80;
	};
	class LevelP85: Level0
	{
		angle=85;
	};
	class LevelM85: Level0
	{
		angle=-85;
	};
	class LevelP90: Level0
	{
		angle=90;
	};
};
