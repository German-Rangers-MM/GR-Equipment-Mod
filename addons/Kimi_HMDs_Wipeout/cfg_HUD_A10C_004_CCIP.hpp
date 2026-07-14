class HUD_CCIP
{
	// this parameters are different cause taken from vanilla. Do not change! ------------------
	
	topLeft = "HUD_top_left";
	topRight = "HUD_top_right";
	bottomLeft = "HUD_bottom_left";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0.2;
	color[] = {0.15,1.0,0.15,1.0};
	enableParallax = 1;
	
	//------------------------------------------------------------------------------------------
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
			pos0[] = {0.500,0.30};
			pos10[] = {1.166,1.195};
			//pos0[] = {0.500,0.32};
			//pos10[] = {1.166,1.215};
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
			sourceScale = 1.0;
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
			sourceScale = 1.0;
			min = 0;
			max = 1;
			minPos[] = {0.0,1.0};
			maxPos[] = {0.0,0.0};
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
		condition="on";
		#include "cfg_HUD_A10C_103_Color.hpp"
		/*class PlaneMovementCrosshair
		{
			//clipTL[] = {0.0,1.0};
			//clipBR[] = {1.0,0.0};
			type = "line";
			width = 4;
			points[] = 
			{
				{"Velocity",{0*0.50,-0.025*0.50},1},
				{"Velocity",{0.01*0.50,-0.02165*0.50},1},
				{"Velocity",{0.01732*0.50,-0.0125*0.50},1},
				{"Velocity",{0.02*0.50,0*0.50},1},
				{"Velocity",{0.01732*0.50,0.0125*0.50},1},
				{"Velocity",{0.01*0.50,0.02165*0.50},1},
				{"Velocity",{0*0.50,0.025*0.50},1},
				{"Velocity",{-0.01*0.50,0.02165*0.50},1},
				{"Velocity",{-0.01732*0.50,0.0125*0.50},1},
				{"Velocity",{-0.02*0.50,0*0.50},1},
				{"Velocity",{-0.01732*0.50,-0.0125*0.50},1},
				{"Velocity",{-0.01*0.50,-0.02165*0.50},1},
				{"Velocity",{0*0.50,-0.025*0.50},1},
				{},
				{"Velocity",{0.04*0.50,0*0.50},1},
				{"Velocity",{0.02*0.50,0*0.50},1},
				{},
				{"Velocity",{-0.04*0.50,0*0.50},1},
				{"Velocity",{-0.02*0.50,0*0.50},1},
				{},
				{"Velocity",{0*0.50,-0.05*0.50},1},
				{"Velocity",{0*0.50,-0.025*0.50},1}
			};
		};*/
		class CCIP_INVALID
		{
			type = "group";
			condition = "(MissileFlightTime-249)*(mgun+rocket+bomb)";
			blinkingPattern[] = {5,3};
			blinkingStartsOn = 1;
			class CCIP_text
			{
				type = "text";
				text="CCIP INVALID";
				source="static";
				align = "center";
				scale = 1;
				pos[] = 	{"ImpactPoint",{ 0.00,0.10},1};
				right[] = 	{"ImpactPoint",{ 0.04,0.10},1};
				down[] = 	{"ImpactPoint",{ 0.00,0.14},1};
			};
		};
		class RKT_CrosshairGroup
		{
			type = "group";
			condition = "rocket*(120-MissileFlightTime)";
			class MachineGunCrosshair
			{
				type = "line";
				width = 5.0;
				points[] = 
				{
					{"ImpactPoint",{0.0,-0.1125},1},
					{"ImpactPoint",{0.0,-0.1},1},
					{},
					{"ImpactPoint",{0.0,0.1125},1},
					{"ImpactPoint",{0.0,0.1},1},
					{},
					{"ImpactPoint",{-0.09,0.0},1},
					{"ImpactPoint",{-0.08,0.0},1},
					{},
					{"ImpactPoint",{0.09,0.0},1},
					{"ImpactPoint",{0.08,0.0},1},
					{},
					{"ImpactPoint",{0.0,-0.0025},1},
					{"ImpactPoint",{0.0,0.0025},1},
					{},
					{"ImpactPoint",{-0.002,0.0},1},
					{"ImpactPoint",{0.002,0.0},1}
				};
			};
			class Circle
			{
				type = "line";
				width = 5.0;
				points[] = 
				{
					{"ImpactPoint",{0,-0.0775},1},
					{"ImpactPoint",{0,-0.09125},1},
					{"MissileFlightTimeRot1",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot2",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot3",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot4",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot5",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot6",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot7",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot8",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot9",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot10",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot11",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot12",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot13",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot14",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot15",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot16",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot17",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot18",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot19",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot20",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot20",{0,0.062},1,"ImpactPoint",1}
				};
			};
			class Circle_Min_Range
			{
				type = "line";
				width = 5.0;
				points[] = 
				{
					{"ImpactPoint",{0,-0.1},1},
					{"ImpactPoint",{0.013888,-0.09848},1},
					{"ImpactPoint",{0.02736,-0.09397},1},
					{"ImpactPoint",{0.04,-0.0866},1},
					{"ImpactPoint",{0.051424,-0.0766},1},
					{"ImpactPoint",{0.06128,-0.06428},1},
					{"ImpactPoint",{0.06928,-0.05},1},
					{"ImpactPoint",{0.075176,-0.0342},1},
					{"ImpactPoint",{0.078784,-0.01736},1},
					{"ImpactPoint",{0.08,0},1},
					{"ImpactPoint",{0.078784,0.01736},1},
					{"ImpactPoint",{0.075176,0.0342},1},
					{"ImpactPoint",{0.06928,0.05},1},
					{"ImpactPoint",{0.06128,0.06428},1},
					{"ImpactPoint",{0.051424,0.0766},1},
					{"ImpactPoint",{0.04,0.0866},1},
					{"ImpactPoint",{0.02736,0.09397},1},
					{"ImpactPoint",{0.013888,0.09848},1},
					{"ImpactPoint",{0,0.1},1},
					{"ImpactPoint",{-0.013888,0.09848},1},
					{"ImpactPoint",{-0.02736,0.09397},1},
					{"ImpactPoint",{-0.04,0.0866},1},
					{"ImpactPoint",{-0.051424,0.0766},1},
					{"ImpactPoint",{-0.06128,0.06428},1},
					{"ImpactPoint",{-0.06928,0.05},1},
					{"ImpactPoint",{-0.075176,0.0342},1},
					{"ImpactPoint",{-0.078784,0.01736},1},
					{"ImpactPoint",{-0.08,0},1},
					{"ImpactPoint",{-0.078784,-0.01736},1},
					{"ImpactPoint",{-0.075176,-0.0342},1},
					{"ImpactPoint",{-0.06928,-0.05},1},
					{"ImpactPoint",{-0.06128,-0.06428},1},
					{"ImpactPoint",{-0.051424,-0.0766},1},
					{"ImpactPoint",{-0.04,-0.0866},1},
					{"ImpactPoint",{-0.02736,-0.09397},1},
					{"ImpactPoint",{-0.013888,-0.09848},1},
					{"ImpactPoint",{0,-0.1},1}
				};
			};
			class RKT_Text
			{
				type = "text";
				text="RKT";
				source="static";
				align = "center";
				scale = 1;
				pos[] = 	{"ImpactPoint",{-0.002,0.12},1};
				right[] = 	{"ImpactPoint",{0.032,0.12},1};
				down[] = 	{"ImpactPoint",{-0.002,0.15},1};
			};
			class Distance
			{
				type = "text";
				source = "ImpactDistance";
				sourceScale=0.00054; // nm
				//sourceScale=0.001; // km
				sourcePrecision = 1;
				max = 5;
				align = "center";
				scale = 1;
				pos[] = 	{"ImpactPoint",{-0.002,"0.12+0.02"},1};
				right[] = 	{"ImpactPoint",{0.032,"0.12+0.02"},1};
				down[] = 	{"ImpactPoint",{-0.002,"0.15+0.02"},1};
			};
		};
		class GUNS_CrosshairGroup
		{
			type = "group";
			condition = "mgun*(250-MissileFlightTime)";
			//condition = "mgun";
			class MachineGunCrosshair
			{
				type = "line";
				width = 4.0;
				points[] = 
				{
					{"ImpactPoint",{0.0,-0.05},1},
					{"ImpactPoint",{0.0,-0.025},1},
					{},
					{"ImpactPoint",{0.0,0.05},1},
					{"ImpactPoint",{0.0,0.025},1},
					{},
					{"ImpactPoint",{-0.04,0.0},1},
					{"ImpactPoint",{-0.02,0.0},1},
					{},
					{"ImpactPoint",{0.04,0.0},1},
					{"ImpactPoint",{0.02,0.0},1},
					{},
					{"ImpactPoint",{0.01,-0.05},1},
					{"ImpactPoint",{-0.01,-0.05},1},
					{},
					{"ImpactPoint",{0.0,-0.0025},1},
					{"ImpactPoint",{0.0,0.0025},1},
					{},
					{"ImpactPoint",{-0.002,0.0},1},
					{"ImpactPoint",{0.002,0.0},1}
				};
			};
			class Distance
			{
				type = "text";
				source = "ImpactDistance";
				sourceScale=0.00054; // nm
				//sourceScale=0.001; // km
				sourcePrecision = 1;
				max = 15;
				align = "center";
				scale = 1;
				//pos[] = {"ImpactPoint",{-0.002,0.07},1};
				//right[] = {"ImpactPoint",{0.045,0.07},1};
				//down[] = {"ImpactPoint",{-0.002,0.13},1};
				pos[] = 	{"ImpactPoint",{-0.002,0.06},1};
				right[] = 	{"ImpactPoint",{0.032,0.06},1};
				down[] = 	{"ImpactPoint",{-0.002,0.09},1};
			};
		};
		class BombCrosshairGroup
		{
			type = "group";
			condition = "bomb*(250-MissileFlightTime)";
			class BombCrosshair
			{
				width = 5.0;
				type = "line";
				points[] = 
				{
					{"ImpactPoint",{0.0,-0.1125},1},
					{"ImpactPoint",{0.0,-0.1},1},
					{},
					{"ImpactPoint",{0.0,0.1125},1},
					{"ImpactPoint",{0.0,0.1},1},
					{},
					{"ImpactPoint",{-0.09,0.0},1},
					{"ImpactPoint",{-0.08,0.0},1},
					{},
					{"ImpactPoint",{0.09,0.0},1},
					{"ImpactPoint",{0.08,0.0},1},
					{},
					{"ImpactPoint",{0.0,-0.0025},1},
					{"ImpactPoint",{0.0,0.0025},1},
					{},
					{"ImpactPoint",{-0.002,0.0},1},
					{"ImpactPoint",{0.002,0.0},1},
					{},
					{"ImpactPoint",{0,-0.1},1},
					{"ImpactPoint",{0.013888,-0.09848},1},
					{"ImpactPoint",{0.02736,-0.09397},1},
					{"ImpactPoint",{0.04,-0.0866},1},
					{"ImpactPoint",{0.051424,-0.0766},1},
					{"ImpactPoint",{0.06128,-0.06428},1},
					{"ImpactPoint",{0.06928,-0.05},1},
					{"ImpactPoint",{0.075176,-0.0342},1},
					{"ImpactPoint",{0.078784,-0.01736},1},
					{"ImpactPoint",{0.08,0},1},
					{"ImpactPoint",{0.078784,0.01736},1},
					{"ImpactPoint",{0.075176,0.0342},1},
					{"ImpactPoint",{0.06928,0.05},1},
					{"ImpactPoint",{0.06128,0.06428},1},
					{"ImpactPoint",{0.051424,0.0766},1},
					{"ImpactPoint",{0.04,0.0866},1},
					{"ImpactPoint",{0.02736,0.09397},1},
					{"ImpactPoint",{0.013888,0.09848},1},
					{"ImpactPoint",{0,0.1},1},
					{"ImpactPoint",{-0.013888,0.09848},1},
					{"ImpactPoint",{-0.02736,0.09397},1},
					{"ImpactPoint",{-0.04,0.0866},1},
					{"ImpactPoint",{-0.051424,0.0766},1},
					{"ImpactPoint",{-0.06128,0.06428},1},
					{"ImpactPoint",{-0.06928,0.05},1},
					{"ImpactPoint",{-0.075176,0.0342},1},
					{"ImpactPoint",{-0.078784,0.01736},1},
					{"ImpactPoint",{-0.08,0},1},
					{"ImpactPoint",{-0.078784,-0.01736},1},
					{"ImpactPoint",{-0.075176,-0.0342},1},
					{"ImpactPoint",{-0.06928,-0.05},1},
					{"ImpactPoint",{-0.06128,-0.06428},1},
					{"ImpactPoint",{-0.051424,-0.0766},1},
					{"ImpactPoint",{-0.04,-0.0866},1},
					{"ImpactPoint",{-0.02736,-0.09397},1},
					{"ImpactPoint",{-0.013888,-0.09848},1},
					{"ImpactPoint",{0,-0.1},1},
					{},
					{"ImpactPoint",-1,"Velocity",1,"NormalizeBombCircle",1,"ImpactPoint",1,{0.0,0.0},1},
					{"Velocity",1,"Limit0109",1,{0.0,0.0},1}
				};
			};
			class Circle
			{
				type = "line";
				width = 5.0;
				points[] = 
				{
					{"ImpactPoint",{0,-0.0775},1},
					{"ImpactPoint",{0,-0.09125},1},
					{"MissileFlightTimeRot1",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot2",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot3",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot4",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot5",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot6",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot7",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot8",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot9",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot10",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot11",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot12",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot13",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot14",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot15",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot16",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot17",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot18",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot19",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot20",{0,0.073},1,"ImpactPoint",1},
					{"MissileFlightTimeRot20",{0,0.062},1,"ImpactPoint",1}
				};
			};
		};
		/*class RadarBoxes
		{
			type = "radar";
			pos0[] = {0.498,0.38};
			pos10[] = {1.166,1.215};
			width = 4;
			points[] = {{{-0.002,-0.0025},1},{{0.002,-0.0025},1},{{0.002,0.0025},1},{{-0.002,0.0025},1},{{-0.002,-0.0025},1}};
		};*/
		/*class TargetDiamond
		{
			type="group";
			condition="1-ATmissile";
			class shape
			{
				type = "line";
				width = 3;
				points[] = 
				{
					{"Target",1,"Limit0109",1,{0.02,0.025},1},
					{"Target",1,"Limit0109",1,{-0.02,0.025},1},
					{"Target",1,"Limit0109",1,{-0.02,-0.025},1},
					{"Target",1,"Limit0109",1,{0.02,-0.025},1},
					{"Target",1,"Limit0109",1,{0.02,0.025},1}
				};
			};
		};
		class TargetLocked
		{
			condition = "missilelocked*(1-ATmissile)";
			blinkingPattern[] = {0.15,0.15};
			blinkingStartsOn = 1;
			class shape
			{
				type = "line";
				width = 4;
				points[] = 
				{
					{"Target",1,"Limit0109",1,{0,-0.0375},1},
					{"Target",1,"Limit0109",1,{0.03,0},1},
					{"Target",1,"Limit0109",1,{0,0.0375},1},
					{"Target",1,"Limit0109",1,{-0.03,0},1},
					{"Target",1,"Limit0109",1,{0,-0.0375},1}
				};
			};
		};*/
		/*class TargetingPodGroup
		{
			condition = "1-pilotcameralock";
			class TargetingPodDir
			{
				type = "line";
				width = 3.0;
				points[] = {{"TargetingPodTarget",1,{0.0208056,0.00517311},1},{"TargetingPodTarget",1,{0.0208056,-0.00517311},1},{},{"TargetingPodTarget",1,{0.0176381,-0.0147318},1},{"TargetingPodTarget",1,{0.0117854,-0.0220477},1},{},{"TargetingPodTarget",1,{0.00413849,-0.026007},1},{"TargetingPodTarget",1,{-0.00413849,-0.026007},1},{},{"TargetingPodTarget",1,{-0.0117854,-0.0220477},1},{"TargetingPodTarget",1,{-0.0176381,-0.0147318},1},{},{"TargetingPodTarget",1,{-0.0208056,-0.00517311},1},{"TargetingPodTarget",1,{-0.0208056,0.00517312},1},{},{"TargetingPodTarget",1,{-0.0176381,0.0147318},1},{"TargetingPodTarget",1,{-0.0117854,0.0220477},1},{},{"TargetingPodTarget",1,{-0.00413849,0.026007},1},{"TargetingPodTarget",1,{0.00413849,0.026007},1},{},{"TargetingPodTarget",1,{0.0117854,0.0220477},1},{"TargetingPodTarget",1,{0.0176381,0.0147318},1},{},{"TargetingPodTarget",1,{0.0208056,0.0051731},1},{"TargetingPodTarget",1,{0.0208056,-0.00517312},1},{},{"TargetingPodTarget",1,{0.0176381,-0.0147318},1},{"TargetingPodTarget",1,{0.0117854,-0.0220477},1},{},{"TargetingPodTarget",1,{0.00413849,-0.026007},1},{"TargetingPodTarget",1,{-0.0041385,-0.026007},1},{},{"TargetingPodTarget",1,{-0.0117854,-0.0220477},1},{"TargetingPodTarget",1,{-0.0176381,-0.0147318},1},{},{}};
			};
		};
		class TargetingPodGroupOn
		{
			condition = "pilotcameralock";
			class TargetingPodDir
			{
				type = "line";
				width = 3.0;
				points[] = {{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,0.00517311},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,-0.00517311},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,-0.0147318},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,-0.0220477},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,-0.026007},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.00413849,-0.026007},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,-0.0220477},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,-0.0147318},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0208056,-0.00517311},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0208056,0.00517312},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,0.0147318},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,0.0220477},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.00413849,0.026007},1},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,0.026007},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,0.0220477},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,0.0147318},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,0.0051731},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,-0.00517312},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,-0.0147318},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,-0.0220477},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,-0.026007},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0041385,-0.026007},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,-0.0220477},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,-0.0147318},1},{},{}};
			};
		};*/
		/*class LAR
		{
			type = "group";
			condition = "(AAmissile + missilelocked)/2";
			class Lines
			{
				type = "line";
				width = 4.0;
				points[] = {{{0.21,0.55},1},{{0.19,0.55},1},{{0.19,0.77},1},{{0.21,0.77},1},{},{{0.21,0.715},1},{{0.19,0.715},1},{},{{0.21,0.66},1},{{0.19,0.66},1},{},{{0.21,0.605},1},{{0.19,0.605},1},{},{"LarTargetDist",-0.22,{0.17,0.79},1},{"LarTargetDist",-0.22,{0.19,0.77},1},{"LarTargetDist",-0.22,{0.17,0.75},1},{}};
			};
			class Poly
			{
				type = "polygon";
				points[] = {{{"LarAmmoMin",-0.22,{0.191,0.77},1},{"LarAmmoMax",-0.22,{0.191,0.77},1},{"LarAmmoMax",-0.22,{0.208,0.77},1},{"LarAmmoMin",-0.22,{0.208,0.77},1}}};
			};
			class TopText
			{
				type = "text";
				source = "LarTop";
				sourceScale = 0.001;
				scale = 1;
				pos[] = {{0.22,0.53},1};
				right[] = {{0.26,0.53},1};
				down[] = {{0.22,0.57},1};
				align = "right";
			};
			class MiddleText: TopText
			{
				source = "LarTop";
				sourcePrecision = -1;
				sourceScale = 0.0005;
				pos[] = {{0.22,0.64},1};
				right[] = {{0.26,0.64},1};
				down[] = {{0.22,0.68},1};
			};
			class SpeedText: TopText
			{
				source = "LarTargetSpeed";
				align = "left";
				sourceScale = 3.6;
				pos[] = {"LarTargetDist",-0.22,{0.16,0.75},1};
				right[] = {"LarTargetDist",-0.22,{0.2,0.75},1};
				down[] = {"LarTargetDist",-0.22,{0.16,0.79},1};
			};
		};*/
	};
};