////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 10.13
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jun 24 13:21:03 2026 : 'file' last modified on Tue Dec 18 00:29:22 2018
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Kimi_HMDs_Wipeout
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	class Plane_Base_F;
	class Plane_CAS_01_base_F: Plane_Base_F
	{
		class MFD{};
		class UserActions;
	};
	class Plane_CAS_01_dynamicLoadout_base_F: Plane_CAS_01_base_F{};
	class B_Plane_CAS_01_dynamicLoadout_F: Plane_CAS_01_dynamicLoadout_base_F
	{
		class ViewPilot
		{
			initFov = 0.55;
			minFov = 0.25;
			maxFov = 0.8;
			initAngleX = 0;
			minAngleX = -75;
			maxAngleX = 89;
			initAngleY = 0;
			minAngleY = -160;
			maxAngleY = 160;
			maxmovex = 0.1;
			maxmovey = 0.1;
			maxmovez = 0.1;
			minmovex = -0.1;
			minmovey = -0.1;
			minmovez = -0.1;
		};
		defaultUserMFDvalues[] = {0,1,0,0,1,0,0.2};
		class UserActions: UserActions
		{
			class Kimi_UserAction_0_ON
			{
				displayName = "<t color='#26ff00'>HMCS ON</t>";
				condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
				statement = "this SetUserMFDvalue [0,1]";
				position = "pilotcontrol";
				radius = 20;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				priority = -1;
			};
			class Kimi_UserAction_0_OFF
			{
				displayName = "<t color='#ffff00'>HMCS OFF</t>";
				condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
				statement = "this SetUserMFDvalue [0,0]";
				position = "pilotcontrol";
				radius = 20;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				priority = -2;
			};
			class Kimi_UserAction_1_IMPERIAL
			{
				displayName = "HUD IMPERIAL";
				condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
				statement = "this SetUserMFDvalue [1,1]";
				position = "pilotcontrol";
				radius = 20;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				priority = -3;
			};
			class Kimi_UserAction_1_METRIC
			{
				displayName = "HUD METRIC";
				condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
				statement = "this SetUserMFDvalue [1,0]";
				position = "pilotcontrol";
				radius = 20;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				priority = -4;
			};
			class Kimi_UserAction_2_FULL
			{
				displayName = "HMCS FULL";
				condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
				statement = "this SetUserMFDvalue [2,0]";
				position = "pilotcontrol";
				radius = 20;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				priority = -5;
			};
			class Kimi_UserAction_2_DECLUTTER
			{
				displayName = "HMCS DECLUTTER";
				condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
				statement = "this SetUserMFDvalue [2,1]";
				position = "pilotcontrol";
				radius = 20;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				priority = -6;
			};
			class Kimi_UserAction_345_COLOR_GREEN
			{
				displayName = "<t color='#00ff00'>HUD DAY</t>";
				condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
				statement = "this SetUserMFDvalue [3,0];this SetUserMFDvalue [4,1];this SetUserMFDvalue [5,0];";
				position = "pilotcontrol";
				radius = 20;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				priority = -7;
			};
			class Kimi_UserAction_345_COLOR_AMBER
			{
				displayName = "<t color='#ffff00'>HUD NIGHT</t>";
				condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
				statement = "this SetUserMFDvalue [3,1];this SetUserMFDvalue [4,0.65];this SetUserMFDvalue [5,0];";
				position = "pilotcontrol";
				radius = 20;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				priority = -8;
			};
			class Kimi_UserAction_6_ALPHA_HIGH
			{
				displayName = "HUD BRT HIGH";
				condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
				statement = "this SetUserMFDvalue [6,0.5]";
				position = "pilotcontrol";
				radius = 20;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				priority = -9;
			};
			class Kimi_UserAction_6_ALPHA_MED
			{
				displayName = "HUD BRT MED";
				condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
				statement = "this SetUserMFDvalue [6,0.2]";
				position = "pilotcontrol";
				radius = 20;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				priority = -10;
			};
			class Kimi_UserAction_6_ALPHA_LOW
			{
				displayName = "HUD BRT LOW";
				condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
				statement = "this SetUserMFDvalue [6,0.05]";
				position = "pilotcontrol";
				radius = 20;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				priority = -11;
			};
		};
		class MFD
		{
			class HUD_2_Common
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0.12;
				borderRight = 0.12;
				borderTop = 0.05;
				borderBottom = 0.15;
				color[] = {0.15,1,0.15,1};
				enableParallax = 1;
				class Bones
				{
					class RangeBone_Imperial
					{
						type = "linear";
						source = "targetDist";
						sourceScale = 0.00054;
						min = 0;
						max = 10;
						minPos[] = {0.08,0.4};
						maxPos[] = {0.08,0.6};
					};
					class RangeBone_Metric
					{
						type = "linear";
						source = "targetDist";
						sourceScale = 0.001;
						min = 0;
						max = 12;
						minPos[] = {0.08,0.4};
						maxPos[] = {0.08,0.6};
					};
					class RadarAltitudeBone_Imperial
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						min = 0;
						max = 1500;
						minPos[] = {0.71,0.4};
						maxPos[] = {0.71,0.6};
					};
					class RadarAltitudeBone_Metric
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						max = 500;
						minPos[] = {0.71,0.4};
						maxPos[] = {0.71,0.6};
					};
					class VspeedBone_Imperial
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -100;
						max = 100;
						minPos[] = {0.93,0.4};
						maxPos[] = {0.93,0.6};
					};
					class VspeedBone_Metric
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -10;
						max = 10;
						minPos[] = {0.93,0.4};
						maxPos[] = {0.93,0.6};
					};
					class HDG_Tape_WYPT_Indicator
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5,0.927};
						pos10[] = {"0.500 + 0.3/4",0.927};
					};
					class Limit_HDG_Tape
					{
						type = "limit";
						limits[] = {0.35,0.927,0.65,0.927};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.2,0.2,0.8,0.8};
					};
					class HorizonVector
					{
						type = "horizontoview";
						pos0[] = {0.5,0.5};
						pos10[] = {1,1};
						angle = 0;
					};
					class CCIP_HMCS
					{
						type = "vector";
						source = "impactpointtoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class TGP_point
					{
						type = "vector";
						source = "pilotcameratoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class STPT_2_VIEW
					{
						type = "vector";
						source = "wppointtoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class Target
					{
						type = "vector";
						source = "targetToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class WeaponAim
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class HorizonIndicatorBank
					{
						type = "rotational";
						source = "horizonBank";
						sourceScale = 1;
						center[] = {0.9,0.8};
						min = "-3.1415927";
						max = "3.1415927";
						minAngle = 180;
						maxAngle = -180;
						aspectRatio = 1;
					};
					class HorizonDive_Left
					{
						source = "horizonDive";
						type = "rotational";
						center[] = {0.9,0.8};
						min = "-3.14159265359 / 2";
						max = "3.14159265359 / 2";
						minAngle = 90;
						maxAngle = -90;
						aspectRatio = 1;
					};
					class HorizonDive_Right
					{
						source = "horizonDive";
						type = "rotational";
						center[] = {0.9,0.8};
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
						pos0[] = {0.5,0.32};
						pos10[] = {1.75,1.57};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0,0};
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
						type = "vector";
						source = "velocity";
						pos0[] = {"0.5+0.000","0.32+0.000"};
						pos10[] = {"0.5+0.700","0.32+0.700"};
					};
					class Velocity_Pitch_Ladder
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0,0};
						pos10[] = {0.7,0.7};
					};
					class Level0: Velocity
					{
						type = "horizon";
						angle = 0;
					};
					class LevelP05: Level0
					{
						angle = 5;
					};
					class LevelM05: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
					class LevelP55: Level0
					{
						angle = 55;
					};
					class LevelM55: Level0
					{
						angle = -55;
					};
					class LevelP60: Level0
					{
						angle = 60;
					};
					class LevelM60: Level0
					{
						angle = -60;
					};
					class LevelP65: Level0
					{
						angle = 65;
					};
					class LevelM65: Level0
					{
						angle = -65;
					};
					class LevelP70: Level0
					{
						angle = 70;
					};
					class LevelM70: Level0
					{
						angle = -70;
					};
					class LevelP75: Level0
					{
						angle = 75;
					};
					class LevelM75: Level0
					{
						angle = -75;
					};
					class LevelP80: Level0
					{
						angle = 80;
					};
					class LevelM80: Level0
					{
						angle = -80;
					};
					class LevelP85: Level0
					{
						angle = 85;
					};
					class LevelM85: Level0
					{
						angle = -85;
					};
					class LevelP90: Level0
					{
						angle = 90;
					};
				};
				class Draw
				{
					condition = "on";
					color[] = {"user3","user4","user5"};
					alpha = "user6";
					class Imperial_Units
					{
						type = "group";
						condition = "user1";
						class Airspeed_Number
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "speed";
							sourceScale = 1.94384;
							pos[] = {{"0.15 + 0.1",0.47},1};
							right[] = {{"0.21 + 0.1",0.47},1};
							down[] = {{"0.15 + 0.1",0.53},1};
						};
						class Altitude_MSL_Number
						{
							type = "text";
							align = "right";
							scale = 1;
							source = "altitudeASL";
							sourceScale = 3.28084;
							pos[] = {{"0.85 - 0.1",0.47},1};
							right[] = {{"0.91 - 0.1",0.47},1};
							down[] = {{"0.85 - 0.1",0.53},1};
						};
						class Radar_Altitude_Band
						{
							type = "group";
							condition = "((1+1500)-altitudeAGL*3.28084)";
							class radarbanda
							{
								type = "line";
								width = 4;
								points[] = {{"RadarAltitudeBone_Imperial",{-0.005,0.005},1},{"RadarAltitudeBone_Imperial",{-0.005,0},1},{"RadarAltitudeBone_Imperial",{0,0},1},{{0.71,0.6},1},{},{{0.71,0.4},1},{{0.72,0.4},1},{},{{0.71,0.44},1},{{0.72,0.44},1},{},{{0.71,0.48},1},{{0.72,0.48},1},{},{{0.71,0.52},1},{{0.72,0.52},1},{},{{0.71,0.56},1},{{0.72,0.56},1},{},{{0.71,0.6},1},{{0.72,0.6},1}};
							};
							class radartext_15
							{
								type = "text";
								source = "static";
								text = "15";
								align = "right";
								scale = 1;
								pos[] = {{0.721,"0.385 + 0.00 - 0.0"},1};
								right[] = {{0.751,"0.385 + 0.00 - 0.0"},1};
								down[] = {{0.721,"0.415 + 0.00 - 0.0"},1};
							};
							class radartext_12
							{
								type = "text";
								source = "static";
								text = "12";
								align = "right";
								scale = 1;
								pos[] = {{0.721,"0.385 + 0.04 - 0.0"},1};
								right[] = {{0.751,"0.385 + 0.04 - 0.0"},1};
								down[] = {{0.721,"0.415 + 0.04 - 0.0"},1};
							};
							class radartext_9
							{
								type = "text";
								source = "static";
								text = "9";
								align = "right";
								scale = 1;
								pos[] = {{0.721,"0.385 + 0.08 - 0.0"},1};
								right[] = {{0.751,"0.385 + 0.08 - 0.0"},1};
								down[] = {{0.721,"0.415 + 0.08 - 0.0"},1};
							};
							class radartext_6
							{
								type = "text";
								source = "static";
								text = "6";
								align = "right";
								scale = 1;
								pos[] = {{0.721,"0.385 + 0.120 - 0.0"},1};
								right[] = {{0.751,"0.385 + 0.120 - 0.0"},1};
								down[] = {{0.721,"0.415 + 0.120 - 0.0"},1};
							};
							class radartext_3
							{
								type = "text";
								source = "static";
								text = "3";
								align = "right";
								scale = 1;
								pos[] = {{0.721,"0.385 + 0.160 - 0.0"},1};
								right[] = {{0.751,"0.385 + 0.160 - 0.0"},1};
								down[] = {{0.721,"0.415 + 0.160 - 0.0"},1};
							};
							class radartext_0
							{
								type = "text";
								source = "static";
								text = "0";
								align = "right";
								scale = 1;
								pos[] = {{0.721,"0.385 + 0.200 - 0.0"},1};
								right[] = {{0.751,"0.385 + 0.200 - 0.0"},1};
								down[] = {{0.721,"0.415 + 0.200 - 0.0"},1};
							};
						};
						class Vertical_Speed_Band
						{
							type = "group";
							condition = "ils";
							class vspeed
							{
								type = "line";
								width = 4;
								points[] = {{"VspeedBone_Imperial",{0.007,-0.007},1},{"VspeedBone_Imperial",{0,0},1},{"VspeedBone_Imperial",{0.007,0.007},1},{},{"VspeedBone_Imperial",{0,0},1},{"VspeedBone_Imperial",{0.012,0},1},{{0.942,0.5},1},{},{{0.91,0.4},1},{{0.93,0.4},1},{},{{0.91,0.42},1},{{0.92,0.42},1},{},{{0.91,0.44},1},{{0.92,0.44},1},{},{{0.91,0.46},1},{{0.92,0.46},1},{},{{0.91,0.48},1},{{0.92,0.48},1},{},{{0.91,0.5},1},{{0.93,0.5},1},{},{{0.91,0.52},1},{{0.92,0.52},1},{},{{0.91,0.54},1},{{0.92,0.54},1},{},{{0.91,0.56},1},{{0.92,0.56},1},{},{{0.91,0.58},1},{{0.92,0.58},1},{},{{0.91,0.6},1},{{0.93,0.6},1}};
							};
						};
						class Altitude_AGL_Number
						{
							type = "group";
							condition = "((1+5000)-altitudeAGL*3.28084)";
							class radar_alt_N
							{
								type = "text";
								source = "altitudeAGL";
								sourceScale = 3.28084;
								align = "right";
								scale = 1;
								pos[] = {{"0.85 - 0.1 +0.02",0.76},1};
								right[] = {{"0.89 - 0.1 +0.02",0.76},1};
								down[] = {{"0.85 - 0.1 +0.02",0.8},1};
							};
						};
						class Altitude_AGL_Text_XXXX
						{
							type = "group";
							condition = "(altitudeAGL*3.28084-5000)";
							class radar_alt_X
							{
								type = "text";
								source = "static";
								text = "R XXXX";
								align = "right";
								scale = 1;
								pos[] = {{"0.85 - 0.1",0.76},1};
								right[] = {{"0.89 - 0.1",0.76},1};
								down[] = {{"0.85 - 0.1",0.8},1};
							};
						};
						class Altitude_AGL_Text
						{
							type = "group";
							condition = "((1+5000)-altitudeAGL)";
							class radar_alt_R
							{
								type = "text";
								source = "static";
								text = "R";
								align = "right";
								scale = 1;
								pos[] = {{"0.85 - 0.1",0.76},1};
								right[] = {{"0.89 - 0.1",0.76},1};
								down[] = {{"0.85 - 0.1",0.8},1};
							};
						};
					};
					class Metric_Units
					{
						type = "group";
						condition = "1-user1";
						class Airspeed_Number
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "speed";
							sourceScale = 3.6;
							pos[] = {{"0.15 + 0.1",0.47},1};
							right[] = {{"0.21 + 0.1",0.47},1};
							down[] = {{"0.15 + 0.1",0.53},1};
						};
						class Altitude_MSL_Number
						{
							type = "text";
							align = "right";
							scale = 1;
							source = "altitudeASL";
							sourceScale = 1;
							pos[] = {{"0.85 - 0.1",0.47},1};
							right[] = {{"0.91 - 0.1",0.47},1};
							down[] = {{"0.85 - 0.1",0.53},1};
						};
						class Radar_Altitude_Band
						{
							type = "group";
							condition = "((1+500)-altitudeAGL)";
							class radarbanda
							{
								type = "line";
								width = 4;
								points[] = {{"RadarAltitudeBone_Metric",{-0.005,0.005},1},{"RadarAltitudeBone_Metric",{-0.005,0},1},{"RadarAltitudeBone_Metric",{0,0},1},{{0.71,0.6},1},{},{{0.71,0.4},1},{{0.72,0.4},1},{},{{0.71,0.44},1},{{0.72,0.44},1},{},{{0.71,0.48},1},{{0.72,0.48},1},{},{{0.71,0.52},1},{{0.72,0.52},1},{},{{0.71,0.56},1},{{0.72,0.56},1},{},{{0.71,0.6},1},{{0.72,0.6},1}};
							};
							class radartext_5
							{
								type = "text";
								source = "static";
								text = "5";
								align = "right";
								scale = 1;
								pos[] = {{0.721,"0.385 + 0.00"},1};
								right[] = {{0.751,"0.385 + 0.00"},1};
								down[] = {{0.721,"0.415 + 0.00"},1};
							};
							class radartext_4
							{
								type = "text";
								source = "static";
								text = "4";
								align = "right";
								scale = 1;
								pos[] = {{0.721,"0.385 + 0.04"},1};
								right[] = {{0.751,"0.385 + 0.04"},1};
								down[] = {{0.721,"0.415 + 0.04"},1};
							};
							class radartext_3
							{
								type = "text";
								source = "static";
								text = "3";
								align = "right";
								scale = 1;
								pos[] = {{0.721,"0.385 + 0.08"},1};
								right[] = {{0.751,"0.385 + 0.08"},1};
								down[] = {{0.721,"0.415 + 0.08"},1};
							};
							class radartext_2
							{
								type = "text";
								source = "static";
								text = "2";
								align = "right";
								scale = 1;
								pos[] = {{0.721,"0.385 + 0.120"},1};
								right[] = {{0.751,"0.385 + 0.120"},1};
								down[] = {{0.721,"0.415 + 0.120"},1};
							};
							class radartext_1
							{
								type = "text";
								source = "static";
								text = "1";
								align = "right";
								scale = 1;
								pos[] = {{0.721,"0.385 + 0.160"},1};
								right[] = {{0.751,"0.385 + 0.160"},1};
								down[] = {{0.721,"0.415 + 0.160"},1};
							};
							class radartext_0
							{
								type = "text";
								source = "static";
								text = "0";
								align = "right";
								scale = 1;
								pos[] = {{0.721,"0.385 + 0.200"},1};
								right[] = {{0.751,"0.385 + 0.200"},1};
								down[] = {{0.721,"0.415 + 0.200"},1};
							};
						};
						class Vertical_Speed_Band
						{
							type = "group";
							condition = "ils";
							class vspeed
							{
								type = "line";
								width = 4;
								points[] = {{"VspeedBone_Metric",{0.007,-0.007},1},{"VspeedBone_Metric",{0,0},1},{"VspeedBone_Metric",{0.007,0.007},1},{},{"VspeedBone_Metric",{0,0},1},{"VspeedBone_Metric",{0.012,0},1},{{0.942,0.5},1},{},{{0.91,0.4},1},{{0.93,0.4},1},{},{{0.91,0.42},1},{{0.92,0.42},1},{},{{0.91,0.44},1},{{0.92,0.44},1},{},{{0.91,0.46},1},{{0.92,0.46},1},{},{{0.91,0.48},1},{{0.92,0.48},1},{},{{0.91,0.5},1},{{0.93,0.5},1},{},{{0.91,0.52},1},{{0.92,0.52},1},{},{{0.91,0.54},1},{{0.92,0.54},1},{},{{0.91,0.56},1},{{0.92,0.56},1},{},{{0.91,0.58},1},{{0.92,0.58},1},{},{{0.91,0.6},1},{{0.93,0.6},1}};
							};
						};
						class Altitude_AGL_Number
						{
							type = "group";
							condition = "((1+1500)-altitudeAGL)";
							class radar_alt_N
							{
								type = "text";
								source = "altitudeAGL";
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{"0.85 - 0.1 +0.02",0.76},1};
								right[] = {{"0.89 - 0.1 +0.02",0.76},1};
								down[] = {{"0.85 - 0.1 +0.02",0.8},1};
							};
						};
						class Altitude_AGL_Text_XXXX
						{
							type = "group";
							condition = "(altitudeAGL-1500)";
							class radar_alt_X
							{
								type = "text";
								source = "static";
								text = "R XXXX";
								align = "right";
								scale = 1;
								pos[] = {{"0.85 - 0.1",0.76},1};
								right[] = {{"0.89 - 0.1",0.76},1};
								down[] = {{"0.85 - 0.1",0.8},1};
							};
						};
						class Altitude_AGL_Text
						{
							type = "group";
							condition = "((1+1500)-altitudeAGL)";
							class radar_alt_R
							{
								type = "text";
								source = "static";
								text = "R";
								align = "right";
								scale = 1;
								pos[] = {{"0.85 - 0.1",0.76},1};
								right[] = {{"0.89 - 0.1",0.76},1};
								down[] = {{"0.85 - 0.1",0.8},1};
							};
						};
					};
					class Waypoint_Distance_Units
					{
						type = "group";
						condition = "wpvalid";
						class WYPT_Distance_Imperial
						{
							type = "group";
							condition = "user1";
							class WYPT_Dist_I
							{
								type = "text";
								source = "WPDist";
								sourceScale = 0.00054;
								sourcePrecision = 1;
								align = "right";
								scale = 1;
								pos[] = {{"0.85 - 0.1 +0.04",0.81},1};
								right[] = {{"0.89 - 0.1 +0.04",0.81},1};
								down[] = {{"0.85 - 0.1 +0.04",0.85},1};
							};
						};
						class WYPT_Distance_Metric
						{
							type = "group";
							condition = "1-user1";
							class WYPT_Dist_I
							{
								type = "text";
								source = "WPDist";
								sourceScale = 0.001;
								sourcePrecision = 1;
								align = "right";
								scale = 1;
								pos[] = {{"0.85 - 0.1 +0.04",0.81},1};
								right[] = {{"0.89 - 0.1 +0.04",0.81},1};
								down[] = {{"0.85 - 0.1 +0.04",0.85},1};
							};
						};
						class WYPT_number
						{
							type = "text";
							source = "WPIndex";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{"0.85 - 0.1",0.81},1};
							right[] = {{"0.89 - 0.1",0.81},1};
							down[] = {{"0.85 - 0.1",0.85},1};
						};
					};
					class Waypoint_Number_NOT
					{
						type = "group";
						condition = "1-wpvalid";
						class WYPT_number
						{
							type = "text";
							source = "static";
							text = "-";
							align = "right";
							scale = 1;
							pos[] = {{"0.85 - 0.1",0.81},1};
							right[] = {{"0.89 - 0.1",0.81},1};
							down[] = {{"0.85 - 0.1",0.85},1};
						};
					};
					class Waypoint_Slash
					{
						type = "text";
						source = "static";
						text = "/";
						align = "right";
						scale = 1;
						pos[] = {{"0.85 - 0.1 +0.02",0.81},1};
						right[] = {{"0.89 - 0.1 +0.02",0.81},1};
						down[] = {{"0.85 - 0.1 +0.02",0.85},1};
					};
					class Waypoint_Distance_NOT
					{
						type = "group";
						condition = "1-wpvalid";
						class WYPT_number
						{
							type = "text";
							source = "static";
							text = "-";
							align = "right";
							scale = 1;
							pos[] = {{"0.85 - 0.1 +0.04",0.81},1};
							right[] = {{"0.89 - 0.1 +0.04",0.81},1};
							down[] = {{"0.85 - 0.1 +0.04",0.85},1};
						};
					};
					class Clock
					{
						type = "text";
						source = "time";
						text = "%X";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{"0.85 - 0.1",0.86},1};
						right[] = {{"0.89 - 0.1",0.86},1};
						down[] = {{"0.85 - 0.1",0.9},1};
					};
					class GCAS_Group
					{
						type = "group";
						condition = "(1-ils)*((AltitudeAGL/abs(vspeed*10))<10)*(vspeed<0)*(AltitudeAGL<500)";
						blinkingPattern[] = {2,3};
						blinkingStartsOn = 1;
						class GCAS_2_S
						{
							type = "group";
							blinkingPattern[] = {0.25,0.25};
							blinkingStartsOn = 1;
							class GCAS_Cross
							{
								type = "line";
								width = 3;
								points[] = {{{"0.50-0.15","0.32-0.15"},1},{{"0.50-0.05","0.32-0.05"},1},{},{{"0.50+0.15","0.32-0.15"},1},{{"0.50+0.05","0.32-0.05"},1},{},{{"0.50+0.15","0.32+0.15"},1},{{"0.50+0.05","0.32+0.05"},1},{},{{"0.50-0.15","0.32+0.15"},1},{{"0.50-0.05","0.32+0.05"},1}};
							};
						};
					};
					class AC_Centerline
					{
						type = "line";
						width = 4;
						points[] = {{"ForwardVec",1,{" -0.008 + 0.5","0 + 0.32"},1},{"ForwardVec",1,{" 0.008 + 0.5","0 + 0.32"},1},{},{"ForwardVec",1,{" -0.0 + 0.5","0.008 + 0.32"},1},{"ForwardVec",1,{" 0.0 + 0.5","-0.008 + 0.32"},1}};
					};
					class ILS_Bars
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = {0,0};
							clipBR[] = {1,1};
							class ILS
							{
								type = "line";
								width = 2.5;
								points[] = {{"ILS_W",1,{-0.1,0},1,"ForwardVec",1,"ForwardVec",1},{"ILS_W",1,{0.1,0},1,"ForwardVec",1},{},{"ILS_W",1,{0,0.01},1,"ForwardVec",1},{"ILS_W",1,{0,-0.01},1,"ForwardVec",1},{},{"ILS_W",1,{0.05,0.01},1,"ForwardVec",1},{"ILS_W",1,{0.05,-0.01},1,"ForwardVec",1},{},{"ILS_W",1,{0.1,0.01},1,"ForwardVec",1},{"ILS_W",1,{0.1,-0.01},1,"ForwardVec",1},{},{"ILS_W",1,{-0.05,0.01},1,"ForwardVec",1},{"ILS_W",1,{-0.05,-0.01},1,"ForwardVec",1},{},{"ILS_W",1,{-0.1,0.01},1,"ForwardVec",1},{"ILS_W",1,{-0.1,-0.01},1,"ForwardVec",1},{},{"ILS_H",1,{0,-0.1},1,"ForwardVec",1},{"ILS_H",1,{0,0.1},1,"ForwardVec",1},{},{"ILS_H",1,{0.01,0},1,"ForwardVec",1},{"ILS_H",1,{-0.01,0},1,"ForwardVec",1},{},{"ILS_H",1,{0.01,0.05},1,"ForwardVec",1},{"ILS_H",1,{-0.01,0.05},1,"ForwardVec",1},{},{"ILS_H",1,{0.01,0.1},1,"ForwardVec",1},{"ILS_H",1,{-0.01,0.1},1,"ForwardVec",1},{},{"ILS_H",1,{0.01,-0.05},1,"ForwardVec",1},{"ILS_H",1,{-0.01,-0.05},1,"ForwardVec",1},{},{"ILS_H",1,{0.01,-0.1},1,"ForwardVec",1},{"ILS_H",1,{-0.01,-0.1},1,"ForwardVec",1}};
							};
						};
					};
					class Stall_Text
					{
						type = "group";
						condition = "stall";
						color[] = {1,0,0};
						blinkingPattern[] = {0.2,0.2};
						blinkingStartsOn = 1;
						class StallText
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 1;
							pos[] = {{0.5,"0.53 - 0.25"},1};
							right[] = {{0.55,"0.53 - 0.25"},1};
							down[] = {{0.5,"0.53 - 0.21"},1};
						};
					};
					class G_meter
					{
						type = "text";
						source = "gmeterYGrav";
						align = "Left";
						scale = 1;
						sourceScale = 0.1;
						sourcePrecision = 1;
						pos[] = {{"0.15 + 0.1","0.53 - 0.40"},1};
						right[] = {{"0.20 + 0.1","0.53 - 0.40"},1};
						down[] = {{"0.15 + 0.1","0.53 - 0.40 + 0.05"},1};
					};
					class Mach_Text_M
					{
						type = "text";
						source = "static";
						text = "M";
						align = "left";
						scale = 1;
						pos[] = {{"0.1501 + 0.1",0.53},1};
						right[] = {{"0.2001 + 0.1",0.53},1};
						down[] = {{"0.1501 + 0.1",0.58},1};
					};
					class Mach_Number
					{
						type = "text";
						align = "left";
						scale = 1;
						source = "speed";
						sourceScale = 0.00294;
						sourcePrecision = 2;
						pos[] = {{"0.12 + 0.1",0.53},1};
						right[] = {{"0.17 + 0.1",0.53},1};
						down[] = {{"0.12 + 0.1",0.58},1};
					};
					class Units_Imperial
					{
						type = "group";
						condition = "user1";
						class Units_Imperial_HUD
						{
							type = "text";
							scale = 1;
							source = "static";
							text = "I";
							align = "right";
							pos[] = {{"0.85 - 0.1",0.15},1};
							right[] = {{"0.90 - 0.1",0.15},1};
							down[] = {{"0.85 - 0.1",0.2},1};
						};
					};
					class Units_Metric
					{
						type = "group";
						condition = "1-user1";
						class Units_Metric_HUD
						{
							type = "text";
							scale = 1;
							source = "static";
							text = "M";
							align = "right";
							pos[] = {{"0.85 - 0.1",0.15},1};
							right[] = {{"0.90 - 0.1",0.15},1};
							down[] = {{"0.85 - 0.1",0.2},1};
						};
					};
					class Pitch_Number
					{
						type = "text";
						source = "horizonDive";
						sourceScale = 57.29578;
						align = "right";
						scale = 1;
						pos[] = {{"0.85 - 0.1",0.53},1};
						right[] = {{"0.90 - 0.1",0.53},1};
						down[] = {{"0.85 - 0.1",0.58},1};
					};
					class Heading_Scale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 0.1;
						SourceLength = 2;
						width = 5;
						top = 0.35;
						center = 0.5;
						bottom = 0.65;
						lineXleft = "0.06 + 0.85";
						lineYright = "0.05 + 0.85";
						lineXleftMajor = "0.06 + 0.85";
						lineYrightMajor = "0.04 + 0.85";
						majorLineEach = 2;
						numberEach = 2;
						step = "1 / 2";
						stepSize = "(0.65 - 0.35) / 6";
						align = "center";
						scale = 1;
						pos[] = {0.345,"0.0 + 0.855"};
						right[] = {0.385,"0.0 + 0.855"};
						down[] = {0.345,"0.04 + 0.855"};
					};
					class Heading_Indicator
					{
						type = "line";
						width = 4;
						points[] = {{{0.5,0.91},1},{{0.515,0.925},1},{{0.485,0.925},1},{{0.5,0.91},1}};
					};
					class WYPT_HDG_Carat
					{
						type = "line";
						width = 4;
						points[] = {{"HDG_Tape_WYPT_Indicator",1,"Limit_HDG_Tape",1,{-0.005,0},1},{"HDG_Tape_WYPT_Indicator",1,"Limit_HDG_Tape",1,{-0.005,0.02},1},{},{"HDG_Tape_WYPT_Indicator",1,"Limit_HDG_Tape",1,{0.005,0},1},{"HDG_Tape_WYPT_Indicator",1,"Limit_HDG_Tape",1,{0.005,0.02},1}};
					};
				};
			};
			class HUD_2_Weapons
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0.12;
				borderRight = 0.12;
				borderTop = 0.05;
				borderBottom = 0.15;
				color[] = {0.15,1,0.15,1};
				enableParallax = 1;
				class Bones
				{
					class RangeBone_Imperial
					{
						type = "linear";
						source = "targetDist";
						sourceScale = 0.00054;
						min = 0;
						max = 10;
						minPos[] = {0.08,0.4};
						maxPos[] = {0.08,0.6};
					};
					class RangeBone_Metric
					{
						type = "linear";
						source = "targetDist";
						sourceScale = 0.001;
						min = 0;
						max = 12;
						minPos[] = {0.08,0.4};
						maxPos[] = {0.08,0.6};
					};
					class RadarAltitudeBone_Imperial
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						min = 0;
						max = 1500;
						minPos[] = {0.71,0.4};
						maxPos[] = {0.71,0.6};
					};
					class RadarAltitudeBone_Metric
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						max = 500;
						minPos[] = {0.71,0.4};
						maxPos[] = {0.71,0.6};
					};
					class VspeedBone_Imperial
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -100;
						max = 100;
						minPos[] = {0.93,0.4};
						maxPos[] = {0.93,0.6};
					};
					class VspeedBone_Metric
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -10;
						max = 10;
						minPos[] = {0.93,0.4};
						maxPos[] = {0.93,0.6};
					};
					class HDG_Tape_WYPT_Indicator
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5,0.927};
						pos10[] = {"0.500 + 0.3/4",0.927};
					};
					class Limit_HDG_Tape
					{
						type = "limit";
						limits[] = {0.35,0.927,0.65,0.927};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.2,0.2,0.8,0.8};
					};
					class HorizonVector
					{
						type = "horizontoview";
						pos0[] = {0.5,0.5};
						pos10[] = {1,1};
						angle = 0;
					};
					class CCIP_HMCS
					{
						type = "vector";
						source = "impactpointtoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class TGP_point
					{
						type = "vector";
						source = "pilotcameratoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class STPT_2_VIEW
					{
						type = "vector";
						source = "wppointtoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class Target
					{
						type = "vector";
						source = "targetToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class WeaponAim
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class HorizonIndicatorBank
					{
						type = "rotational";
						source = "horizonBank";
						sourceScale = 1;
						center[] = {0.9,0.8};
						min = "-3.1415927";
						max = "3.1415927";
						minAngle = 180;
						maxAngle = -180;
						aspectRatio = 1;
					};
					class HorizonDive_Left
					{
						source = "horizonDive";
						type = "rotational";
						center[] = {0.9,0.8};
						min = "-3.14159265359 / 2";
						max = "3.14159265359 / 2";
						minAngle = 90;
						maxAngle = -90;
						aspectRatio = 1;
					};
					class HorizonDive_Right
					{
						source = "horizonDive";
						type = "rotational";
						center[] = {0.9,0.8};
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
						pos0[] = {0.5,0.32};
						pos10[] = {1.75,1.57};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0,0};
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
						type = "vector";
						source = "velocity";
						pos0[] = {"0.5+0.000","0.32+0.000"};
						pos10[] = {"0.5+0.700","0.32+0.700"};
					};
					class Velocity_Pitch_Ladder
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0,0};
						pos10[] = {0.7,0.7};
					};
					class Level0: Velocity
					{
						type = "horizon";
						angle = 0;
					};
					class LevelP05: Level0
					{
						angle = 5;
					};
					class LevelM05: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
					class LevelP55: Level0
					{
						angle = 55;
					};
					class LevelM55: Level0
					{
						angle = -55;
					};
					class LevelP60: Level0
					{
						angle = 60;
					};
					class LevelM60: Level0
					{
						angle = -60;
					};
					class LevelP65: Level0
					{
						angle = 65;
					};
					class LevelM65: Level0
					{
						angle = -65;
					};
					class LevelP70: Level0
					{
						angle = 70;
					};
					class LevelM70: Level0
					{
						angle = -70;
					};
					class LevelP75: Level0
					{
						angle = 75;
					};
					class LevelM75: Level0
					{
						angle = -75;
					};
					class LevelP80: Level0
					{
						angle = 80;
					};
					class LevelM80: Level0
					{
						angle = -80;
					};
					class LevelP85: Level0
					{
						angle = 85;
					};
					class LevelM85: Level0
					{
						angle = -85;
					};
					class LevelP90: Level0
					{
						angle = 90;
					};
				};
				class Draw
				{
					condition = "on";
					color[] = {"user3","user4","user5"};
					alpha = "user6";
					class HMCS_OFF
					{
						type = "group";
						condition = "1-user0";
						class TGP_Point_HUD
						{
							type = "line";
							width = 4;
							points[] = {{"TGP_SPI",{-0.0075,0},1},{"TGP_SPI",{0,-0.01},1},{"TGP_SPI",{0.0075,0},1},{"TGP_SPI",{0,0.01},1},{"TGP_SPI",{-0.0075,0},1}};
						};
					};
					class Laser_ON
					{
						type = "group";
						condition = "laserON";
						blinkingPattern[] = {0.3,0.3};
						blinkingStartsOn = 1;
						class Lasing
						{
							type = "text";
							source = "static";
							text = "L";
							sourceScale = 1;
							align = "Left";
							scale = 1;
							pos[] = {{"0.15 + 0.1",0.71},1};
							right[] = {{"0.19 + 0.1",0.71},1};
							down[] = {{"0.15 + 0.1",0.75},1};
						};
					};
					class RangeText
					{
						type = "text";
						source = "static";
						text = "RNG/";
						align = "left";
						scale = 1;
						pos[] = {{"0.21 - 0.04",0.76},1};
						right[] = {{"0.21 - 0.00",0.76},1};
						down[] = {{"0.21 - 0.04",0.8},1};
					};
					class RangeNumber
					{
						type = "text";
						source = "targetDist";
						sourceScale = 0.00054;
						sourcePrecision = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.21,0.76},1};
						right[] = {{0.25,0.76},1};
						down[] = {{0.21,0.8},1};
					};
					class WeaponName
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.21,0.81},1};
						right[] = {{0.25,0.81},1};
						down[] = {{0.21,0.85},1};
					};
					class AmmoCount
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.21,0.86},1};
						right[] = {{0.25,0.86},1};
						down[] = {{0.21,0.9},1};
					};
					class AGM_group
					{
						condition = "ATmissile";
						type = "group";
						class RangeBand_AGM_Imperial
						{
							type = "group";
							condition = "user1";
							class Range_Imperial
							{
								type = "line";
								width = 3;
								points[] = {{"RangeBone_Imperial",{0,0},1},{"RangeBone_Imperial",{-0.01,-0.01},1},{"RangeBone_Imperial",{-0.01,0.01},1},{"RangeBone_Imperial",{0,0},1}};
							};
						};
						class RangeBand_AGM_Metric
						{
							type = "group";
							condition = "1-user1";
							class Range_Imperial
							{
								type = "line";
								width = 3;
								points[] = {{"RangeBone_Metric",{0,0},1},{"RangeBone_Metric",{-0.01,-0.01},1},{"RangeBone_Metric",{-0.01,0.01},1},{"RangeBone_Metric",{0,0},1}};
							};
						};
						class Range_marks_AGM
						{
							type = "line";
							width = 3;
							points[] = {{{0.08,0.4},1},{{0.1,0.4},1},{},{{0.08,0.467},1},{{0.1,0.467},1},{},{{0.08,0.567},1},{{0.1,0.567},1},{},{{0.08,0.6},1},{{0.1,0.6},1},{},{{0.08,0.467},1},{{0.08,0.567},1}};
						};
					};
					class TOF_group
					{
						condition = "(Bomb+ATmissile)*(120-MissileFlightTime)";
						type = "group";
						class TOFnumber_BOMB
						{
							type = "text";
							source = "MissileFlightTime";
							text = "%X";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.08,0.63},1};
							right[] = {{0.12,0.63},1};
							down[] = {{0.08,0.67},1};
						};
					};
				};
			};
			class HUD_CCIP
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0.2;
				color[] = {0.15,1,0.15,1};
				enableParallax = 1;
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.498,0.38};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.498,0.38};
						pos10[] = {1.166,1.215};
					};
					class Target
					{
						type = "vector";
						source = "target";
						pos0[] = {0.498,0.38};
						pos10[] = {1.166,1.215};
					};
					class TargetingPodTarget
					{
						source = "pilotcamera";
						type = "vector";
						pos0[] = {0.498,0.38};
						pos10[] = {1.166,1.215};
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPoint";
						pos0[] = {0.5,0.38};
						pos10[] = {1.168,1.215};
					};
					class NormalizeBombCircle
					{
						type = "normalizedorsmaller";
						limit = 0.08;
						aspectRatio = 1.25;
					};
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.3};
						pos10[] = {1.166,1.195};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1,0.1,0.9,0.9};
					};
					class MissileFlightTimeRot1
					{
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 1;
						center[] = {0,0};
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 1.25;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle = 36;
						max = 1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle = 54;
						max = 1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle = 72;
						max = 2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle = 90;
						max = 2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle = 108;
						max = 3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle = 126;
						max = 3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle = 144;
						max = 4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle = 162;
						max = 4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle = 180;
						max = 5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle = 306;
						max = 8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle = 324;
						max = 9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle = 342;
						max = 9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle = 360;
						max = 10;
					};
					class LarAmmoMax
					{
						type = "linear";
						source = "LarAmmoMax";
						sourceScale = 1;
						min = 0;
						max = 1;
						minPos[] = {0,1};
						maxPos[] = {0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source = "LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source = "LarTargetDist";
					};
				};
				class Draw
				{
					condition = "on";
					color[] = {"user3","user4","user5"};
					alpha = "user6";
					class CCIP_INVALID
					{
						type = "group";
						condition = "(MissileFlightTime-249)*(mgun+rocket+bomb)";
						blinkingPattern[] = {5,3};
						blinkingStartsOn = 1;
						class CCIP_text
						{
							type = "text";
							text = "CCIP INVALID";
							source = "static";
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{0,0.1},1};
							right[] = {"ImpactPoint",{0.04,0.1},1};
							down[] = {"ImpactPoint",{0,0.14},1};
						};
					};
					class RKT_CrosshairGroup
					{
						type = "group";
						condition = "rocket*(120-MissileFlightTime)";
						class MachineGunCrosshair
						{
							type = "line";
							width = 5;
							points[] = {{"ImpactPoint",{0,-0.1125},1},{"ImpactPoint",{0,-0.1},1},{},{"ImpactPoint",{0,0.1125},1},{"ImpactPoint",{0,0.1},1},{},{"ImpactPoint",{-0.09,0},1},{"ImpactPoint",{-0.08,0},1},{},{"ImpactPoint",{0.09,0},1},{"ImpactPoint",{0.08,0},1},{},{"ImpactPoint",{0,-0.0025},1},{"ImpactPoint",{0,0.0025},1},{},{"ImpactPoint",{-0.002,0},1},{"ImpactPoint",{0.002,0},1}};
						};
						class Circle
						{
							type = "line";
							width = 5;
							points[] = {{"ImpactPoint",{0,-0.0775},1},{"ImpactPoint",{0,-0.09125},1},{"MissileFlightTimeRot1",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.062},1,"ImpactPoint",1}};
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 5;
							points[] = {{"ImpactPoint",{0,-0.1},1},{"ImpactPoint",{0.013888,-0.09848},1},{"ImpactPoint",{0.02736,-0.09397},1},{"ImpactPoint",{0.04,-0.0866},1},{"ImpactPoint",{0.051424,-0.0766},1},{"ImpactPoint",{0.06128,-0.06428},1},{"ImpactPoint",{0.06928,-0.05},1},{"ImpactPoint",{0.075176,-0.0342},1},{"ImpactPoint",{0.078784,-0.01736},1},{"ImpactPoint",{0.08,0},1},{"ImpactPoint",{0.078784,0.01736},1},{"ImpactPoint",{0.075176,0.0342},1},{"ImpactPoint",{0.06928,0.05},1},{"ImpactPoint",{0.06128,0.06428},1},{"ImpactPoint",{0.051424,0.0766},1},{"ImpactPoint",{0.04,0.0866},1},{"ImpactPoint",{0.02736,0.09397},1},{"ImpactPoint",{0.013888,0.09848},1},{"ImpactPoint",{0,0.1},1},{"ImpactPoint",{-0.013888,0.09848},1},{"ImpactPoint",{-0.02736,0.09397},1},{"ImpactPoint",{-0.04,0.0866},1},{"ImpactPoint",{-0.051424,0.0766},1},{"ImpactPoint",{-0.06128,0.06428},1},{"ImpactPoint",{-0.06928,0.05},1},{"ImpactPoint",{-0.075176,0.0342},1},{"ImpactPoint",{-0.078784,0.01736},1},{"ImpactPoint",{-0.08,0},1},{"ImpactPoint",{-0.078784,-0.01736},1},{"ImpactPoint",{-0.075176,-0.0342},1},{"ImpactPoint",{-0.06928,-0.05},1},{"ImpactPoint",{-0.06128,-0.06428},1},{"ImpactPoint",{-0.051424,-0.0766},1},{"ImpactPoint",{-0.04,-0.0866},1},{"ImpactPoint",{-0.02736,-0.09397},1},{"ImpactPoint",{-0.013888,-0.09848},1},{"ImpactPoint",{0,-0.1},1}};
						};
						class RKT_Text
						{
							type = "text";
							text = "RKT";
							source = "static";
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,0.12},1};
							right[] = {"ImpactPoint",{0.032,0.12},1};
							down[] = {"ImpactPoint",{-0.002,0.15},1};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.00054;
							sourcePrecision = 1;
							max = 5;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,"0.12+0.02"},1};
							right[] = {"ImpactPoint",{0.032,"0.12+0.02"},1};
							down[] = {"ImpactPoint",{-0.002,"0.15+0.02"},1};
						};
					};
					class GUNS_CrosshairGroup
					{
						type = "group";
						condition = "mgun*(250-MissileFlightTime)";
						class MachineGunCrosshair
						{
							type = "line";
							width = 4;
							points[] = {{"ImpactPoint",{0,-0.05},1},{"ImpactPoint",{0,-0.025},1},{},{"ImpactPoint",{0,0.05},1},{"ImpactPoint",{0,0.025},1},{},{"ImpactPoint",{-0.04,0},1},{"ImpactPoint",{-0.02,0},1},{},{"ImpactPoint",{0.04,0},1},{"ImpactPoint",{0.02,0},1},{},{"ImpactPoint",{0.01,-0.05},1},{"ImpactPoint",{-0.01,-0.05},1},{},{"ImpactPoint",{0,-0.0025},1},{"ImpactPoint",{0,0.0025},1},{},{"ImpactPoint",{-0.002,0},1},{"ImpactPoint",{0.002,0},1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.00054;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,0.06},1};
							right[] = {"ImpactPoint",{0.032,0.06},1};
							down[] = {"ImpactPoint",{-0.002,0.09},1};
						};
					};
					class BombCrosshairGroup
					{
						type = "group";
						condition = "bomb*(250-MissileFlightTime)";
						class BombCrosshair
						{
							width = 5;
							type = "line";
							points[] = {{"ImpactPoint",{0,-0.1125},1},{"ImpactPoint",{0,-0.1},1},{},{"ImpactPoint",{0,0.1125},1},{"ImpactPoint",{0,0.1},1},{},{"ImpactPoint",{-0.09,0},1},{"ImpactPoint",{-0.08,0},1},{},{"ImpactPoint",{0.09,0},1},{"ImpactPoint",{0.08,0},1},{},{"ImpactPoint",{0,-0.0025},1},{"ImpactPoint",{0,0.0025},1},{},{"ImpactPoint",{-0.002,0},1},{"ImpactPoint",{0.002,0},1},{},{"ImpactPoint",{0,-0.1},1},{"ImpactPoint",{0.013888,-0.09848},1},{"ImpactPoint",{0.02736,-0.09397},1},{"ImpactPoint",{0.04,-0.0866},1},{"ImpactPoint",{0.051424,-0.0766},1},{"ImpactPoint",{0.06128,-0.06428},1},{"ImpactPoint",{0.06928,-0.05},1},{"ImpactPoint",{0.075176,-0.0342},1},{"ImpactPoint",{0.078784,-0.01736},1},{"ImpactPoint",{0.08,0},1},{"ImpactPoint",{0.078784,0.01736},1},{"ImpactPoint",{0.075176,0.0342},1},{"ImpactPoint",{0.06928,0.05},1},{"ImpactPoint",{0.06128,0.06428},1},{"ImpactPoint",{0.051424,0.0766},1},{"ImpactPoint",{0.04,0.0866},1},{"ImpactPoint",{0.02736,0.09397},1},{"ImpactPoint",{0.013888,0.09848},1},{"ImpactPoint",{0,0.1},1},{"ImpactPoint",{-0.013888,0.09848},1},{"ImpactPoint",{-0.02736,0.09397},1},{"ImpactPoint",{-0.04,0.0866},1},{"ImpactPoint",{-0.051424,0.0766},1},{"ImpactPoint",{-0.06128,0.06428},1},{"ImpactPoint",{-0.06928,0.05},1},{"ImpactPoint",{-0.075176,0.0342},1},{"ImpactPoint",{-0.078784,0.01736},1},{"ImpactPoint",{-0.08,0},1},{"ImpactPoint",{-0.078784,-0.01736},1},{"ImpactPoint",{-0.075176,-0.0342},1},{"ImpactPoint",{-0.06928,-0.05},1},{"ImpactPoint",{-0.06128,-0.06428},1},{"ImpactPoint",{-0.051424,-0.0766},1},{"ImpactPoint",{-0.04,-0.0866},1},{"ImpactPoint",{-0.02736,-0.09397},1},{"ImpactPoint",{-0.013888,-0.09848},1},{"ImpactPoint",{0,-0.1},1},{},{"ImpactPoint",-1,"Velocity",1,"NormalizeBombCircle",1,"ImpactPoint",1,{0,0},1},{"Velocity",1,"Limit0109",1,{0,0},1}};
						};
						class Circle
						{
							type = "line";
							width = 5;
							points[] = {{"ImpactPoint",{0,-0.0775},1},{"ImpactPoint",{0,-0.09125},1},{"MissileFlightTimeRot1",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.073},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.062},1,"ImpactPoint",1}};
						};
					};
				};
			};
			class HMCS_Common
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025,0.025,0.1};
				helmetRight[] = {0.05,0,0};
				helmetDown[] = {0,-0.05,0};
				class Bones
				{
					class RangeBone_Imperial
					{
						type = "linear";
						source = "targetDist";
						sourceScale = 0.00054;
						min = 0;
						max = 10;
						minPos[] = {0.08,0.4};
						maxPos[] = {0.08,0.6};
					};
					class RangeBone_Metric
					{
						type = "linear";
						source = "targetDist";
						sourceScale = 0.001;
						min = 0;
						max = 12;
						minPos[] = {0.08,0.4};
						maxPos[] = {0.08,0.6};
					};
					class RadarAltitudeBone_Imperial
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						min = 0;
						max = 1500;
						minPos[] = {0.71,0.4};
						maxPos[] = {0.71,0.6};
					};
					class RadarAltitudeBone_Metric
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						max = 500;
						minPos[] = {0.71,0.4};
						maxPos[] = {0.71,0.6};
					};
					class VspeedBone_Imperial
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -100;
						max = 100;
						minPos[] = {0.93,0.4};
						maxPos[] = {0.93,0.6};
					};
					class VspeedBone_Metric
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -10;
						max = 10;
						minPos[] = {0.93,0.4};
						maxPos[] = {0.93,0.6};
					};
					class HDG_Tape_WYPT_Indicator
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5,0.927};
						pos10[] = {"0.500 + 0.3/4",0.927};
					};
					class Limit_HDG_Tape
					{
						type = "limit";
						limits[] = {0.35,0.927,0.65,0.927};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.2,0.2,0.8,0.8};
					};
					class HorizonVector
					{
						type = "horizontoview";
						pos0[] = {0.5,0.5};
						pos10[] = {1,1};
						angle = 0;
					};
					class CCIP_HMCS
					{
						type = "vector";
						source = "impactpointtoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class TGP_point
					{
						type = "vector";
						source = "pilotcameratoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class STPT_2_VIEW
					{
						type = "vector";
						source = "wppointtoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class Target
					{
						type = "vector";
						source = "targetToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class WeaponAim
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class HorizonIndicatorBank
					{
						type = "rotational";
						source = "horizonBank";
						sourceScale = 1;
						center[] = {0.9,0.8};
						min = "-3.1415927";
						max = "3.1415927";
						minAngle = 180;
						maxAngle = -180;
						aspectRatio = 1;
					};
					class HorizonDive_Left
					{
						source = "horizonDive";
						type = "rotational";
						center[] = {0.9,0.8};
						min = "-3.14159265359 / 2";
						max = "3.14159265359 / 2";
						minAngle = 90;
						maxAngle = -90;
						aspectRatio = 1;
					};
					class HorizonDive_Right
					{
						source = "horizonDive";
						type = "rotational";
						center[] = {0.9,0.8};
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
						pos0[] = {0.5,0.32};
						pos10[] = {1.75,1.57};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0,0};
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
						type = "vector";
						source = "velocity";
						pos0[] = {"0.5+0.000","0.32+0.000"};
						pos10[] = {"0.5+0.700","0.32+0.700"};
					};
					class Velocity_Pitch_Ladder
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0,0};
						pos10[] = {0.7,0.7};
					};
					class Level0: Velocity
					{
						type = "horizon";
						angle = 0;
					};
					class LevelP05: Level0
					{
						angle = 5;
					};
					class LevelM05: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
					class LevelP55: Level0
					{
						angle = 55;
					};
					class LevelM55: Level0
					{
						angle = -55;
					};
					class LevelP60: Level0
					{
						angle = 60;
					};
					class LevelM60: Level0
					{
						angle = -60;
					};
					class LevelP65: Level0
					{
						angle = 65;
					};
					class LevelM65: Level0
					{
						angle = -65;
					};
					class LevelP70: Level0
					{
						angle = 70;
					};
					class LevelM70: Level0
					{
						angle = -70;
					};
					class LevelP75: Level0
					{
						angle = 75;
					};
					class LevelM75: Level0
					{
						angle = -75;
					};
					class LevelP80: Level0
					{
						angle = 80;
					};
					class LevelM80: Level0
					{
						angle = -80;
					};
					class LevelP85: Level0
					{
						angle = 85;
					};
					class LevelM85: Level0
					{
						angle = -85;
					};
					class LevelP90: Level0
					{
						angle = 90;
					};
				};
				class Draw
				{
					condition = "on*user0*(1-user2)*(1 - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=20))*(1 - (cameraHeadingDiffY<=10) + (abs(cameraHeadingDiffX)>=10))";
					color[] = {"user3","user4","user5"};
					alpha = "user6";
					class Imperial_Units_HMCS
					{
						type = "group";
						condition = "user1*(1-user2)";
						class Airspeed_Number_HMCS
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "speed";
							width = 2;
							sourceScale = 1.94384;
							pos[] = {{0.15,0.4},1};
							right[] = {{0.2,0.4},1};
							down[] = {{0.15,0.45},1};
						};
						class Altitude_MSL_Number_HMCS
						{
							type = "group";
							class alt_num
							{
								type = "text";
								scale = 1;
								align = "right";
								source = "altitudeASL";
								sourceScale = 3.28084;
								pos[] = {{0.85,0.4},1};
								right[] = {{0.9,0.4},1};
								down[] = {{0.85,0.45},1};
							};
						};
						class Radar_Altitude_Number
						{
							type = "group";
							condition = "(1+5000)-altitudeAGL*3.28084";
							class radaralt
							{
								type = "text";
								source = "altitudeAGL";
								align = "right";
								scale = 1;
								sourceScale = 3.28084;
								pos[] = {{0.87,0.45},1};
								right[] = {{0.91,0.45},1};
								down[] = {{0.87,0.49},1};
							};
						};
						class Radar_Altitude_Number_NOT
						{
							type = "group";
							condition = "altitudeAGL*3.28084-5000";
							class radaralt
							{
								type = "text";
								source = "static";
								text = "XXXX";
								align = "right";
								scale = 1;
								pos[] = {{0.87,0.45},1};
								right[] = {{0.91,0.45},1};
								down[] = {{0.87,0.49},1};
							};
						};
					};
					class Metric_Units_HMCS
					{
						type = "group";
						condition = "(1-user1)*(1-user2)";
						class Airspeed_Number_HMCS
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "speed";
							width = 2;
							sourceScale = 3.6;
							pos[] = {{0.15,0.4},1};
							right[] = {{0.2,0.4},1};
							down[] = {{0.15,0.45},1};
						};
						class Altitude_MSL_Number_HMCS
						{
							type = "group";
							class alt_num
							{
								type = "text";
								scale = 1;
								align = "right";
								source = "altitudeASL";
								sourceScale = 1;
								pos[] = {{0.85,0.4},1};
								right[] = {{0.9,0.4},1};
								down[] = {{0.85,0.45},1};
							};
						};
						class Radar_Altitude_Number
						{
							type = "group";
							condition = "(1+1500)-altitudeAGL";
							class radaralt
							{
								type = "text";
								source = "altitudeAGL";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {{0.87,0.45},1};
								right[] = {{0.91,0.45},1};
								down[] = {{0.87,0.49},1};
							};
						};
						class Radar_Altitude_Number_NOT
						{
							type = "group";
							condition = "altitudeAGL-1500";
							class radaralt
							{
								type = "text";
								source = "static";
								text = "XXXX";
								align = "right";
								scale = 1;
								pos[] = {{0.87,0.45},1};
								right[] = {{0.91,0.45},1};
								down[] = {{0.87,0.49},1};
							};
						};
					};
					class Other_Stuff_HMCS
					{
						type = "group";
						condition = "1-user2";
						class Radar_Altitude_Text
						{
							type = "text";
							source = "static";
							text = "R";
							align = "right";
							scale = 1;
							pos[] = {{0.84,0.45},1};
							right[] = {{0.88,0.45},1};
							down[] = {{0.84,0.49},1};
						};
						class Clock
						{
							type = "text";
							source = "time";
							text = "%X";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.85,0.7},1};
							right[] = {{0.89,0.7},1};
							down[] = {{0.85,0.74},1};
						};
					};
					class Mach_Number_HMCS
					{
						type = "text";
						source = "speed";
						align = "left";
						scale = 1;
						sourceScale = 0.00294;
						sourcePrecision = 2;
						pos[] = {{"1-0.87",0.45},1};
						right[] = {{"1-0.87+0.04",0.45},1};
						down[] = {{"1-0.87",0.49},1};
					};
					class Mach_Text_HMCS
					{
						type = "text";
						source = "static";
						text = "M";
						align = "left";
						scale = 1;
						sourceScale = 0.00294;
						sourcePrecision = 2;
						pos[] = {{"1-0.87-0.05",0.45},1};
						right[] = {{"1-0.87-0.05+0.04",0.45},1};
						down[] = {{"1-0.87-0.05",0.49},1};
					};
					class Left_box
					{
						type = "line";
						width = 2;
						points[] = {{{0.16,0.4},1},{{"0.16 - 0.11",0.4},1},{{"0.16 - 0.11","0.40 + 0.05"},1},{{0.16,"0.40 + 0.05"},1},{{0.16,0.4},1}};
					};
					class Right_box
					{
						type = "line";
						width = 2;
						points[] = {{{0.84,0.4},1},{{"0.84 + 0.11",0.4},1},{{"0.84 + 0.11","0.40 + 0.05"},1},{{0.84,"0.40 + 0.05"},1},{{0.84,0.4},1}};
					};
					class Center_box
					{
						type = "line";
						width = 2;
						points[] = {{{0.455,0.005},1},{{"0.455 + 0.09",0.005},1},{{"0.455 + 0.09","0.005 + 0.06"},1},{{"0.455 + 0.052","0.005 + 0.06"},1},{{"0.455 + 0.045","0.005 + 0.07"},1},{{"0.455 + 0.038","0.005 + 0.06"},1},{{0.455,"0.005 + 0.06"},1},{{0.455,0.005},1}};
					};
					class CameraDirNumber
					{
						type = "text";
						scale = 1;
						width = 2;
						source = "CameraDir";
						sourceScale = 1;
						SourceLength = "3SSSSSSSSSS";
						align = "center";
						pos[] = {{0.5,0.01},1};
						right[] = {{0.55,0.01},1};
						down[] = {{0.5,0.06},1};
					};
					class CameraDir_Scale
					{
						clipTL[] = {0.3,0};
						clipBR[] = {0.7,1};
						class Heading_Scale
						{
							type = "scale";
							horizontal = 1;
							source = "cameraDir";
							sourceScale = 0.1;
							SourceLength = 2;
							width = 3;
							top = 0.25;
							center = 0.5;
							bottom = 0.75;
							lineXleft = "0.04 + 0.085";
							lineYright = "0.03 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 1;
							stepSize = "(0.75 - 0.25) / 10";
							align = "center";
							scale = 1;
							pos[] = {0.2475,"0.01 + 0.065"};
							right[] = {"0.2475 + 0.03","0.01 + 0.065"};
							down[] = {0.2475,"0.04 + 0.065"};
						};
					};
					class AC_Heading
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						sourceLength = 3;
						align = "center";
						scale = 1;
						pos[] = {{0.5,0.82},1};
						right[] = {{0.55,0.82},1};
						down[] = {{0.5,0.87},1};
					};
				};
			};
			class HMCS_Common_Decluttered
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025,0.025,0.1};
				helmetRight[] = {0.05,0,0};
				helmetDown[] = {0,-0.05,0};
				class Bones
				{
					class RangeBone_Imperial
					{
						type = "linear";
						source = "targetDist";
						sourceScale = 0.00054;
						min = 0;
						max = 10;
						minPos[] = {0.08,0.4};
						maxPos[] = {0.08,0.6};
					};
					class RangeBone_Metric
					{
						type = "linear";
						source = "targetDist";
						sourceScale = 0.001;
						min = 0;
						max = 12;
						minPos[] = {0.08,0.4};
						maxPos[] = {0.08,0.6};
					};
					class RadarAltitudeBone_Imperial
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						min = 0;
						max = 1500;
						minPos[] = {0.71,0.4};
						maxPos[] = {0.71,0.6};
					};
					class RadarAltitudeBone_Metric
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						max = 500;
						minPos[] = {0.71,0.4};
						maxPos[] = {0.71,0.6};
					};
					class VspeedBone_Imperial
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -100;
						max = 100;
						minPos[] = {0.93,0.4};
						maxPos[] = {0.93,0.6};
					};
					class VspeedBone_Metric
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -10;
						max = 10;
						minPos[] = {0.93,0.4};
						maxPos[] = {0.93,0.6};
					};
					class HDG_Tape_WYPT_Indicator
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5,0.927};
						pos10[] = {"0.500 + 0.3/4",0.927};
					};
					class Limit_HDG_Tape
					{
						type = "limit";
						limits[] = {0.35,0.927,0.65,0.927};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.2,0.2,0.8,0.8};
					};
					class HorizonVector
					{
						type = "horizontoview";
						pos0[] = {0.5,0.5};
						pos10[] = {1,1};
						angle = 0;
					};
					class CCIP_HMCS
					{
						type = "vector";
						source = "impactpointtoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class TGP_point
					{
						type = "vector";
						source = "pilotcameratoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class STPT_2_VIEW
					{
						type = "vector";
						source = "wppointtoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class Target
					{
						type = "vector";
						source = "targetToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class WeaponAim
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class HorizonIndicatorBank
					{
						type = "rotational";
						source = "horizonBank";
						sourceScale = 1;
						center[] = {0.9,0.8};
						min = "-3.1415927";
						max = "3.1415927";
						minAngle = 180;
						maxAngle = -180;
						aspectRatio = 1;
					};
					class HorizonDive_Left
					{
						source = "horizonDive";
						type = "rotational";
						center[] = {0.9,0.8};
						min = "-3.14159265359 / 2";
						max = "3.14159265359 / 2";
						minAngle = 90;
						maxAngle = -90;
						aspectRatio = 1;
					};
					class HorizonDive_Right
					{
						source = "horizonDive";
						type = "rotational";
						center[] = {0.9,0.8};
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
						pos0[] = {0.5,0.32};
						pos10[] = {1.75,1.57};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0,0};
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
						type = "vector";
						source = "velocity";
						pos0[] = {"0.5+0.000","0.32+0.000"};
						pos10[] = {"0.5+0.700","0.32+0.700"};
					};
					class Velocity_Pitch_Ladder
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0,0};
						pos10[] = {0.7,0.7};
					};
					class Level0: Velocity
					{
						type = "horizon";
						angle = 0;
					};
					class LevelP05: Level0
					{
						angle = 5;
					};
					class LevelM05: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
					class LevelP55: Level0
					{
						angle = 55;
					};
					class LevelM55: Level0
					{
						angle = -55;
					};
					class LevelP60: Level0
					{
						angle = 60;
					};
					class LevelM60: Level0
					{
						angle = -60;
					};
					class LevelP65: Level0
					{
						angle = 65;
					};
					class LevelM65: Level0
					{
						angle = -65;
					};
					class LevelP70: Level0
					{
						angle = 70;
					};
					class LevelM70: Level0
					{
						angle = -70;
					};
					class LevelP75: Level0
					{
						angle = 75;
					};
					class LevelM75: Level0
					{
						angle = -75;
					};
					class LevelP80: Level0
					{
						angle = 80;
					};
					class LevelM80: Level0
					{
						angle = -80;
					};
					class LevelP85: Level0
					{
						angle = 85;
					};
					class LevelM85: Level0
					{
						angle = -85;
					};
					class LevelP90: Level0
					{
						angle = 90;
					};
				};
				class Draw
				{
					condition = "on*(user0)*(1 - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=20))*(1 - (cameraHeadingDiffY<=10) + (abs(cameraHeadingDiffX)>=10))";
					color[] = {"user3","user4","user5"};
					alpha = "user6";
					class G_Number_HMCS
					{
						type = "text";
						source = "gmeterYGrav";
						align = "Left";
						scale = 1;
						sourceScale = 0.1;
						sourcePrecision = 1;
						pos[] = {{"0.08","0.48-0.35"},1};
						right[] = {{"0.08+0.04","0.48-0.35"},1};
						down[] = {{"0.08","0.52-0.35"},1};
					};
					class G_Text_HMCS
					{
						type = "text";
						source = "static";
						text = "G";
						align = "Left";
						scale = 1;
						pos[] = {{"0.105","0.48-0.35"},1};
						right[] = {{"0.105+0.04","0.48-0.35"},1};
						down[] = {{"0.105","0.52-0.35"},1};
					};
					class Bank_Indicator
					{
						type = "line";
						width = 4;
						points[] = {{"HorizonIndicatorBank",{"0 *1 /3","-0.02 *1 /3"},1},{"HorizonIndicatorBank",{"0.0099999998 *1 /3","-0.01732 *1 /3"},1},{"HorizonIndicatorBank",{"0.01732 *1 /3","-0.0099999998 *1 /3"},1},{"HorizonIndicatorBank",{"0.02 *1 /3","0 *1 /3"},1},{"HorizonIndicatorBank",{"0.01732 *1 /3","0.0099999998 *1 /3"},1},{"HorizonIndicatorBank",{"0.0099999998 *1 /3","0.01732 *1 /3"},1},{"HorizonIndicatorBank",{"0 *1 /3","0.02 *1 /3"},1},{"HorizonIndicatorBank",{"-0.0099999998 *1 /3","0.01732 *1 /3"},1},{"HorizonIndicatorBank",{"-0.01732 *1 /3","0.0099999998 *1 /3"},1},{"HorizonIndicatorBank",{"-0.02 *1 /3","0 *1 /3"},1},{"HorizonIndicatorBank",{"-0.01732 *1 /3","-0.0099999998 *1 /3"},1},{"HorizonIndicatorBank",{"-0.0099999998 *1 /3","-0.01732 *1 /3"},1},{"HorizonIndicatorBank",{"0 *1 /3","-0.02 *1 /3"},1},{},{"HorizonIndicatorBank",{0.046,0},1},{"HorizonIndicatorBank",{"0.02 *1 /3",0},1},{},{"HorizonIndicatorBank",{-0.046,0},1},{"HorizonIndicatorBank",{"-0.02 *1 /3",0},1},{},{"HorizonIndicatorBank",{0,"0.06 *1 /3"},1},{"HorizonIndicatorBank",{0,"0.02 *1 /3"},1}};
					};
					class Pitch_circle_Left
					{
						type = "group";
						clipTL[] = {0,0};
						clipBR[] = {0.9,1};
						class Pitch_Circle_Group_Left
						{
							type = "line";
							width = 4;
							points[] = {{"HorizonDive_Left",{"-1.0000 * 0.0500","-0.0000 * 0.0450"},1},{"HorizonDive_Left",{"-1.0000 * 0.0450","-0.0000 * 0.0450"},1},{"HorizonDive_Left",{"-0.9962 * 0.0450","-0.0872 * 0.0450"},1},{"HorizonDive_Left",{"-0.9848 * 0.0450","-0.1736 * 0.0450"},1},{"HorizonDive_Left",{"-0.9659 * 0.0450","-0.2588 * 0.0450"},1},{"HorizonDive_Left",{"-0.9397 * 0.0450","-0.3420 * 0.0450"},1},{"HorizonDive_Left",{"-0.9063 * 0.0450","-0.4226 * 0.0450"},1},{"HorizonDive_Left",{"-0.8660 * 0.0450","-0.5000 * 0.0450"},1},{"HorizonDive_Left",{"-0.8192 * 0.0450","-0.5736 * 0.0450"},1},{"HorizonDive_Left",{"-0.7660 * 0.0450","-0.6428 * 0.0450"},1},{"HorizonDive_Left",{"-0.7071 * 0.0450","-0.7071 * 0.0450"},1},{"HorizonDive_Left",{"-0.6428 * 0.0450","-0.7660 * 0.0450"},1},{"HorizonDive_Left",{"-0.5736 * 0.0450","-0.8192 * 0.0450"},1},{"HorizonDive_Left",{"-0.5000 * 0.0450","-0.8660 * 0.0450"},1},{"HorizonDive_Left",{"-0.4226 * 0.0450","-0.9063 * 0.0450"},1},{"HorizonDive_Left",{"-0.3420 * 0.0450","-0.9397 * 0.0450"},1},{"HorizonDive_Left",{"-0.2588 * 0.0450","-0.9659 * 0.0450"},1},{"HorizonDive_Left",{"-0.1736 * 0.0450","-0.9848 * 0.0450"},1},{"HorizonDive_Left",{"-0.0872 * 0.0450","-0.9962 * 0.0450"},1},{"HorizonDive_Left",{"-0.0000 * 0.0450","-1.0000 * 0.0450"},1},{"HorizonDive_Left",{"0.0872 * 0.0450","-0.9962 * 0.0450"},1},{"HorizonDive_Left",{"0.1736 * 0.0450","-0.9848 * 0.0450"},1},{"HorizonDive_Left",{"0.2588 * 0.0450","-0.9659 * 0.0450"},1},{"HorizonDive_Left",{"0.3420 * 0.0450","-0.9397 * 0.0450"},1},{"HorizonDive_Left",{"0.4226 * 0.0450","-0.9063 * 0.0450"},1},{"HorizonDive_Left",{"0.5000 * 0.0450","-0.8660 * 0.0450"},1},{"HorizonDive_Left",{"0.5736 * 0.0450","-0.8192 * 0.0450"},1},{"HorizonDive_Left",{"0.6428 * 0.0450","-0.7660 * 0.0450"},1},{"HorizonDive_Left",{"0.7071 * 0.0450","-0.7071 * 0.0450"},1},{"HorizonDive_Left",{"0.7660 * 0.0450","-0.6428 * 0.0450"},1},{"HorizonDive_Left",{"0.8192 * 0.0450","-0.5736 * 0.0450"},1},{"HorizonDive_Left",{"0.8660 * 0.0450","-0.5000 * 0.0450"},1},{"HorizonDive_Left",{"0.9063 * 0.0450","-0.4226 * 0.0450"},1},{"HorizonDive_Left",{"0.9397 * 0.0450","-0.3420 * 0.0450"},1},{"HorizonDive_Left",{"0.9659 * 0.0450","-0.2588 * 0.0450"},1},{"HorizonDive_Left",{"0.9848 * 0.0450","-0.1736 * 0.0450"},1},{"HorizonDive_Left",{"0.9962 * 0.0450","-0.0872 * 0.0450"},1},{"HorizonDive_Left",{"1.0000 * 0.0450","-0.0000 * 0.0450"},1},{"HorizonDive_Left",{"1.0000 * 0.0500","-0.0000 * 0.0450"},1}};
						};
					};
					class Pitch_circle_Right
					{
						type = "group";
						clipTL[] = {0.9,0};
						clipBR[] = {1,1};
						class Pitch_Circle_Group_Right
						{
							type = "line";
							width = 4;
							points[] = {{"HorizonDive_Right",{"-1.0000 * 0.0500","-0.0000 * 0.0450"},1},{"HorizonDive_Right",{"-1.0000 * 0.0450","-0.0000 * 0.0450"},1},{"HorizonDive_Right",{"-0.9962 * 0.0450","-0.0872 * 0.0450"},1},{"HorizonDive_Right",{"-0.9848 * 0.0450","-0.1736 * 0.0450"},1},{"HorizonDive_Right",{"-0.9659 * 0.0450","-0.2588 * 0.0450"},1},{"HorizonDive_Right",{"-0.9397 * 0.0450","-0.3420 * 0.0450"},1},{"HorizonDive_Right",{"-0.9063 * 0.0450","-0.4226 * 0.0450"},1},{"HorizonDive_Right",{"-0.8660 * 0.0450","-0.5000 * 0.0450"},1},{"HorizonDive_Right",{"-0.8192 * 0.0450","-0.5736 * 0.0450"},1},{"HorizonDive_Right",{"-0.7660 * 0.0450","-0.6428 * 0.0450"},1},{"HorizonDive_Right",{"-0.7071 * 0.0450","-0.7071 * 0.0450"},1},{"HorizonDive_Right",{"-0.6428 * 0.0450","-0.7660 * 0.0450"},1},{"HorizonDive_Right",{"-0.5736 * 0.0450","-0.8192 * 0.0450"},1},{"HorizonDive_Right",{"-0.5000 * 0.0450","-0.8660 * 0.0450"},1},{"HorizonDive_Right",{"-0.4226 * 0.0450","-0.9063 * 0.0450"},1},{"HorizonDive_Right",{"-0.3420 * 0.0450","-0.9397 * 0.0450"},1},{"HorizonDive_Right",{"-0.2588 * 0.0450","-0.9659 * 0.0450"},1},{"HorizonDive_Right",{"-0.1736 * 0.0450","-0.9848 * 0.0450"},1},{"HorizonDive_Right",{"-0.0872 * 0.0450","-0.9962 * 0.0450"},1},{"HorizonDive_Right",{"-0.0000 * 0.0450","-1.0000 * 0.0450"},1},{"HorizonDive_Right",{"0.0872 * 0.0450","-0.9962 * 0.0450"},1},{"HorizonDive_Right",{"0.1736 * 0.0450","-0.9848 * 0.0450"},1},{"HorizonDive_Right",{"0.2588 * 0.0450","-0.9659 * 0.0450"},1},{"HorizonDive_Right",{"0.3420 * 0.0450","-0.9397 * 0.0450"},1},{"HorizonDive_Right",{"0.4226 * 0.0450","-0.9063 * 0.0450"},1},{"HorizonDive_Right",{"0.5000 * 0.0450","-0.8660 * 0.0450"},1},{"HorizonDive_Right",{"0.5736 * 0.0450","-0.8192 * 0.0450"},1},{"HorizonDive_Right",{"0.6428 * 0.0450","-0.7660 * 0.0450"},1},{"HorizonDive_Right",{"0.7071 * 0.0450","-0.7071 * 0.0450"},1},{"HorizonDive_Right",{"0.7660 * 0.0450","-0.6428 * 0.0450"},1},{"HorizonDive_Right",{"0.8192 * 0.0450","-0.5736 * 0.0450"},1},{"HorizonDive_Right",{"0.8660 * 0.0450","-0.5000 * 0.0450"},1},{"HorizonDive_Right",{"0.9063 * 0.0450","-0.4226 * 0.0450"},1},{"HorizonDive_Right",{"0.9397 * 0.0450","-0.3420 * 0.0450"},1},{"HorizonDive_Right",{"0.9659 * 0.0450","-0.2588 * 0.0450"},1},{"HorizonDive_Right",{"0.9848 * 0.0450","-0.1736 * 0.0450"},1},{"HorizonDive_Right",{"0.9962 * 0.0450","-0.0872 * 0.0450"},1},{"HorizonDive_Right",{"1.0000 * 0.0450","-0.0000 * 0.0450"},1},{"HorizonDive_Right",{"1.0000 * 0.0500","-0.0000 * 0.0450"},1}};
						};
					};
					class Stall_Text
					{
						type = "group";
						condition = "stall";
						color[] = {1,0,0};
						blinkingPattern[] = {0.2,0.2};
						blinkingStartsOn = 1;
						class StallText
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 1;
							pos[] = {{0.5,"0.53 - 0.25"},1};
							right[] = {{0.55,"0.53 - 0.25"},1};
							down[] = {{0.5,"0.53 - 0.20"},1};
						};
					};
				};
			};
			class HMCS_Weapons
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025,0.025,0.1};
				helmetRight[] = {0.05,0,0};
				helmetDown[] = {0,-0.05,0};
				class Bones
				{
					class RangeBone_Imperial
					{
						type = "linear";
						source = "targetDist";
						sourceScale = 0.00054;
						min = 0;
						max = 10;
						minPos[] = {0.08,0.4};
						maxPos[] = {0.08,0.6};
					};
					class RangeBone_Metric
					{
						type = "linear";
						source = "targetDist";
						sourceScale = 0.001;
						min = 0;
						max = 12;
						minPos[] = {0.08,0.4};
						maxPos[] = {0.08,0.6};
					};
					class RadarAltitudeBone_Imperial
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						min = 0;
						max = 1500;
						minPos[] = {0.71,0.4};
						maxPos[] = {0.71,0.6};
					};
					class RadarAltitudeBone_Metric
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						max = 500;
						minPos[] = {0.71,0.4};
						maxPos[] = {0.71,0.6};
					};
					class VspeedBone_Imperial
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -100;
						max = 100;
						minPos[] = {0.93,0.4};
						maxPos[] = {0.93,0.6};
					};
					class VspeedBone_Metric
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -10;
						max = 10;
						minPos[] = {0.93,0.4};
						maxPos[] = {0.93,0.6};
					};
					class HDG_Tape_WYPT_Indicator
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5,0.927};
						pos10[] = {"0.500 + 0.3/4",0.927};
					};
					class Limit_HDG_Tape
					{
						type = "limit";
						limits[] = {0.35,0.927,0.65,0.927};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.2,0.2,0.8,0.8};
					};
					class HorizonVector
					{
						type = "horizontoview";
						pos0[] = {0.5,0.5};
						pos10[] = {1,1};
						angle = 0;
					};
					class CCIP_HMCS
					{
						type = "vector";
						source = "impactpointtoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class TGP_point
					{
						type = "vector";
						source = "pilotcameratoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class STPT_2_VIEW
					{
						type = "vector";
						source = "wppointtoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class Target
					{
						type = "vector";
						source = "targetToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class WeaponAim
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class HorizonIndicatorBank
					{
						type = "rotational";
						source = "horizonBank";
						sourceScale = 1;
						center[] = {0.9,0.8};
						min = "-3.1415927";
						max = "3.1415927";
						minAngle = 180;
						maxAngle = -180;
						aspectRatio = 1;
					};
					class HorizonDive_Left
					{
						source = "horizonDive";
						type = "rotational";
						center[] = {0.9,0.8};
						min = "-3.14159265359 / 2";
						max = "3.14159265359 / 2";
						minAngle = 90;
						maxAngle = -90;
						aspectRatio = 1;
					};
					class HorizonDive_Right
					{
						source = "horizonDive";
						type = "rotational";
						center[] = {0.9,0.8};
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
						pos0[] = {0.5,0.32};
						pos10[] = {1.75,1.57};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0,0};
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
						type = "vector";
						source = "velocity";
						pos0[] = {"0.5+0.000","0.32+0.000"};
						pos10[] = {"0.5+0.700","0.32+0.700"};
					};
					class Velocity_Pitch_Ladder
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0,0};
						pos10[] = {0.7,0.7};
					};
					class Level0: Velocity
					{
						type = "horizon";
						angle = 0;
					};
					class LevelP05: Level0
					{
						angle = 5;
					};
					class LevelM05: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
					class LevelP55: Level0
					{
						angle = 55;
					};
					class LevelM55: Level0
					{
						angle = -55;
					};
					class LevelP60: Level0
					{
						angle = 60;
					};
					class LevelM60: Level0
					{
						angle = -60;
					};
					class LevelP65: Level0
					{
						angle = 65;
					};
					class LevelM65: Level0
					{
						angle = -65;
					};
					class LevelP70: Level0
					{
						angle = 70;
					};
					class LevelM70: Level0
					{
						angle = -70;
					};
					class LevelP75: Level0
					{
						angle = 75;
					};
					class LevelM75: Level0
					{
						angle = -75;
					};
					class LevelP80: Level0
					{
						angle = 80;
					};
					class LevelM80: Level0
					{
						angle = -80;
					};
					class LevelP85: Level0
					{
						angle = 85;
					};
					class LevelM85: Level0
					{
						angle = -85;
					};
					class LevelP90: Level0
					{
						angle = 90;
					};
				};
				class Draw
				{
					condition = "on*user0";
					color[] = {"user3","user4","user5"};
					alpha = "user6";
					class Aiming_Crosshair
					{
						type = "line";
						width = 3;
						points[] = {{{"0.020 + 0.5 + 0.02",0.5},1},{{"0.010 + 0.5 + 0.02",0.5},1},{},{{0.5,"0.020 + 0.5 + 0.02"},1},{{0.5,"0.010 + 0.5 + 0.02"},1},{},{{"-0.020 + 0.5 - 0.02",0.5},1},{{"-0.010 + 0.5 - 0.02",0.5},1},{},{{0.5,"-0.020 + 0.5 - 0.02"},1},{{0.5,"-0.010 + 0.5 - 0.02"},1}};
					};
					class Camera_Direction_Depandant
					{
						type = "group";
						condition = "(1 - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=20))*(1 - (cameraHeadingDiffY<=10) + (abs(cameraHeadingDiffX)>=10))";
						class Laser_ON
						{
							type = "group";
							condition = "laserON";
							blinkingPattern[] = {0.3,0.3};
							blinkingStartsOn = 1;
							class Lasing
							{
								type = "text";
								source = "static";
								text = "L";
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.14,0.72},1};
								right[] = {{0.18,0.72},1};
								down[] = {{0.14,0.76},1};
							};
						};
						class Camera_HDG_Stuff
						{
							class Weapon_Name
							{
								type = "text";
								source = "weapon";
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.14,0.81},1};
								right[] = {{0.18,0.81},1};
								down[] = {{0.14,0.85},1};
							};
							class Ammo_Count
							{
								type = "group";
								condition = "AAmissile+ATmissile+mgun+bomb+rocket";
								class AmmoCount
								{
									type = "text";
									source = "ammo";
									sourceScale = 1;
									align = "left";
									scale = 1;
									pos[] = {{0.14,0.84},1};
									right[] = {{0.18,0.84},1};
									down[] = {{0.14,0.88},1};
								};
							};
							class GUN_Mode
							{
								condition = "mgun";
								type = "group";
								class MasterMODE
								{
									type = "text";
									source = "static";
									text = "GUNS";
									sourceScale = 1;
									align = "left";
									scale = 1;
									pos[] = {{0.14,0.77},1};
									right[] = {{0.18,0.77},1};
									down[] = {{0.14,0.81},1};
								};
							};
							class AG_Mode
							{
								condition = "rocket+bomb+ATmissile";
								type = "group";
								class MasterMODE
								{
									type = "text";
									source = "static";
									text = "A-G";
									sourceScale = 1;
									align = "left";
									scale = 1;
									pos[] = {{0.14,0.77},1};
									right[] = {{0.18,0.77},1};
									down[] = {{0.14,0.81},1};
								};
							};
							class AA_Mode
							{
								type = "group";
								condition = "AAmissile";
								class MasterMODE
								{
									type = "text";
									source = "static";
									text = "A-A";
									sourceScale = 1;
									align = "Left";
									scale = 1;
									pos[] = {{0.14,0.77},1};
									right[] = {{0.18,0.77},1};
									down[] = {{0.14,0.81},1};
								};
								class AAM_Perfect_Circle
								{
									type = "line";
									width = 2;
									points[] = {{"WeaponAim",1,{"1.0000 * 0.1200","0.0000 * 0.1200"},1},{"WeaponAim",1,{"0.9962 * 0.1200","0.0872 * 0.1200"},1},{"WeaponAim",1,{"0.9848 * 0.1200","0.1736 * 0.1200"},1},{"WeaponAim",1,{"0.9659 * 0.1200","0.2588 * 0.1200"},1},{"WeaponAim",1,{"0.9397 * 0.1200","0.3420 * 0.1200"},1},{"WeaponAim",1,{"0.9063 * 0.1200","0.4226 * 0.1200"},1},{"WeaponAim",1,{"0.8660 * 0.1200","0.5000 * 0.1200"},1},{"WeaponAim",1,{"0.8192 * 0.1200","0.5736 * 0.1200"},1},{"WeaponAim",1,{"0.7660 * 0.1200","0.6428 * 0.1200"},1},{"WeaponAim",1,{"0.7071 * 0.1200","0.7071 * 0.1200"},1},{"WeaponAim",1,{"0.6428 * 0.1200","0.7660 * 0.1200"},1},{"WeaponAim",1,{"0.5736 * 0.1200","0.8192 * 0.1200"},1},{"WeaponAim",1,{"0.5000 * 0.1200","0.8660 * 0.1200"},1},{"WeaponAim",1,{"0.4226 * 0.1200","0.9063 * 0.1200"},1},{"WeaponAim",1,{"0.3420 * 0.1200","0.9397 * 0.1200"},1},{"WeaponAim",1,{"0.2588 * 0.1200","0.9659 * 0.1200"},1},{"WeaponAim",1,{"0.1736 * 0.1200","0.9848 * 0.1200"},1},{"WeaponAim",1,{"0.0872 * 0.1200","0.9962 * 0.1200"},1},{"WeaponAim",1,{"0.0000 * 0.1200","1.0000 * 0.1200"},1},{"WeaponAim",1,{"-0.0872 * 0.1200","0.9962 * 0.1200"},1},{"WeaponAim",1,{"-0.1736 * 0.1200","0.9848 * 0.1200"},1},{"WeaponAim",1,{"-0.2588 * 0.1200","0.9659 * 0.1200"},1},{"WeaponAim",1,{"-0.3420 * 0.1200","0.9397 * 0.1200"},1},{"WeaponAim",1,{"-0.4226 * 0.1200","0.9063 * 0.1200"},1},{"WeaponAim",1,{"-0.5000 * 0.1200","0.8660 * 0.1200"},1},{"WeaponAim",1,{"-0.5736 * 0.1200","0.8192 * 0.1200"},1},{"WeaponAim",1,{"-0.6428 * 0.1200","0.7660 * 0.1200"},1},{"WeaponAim",1,{"-0.7071 * 0.1200","0.7071 * 0.1200"},1},{"WeaponAim",1,{"-0.7660 * 0.1200","0.6428 * 0.1200"},1},{"WeaponAim",1,{"-0.8192 * 0.1200","0.5736 * 0.1200"},1},{"WeaponAim",1,{"-0.8660 * 0.1200","0.5000 * 0.1200"},1},{"WeaponAim",1,{"-0.9063 * 0.1200","0.4226 * 0.1200"},1},{"WeaponAim",1,{"-0.9397 * 0.1200","0.3420 * 0.1200"},1},{"WeaponAim",1,{"-0.9659 * 0.1200","0.2588 * 0.1200"},1},{"WeaponAim",1,{"-0.9848 * 0.1200","0.1736 * 0.1200"},1},{"WeaponAim",1,{"-0.9962 * 0.1200","0.0872 * 0.1200"},1},{"WeaponAim",1,{"-1.0000 * 0.1200","0.0000 * 0.1200"},1},{"WeaponAim",1,{"-0.9962 * 0.1200","-0.0872 * 0.1200"},1},{"WeaponAim",1,{"-0.9848 * 0.1200","-0.1736 * 0.1200"},1},{"WeaponAim",1,{"-0.9659 * 0.1200","-0.2588 * 0.1200"},1},{"WeaponAim",1,{"-0.9397 * 0.1200","-0.3420 * 0.1200"},1},{"WeaponAim",1,{"-0.9063 * 0.1200","-0.4226 * 0.1200"},1},{"WeaponAim",1,{"-0.8660 * 0.1200","-0.5000 * 0.1200"},1},{"WeaponAim",1,{"-0.8192 * 0.1200","-0.5736 * 0.1200"},1},{"WeaponAim",1,{"-0.7660 * 0.1200","-0.6428 * 0.1200"},1},{"WeaponAim",1,{"-0.7071 * 0.1200","-0.7071 * 0.1200"},1},{"WeaponAim",1,{"-0.6428 * 0.1200","-0.7660 * 0.1200"},1},{"WeaponAim",1,{"-0.5736 * 0.1200","-0.8192 * 0.1200"},1},{"WeaponAim",1,{"-0.5000 * 0.1200","-0.8660 * 0.1200"},1},{"WeaponAim",1,{"-0.4226 * 0.1200","-0.9063 * 0.1200"},1},{"WeaponAim",1,{"-0.3420 * 0.1200","-0.9397 * 0.1200"},1},{"WeaponAim",1,{"-0.2588 * 0.1200","-0.9659 * 0.1200"},1},{"WeaponAim",1,{"-0.1736 * 0.1200","-0.9848 * 0.1200"},1},{"WeaponAim",1,{"-0.0872 * 0.1200","-0.9962 * 0.1200"},1},{"WeaponAim",1,{"-0.0000 * 0.1200","-1.0000 * 0.1200"},1},{"WeaponAim",1,{"0.0872 * 0.1200","-0.9962 * 0.1200"},1},{"WeaponAim",1,{"0.1736 * 0.1200","-0.9848 * 0.1200"},1},{"WeaponAim",1,{"0.2588 * 0.1200","-0.9659 * 0.1200"},1},{"WeaponAim",1,{"0.3420 * 0.1200","-0.9397 * 0.1200"},1},{"WeaponAim",1,{"0.4226 * 0.1200","-0.9063 * 0.1200"},1},{"WeaponAim",1,{"0.5000 * 0.1200","-0.8660 * 0.1200"},1},{"WeaponAim",1,{"0.5736 * 0.1200","-0.8192 * 0.1200"},1},{"WeaponAim",1,{"0.6428 * 0.1200","-0.7660 * 0.1200"},1},{"WeaponAim",1,{"0.7071 * 0.1200","-0.7071 * 0.1200"},1},{"WeaponAim",1,{"0.7660 * 0.1200","-0.6428 * 0.1200"},1},{"WeaponAim",1,{"0.8192 * 0.1200","-0.5736 * 0.1200"},1},{"WeaponAim",1,{"0.8660 * 0.1200","-0.5000 * 0.1200"},1},{"WeaponAim",1,{"0.9063 * 0.1200","-0.4226 * 0.1200"},1},{"WeaponAim",1,{"0.9397 * 0.1200","-0.3420 * 0.1200"},1},{"WeaponAim",1,{"0.9659 * 0.1200","-0.2588 * 0.1200"},1},{"WeaponAim",1,{"0.9848 * 0.1200","-0.1736 * 0.1200"},1},{"WeaponAim",1,{"0.9962 * 0.1200","-0.0872 * 0.1200"},1},{"WeaponAim",1,{"1.0000 * 0.1200","-0.0000 * 0.1200"},1}};
								};
							};
						};
					};
					class Sidewinder_Lock
					{
						type = "group";
						condition = "(missilelocked)*(AAmissile)";
						class shape
						{
							type = "line";
							width = 3;
							points[] = {{"Target",{"1.0000 * 0.0100","0.0000 * 0.0100"},1},{"Target",{"0.9962 * 0.0100","0.0872 * 0.0100"},1},{"Target",{"0.9848 * 0.0100","0.1736 * 0.0100"},1},{"Target",{"0.9659 * 0.0100","0.2588 * 0.0100"},1},{"Target",{"0.9397 * 0.0100","0.3420 * 0.0100"},1},{"Target",{"0.9063 * 0.0100","0.4226 * 0.0100"},1},{"Target",{"0.8660 * 0.0100","0.5000 * 0.0100"},1},{"Target",{"0.8192 * 0.0100","0.5736 * 0.0100"},1},{"Target",{"0.7660 * 0.0100","0.6428 * 0.0100"},1},{"Target",{"0.7071 * 0.0100","0.7071 * 0.0100"},1},{"Target",{"0.6428 * 0.0100","0.7660 * 0.0100"},1},{"Target",{"0.5736 * 0.0100","0.8192 * 0.0100"},1},{"Target",{"0.5000 * 0.0100","0.8660 * 0.0100"},1},{"Target",{"0.4226 * 0.0100","0.9063 * 0.0100"},1},{"Target",{"0.3420 * 0.0100","0.9397 * 0.0100"},1},{"Target",{"0.2588 * 0.0100","0.9659 * 0.0100"},1},{"Target",{"0.1736 * 0.0100","0.9848 * 0.0100"},1},{"Target",{"0.0872 * 0.0100","0.9962 * 0.0100"},1},{"Target",{"0.0000 * 0.0100","1.0000 * 0.0100"},1},{"Target",{"-0.0872 * 0.0100","0.9962 * 0.0100"},1},{"Target",{"-0.1736 * 0.0100","0.9848 * 0.0100"},1},{"Target",{"-0.2588 * 0.0100","0.9659 * 0.0100"},1},{"Target",{"-0.3420 * 0.0100","0.9397 * 0.0100"},1},{"Target",{"-0.4226 * 0.0100","0.9063 * 0.0100"},1},{"Target",{"-0.5000 * 0.0100","0.8660 * 0.0100"},1},{"Target",{"-0.5736 * 0.0100","0.8192 * 0.0100"},1},{"Target",{"-0.6428 * 0.0100","0.7660 * 0.0100"},1},{"Target",{"-0.7071 * 0.0100","0.7071 * 0.0100"},1},{"Target",{"-0.7660 * 0.0100","0.6428 * 0.0100"},1},{"Target",{"-0.8192 * 0.0100","0.5736 * 0.0100"},1},{"Target",{"-0.8660 * 0.0100","0.5000 * 0.0100"},1},{"Target",{"-0.9063 * 0.0100","0.4226 * 0.0100"},1},{"Target",{"-0.9397 * 0.0100","0.3420 * 0.0100"},1},{"Target",{"-0.9659 * 0.0100","0.2588 * 0.0100"},1},{"Target",{"-0.9848 * 0.0100","0.1736 * 0.0100"},1},{"Target",{"-0.9962 * 0.0100","0.0872 * 0.0100"},1},{"Target",{"-1.0000 * 0.0100","0.0000 * 0.0100"},1},{"Target",{"-0.9962 * 0.0100","-0.0872 * 0.0100"},1},{"Target",{"-0.9848 * 0.0100","-0.1736 * 0.0100"},1},{"Target",{"-0.9659 * 0.0100","-0.2588 * 0.0100"},1},{"Target",{"-0.9397 * 0.0100","-0.3420 * 0.0100"},1},{"Target",{"-0.9063 * 0.0100","-0.4226 * 0.0100"},1},{"Target",{"-0.8660 * 0.0100","-0.5000 * 0.0100"},1},{"Target",{"-0.8192 * 0.0100","-0.5736 * 0.0100"},1},{"Target",{"-0.7660 * 0.0100","-0.6428 * 0.0100"},1},{"Target",{"-0.7071 * 0.0100","-0.7071 * 0.0100"},1},{"Target",{"-0.6428 * 0.0100","-0.7660 * 0.0100"},1},{"Target",{"-0.5736 * 0.0100","-0.8192 * 0.0100"},1},{"Target",{"-0.5000 * 0.0100","-0.8660 * 0.0100"},1},{"Target",{"-0.4226 * 0.0100","-0.9063 * 0.0100"},1},{"Target",{"-0.3420 * 0.0100","-0.9397 * 0.0100"},1},{"Target",{"-0.2588 * 0.0100","-0.9659 * 0.0100"},1},{"Target",{"-0.1736 * 0.0100","-0.9848 * 0.0100"},1},{"Target",{"-0.0872 * 0.0100","-0.9962 * 0.0100"},1},{"Target",{"-0.0000 * 0.0100","-1.0000 * 0.0100"},1},{"Target",{"0.0872 * 0.0100","-0.9962 * 0.0100"},1},{"Target",{"0.1736 * 0.0100","-0.9848 * 0.0100"},1},{"Target",{"0.2588 * 0.0100","-0.9659 * 0.0100"},1},{"Target",{"0.3420 * 0.0100","-0.9397 * 0.0100"},1},{"Target",{"0.4226 * 0.0100","-0.9063 * 0.0100"},1},{"Target",{"0.5000 * 0.0100","-0.8660 * 0.0100"},1},{"Target",{"0.5736 * 0.0100","-0.8192 * 0.0100"},1},{"Target",{"0.6428 * 0.0100","-0.7660 * 0.0100"},1},{"Target",{"0.7071 * 0.0100","-0.7071 * 0.0100"},1},{"Target",{"0.7660 * 0.0100","-0.6428 * 0.0100"},1},{"Target",{"0.8192 * 0.0100","-0.5736 * 0.0100"},1},{"Target",{"0.8660 * 0.0100","-0.5000 * 0.0100"},1},{"Target",{"0.9063 * 0.0100","-0.4226 * 0.0100"},1},{"Target",{"0.9397 * 0.0100","-0.3420 * 0.0100"},1},{"Target",{"0.9659 * 0.0100","-0.2588 * 0.0100"},1},{"Target",{"0.9848 * 0.0100","-0.1736 * 0.0100"},1},{"Target",{"0.9962 * 0.0100","-0.0872 * 0.0100"},1},{"Target",{"1.0000 * 0.0100","-0.0000 * 0.0100"},1}};
						};
					};
					class Wagon_Range
					{
						type = "group";
						condition = "ATmissile";
						class Wagon_range_text
						{
							type = "text";
							source = "targetDist";
							sourceScale = 0.00054;
							sourcePrecision = 1;
							align = "center";
							scale = 1;
							pos[] = {"Target",{"0.00 + 0.000","0.017 + 0.000"},1};
							right[] = {"Target",{"0.00 + 0.025","0.017 + 0.000"},1};
							down[] = {"Target",{"0.00 + 0.000","0.017 + 0.025"},1};
						};
					};
					class Wagon_Wheel_Maverick_Boresight
					{
						type = "group";
						condition = "(ATmissile-missilelocked)*(1-Targetdist*10)*(1-Bomb)";
						class Wagon_Wheel_Circle
						{
							type = "line";
							width = 3;
							points[] = {{"CCIP_HMCS",{"1.0000 * 0.0210","0.0000 * 0.0210"},1},{"CCIP_HMCS",{"0.9962 * 0.0210","0.0872 * 0.0210"},1},{"CCIP_HMCS",{"0.9848 * 0.0210","0.1736 * 0.0210"},1},{"CCIP_HMCS",{"0.9659 * 0.0210","0.2588 * 0.0210"},1},{"CCIP_HMCS",{"0.9397 * 0.0210","0.3420 * 0.0210"},1},{"CCIP_HMCS",{"0.9063 * 0.0210","0.4226 * 0.0210"},1},{"CCIP_HMCS",{"0.8660 * 0.0210","0.5000 * 0.0210"},1},{"CCIP_HMCS",{"0.8192 * 0.0210","0.5736 * 0.0210"},1},{"CCIP_HMCS",{"0.7660 * 0.0210","0.6428 * 0.0210"},1},{"CCIP_HMCS",{"0.7071 * 0.0210","0.7071 * 0.0210"},1},{"CCIP_HMCS",{"0.6428 * 0.0210","0.7660 * 0.0210"},1},{"CCIP_HMCS",{"0.5736 * 0.0210","0.8192 * 0.0210"},1},{"CCIP_HMCS",{"0.5000 * 0.0210","0.8660 * 0.0210"},1},{"CCIP_HMCS",{"0.4226 * 0.0210","0.9063 * 0.0210"},1},{"CCIP_HMCS",{"0.3420 * 0.0210","0.9397 * 0.0210"},1},{"CCIP_HMCS",{"0.2588 * 0.0210","0.9659 * 0.0210"},1},{"CCIP_HMCS",{"0.1736 * 0.0210","0.9848 * 0.0210"},1},{"CCIP_HMCS",{"0.0872 * 0.0210","0.9962 * 0.0210"},1},{"CCIP_HMCS",{"0.0000 * 0.0210","1.0000 * 0.0210"},1},{"CCIP_HMCS",{"-0.0872 * 0.0210","0.9962 * 0.0210"},1},{"CCIP_HMCS",{"-0.1736 * 0.0210","0.9848 * 0.0210"},1},{"CCIP_HMCS",{"-0.2588 * 0.0210","0.9659 * 0.0210"},1},{"CCIP_HMCS",{"-0.3420 * 0.0210","0.9397 * 0.0210"},1},{"CCIP_HMCS",{"-0.4226 * 0.0210","0.9063 * 0.0210"},1},{"CCIP_HMCS",{"-0.5000 * 0.0210","0.8660 * 0.0210"},1},{"CCIP_HMCS",{"-0.5736 * 0.0210","0.8192 * 0.0210"},1},{"CCIP_HMCS",{"-0.6428 * 0.0210","0.7660 * 0.0210"},1},{"CCIP_HMCS",{"-0.7071 * 0.0210","0.7071 * 0.0210"},1},{"CCIP_HMCS",{"-0.7660 * 0.0210","0.6428 * 0.0210"},1},{"CCIP_HMCS",{"-0.8192 * 0.0210","0.5736 * 0.0210"},1},{"CCIP_HMCS",{"-0.8660 * 0.0210","0.5000 * 0.0210"},1},{"CCIP_HMCS",{"-0.9063 * 0.0210","0.4226 * 0.0210"},1},{"CCIP_HMCS",{"-0.9397 * 0.0210","0.3420 * 0.0210"},1},{"CCIP_HMCS",{"-0.9659 * 0.0210","0.2588 * 0.0210"},1},{"CCIP_HMCS",{"-0.9848 * 0.0210","0.1736 * 0.0210"},1},{"CCIP_HMCS",{"-0.9962 * 0.0210","0.0872 * 0.0210"},1},{"CCIP_HMCS",{"-1.0000 * 0.0210","0.0000 * 0.0210"},1},{"CCIP_HMCS",{"-0.9962 * 0.0210","-0.0872 * 0.0210"},1},{"CCIP_HMCS",{"-0.9848 * 0.0210","-0.1736 * 0.0210"},1},{"CCIP_HMCS",{"-0.9659 * 0.0210","-0.2588 * 0.0210"},1},{"CCIP_HMCS",{"-0.9397 * 0.0210","-0.3420 * 0.0210"},1},{"CCIP_HMCS",{"-0.9063 * 0.0210","-0.4226 * 0.0210"},1},{"CCIP_HMCS",{"-0.8660 * 0.0210","-0.5000 * 0.0210"},1},{"CCIP_HMCS",{"-0.8192 * 0.0210","-0.5736 * 0.0210"},1},{"CCIP_HMCS",{"-0.7660 * 0.0210","-0.6428 * 0.0210"},1},{"CCIP_HMCS",{"-0.7071 * 0.0210","-0.7071 * 0.0210"},1},{"CCIP_HMCS",{"-0.6428 * 0.0210","-0.7660 * 0.0210"},1},{"CCIP_HMCS",{"-0.5736 * 0.0210","-0.8192 * 0.0210"},1},{"CCIP_HMCS",{"-0.5000 * 0.0210","-0.8660 * 0.0210"},1},{"CCIP_HMCS",{"-0.4226 * 0.0210","-0.9063 * 0.0210"},1},{"CCIP_HMCS",{"-0.3420 * 0.0210","-0.9397 * 0.0210"},1},{"CCIP_HMCS",{"-0.2588 * 0.0210","-0.9659 * 0.0210"},1},{"CCIP_HMCS",{"-0.1736 * 0.0210","-0.9848 * 0.0210"},1},{"CCIP_HMCS",{"-0.0872 * 0.0210","-0.9962 * 0.0210"},1},{"CCIP_HMCS",{"-0.0000 * 0.0210","-1.0000 * 0.0210"},1},{"CCIP_HMCS",{"0.0872 * 0.0210","-0.9962 * 0.0210"},1},{"CCIP_HMCS",{"0.1736 * 0.0210","-0.9848 * 0.0210"},1},{"CCIP_HMCS",{"0.2588 * 0.0210","-0.9659 * 0.0210"},1},{"CCIP_HMCS",{"0.3420 * 0.0210","-0.9397 * 0.0210"},1},{"CCIP_HMCS",{"0.4226 * 0.0210","-0.9063 * 0.0210"},1},{"CCIP_HMCS",{"0.5000 * 0.0210","-0.8660 * 0.0210"},1},{"CCIP_HMCS",{"0.5736 * 0.0210","-0.8192 * 0.0210"},1},{"CCIP_HMCS",{"0.6428 * 0.0210","-0.7660 * 0.0210"},1},{"CCIP_HMCS",{"0.7071 * 0.0210","-0.7071 * 0.0210"},1},{"CCIP_HMCS",{"0.7660 * 0.0210","-0.6428 * 0.0210"},1},{"CCIP_HMCS",{"0.8192 * 0.0210","-0.5736 * 0.0210"},1},{"CCIP_HMCS",{"0.8660 * 0.0210","-0.5000 * 0.0210"},1},{"CCIP_HMCS",{"0.9063 * 0.0210","-0.4226 * 0.0210"},1},{"CCIP_HMCS",{"0.9397 * 0.0210","-0.3420 * 0.0210"},1},{"CCIP_HMCS",{"0.9659 * 0.0210","-0.2588 * 0.0210"},1},{"CCIP_HMCS",{"0.9848 * 0.0210","-0.1736 * 0.0210"},1},{"CCIP_HMCS",{"0.9962 * 0.0210","-0.0872 * 0.0210"},1},{"CCIP_HMCS",{"1.0000 * 0.0210","-0.0000 * 0.0210"},1},{},{"CCIP_HMCS",{"-1.0000 * 0.0210","-0.0000 * 0.0210"},1},{"CCIP_HMCS",{"-1.0000 * 0.0210+0.008","-0.0000 * 0.0210"},1},{},{"CCIP_HMCS",{"1.0000 * 0.0210","-0.0000 * 0.0210"},1},{"CCIP_HMCS",{"1.0000 * 0.0210-0.008","-0.0000 * 0.0210"},1},{},{"CCIP_HMCS",{"0.0000 * 0.0210","1.0000 * 0.0210"},1},{"CCIP_HMCS",{"0.0000 * 0.0210","1.0000 * 0.0210-0.008"},1},{},{"CCIP_HMCS",{"0.0000 * 0.0210","-1.0000 * 0.0210"},1},{"CCIP_HMCS",{"0.0000 * 0.0210","-1.0000 * 0.0210+0.008"},1},{},{"CCIP_HMCS",{-0.0005,0},1},{"CCIP_HMCS",{0.0005,0},1},{},{"CCIP_HMCS",{0,-0.0005},1},{"CCIP_HMCS",{0,0.0005},1}};
						};
					};
					class Wagon_Wheel_Maverick
					{
						type = "group";
						condition = "(ATmissile-missilelocked)*(Targetdist*10>0)";
						class Wagon_Wheel_Circle
						{
							type = "line";
							width = 3;
							points[] = {{"Target",{"1.0000 * 0.0210","0.0000 * 0.0210"},1},{"Target",{"0.9962 * 0.0210","0.0872 * 0.0210"},1},{"Target",{"0.9848 * 0.0210","0.1736 * 0.0210"},1},{"Target",{"0.9659 * 0.0210","0.2588 * 0.0210"},1},{"Target",{"0.9397 * 0.0210","0.3420 * 0.0210"},1},{"Target",{"0.9063 * 0.0210","0.4226 * 0.0210"},1},{"Target",{"0.8660 * 0.0210","0.5000 * 0.0210"},1},{"Target",{"0.8192 * 0.0210","0.5736 * 0.0210"},1},{"Target",{"0.7660 * 0.0210","0.6428 * 0.0210"},1},{"Target",{"0.7071 * 0.0210","0.7071 * 0.0210"},1},{"Target",{"0.6428 * 0.0210","0.7660 * 0.0210"},1},{"Target",{"0.5736 * 0.0210","0.8192 * 0.0210"},1},{"Target",{"0.5000 * 0.0210","0.8660 * 0.0210"},1},{"Target",{"0.4226 * 0.0210","0.9063 * 0.0210"},1},{"Target",{"0.3420 * 0.0210","0.9397 * 0.0210"},1},{"Target",{"0.2588 * 0.0210","0.9659 * 0.0210"},1},{"Target",{"0.1736 * 0.0210","0.9848 * 0.0210"},1},{"Target",{"0.0872 * 0.0210","0.9962 * 0.0210"},1},{"Target",{"0.0000 * 0.0210","1.0000 * 0.0210"},1},{"Target",{"-0.0872 * 0.0210","0.9962 * 0.0210"},1},{"Target",{"-0.1736 * 0.0210","0.9848 * 0.0210"},1},{"Target",{"-0.2588 * 0.0210","0.9659 * 0.0210"},1},{"Target",{"-0.3420 * 0.0210","0.9397 * 0.0210"},1},{"Target",{"-0.4226 * 0.0210","0.9063 * 0.0210"},1},{"Target",{"-0.5000 * 0.0210","0.8660 * 0.0210"},1},{"Target",{"-0.5736 * 0.0210","0.8192 * 0.0210"},1},{"Target",{"-0.6428 * 0.0210","0.7660 * 0.0210"},1},{"Target",{"-0.7071 * 0.0210","0.7071 * 0.0210"},1},{"Target",{"-0.7660 * 0.0210","0.6428 * 0.0210"},1},{"Target",{"-0.8192 * 0.0210","0.5736 * 0.0210"},1},{"Target",{"-0.8660 * 0.0210","0.5000 * 0.0210"},1},{"Target",{"-0.9063 * 0.0210","0.4226 * 0.0210"},1},{"Target",{"-0.9397 * 0.0210","0.3420 * 0.0210"},1},{"Target",{"-0.9659 * 0.0210","0.2588 * 0.0210"},1},{"Target",{"-0.9848 * 0.0210","0.1736 * 0.0210"},1},{"Target",{"-0.9962 * 0.0210","0.0872 * 0.0210"},1},{"Target",{"-1.0000 * 0.0210","0.0000 * 0.0210"},1},{"Target",{"-0.9962 * 0.0210","-0.0872 * 0.0210"},1},{"Target",{"-0.9848 * 0.0210","-0.1736 * 0.0210"},1},{"Target",{"-0.9659 * 0.0210","-0.2588 * 0.0210"},1},{"Target",{"-0.9397 * 0.0210","-0.3420 * 0.0210"},1},{"Target",{"-0.9063 * 0.0210","-0.4226 * 0.0210"},1},{"Target",{"-0.8660 * 0.0210","-0.5000 * 0.0210"},1},{"Target",{"-0.8192 * 0.0210","-0.5736 * 0.0210"},1},{"Target",{"-0.7660 * 0.0210","-0.6428 * 0.0210"},1},{"Target",{"-0.7071 * 0.0210","-0.7071 * 0.0210"},1},{"Target",{"-0.6428 * 0.0210","-0.7660 * 0.0210"},1},{"Target",{"-0.5736 * 0.0210","-0.8192 * 0.0210"},1},{"Target",{"-0.5000 * 0.0210","-0.8660 * 0.0210"},1},{"Target",{"-0.4226 * 0.0210","-0.9063 * 0.0210"},1},{"Target",{"-0.3420 * 0.0210","-0.9397 * 0.0210"},1},{"Target",{"-0.2588 * 0.0210","-0.9659 * 0.0210"},1},{"Target",{"-0.1736 * 0.0210","-0.9848 * 0.0210"},1},{"Target",{"-0.0872 * 0.0210","-0.9962 * 0.0210"},1},{"Target",{"-0.0000 * 0.0210","-1.0000 * 0.0210"},1},{"Target",{"0.0872 * 0.0210","-0.9962 * 0.0210"},1},{"Target",{"0.1736 * 0.0210","-0.9848 * 0.0210"},1},{"Target",{"0.2588 * 0.0210","-0.9659 * 0.0210"},1},{"Target",{"0.3420 * 0.0210","-0.9397 * 0.0210"},1},{"Target",{"0.4226 * 0.0210","-0.9063 * 0.0210"},1},{"Target",{"0.5000 * 0.0210","-0.8660 * 0.0210"},1},{"Target",{"0.5736 * 0.0210","-0.8192 * 0.0210"},1},{"Target",{"0.6428 * 0.0210","-0.7660 * 0.0210"},1},{"Target",{"0.7071 * 0.0210","-0.7071 * 0.0210"},1},{"Target",{"0.7660 * 0.0210","-0.6428 * 0.0210"},1},{"Target",{"0.8192 * 0.0210","-0.5736 * 0.0210"},1},{"Target",{"0.8660 * 0.0210","-0.5000 * 0.0210"},1},{"Target",{"0.9063 * 0.0210","-0.4226 * 0.0210"},1},{"Target",{"0.9397 * 0.0210","-0.3420 * 0.0210"},1},{"Target",{"0.9659 * 0.0210","-0.2588 * 0.0210"},1},{"Target",{"0.9848 * 0.0210","-0.1736 * 0.0210"},1},{"Target",{"0.9962 * 0.0210","-0.0872 * 0.0210"},1},{"Target",{"1.0000 * 0.0210","-0.0000 * 0.0210"},1},{},{"Target",{"-1.0000 * 0.0210","-0.0000 * 0.0210"},1},{"Target",{"-1.0000 * 0.0210+0.008","-0.0000 * 0.0210"},1},{},{"Target",{"1.0000 * 0.0210","-0.0000 * 0.0210"},1},{"Target",{"1.0000 * 0.0210-0.008","-0.0000 * 0.0210"},1},{},{"Target",{"0.0000 * 0.0210","1.0000 * 0.0210"},1},{"Target",{"0.0000 * 0.0210","1.0000 * 0.0210-0.008"},1},{},{"Target",{"0.0000 * 0.0210","-1.0000 * 0.0210"},1},{"Target",{"0.0000 * 0.0210","-1.0000 * 0.0210+0.008"},1},{},{"Target",{-0.0005,0},1},{"Target",{0.0005,0},1},{},{"Target",{0,-0.0005},1},{"Target",{0,0.0005},1}};
						};
					};
					class Wagon_Wheel_Target_Locked
					{
						condition = "(ATmissile*missilelocked)-Bomb";
						blinkingPattern[] = {0.1,0.1};
						blinkingStartsOn = 1;
						class Wagon_Wheel_Circle_Lock
						{
							type = "line";
							width = 3;
							points[] = {{"Target",{"1.0000 * 0.0210","0.0000 * 0.0210"},1},{"Target",{"0.9962 * 0.0210","0.0872 * 0.0210"},1},{"Target",{"0.9848 * 0.0210","0.1736 * 0.0210"},1},{"Target",{"0.9659 * 0.0210","0.2588 * 0.0210"},1},{"Target",{"0.9397 * 0.0210","0.3420 * 0.0210"},1},{"Target",{"0.9063 * 0.0210","0.4226 * 0.0210"},1},{"Target",{"0.8660 * 0.0210","0.5000 * 0.0210"},1},{"Target",{"0.8192 * 0.0210","0.5736 * 0.0210"},1},{"Target",{"0.7660 * 0.0210","0.6428 * 0.0210"},1},{"Target",{"0.7071 * 0.0210","0.7071 * 0.0210"},1},{"Target",{"0.6428 * 0.0210","0.7660 * 0.0210"},1},{"Target",{"0.5736 * 0.0210","0.8192 * 0.0210"},1},{"Target",{"0.5000 * 0.0210","0.8660 * 0.0210"},1},{"Target",{"0.4226 * 0.0210","0.9063 * 0.0210"},1},{"Target",{"0.3420 * 0.0210","0.9397 * 0.0210"},1},{"Target",{"0.2588 * 0.0210","0.9659 * 0.0210"},1},{"Target",{"0.1736 * 0.0210","0.9848 * 0.0210"},1},{"Target",{"0.0872 * 0.0210","0.9962 * 0.0210"},1},{"Target",{"0.0000 * 0.0210","1.0000 * 0.0210"},1},{"Target",{"-0.0872 * 0.0210","0.9962 * 0.0210"},1},{"Target",{"-0.1736 * 0.0210","0.9848 * 0.0210"},1},{"Target",{"-0.2588 * 0.0210","0.9659 * 0.0210"},1},{"Target",{"-0.3420 * 0.0210","0.9397 * 0.0210"},1},{"Target",{"-0.4226 * 0.0210","0.9063 * 0.0210"},1},{"Target",{"-0.5000 * 0.0210","0.8660 * 0.0210"},1},{"Target",{"-0.5736 * 0.0210","0.8192 * 0.0210"},1},{"Target",{"-0.6428 * 0.0210","0.7660 * 0.0210"},1},{"Target",{"-0.7071 * 0.0210","0.7071 * 0.0210"},1},{"Target",{"-0.7660 * 0.0210","0.6428 * 0.0210"},1},{"Target",{"-0.8192 * 0.0210","0.5736 * 0.0210"},1},{"Target",{"-0.8660 * 0.0210","0.5000 * 0.0210"},1},{"Target",{"-0.9063 * 0.0210","0.4226 * 0.0210"},1},{"Target",{"-0.9397 * 0.0210","0.3420 * 0.0210"},1},{"Target",{"-0.9659 * 0.0210","0.2588 * 0.0210"},1},{"Target",{"-0.9848 * 0.0210","0.1736 * 0.0210"},1},{"Target",{"-0.9962 * 0.0210","0.0872 * 0.0210"},1},{"Target",{"-1.0000 * 0.0210","0.0000 * 0.0210"},1},{"Target",{"-0.9962 * 0.0210","-0.0872 * 0.0210"},1},{"Target",{"-0.9848 * 0.0210","-0.1736 * 0.0210"},1},{"Target",{"-0.9659 * 0.0210","-0.2588 * 0.0210"},1},{"Target",{"-0.9397 * 0.0210","-0.3420 * 0.0210"},1},{"Target",{"-0.9063 * 0.0210","-0.4226 * 0.0210"},1},{"Target",{"-0.8660 * 0.0210","-0.5000 * 0.0210"},1},{"Target",{"-0.8192 * 0.0210","-0.5736 * 0.0210"},1},{"Target",{"-0.7660 * 0.0210","-0.6428 * 0.0210"},1},{"Target",{"-0.7071 * 0.0210","-0.7071 * 0.0210"},1},{"Target",{"-0.6428 * 0.0210","-0.7660 * 0.0210"},1},{"Target",{"-0.5736 * 0.0210","-0.8192 * 0.0210"},1},{"Target",{"-0.5000 * 0.0210","-0.8660 * 0.0210"},1},{"Target",{"-0.4226 * 0.0210","-0.9063 * 0.0210"},1},{"Target",{"-0.3420 * 0.0210","-0.9397 * 0.0210"},1},{"Target",{"-0.2588 * 0.0210","-0.9659 * 0.0210"},1},{"Target",{"-0.1736 * 0.0210","-0.9848 * 0.0210"},1},{"Target",{"-0.0872 * 0.0210","-0.9962 * 0.0210"},1},{"Target",{"-0.0000 * 0.0210","-1.0000 * 0.0210"},1},{"Target",{"0.0872 * 0.0210","-0.9962 * 0.0210"},1},{"Target",{"0.1736 * 0.0210","-0.9848 * 0.0210"},1},{"Target",{"0.2588 * 0.0210","-0.9659 * 0.0210"},1},{"Target",{"0.3420 * 0.0210","-0.9397 * 0.0210"},1},{"Target",{"0.4226 * 0.0210","-0.9063 * 0.0210"},1},{"Target",{"0.5000 * 0.0210","-0.8660 * 0.0210"},1},{"Target",{"0.5736 * 0.0210","-0.8192 * 0.0210"},1},{"Target",{"0.6428 * 0.0210","-0.7660 * 0.0210"},1},{"Target",{"0.7071 * 0.0210","-0.7071 * 0.0210"},1},{"Target",{"0.7660 * 0.0210","-0.6428 * 0.0210"},1},{"Target",{"0.8192 * 0.0210","-0.5736 * 0.0210"},1},{"Target",{"0.8660 * 0.0210","-0.5000 * 0.0210"},1},{"Target",{"0.9063 * 0.0210","-0.4226 * 0.0210"},1},{"Target",{"0.9397 * 0.0210","-0.3420 * 0.0210"},1},{"Target",{"0.9659 * 0.0210","-0.2588 * 0.0210"},1},{"Target",{"0.9848 * 0.0210","-0.1736 * 0.0210"},1},{"Target",{"0.9962 * 0.0210","-0.0872 * 0.0210"},1},{"Target",{"1.0000 * 0.0210","-0.0000 * 0.0210"},1},{},{"Target",{"-1.0000 * 0.0210","-0.0000 * 0.0210"},1},{"Target",{"-1.0000 * 0.0210+0.008","-0.0000 * 0.0210"},1},{},{"Target",{"1.0000 * 0.0210","-0.0000 * 0.0210"},1},{"Target",{"1.0000 * 0.0210-0.008","-0.0000 * 0.0210"},1},{},{"Target",{"0.0000 * 0.0210","1.0000 * 0.0210"},1},{"Target",{"0.0000 * 0.0210","1.0000 * 0.0210-0.008"},1},{},{"Target",{"0.0000 * 0.0210","-1.0000 * 0.0210"},1},{"Target",{"0.0000 * 0.0210","-1.0000 * 0.0210+0.008"},1},{},{"Target",{-0.0005,0},1},{"Target",{0.0005,0},1},{},{"Target",{0,-0.0005},1},{"Target",{0,0.0005},1}};
						};
					};
					class TGP_SPI
					{
						type = "group";
						class TGP_Slave
						{
							type = "line";
							width = 2;
							points[] = {{"TGP_point",{-0.0075,0},1},{"TGP_point",{0,-0.01},1},{"TGP_point",{0.0075,0},1},{"TGP_point",{0,0.01},1},{"TGP_point",{-0.0075,0},1}};
						};
						class TGP_ghost
						{
							type = "line";
							width = 2;
							points[] = {{"TGP_point",1,"Limit0109",1,{"-0.0075+0.0033*0.75","0.000+0.0033"},1},{"TGP_point",1,"Limit0109",1,{-0.0075,0},1},{"TGP_point",1,"Limit0109",1,{"-0.0075+0.0033*0.75","0.000-0.0033"},1},{},{"TGP_point",1,"Limit0109",1,{"0.000-0.0033*0.75","-0.010+0.0033"},1},{"TGP_point",1,"Limit0109",1,{0,-0.01},1},{"TGP_point",1,"Limit0109",1,{"0.000+0.0033*0.75","-0.010+0.0033"},1},{},{"TGP_point",1,"Limit0109",1,{"0.0075-0.0033*0.75","0.000-0.0033"},1},{"TGP_point",1,"Limit0109",1,{0.0075,0},1},{"TGP_point",1,"Limit0109",1,{"0.0075-0.0033*0.75","0.000+0.0033"},1},{},{"TGP_point",1,"Limit0109",1,{"0.000+0.0033*0.75","0.010-0.0033"},1},{"TGP_point",1,"Limit0109",1,{0,0.01},1},{"TGP_point",1,"Limit0109",1,{"0.000-0.0033*0.75","0.010-0.0033"},1}};
						};
					};
					class STPT
					{
						type = "group";
						condition = "wpvalid";
						class STPT_box_Slave
						{
							type = "line";
							width = 4;
							points[] = {{"STPT_2_VIEW",{-0.01,-0.01},1},{"STPT_2_VIEW",{0.01,-0.01},1},{"STPT_2_VIEW",{0.01,0.01},1},{"STPT_2_VIEW",{-0.01,0.01},1},{"STPT_2_VIEW",{-0.01,-0.01},1}};
						};
						class STPT_box_Ghost
						{
							type = "line";
							width = 3;
							points[] = {{"STPT_2_VIEW",1,"Limit0109",1,{"-0.010+0.0066",-0.01},1},{"STPT_2_VIEW",1,"Limit0109",1,{-0.01,-0.01},1},{"STPT_2_VIEW",1,"Limit0109",1,{-0.01,"-0.010+0.0066"},1},{},{"STPT_2_VIEW",1,"Limit0109",1,{"0.010-0.0066",-0.01},1},{"STPT_2_VIEW",1,"Limit0109",1,{0.01,-0.01},1},{"STPT_2_VIEW",1,"Limit0109",1,{0.01,"-0.010+0.0066"},1},{},{"STPT_2_VIEW",1,"Limit0109",1,{"0.010-0.0066",0.01},1},{"STPT_2_VIEW",1,"Limit0109",1,{0.01,0.01},1},{"STPT_2_VIEW",1,"Limit0109",1,{0.01,"0.010-0.0066"},1},{},{"STPT_2_VIEW",1,"Limit0109",1,{"-0.010+0.0066",0.01},1},{"STPT_2_VIEW",1,"Limit0109",1,{-0.01,0.01},1},{"STPT_2_VIEW",1,"Limit0109",1,{-0.01,"0.010-0.0066"},1}};
						};
						class STPT_Dist
						{
							type = "text";
							source = "WPDist";
							sourceScale = 0.00054;
							sourcePrecision = 1;
							align = "center";
							scale = 1;
							pos[] = {"STPT_2_VIEW",{0,0.01},1};
							right[] = {"STPT_2_VIEW",{0.025,0.01},1};
							down[] = {"STPT_2_VIEW",{0,0.035},1};
						};
					};
				};
			};
			class HUD_Horizon
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0.12;
				borderRight = 0.12;
				borderTop = 0.05;
				borderBottom = 0.15;
				color[] = {0.15,1,0.15,1};
				enableParallax = 1;
				class Bones
				{
					class RangeBone_Imperial
					{
						type = "linear";
						source = "targetDist";
						sourceScale = 0.00054;
						min = 0;
						max = 10;
						minPos[] = {0.08,0.4};
						maxPos[] = {0.08,0.6};
					};
					class RangeBone_Metric
					{
						type = "linear";
						source = "targetDist";
						sourceScale = 0.001;
						min = 0;
						max = 12;
						minPos[] = {0.08,0.4};
						maxPos[] = {0.08,0.6};
					};
					class RadarAltitudeBone_Imperial
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						min = 0;
						max = 1500;
						minPos[] = {0.71,0.4};
						maxPos[] = {0.71,0.6};
					};
					class RadarAltitudeBone_Metric
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1;
						min = 0;
						max = 500;
						minPos[] = {0.71,0.4};
						maxPos[] = {0.71,0.6};
					};
					class VspeedBone_Imperial
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -100;
						max = 100;
						minPos[] = {0.93,0.4};
						maxPos[] = {0.93,0.6};
					};
					class VspeedBone_Metric
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -10;
						max = 10;
						minPos[] = {0.93,0.4};
						maxPos[] = {0.93,0.6};
					};
					class HDG_Tape_WYPT_Indicator
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5,0.927};
						pos10[] = {"0.500 + 0.3/4",0.927};
					};
					class Limit_HDG_Tape
					{
						type = "limit";
						limits[] = {0.35,0.927,0.65,0.927};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.2,0.2,0.8,0.8};
					};
					class HorizonVector
					{
						type = "horizontoview";
						pos0[] = {0.5,0.5};
						pos10[] = {1,1};
						angle = 0;
					};
					class CCIP_HMCS
					{
						type = "vector";
						source = "impactpointtoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class TGP_point
					{
						type = "vector";
						source = "pilotcameratoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class STPT_2_VIEW
					{
						type = "vector";
						source = "wppointtoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class Target
					{
						type = "vector";
						source = "targetToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class WeaponAim
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class HorizonIndicatorBank
					{
						type = "rotational";
						source = "horizonBank";
						sourceScale = 1;
						center[] = {0.9,0.8};
						min = "-3.1415927";
						max = "3.1415927";
						minAngle = 180;
						maxAngle = -180;
						aspectRatio = 1;
					};
					class HorizonDive_Left
					{
						source = "horizonDive";
						type = "rotational";
						center[] = {0.9,0.8};
						min = "-3.14159265359 / 2";
						max = "3.14159265359 / 2";
						minAngle = 90;
						maxAngle = -90;
						aspectRatio = 1;
					};
					class HorizonDive_Right
					{
						source = "horizonDive";
						type = "rotational";
						center[] = {0.9,0.8};
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
						pos0[] = {0.5,0.32};
						pos10[] = {1.75,1.57};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0,0};
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
						type = "vector";
						source = "velocity";
						pos0[] = {"0.5+0.000","0.32+0.000"};
						pos10[] = {"0.5+0.700","0.32+0.700"};
					};
					class Velocity_Pitch_Ladder
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0,0};
						pos10[] = {0.7,0.7};
					};
					class Level0: Velocity
					{
						type = "horizon";
						angle = 0;
					};
					class LevelP05: Level0
					{
						angle = 5;
					};
					class LevelM05: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
					class LevelP55: Level0
					{
						angle = 55;
					};
					class LevelM55: Level0
					{
						angle = -55;
					};
					class LevelP60: Level0
					{
						angle = 60;
					};
					class LevelM60: Level0
					{
						angle = -60;
					};
					class LevelP65: Level0
					{
						angle = 65;
					};
					class LevelM65: Level0
					{
						angle = -65;
					};
					class LevelP70: Level0
					{
						angle = 70;
					};
					class LevelM70: Level0
					{
						angle = -70;
					};
					class LevelP75: Level0
					{
						angle = 75;
					};
					class LevelM75: Level0
					{
						angle = -75;
					};
					class LevelP80: Level0
					{
						angle = 80;
					};
					class LevelM80: Level0
					{
						angle = -80;
					};
					class LevelP85: Level0
					{
						angle = 85;
					};
					class LevelM85: Level0
					{
						angle = -85;
					};
					class LevelP90: Level0
					{
						angle = 90;
					};
				};
				class Draw
				{
					condition = "on";
					color[] = {"user3","user4","user5"};
					alpha = "user6";
					class Total_Velocity_Vector
					{
						type = "line";
						width = 4;
						points[] = {{"Velocity",1,{"0*0.75","-0.02*0.75"},1},{"Velocity",1,{"0.0099999998*0.75","-0.01732*0.75"},1},{"Velocity",1,{"0.01732*0.75","-0.0099999998*0.75"},1},{"Velocity",1,{"0.02*0.75","0*0.75"},1},{"Velocity",1,{"0.01732*0.75","0.0099999998*0.75"},1},{"Velocity",1,{"0.0099999998*0.75","0.01732*0.75"},1},{"Velocity",1,{"0*0.75","0.02*0.75"},1},{"Velocity",1,{"-0.0099999998*0.75","0.01732*0.75"},1},{"Velocity",1,{"-0.01732*0.75","0.0099999998*0.75"},1},{"Velocity",1,{"-0.02*0.75","0*0.75"},1},{"Velocity",1,{"-0.01732*0.75","-0.0099999998*0.75"},1},{"Velocity",1,{"-0.0099999998*0.75","-0.01732*0.75"},1},{"Velocity",1,{"0*0.75","-0.02*0.75"},1},{},{"Velocity",1,{"0.039999999*0.75","0*0.75"},1},{"Velocity",1,{"0.02*0.75","0*0.75"},1},{},{"Velocity",1,{"-0.039999999*0.75","0*0.75"},1},{"Velocity",1,{"-0.02*0.75","0*0.75"},1},{},{"Velocity",1,{"0*0.75","-0.039999999*0.75"},1},{"Velocity",1,{"0*0.75","-0.02*0.75"},1}};
					};
					class Pitch_Ladder
					{
						type = "group";
						clipTL[] = {0.1,0.1};
						clipBR[] = {0.9,0.9};
						class Level0
						{
							type = "line";
							width = 8;
							points[] = {{"Level0",{-0.18,0},1,"ForwardVec",1,"Velocity_Pitch_Ladder",1},{"Level0",{-0.05,0},1,"ForwardVec",1,"Velocity_Pitch_Ladder",1},{},{"Level0",{0.05,0},1,"ForwardVec",1,"Velocity_Pitch_Ladder",1},{"Level0",{0.18,0},1,"ForwardVec",1,"Velocity_Pitch_Ladder",1}};
						};
						class LevelP05
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP05",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP05",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP05",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP05",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP05",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP05",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_05
						{
							type = "text";
							source = "static";
							text = "05";
							align = "left";
							scale = 1;
							pos[] = {"LevelP05",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP05",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP05",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_05: VALP_1_05
						{
							align = "right";
							pos[] = {"LevelP05",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP05",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP05",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP10
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP10",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP10",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP10",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP10",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP10",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP10",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_10
						{
							type = "text";
							source = "static";
							text = "10";
							align = "left";
							scale = 1;
							pos[] = {"LevelP10",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP10",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP10",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_10: VALP_1_10
						{
							align = "right";
							pos[] = {"LevelP10",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP10",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP10",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP15
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP15",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP15",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP15",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP15",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP15",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP15",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_15
						{
							type = "text";
							source = "static";
							text = "15";
							align = "left";
							scale = 1;
							pos[] = {"LevelP15",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP15",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP15",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_15: VALP_1_15
						{
							align = "right";
							pos[] = {"LevelP15",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP15",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP15",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP20
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP20",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP20",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP20",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP20",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP20",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP20",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_20
						{
							type = "text";
							source = "static";
							text = "20";
							align = "left";
							scale = 1;
							pos[] = {"LevelP20",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP20",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP20",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_20: VALP_1_20
						{
							align = "right";
							pos[] = {"LevelP20",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP20",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP20",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP25
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP25",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP25",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP25",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP25",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP25",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP25",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_25
						{
							type = "text";
							source = "static";
							text = "25";
							align = "left";
							scale = 1;
							pos[] = {"LevelP25",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP25",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP25",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_25: VALP_1_25
						{
							align = "right";
							pos[] = {"LevelP25",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP25",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP25",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP30
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP30",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP30",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP30",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP30",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP30",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP30",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_30
						{
							type = "text";
							source = "static";
							text = "30";
							align = "left";
							scale = 1;
							pos[] = {"LevelP30",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP30",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP30",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_30: VALP_1_30
						{
							align = "right";
							pos[] = {"LevelP30",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP30",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP30",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP35
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP35",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP35",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP35",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP35",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP35",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP35",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_35
						{
							type = "text";
							source = "static";
							text = "35";
							align = "left";
							scale = 1;
							pos[] = {"LevelP35",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP35",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP35",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_35: VALP_1_35
						{
							align = "right";
							pos[] = {"LevelP35",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP35",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP35",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP40
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP40",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP40",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP40",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP40",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP40",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP40",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_40
						{
							type = "text";
							source = "static";
							text = "40";
							align = "left";
							scale = 1;
							pos[] = {"LevelP40",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP40",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP40",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_40: VALP_1_40
						{
							align = "right";
							pos[] = {"LevelP40",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP40",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP40",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP45
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP45",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP45",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP45",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP45",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP45",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP45",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_45
						{
							type = "text";
							source = "static";
							text = "45";
							align = "left";
							scale = 1;
							pos[] = {"LevelP45",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP45",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP45",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_45: VALP_1_45
						{
							align = "right";
							pos[] = {"LevelP45",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP45",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP45",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP50
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP50",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP50",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP50",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP50",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP50",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP50",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_50
						{
							type = "text";
							source = "static";
							text = "50";
							align = "left";
							scale = 1;
							pos[] = {"LevelP50",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP50",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP50",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_50: VALP_1_50
						{
							align = "right";
							pos[] = {"LevelP50",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP50",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP50",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP55
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP55",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP55",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP55",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP55",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP55",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP55",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_55
						{
							type = "text";
							source = "static";
							text = "55";
							align = "left";
							scale = 1;
							pos[] = {"LevelP55",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP55",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP55",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_55: VALP_1_55
						{
							align = "right";
							pos[] = {"LevelP55",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP55",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP55",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP60
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP60",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP60",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP60",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP60",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP60",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP60",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_60
						{
							type = "text";
							source = "static";
							text = "60";
							align = "left";
							scale = 1;
							pos[] = {"LevelP60",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP60",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP60",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_60: VALP_1_60
						{
							align = "right";
							pos[] = {"LevelP60",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP60",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP60",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP65
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP65",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP65",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP65",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP65",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP65",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP65",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_65
						{
							type = "text";
							source = "static";
							text = "65";
							align = "left";
							scale = 1;
							pos[] = {"LevelP65",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP65",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP65",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_65: VALP_1_65
						{
							align = "right";
							pos[] = {"LevelP65",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP65",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP65",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP70
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP70",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP70",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP70",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP70",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP70",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP70",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_70
						{
							type = "text";
							source = "static";
							text = "70";
							align = "left";
							scale = 1;
							pos[] = {"LevelP70",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP70",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP70",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_70: VALP_1_70
						{
							align = "right";
							pos[] = {"LevelP70",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP70",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP70",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP75
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP75",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP75",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP75",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP75",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP75",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP75",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_75
						{
							type = "text";
							source = "static";
							text = "75";
							align = "left";
							scale = 1;
							pos[] = {"LevelP75",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP75",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP75",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_75: VALP_1_75
						{
							align = "right";
							pos[] = {"LevelP75",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP75",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP75",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP80
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP80",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP80",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP80",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP80",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP80",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP80",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_80
						{
							type = "text";
							source = "static";
							text = "80";
							align = "left";
							scale = 1;
							pos[] = {"LevelP80",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP80",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP80",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_80: VALP_1_80
						{
							align = "right";
							pos[] = {"LevelP80",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP80",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP80",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP85
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP85",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP85",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP85",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP85",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP85",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP85",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_85
						{
							type = "text";
							source = "static";
							text = "85";
							align = "left";
							scale = 1;
							pos[] = {"LevelP85",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP85",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP85",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_85: VALP_1_85
						{
							align = "right";
							pos[] = {"LevelP85",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP85",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP85",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelP90
						{
							type = "line";
							width = 8;
							points[] = {{"LevelP90",{-0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP90",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP90",{-0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelP90",{0.18,0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP90",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelP90",{0.05,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALP_1_90
						{
							type = "text";
							source = "static";
							text = "90";
							align = "left";
							scale = 1;
							pos[] = {"LevelP90",{-0.194,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP90",{-0.134,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP90",{-0.194,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALP_2_90: VALP_1_90
						{
							align = "right";
							pos[] = {"LevelP90",{0.19,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelP90",{0.25,-0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelP90",{0.19,0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM05
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM05",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM05",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM05",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM05",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM05",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM05",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM05",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM05",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM05",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM05",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM05",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM05",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM05",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM05",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_05
						{
							type = "text";
							source = "static";
							text = "05";
							align = "left";
							scale = 1;
							pos[] = {"LevelM05",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM05",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM05",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_05: VALM_1_05
						{
							align = "right";
							pos[] = {"LevelM05",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM05",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM05",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM10
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM10",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM10",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM10",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM10",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM10",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM10",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM10",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM10",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM10",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM10",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM10",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM10",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM10",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM10",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_10
						{
							type = "text";
							source = "static";
							text = "10";
							align = "left";
							scale = 1;
							pos[] = {"LevelM10",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM10",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM10",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_10: VALM_1_10
						{
							align = "right";
							pos[] = {"LevelM10",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM10",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM10",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM15
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM15",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM15",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM15",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM15",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM15",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM15",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM15",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM15",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM15",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM15",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM15",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM15",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM15",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM15",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_15
						{
							type = "text";
							source = "static";
							text = "15";
							align = "left";
							scale = 1;
							pos[] = {"LevelM15",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM15",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM15",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_15: VALM_1_15
						{
							align = "right";
							pos[] = {"LevelM15",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM15",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM15",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM20
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM20",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM20",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM20",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM20",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM20",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM20",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM20",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM20",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM20",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM20",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM20",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM20",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM20",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM20",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_20
						{
							type = "text";
							source = "static";
							text = "20";
							align = "left";
							scale = 1;
							pos[] = {"LevelM20",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM20",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM20",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_20: VALM_1_20
						{
							align = "right";
							pos[] = {"LevelM20",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM20",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM20",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM25
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM25",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM25",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM25",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM25",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM25",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM25",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM25",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM25",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM25",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM25",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM25",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM25",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM25",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM25",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_25
						{
							type = "text";
							source = "static";
							text = "25";
							align = "left";
							scale = 1;
							pos[] = {"LevelM25",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM25",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM25",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_25: VALM_1_25
						{
							align = "right";
							pos[] = {"LevelM25",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM25",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM25",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM30
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM30",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM30",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM30",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM30",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM30",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM30",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM30",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM30",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM30",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM30",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM30",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM30",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM30",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM30",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_30
						{
							type = "text";
							source = "static";
							text = "30";
							align = "left";
							scale = 1;
							pos[] = {"LevelM30",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM30",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM30",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_30: VALM_1_30
						{
							align = "right";
							pos[] = {"LevelM30",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM30",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM30",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM35
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM35",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM35",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM35",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM35",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM35",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM35",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM35",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM35",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM35",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM35",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM35",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM35",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM35",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM35",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_35
						{
							type = "text";
							source = "static";
							text = "35";
							align = "left";
							scale = 1;
							pos[] = {"LevelM35",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM35",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM35",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_35: VALM_1_35
						{
							align = "right";
							pos[] = {"LevelM35",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM35",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM35",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM40
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM40",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM40",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM40",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM40",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM40",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM40",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM40",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM40",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM40",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM40",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM40",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM40",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM40",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM40",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_40
						{
							type = "text";
							source = "static";
							text = "40";
							align = "left";
							scale = 1;
							pos[] = {"LevelM40",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM40",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM40",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_40: VALM_1_40
						{
							align = "right";
							pos[] = {"LevelM40",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM40",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM40",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM45
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM45",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM45",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM45",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM45",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM45",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM45",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM45",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM45",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM45",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM45",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM45",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM45",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM45",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM45",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_45
						{
							type = "text";
							source = "static";
							text = "45";
							align = "left";
							scale = 1;
							pos[] = {"LevelM45",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM45",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM45",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_45: VALM_1_45
						{
							align = "right";
							pos[] = {"LevelM45",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM45",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM45",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM50
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM50",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM50",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM50",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM50",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM50",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM50",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM50",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM50",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM50",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM50",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM50",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM50",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM50",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM50",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_50
						{
							type = "text";
							source = "static";
							text = "50";
							align = "left";
							scale = 1;
							pos[] = {"LevelM50",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM50",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM50",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_50: VALM_1_50
						{
							align = "right";
							pos[] = {"LevelM50",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM50",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM50",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM55
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM55",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM55",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM55",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM55",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM55",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM55",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM55",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM55",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM55",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM55",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM55",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM55",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM55",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM55",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_55
						{
							type = "text";
							source = "static";
							text = "55";
							align = "left";
							scale = 1;
							pos[] = {"LevelM55",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM55",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM55",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_55: VALM_1_55
						{
							align = "right";
							pos[] = {"LevelM55",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM55",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM55",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM60
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM60",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM60",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM60",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM60",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM60",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM60",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM60",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM60",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM60",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM60",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM60",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM60",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM60",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM60",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_60
						{
							type = "text";
							source = "static";
							text = "60";
							align = "left";
							scale = 1;
							pos[] = {"LevelM60",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM60",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM60",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_60: VALM_1_60
						{
							align = "right";
							pos[] = {"LevelM60",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM60",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM60",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM65
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM65",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM65",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM65",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM65",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM65",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM65",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM65",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM65",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM65",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM65",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM65",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM65",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM65",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM65",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_65
						{
							type = "text";
							source = "static";
							text = "65";
							align = "left";
							scale = 1;
							pos[] = {"LevelM65",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM65",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM65",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_65: VALM_1_65
						{
							align = "right";
							pos[] = {"LevelM65",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM65",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM65",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM70
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM70",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM70",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM70",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM70",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM70",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM70",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM70",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM70",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM70",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM70",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM70",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM70",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM70",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM70",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_70
						{
							type = "text";
							source = "static";
							text = "70";
							align = "left";
							scale = 1;
							pos[] = {"LevelM70",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM70",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM70",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_70: VALM_1_70
						{
							align = "right";
							pos[] = {"LevelM70",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM70",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM70",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM75
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM75",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM75",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM75",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM75",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM75",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM75",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM75",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM75",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM75",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM75",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM75",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM75",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM75",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM75",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_75
						{
							type = "text";
							source = "static";
							text = "75";
							align = "left";
							scale = 1;
							pos[] = {"LevelM75",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM75",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM75",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_75: VALM_1_75
						{
							align = "right";
							pos[] = {"LevelM75",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM75",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM75",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM80
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM80",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM80",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM80",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM80",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM80",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM80",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM80",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM80",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM80",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM80",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM80",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM80",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM80",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM80",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_80
						{
							type = "text";
							source = "static";
							text = "80";
							align = "left";
							scale = 1;
							pos[] = {"LevelM80",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM80",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM80",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_80: VALM_1_80
						{
							align = "right";
							pos[] = {"LevelM80",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM80",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM80",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class LevelM85
						{
							type = "line";
							width = 8;
							points[] = {{"LevelM85",{-0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM85",{-0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM85",{-0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM85",{-0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM85",{-0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM85",{-0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM85",{-0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM85",{0.09,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM85",{0.06,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM85",{0.13,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM85",{0.1,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{},{"LevelM85",{0.18,-0.02},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM85",{0.18,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1},{"LevelM85",{0.14,0},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1}};
						};
						class VALM_1_85
						{
							type = "text";
							source = "static";
							text = "85";
							align = "left";
							scale = 1;
							pos[] = {"LevelM85",{-0.194,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM85",{-0.134,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM85",{-0.194,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
						class VALM_2_85: VALM_1_85
						{
							align = "right";
							pos[] = {"LevelM85",{0.19,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							right[] = {"LevelM85",{0.25,-0.045},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
							down[] = {"LevelM85",{0.19,0.015},1,"Velocity_Pitch_Ladder",1,"ForwardVec",1};
						};
					};
				};
			};
			class MFD_Left
			{
				topLeft = "MFD_1_top_left";
				topRight = "MFD_1_top_right";
				bottomLeft = "MFD_1_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0.1;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				class Bones
				{
					class PylonAmmo1
					{
						type = "linear";
						source = "PylonAmmoRelative";
						sourceIndex = 1;
						sourceScale = 1;
						min = 0;
						max = 1;
						minPos[] = {0,0};
						maxPos[] = {0,0.0517578};
					};
					class PylonAmmo2: PylonAmmo1
					{
						sourceIndex = 2;
					};
					class PylonAmmo3: PylonAmmo1
					{
						sourceIndex = 3;
					};
					class PylonAmmo4: PylonAmmo1
					{
						sourceIndex = 4;
					};
					class PylonAmmo5: PylonAmmo1
					{
						sourceIndex = 5;
					};
					class PylonAmmo6: PylonAmmo1
					{
						sourceIndex = 6;
					};
					class PylonAmmo7: PylonAmmo1
					{
						sourceIndex = 7;
					};
					class PylonAmmo8: PylonAmmo1
					{
						sourceIndex = 8;
					};
					class PylonAmmo9: PylonAmmo1
					{
						sourceIndex = 9;
					};
					class PylonAmmo10: PylonAmmo1
					{
						sourceIndex = 10;
					};
				};
				class Draw
				{
					color[] = {0,0.84,0,1};
					alpha = 1;
					condition = "on";
					class PylonSelected6
					{
						condition = "PylonSelected6>0";
						class NotEmpty
						{
							color[] = {0.59,0.3,0,1};
							condition = "PylonAmmoRelative6>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.113477,0.157633},1},{{0.113477,0.244547},1},{{0.322461,0.244547},1},{{0.322461,0.157633},1},{{0.113477,0.157633},1},{},{{0.322344,0.226969},1},{{0.3575,0.226969},1},{{0.3575,0.175211},1},{{0.322344,0.175211},1},{{0.322344,0.226969},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.322344,0.226969},1},{{0.3575,0.226969},1},{"PylonAmmo6",{0.3575,0.175211},1},{"PylonAmmo6",{0.322344,0.175211},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 6;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.163727},1};
								right[] = {{0.163281,0.163727},1};
								down[] = {{0.127148,0.198883},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 6;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.203727},1};
								right[] = {{0.163281,0.203727},1};
								down[] = {{0.127148,0.238883},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 6;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.307148,0.203727},1};
								right[] = {{0.343281,0.203727},1};
								down[] = {{0.307148,0.238883},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative6<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.322344,0.226969},1},{{0.3575,0.226969},1},{{0.3575,0.175211},1},{{0.322344,0.175211},1},{{0.322344,0.226969},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.113477,0.157633},1},{{0.113477,0.244547},1},{{0.322461,0.244547},1},{{0.322461,0.157633},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 6;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.127148,0.163492},1};
									right[] = {{0.14375,0.163492},1};
									down[] = {{0.127148,0.188883},1};
								};
							};
						};
					};
					class Pylon6
					{
						condition = "PylonSelected6<=0";
						class NotEmpty
						{
							color[] = {0,0.84,0,1};
							condition = "PylonAmmoRelative6>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.113477,0.157633},1},{{0.113477,0.244547},1},{{0.322461,0.244547},1},{{0.322461,0.157633},1},{{0.113477,0.157633},1},{},{{0.322344,0.226969},1},{{0.3575,0.226969},1},{{0.3575,0.175211},1},{{0.322344,0.175211},1},{{0.322344,0.226969},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.322344,0.226969},1},{{0.3575,0.226969},1},{"PylonAmmo6",{0.3575,0.175211},1},{"PylonAmmo6",{0.322344,0.175211},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 6;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.163727},1};
								right[] = {{0.163281,0.163727},1};
								down[] = {{0.127148,0.198883},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 6;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.203727},1};
								right[] = {{0.163281,0.203727},1};
								down[] = {{0.127148,0.238883},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 6;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.307148,0.203727},1};
								right[] = {{0.343281,0.203727},1};
								down[] = {{0.307148,0.238883},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative6<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.322344,0.226969},1},{{0.3575,0.226969},1},{{0.3575,0.175211},1},{{0.322344,0.175211},1},{{0.322344,0.226969},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.113477,0.157633},1},{{0.113477,0.244547},1},{{0.322461,0.244547},1},{{0.322461,0.157633},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 6;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.127148,0.163492},1};
									right[] = {{0.14375,0.163492},1};
									down[] = {{0.127148,0.188883},1};
								};
							};
						};
					};
					class PylonSelected7
					{
						condition = "PylonSelected7>0";
						class NotEmpty
						{
							color[] = {0.59,0.3,0,1};
							condition = "PylonAmmoRelative7>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.113477,0.273844},1},{{0.113477,0.360758},1},{{0.322461,0.360758},1},{{0.322461,0.273844},1},{{0.113477,0.273844},1},{},{{0.322344,0.34318},1},{{0.3575,0.34318},1},{{0.3575,0.291422},1},{{0.322344,0.291422},1},{{0.322344,0.34318},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.322344,0.34318},1},{{0.3575,0.34318},1},{"PylonAmmo7",{0.3575,0.291422},1},{"PylonAmmo7",{0.322344,0.291422},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 7;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.279938},1};
								right[] = {{0.163281,0.279938},1};
								down[] = {{0.127148,0.315094},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 7;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.319937},1};
								right[] = {{0.163281,0.319937},1};
								down[] = {{0.127148,0.355094},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 7;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.307148,0.319937},1};
								right[] = {{0.343281,0.319937},1};
								down[] = {{0.307148,0.355094},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative7<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.322344,0.34318},1},{{0.3575,0.34318},1},{{0.3575,0.291422},1},{{0.322344,0.291422},1},{{0.322344,0.34318},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.113477,0.273844},1},{{0.113477,0.360758},1},{{0.322461,0.360758},1},{{0.322461,0.273844},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 7;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.127148,0.279703},1};
									right[] = {{0.14375,0.279703},1};
									down[] = {{0.127148,0.305094},1};
								};
							};
						};
					};
					class Pylon7
					{
						condition = "PylonSelected7<=0";
						class NotEmpty
						{
							color[] = {0,0.84,0,1};
							condition = "PylonAmmoRelative7>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.113477,0.273844},1},{{0.113477,0.360758},1},{{0.322461,0.360758},1},{{0.322461,0.273844},1},{{0.113477,0.273844},1},{},{{0.322344,0.34318},1},{{0.3575,0.34318},1},{{0.3575,0.291422},1},{{0.322344,0.291422},1},{{0.322344,0.34318},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.322344,0.34318},1},{{0.3575,0.34318},1},{"PylonAmmo7",{0.3575,0.291422},1},{"PylonAmmo7",{0.322344,0.291422},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 7;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.279938},1};
								right[] = {{0.163281,0.279938},1};
								down[] = {{0.127148,0.315094},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 7;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.319937},1};
								right[] = {{0.163281,0.319937},1};
								down[] = {{0.127148,0.355094},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 7;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.307148,0.319937},1};
								right[] = {{0.343281,0.319937},1};
								down[] = {{0.307148,0.355094},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative7<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.322344,0.34318},1},{{0.3575,0.34318},1},{{0.3575,0.291422},1},{{0.322344,0.291422},1},{{0.322344,0.34318},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.113477,0.273844},1},{{0.113477,0.360758},1},{{0.322461,0.360758},1},{{0.322461,0.273844},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 7;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.127148,0.279703},1};
									right[] = {{0.14375,0.279703},1};
									down[] = {{0.127148,0.305094},1};
								};
							};
						};
					};
					class PylonSelected8
					{
						condition = "PylonSelected8>0";
						class NotEmpty
						{
							color[] = {0.59,0.3,0,1};
							condition = "PylonAmmoRelative8>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.113477,0.390055},1},{{0.113477,0.476969},1},{{0.322461,0.476969},1},{{0.322461,0.390055},1},{{0.113477,0.390055},1},{},{{0.322344,0.459391},1},{{0.3575,0.459391},1},{{0.3575,0.407633},1},{{0.322344,0.407633},1},{{0.322344,0.459391},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.322344,0.459391},1},{{0.3575,0.459391},1},{"PylonAmmo8",{0.3575,0.407633},1},{"PylonAmmo8",{0.322344,0.407633},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 8;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.396148},1};
								right[] = {{0.163281,0.396148},1};
								down[] = {{0.127148,0.431305},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 8;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.436148},1};
								right[] = {{0.163281,0.436148},1};
								down[] = {{0.127148,0.471305},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 8;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.307148,0.436148},1};
								right[] = {{0.343281,0.436148},1};
								down[] = {{0.307148,0.471305},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative8<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.322344,0.459391},1},{{0.3575,0.459391},1},{{0.3575,0.407633},1},{{0.322344,0.407633},1},{{0.322344,0.459391},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.113477,0.390055},1},{{0.113477,0.476969},1},{{0.322461,0.476969},1},{{0.322461,0.390055},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 8;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.127148,0.395914},1};
									right[] = {{0.14375,0.395914},1};
									down[] = {{0.127148,0.421305},1};
								};
							};
						};
					};
					class Pylon8
					{
						condition = "PylonSelected8<=0";
						class NotEmpty
						{
							color[] = {0,0.84,0,1};
							condition = "PylonAmmoRelative8>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.113477,0.390055},1},{{0.113477,0.476969},1},{{0.322461,0.476969},1},{{0.322461,0.390055},1},{{0.113477,0.390055},1},{},{{0.322344,0.459391},1},{{0.3575,0.459391},1},{{0.3575,0.407633},1},{{0.322344,0.407633},1},{{0.322344,0.459391},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.322344,0.459391},1},{{0.3575,0.459391},1},{"PylonAmmo8",{0.3575,0.407633},1},{"PylonAmmo8",{0.322344,0.407633},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 8;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.396148},1};
								right[] = {{0.163281,0.396148},1};
								down[] = {{0.127148,0.431305},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 8;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.436148},1};
								right[] = {{0.163281,0.436148},1};
								down[] = {{0.127148,0.471305},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 8;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.307148,0.436148},1};
								right[] = {{0.343281,0.436148},1};
								down[] = {{0.307148,0.471305},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative8<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.322344,0.459391},1},{{0.3575,0.459391},1},{{0.3575,0.407633},1},{{0.322344,0.407633},1},{{0.322344,0.459391},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.113477,0.390055},1},{{0.113477,0.476969},1},{{0.322461,0.476969},1},{{0.322461,0.390055},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 8;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.127148,0.395914},1};
									right[] = {{0.14375,0.395914},1};
									down[] = {{0.127148,0.421305},1};
								};
							};
						};
					};
					class PylonSelected9
					{
						condition = "PylonSelected9>0";
						class NotEmpty
						{
							color[] = {0.59,0.3,0,1};
							condition = "PylonAmmoRelative9>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.113477,0.506266},1},{{0.113477,0.59318},1},{{0.322461,0.59318},1},{{0.322461,0.506266},1},{{0.113477,0.506266},1},{},{{0.322344,0.575602},1},{{0.3575,0.575602},1},{{0.3575,0.523844},1},{{0.322344,0.523844},1},{{0.322344,0.575602},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.322344,0.575602},1},{{0.3575,0.575602},1},{"PylonAmmo9",{0.3575,0.523844},1},{"PylonAmmo9",{0.322344,0.523844},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 9;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.512359},1};
								right[] = {{0.163281,0.512359},1};
								down[] = {{0.127148,0.547516},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 9;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.552359},1};
								right[] = {{0.163281,0.552359},1};
								down[] = {{0.127148,0.587516},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 9;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.307148,0.552359},1};
								right[] = {{0.343281,0.552359},1};
								down[] = {{0.307148,0.587516},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative9<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.322344,0.575602},1},{{0.3575,0.575602},1},{{0.3575,0.523844},1},{{0.322344,0.523844},1},{{0.322344,0.575602},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.113477,0.506266},1},{{0.113477,0.59318},1},{{0.322461,0.59318},1},{{0.322461,0.506266},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 9;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.127148,0.512125},1};
									right[] = {{0.14375,0.512125},1};
									down[] = {{0.127148,0.537516},1};
								};
							};
						};
					};
					class Pylon9
					{
						condition = "PylonSelected9<=0";
						class NotEmpty
						{
							color[] = {0,0.84,0,1};
							condition = "PylonAmmoRelative9>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.113477,0.506266},1},{{0.113477,0.59318},1},{{0.322461,0.59318},1},{{0.322461,0.506266},1},{{0.113477,0.506266},1},{},{{0.322344,0.575602},1},{{0.3575,0.575602},1},{{0.3575,0.523844},1},{{0.322344,0.523844},1},{{0.322344,0.575602},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.322344,0.575602},1},{{0.3575,0.575602},1},{"PylonAmmo9",{0.3575,0.523844},1},{"PylonAmmo9",{0.322344,0.523844},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 9;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.512359},1};
								right[] = {{0.163281,0.512359},1};
								down[] = {{0.127148,0.547516},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 9;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.552359},1};
								right[] = {{0.163281,0.552359},1};
								down[] = {{0.127148,0.587516},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 9;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.307148,0.552359},1};
								right[] = {{0.343281,0.552359},1};
								down[] = {{0.307148,0.587516},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative9<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.322344,0.575602},1},{{0.3575,0.575602},1},{{0.3575,0.523844},1},{{0.322344,0.523844},1},{{0.322344,0.575602},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.113477,0.506266},1},{{0.113477,0.59318},1},{{0.322461,0.59318},1},{{0.322461,0.506266},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 9;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.127148,0.512125},1};
									right[] = {{0.14375,0.512125},1};
									down[] = {{0.127148,0.537516},1};
								};
							};
						};
					};
					class PylonSelected10
					{
						condition = "PylonSelected10>0";
						class NotEmpty
						{
							color[] = {0.59,0.3,0,1};
							condition = "PylonAmmoRelative10>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.113477,0.622477},1},{{0.113477,0.709391},1},{{0.322461,0.709391},1},{{0.322461,0.622477},1},{{0.113477,0.622477},1},{},{{0.322344,0.691813},1},{{0.3575,0.691813},1},{{0.3575,0.640055},1},{{0.322344,0.640055},1},{{0.322344,0.691813},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.322344,0.691813},1},{{0.3575,0.691813},1},{"PylonAmmo10",{0.3575,0.640055},1},{"PylonAmmo10",{0.322344,0.640055},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 10;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.62857},1};
								right[] = {{0.163281,0.62857},1};
								down[] = {{0.127148,0.663727},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 10;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.66857},1};
								right[] = {{0.163281,0.66857},1};
								down[] = {{0.127148,0.703727},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 10;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.307148,0.66857},1};
								right[] = {{0.343281,0.66857},1};
								down[] = {{0.307148,0.703727},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative10<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.322344,0.691813},1},{{0.3575,0.691813},1},{{0.3575,0.640055},1},{{0.322344,0.640055},1},{{0.322344,0.691813},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.113477,0.622477},1},{{0.113477,0.709391},1},{{0.322461,0.709391},1},{{0.322461,0.622477},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 10;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.127148,0.628336},1};
									right[] = {{0.14375,0.628336},1};
									down[] = {{0.127148,0.653727},1};
								};
							};
						};
					};
					class Pylon10
					{
						condition = "PylonSelected10<=0";
						class NotEmpty
						{
							color[] = {0,0.84,0,1};
							condition = "PylonAmmoRelative10>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.113477,0.622477},1},{{0.113477,0.709391},1},{{0.322461,0.709391},1},{{0.322461,0.622477},1},{{0.113477,0.622477},1},{},{{0.322344,0.691813},1},{{0.3575,0.691813},1},{{0.3575,0.640055},1},{{0.322344,0.640055},1},{{0.322344,0.691813},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.322344,0.691813},1},{{0.3575,0.691813},1},{"PylonAmmo10",{0.3575,0.640055},1},{"PylonAmmo10",{0.322344,0.640055},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 10;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.62857},1};
								right[] = {{0.163281,0.62857},1};
								down[] = {{0.127148,0.663727},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 10;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.127148,0.66857},1};
								right[] = {{0.163281,0.66857},1};
								down[] = {{0.127148,0.703727},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 10;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.307148,0.66857},1};
								right[] = {{0.343281,0.66857},1};
								down[] = {{0.307148,0.703727},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative10<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.322344,0.691813},1},{{0.3575,0.691813},1},{{0.3575,0.640055},1},{{0.322344,0.640055},1},{{0.322344,0.691813},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.113477,0.622477},1},{{0.113477,0.709391},1},{{0.322461,0.709391},1},{{0.322461,0.622477},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 10;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.127148,0.628336},1};
									right[] = {{0.14375,0.628336},1};
									down[] = {{0.127148,0.653727},1};
								};
							};
						};
					};
					class PylonSelected5
					{
						condition = "PylonSelected5>0";
						class NotEmpty
						{
							color[] = {0.59,0.3,0,1};
							condition = "PylonAmmoRelative5>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.703477,0.157633},1},{{0.703477,0.244547},1},{{0.912461,0.244547},1},{{0.912461,0.157633},1},{{0.703477,0.157633},1},{},{{0.667344,0.226969},1},{{0.7025,0.226969},1},{{0.7025,0.175211},1},{{0.667344,0.175211},1},{{0.667344,0.226969},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.667344,0.226969},1},{{0.7025,0.226969},1},{"PylonAmmo5",{0.7025,0.175211},1},{"PylonAmmo5",{0.667344,0.175211},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 5;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.163727},1};
								right[] = {{0.753281,0.163727},1};
								down[] = {{0.717148,0.198883},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 5;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.203727},1};
								right[] = {{0.753281,0.203727},1};
								down[] = {{0.717148,0.238883},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 5;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.897148,0.203727},1};
								right[] = {{0.933281,0.203727},1};
								down[] = {{0.897148,0.238883},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative5<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.667344,0.226969},1},{{0.7025,0.226969},1},{{0.7025,0.175211},1},{{0.667344,0.175211},1},{{0.667344,0.226969},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.703477,0.157633},1},{{0.703477,0.244547},1},{{0.912461,0.244547},1},{{0.912461,0.157633},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 5;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.717148,0.163492},1};
									right[] = {{0.73375,0.163492},1};
									down[] = {{0.717148,0.188883},1};
								};
							};
						};
					};
					class Pylon5
					{
						condition = "PylonSelected5<=0";
						class NotEmpty
						{
							color[] = {0,0.84,0,1};
							condition = "PylonAmmoRelative5>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.703477,0.157633},1},{{0.703477,0.244547},1},{{0.912461,0.244547},1},{{0.912461,0.157633},1},{{0.703477,0.157633},1},{},{{0.667344,0.226969},1},{{0.7025,0.226969},1},{{0.7025,0.175211},1},{{0.667344,0.175211},1},{{0.667344,0.226969},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.667344,0.226969},1},{{0.7025,0.226969},1},{"PylonAmmo5",{0.7025,0.175211},1},{"PylonAmmo5",{0.667344,0.175211},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 5;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.163727},1};
								right[] = {{0.753281,0.163727},1};
								down[] = {{0.717148,0.198883},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 5;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.203727},1};
								right[] = {{0.753281,0.203727},1};
								down[] = {{0.717148,0.238883},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 5;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.897148,0.203727},1};
								right[] = {{0.933281,0.203727},1};
								down[] = {{0.897148,0.238883},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative5<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.667344,0.226969},1},{{0.7025,0.226969},1},{{0.7025,0.175211},1},{{0.667344,0.175211},1},{{0.667344,0.226969},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.703477,0.157633},1},{{0.703477,0.244547},1},{{0.912461,0.244547},1},{{0.912461,0.157633},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 5;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.717148,0.163492},1};
									right[] = {{0.73375,0.163492},1};
									down[] = {{0.717148,0.188883},1};
								};
							};
						};
					};
					class PylonSelected4
					{
						condition = "PylonSelected4>0";
						class NotEmpty
						{
							color[] = {0.59,0.3,0,1};
							condition = "PylonAmmoRelative4>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.703477,0.273844},1},{{0.703477,0.360758},1},{{0.912461,0.360758},1},{{0.912461,0.273844},1},{{0.703477,0.273844},1},{},{{0.667344,0.34318},1},{{0.7025,0.34318},1},{{0.7025,0.291422},1},{{0.667344,0.291422},1},{{0.667344,0.34318},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.667344,0.34318},1},{{0.7025,0.34318},1},{"PylonAmmo4",{0.7025,0.291422},1},{"PylonAmmo4",{0.667344,0.291422},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 4;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.279938},1};
								right[] = {{0.753281,0.279938},1};
								down[] = {{0.717148,0.315094},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 4;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.319937},1};
								right[] = {{0.753281,0.319937},1};
								down[] = {{0.717148,0.355094},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 4;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.897148,0.319937},1};
								right[] = {{0.933281,0.319937},1};
								down[] = {{0.897148,0.355094},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative4<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.667344,0.34318},1},{{0.7025,0.34318},1},{{0.7025,0.291422},1},{{0.667344,0.291422},1},{{0.667344,0.34318},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.703477,0.273844},1},{{0.703477,0.360758},1},{{0.912461,0.360758},1},{{0.912461,0.273844},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 4;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.717148,0.279703},1};
									right[] = {{0.73375,0.279703},1};
									down[] = {{0.717148,0.305094},1};
								};
							};
						};
					};
					class Pylon4
					{
						condition = "PylonSelected4<=0";
						class NotEmpty
						{
							color[] = {0,0.84,0,1};
							condition = "PylonAmmoRelative4>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.703477,0.273844},1},{{0.703477,0.360758},1},{{0.912461,0.360758},1},{{0.912461,0.273844},1},{{0.703477,0.273844},1},{},{{0.667344,0.34318},1},{{0.7025,0.34318},1},{{0.7025,0.291422},1},{{0.667344,0.291422},1},{{0.667344,0.34318},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.667344,0.34318},1},{{0.7025,0.34318},1},{"PylonAmmo4",{0.7025,0.291422},1},{"PylonAmmo4",{0.667344,0.291422},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 4;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.279938},1};
								right[] = {{0.753281,0.279938},1};
								down[] = {{0.717148,0.315094},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 4;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.319937},1};
								right[] = {{0.753281,0.319937},1};
								down[] = {{0.717148,0.355094},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 4;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.897148,0.319937},1};
								right[] = {{0.933281,0.319937},1};
								down[] = {{0.897148,0.355094},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative4<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.667344,0.34318},1},{{0.7025,0.34318},1},{{0.7025,0.291422},1},{{0.667344,0.291422},1},{{0.667344,0.34318},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.703477,0.273844},1},{{0.703477,0.360758},1},{{0.912461,0.360758},1},{{0.912461,0.273844},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 4;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.717148,0.279703},1};
									right[] = {{0.73375,0.279703},1};
									down[] = {{0.717148,0.305094},1};
								};
							};
						};
					};
					class PylonSelected3
					{
						condition = "PylonSelected3>0";
						class NotEmpty
						{
							color[] = {0.59,0.3,0,1};
							condition = "PylonAmmoRelative3>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.703477,0.390055},1},{{0.703477,0.476969},1},{{0.912461,0.476969},1},{{0.912461,0.390055},1},{{0.703477,0.390055},1},{},{{0.667344,0.459391},1},{{0.7025,0.459391},1},{{0.7025,0.407633},1},{{0.667344,0.407633},1},{{0.667344,0.459391},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.667344,0.459391},1},{{0.7025,0.459391},1},{"PylonAmmo3",{0.7025,0.407633},1},{"PylonAmmo3",{0.667344,0.407633},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 3;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.396148},1};
								right[] = {{0.753281,0.396148},1};
								down[] = {{0.717148,0.431305},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 3;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.436148},1};
								right[] = {{0.753281,0.436148},1};
								down[] = {{0.717148,0.471305},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 3;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.897148,0.436148},1};
								right[] = {{0.933281,0.436148},1};
								down[] = {{0.897148,0.471305},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative3<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.667344,0.459391},1},{{0.7025,0.459391},1},{{0.7025,0.407633},1},{{0.667344,0.407633},1},{{0.667344,0.459391},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.703477,0.390055},1},{{0.703477,0.476969},1},{{0.912461,0.476969},1},{{0.912461,0.390055},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 3;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.717148,0.395914},1};
									right[] = {{0.73375,0.395914},1};
									down[] = {{0.717148,0.421305},1};
								};
							};
						};
					};
					class Pylon3
					{
						condition = "PylonSelected3<=0";
						class NotEmpty
						{
							color[] = {0,0.84,0,1};
							condition = "PylonAmmoRelative3>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.703477,0.390055},1},{{0.703477,0.476969},1},{{0.912461,0.476969},1},{{0.912461,0.390055},1},{{0.703477,0.390055},1},{},{{0.667344,0.459391},1},{{0.7025,0.459391},1},{{0.7025,0.407633},1},{{0.667344,0.407633},1},{{0.667344,0.459391},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.667344,0.459391},1},{{0.7025,0.459391},1},{"PylonAmmo3",{0.7025,0.407633},1},{"PylonAmmo3",{0.667344,0.407633},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 3;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.396148},1};
								right[] = {{0.753281,0.396148},1};
								down[] = {{0.717148,0.431305},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 3;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.436148},1};
								right[] = {{0.753281,0.436148},1};
								down[] = {{0.717148,0.471305},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 3;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.897148,0.436148},1};
								right[] = {{0.933281,0.436148},1};
								down[] = {{0.897148,0.471305},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative3<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.667344,0.459391},1},{{0.7025,0.459391},1},{{0.7025,0.407633},1},{{0.667344,0.407633},1},{{0.667344,0.459391},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.703477,0.390055},1},{{0.703477,0.476969},1},{{0.912461,0.476969},1},{{0.912461,0.390055},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 3;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.717148,0.395914},1};
									right[] = {{0.73375,0.395914},1};
									down[] = {{0.717148,0.421305},1};
								};
							};
						};
					};
					class PylonSelected2
					{
						condition = "PylonSelected2>0";
						class NotEmpty
						{
							color[] = {0.59,0.3,0,1};
							condition = "PylonAmmoRelative2>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.703477,0.506266},1},{{0.703477,0.59318},1},{{0.912461,0.59318},1},{{0.912461,0.506266},1},{{0.703477,0.506266},1},{},{{0.667344,0.575602},1},{{0.7025,0.575602},1},{{0.7025,0.523844},1},{{0.667344,0.523844},1},{{0.667344,0.575602},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.667344,0.575602},1},{{0.7025,0.575602},1},{"PylonAmmo2",{0.7025,0.523844},1},{"PylonAmmo2",{0.667344,0.523844},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 2;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.512359},1};
								right[] = {{0.753281,0.512359},1};
								down[] = {{0.717148,0.547516},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 2;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.552359},1};
								right[] = {{0.753281,0.552359},1};
								down[] = {{0.717148,0.587516},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 2;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.897148,0.552359},1};
								right[] = {{0.933281,0.552359},1};
								down[] = {{0.897148,0.587516},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative2<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.667344,0.575602},1},{{0.7025,0.575602},1},{{0.7025,0.523844},1},{{0.667344,0.523844},1},{{0.667344,0.575602},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.703477,0.506266},1},{{0.703477,0.59318},1},{{0.912461,0.59318},1},{{0.912461,0.506266},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 2;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.717148,0.512125},1};
									right[] = {{0.73375,0.512125},1};
									down[] = {{0.717148,0.537516},1};
								};
							};
						};
					};
					class Pylon2
					{
						condition = "PylonSelected2<=0";
						class NotEmpty
						{
							color[] = {0,0.84,0,1};
							condition = "PylonAmmoRelative2>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.703477,0.506266},1},{{0.703477,0.59318},1},{{0.912461,0.59318},1},{{0.912461,0.506266},1},{{0.703477,0.506266},1},{},{{0.667344,0.575602},1},{{0.7025,0.575602},1},{{0.7025,0.523844},1},{{0.667344,0.523844},1},{{0.667344,0.575602},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.667344,0.575602},1},{{0.7025,0.575602},1},{"PylonAmmo2",{0.7025,0.523844},1},{"PylonAmmo2",{0.667344,0.523844},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 2;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.512359},1};
								right[] = {{0.753281,0.512359},1};
								down[] = {{0.717148,0.547516},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 2;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.552359},1};
								right[] = {{0.753281,0.552359},1};
								down[] = {{0.717148,0.587516},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 2;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.897148,0.552359},1};
								right[] = {{0.933281,0.552359},1};
								down[] = {{0.897148,0.587516},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative2<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.667344,0.575602},1},{{0.7025,0.575602},1},{{0.7025,0.523844},1},{{0.667344,0.523844},1},{{0.667344,0.575602},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.703477,0.506266},1},{{0.703477,0.59318},1},{{0.912461,0.59318},1},{{0.912461,0.506266},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 2;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.717148,0.512125},1};
									right[] = {{0.73375,0.512125},1};
									down[] = {{0.717148,0.537516},1};
								};
							};
						};
					};
					class PylonSelected1
					{
						condition = "PylonSelected1>0";
						class NotEmpty
						{
							color[] = {0.59,0.3,0,1};
							condition = "PylonAmmoRelative1>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.703477,0.622477},1},{{0.703477,0.709391},1},{{0.912461,0.709391},1},{{0.912461,0.622477},1},{{0.703477,0.622477},1},{},{{0.667344,0.691813},1},{{0.7025,0.691813},1},{{0.7025,0.640055},1},{{0.667344,0.640055},1},{{0.667344,0.691813},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.667344,0.691813},1},{{0.7025,0.691813},1},{"PylonAmmo1",{0.7025,0.640055},1},{"PylonAmmo1",{0.667344,0.640055},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 1;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.62857},1};
								right[] = {{0.753281,0.62857},1};
								down[] = {{0.717148,0.663727},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 1;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.66857},1};
								right[] = {{0.753281,0.66857},1};
								down[] = {{0.717148,0.703727},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 1;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.897148,0.66857},1};
								right[] = {{0.933281,0.66857},1};
								down[] = {{0.897148,0.703727},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative1<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.667344,0.691813},1},{{0.7025,0.691813},1},{{0.7025,0.640055},1},{{0.667344,0.640055},1},{{0.667344,0.691813},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.703477,0.622477},1},{{0.703477,0.709391},1},{{0.912461,0.709391},1},{{0.912461,0.622477},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 1;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.717148,0.628336},1};
									right[] = {{0.73375,0.628336},1};
									down[] = {{0.717148,0.653727},1};
								};
							};
						};
					};
					class Pylon1
					{
						condition = "PylonSelected1<=0";
						class NotEmpty
						{
							color[] = {0,0.84,0,1};
							condition = "PylonAmmoRelative1>0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.703477,0.622477},1},{{0.703477,0.709391},1},{{0.912461,0.709391},1},{{0.912461,0.622477},1},{{0.703477,0.622477},1},{},{{0.667344,0.691813},1},{{0.7025,0.691813},1},{{0.7025,0.640055},1},{{0.667344,0.640055},1},{{0.667344,0.691813},1}};
								};
							};
							class PolyBar
							{
								type = "polygon";
								points[] = {{{{0.667344,0.691813},1},{{0.7025,0.691813},1},{"PylonAmmo1",{0.7025,0.640055},1},{"PylonAmmo1",{0.667344,0.640055},1}}};
							};
							class WeapName
							{
								type = "text";
								source = "PylonMagazineName";
								sourceindex = 1;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.62857},1};
								right[] = {{0.753281,0.62857},1};
								down[] = {{0.717148,0.663727},1};
							};
							class MagName
							{
								type = "text";
								source = "PylonMagazineNameShort";
								sourceindex = 1;
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.717148,0.66857},1};
								right[] = {{0.753281,0.66857},1};
								down[] = {{0.717148,0.703727},1};
							};
							class MagCount
							{
								type = "text";
								source = "PylonAmmo";
								sourceindex = 1;
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.897148,0.66857},1};
								right[] = {{0.933281,0.66857},1};
								down[] = {{0.897148,0.703727},1};
							};
						};
						class Empty
						{
							color[] = {1,0,0,1};
							condition = "PylonAmmoRelative1<=0";
							class Static
							{
								class Lines
								{
									type = "line";
									width = 4;
									points[] = {{{0.667344,0.691813},1},{{0.7025,0.691813},1},{{0.7025,0.640055},1},{{0.667344,0.640055},1},{{0.667344,0.691813},1}};
								};
								class Poly
								{
									type = "polygon";
									points[] = {{{{0.703477,0.622477},1},{{0.703477,0.709391},1},{{0.912461,0.709391},1},{{0.912461,0.622477},1}}};
								};
							};
							class black
							{
								color[] = {1,0,0,1};
								class MagName
								{
									type = "text";
									source = "PylonMagazineNameShort";
									sourceindex = 1;
									sourceScale = 1;
									align = "right";
									scale = 1;
									pos[] = {{0.717148,0.628336},1};
									right[] = {{0.73375,0.628336},1};
									down[] = {{0.717148,0.653727},1};
								};
							};
						};
					};
					class Gatling_Ammo
					{
						type = "text";
						source = "ammo";
						sourceIndex = 0;
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.435,0.86},1};
						right[] = {{0.475,0.86},1};
						down[] = {{0.435,0.891},1};
					};
					class CM_Name
					{
						type = "text";
						source = "CMWeapon";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.725,0.83},1};
						right[] = {{0.765,0.83},1};
						down[] = {{0.725,0.861},1};
					};
					class CM_Ammo
					{
						type = "text";
						source = "CMAmmo";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.725,0.86},1};
						right[] = {{0.765,0.86},1};
						down[] = {{0.725,0.891},1};
					};
				};
			};
		};
	};
};
class cfgMods
{
	author = "Kimi";
	timepacked = "1545078562";
};
