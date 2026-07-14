class HMCS_Common
{
	#include "cfg_HUD_A10C_104_Parameters_HMCS.hpp"
	#include "cfg_HUD_A10C_102_Bones.hpp"
	class Draw
	{
		condition = "on*user0*(1-user2)*(1 - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=20))*(1 - (cameraHeadingDiffY<=10) + (abs(cameraHeadingDiffX)>=10))"; //-19 +24
		#include "cfg_HUD_A10C_103_Color.hpp"
		#include "cfg_HUD_A10C_202_Units_HMCS.hpp"
		/*class HorizonLine
		{
			condition="on*user0";
			clipTL[] = {0.2,0.15};
			clipBR[] = {0.8,0.85};
			class HorizonLineDraw
			{
				type = "line";
				width = 3.0;
				points[] = 
				{
					{"HorizonVector",{-0.400,0.0},1},
					{"HorizonVector",{0.400,0.0},1}
				};
			};
		};*/
		class Mach_Number_HMCS
		{
			type="text";
			source="speed";
			align="left";
			scale=1;
			sourceScale=0.00294;
			sourcePrecision=2;
			pos[]=	{{"1-0.87"		,0.45},1};
			right[]={{"1-0.87+0.04"	,0.45},1};
			down[]=	{{"1-0.87"		,0.49},1};
		};
		class Mach_Text_HMCS
		{
			type="text";
			source="static";
			text="M";
			align="left";
			scale=1;			
			sourceScale=0.00294;
			sourcePrecision=2;
			pos[]=	{{"1-0.87-0.05"			,0.45},1};
			right[]={{"1-0.87-0.05+0.04"	,0.45},1};
			down[]=	{{"1-0.87-0.05"			,0.49},1};
		};
		class Left_box
		{
			type = "line";
			width = 2.0;
			points[] = 
			{
				{ { 0.16			,0.40			},1 },
				{ { "0.16 - 0.11"	,0.40 			},1 },
				{ { "0.16 - 0.11"	,"0.40 + 0.05" 	},1 },
				{ { 0.16			,"0.40 + 0.05" 	},1 },
				{ { 0.16			,0.40 			},1 }
			};
		};
		class Right_box
		{
			type = "line";
			width = 2.0;
			points[] = 
			{
				{ { 0.84			,0.40 			},1 },
				{ { "0.84 + 0.11"	,0.40 			},1 },
				{ { "0.84 + 0.11"	,"0.40 + 0.05" 	},1 },
				{ { 0.84			,"0.40 + 0.05" 	},1 },
				{ { 0.84			,0.40 			},1 }
			};
		};
		class Center_box
		{
			type = "line";
			width = 2.0;
			points[] = 
			{
				{ { 0.455,0.005 },1 },
				{ { "0.455 + 0.09",0.005 },1 },
				{ { "0.455 + 0.09","0.005 + 0.06" },1 },
				{ { "0.455 + 0.052","0.005 + 0.06" },1 },
				{ { "0.455 + 0.045","0.005 + 0.07" },1 },
				{ { "0.455 + 0.038","0.005 + 0.06" },1 },
				{ { 0.455,"0.005 + 0.06" },1 },
				{ { 0.455,0.005 },1 }
			};
		};
		class CameraDirNumber
		{
			type="text";
			scale=1;
			width = 2.0;
			source="CameraDir";
			sourceScale=1;
			SourceLength=3SSSSSSSSSS;
			align="center";
			pos[]=	{{0.5,0.01},1};
			right[]={{0.55,0.01},1};
			down[]=	{{0.5,0.06},1};
		};
		class CameraDir_Scale
		{
			clipTL[]={0.30,0};
			clipBR[]={0.70,1};
			class Heading_Scale
			{
				type="scale";
				horizontal=1;
				//source="heading";cameraDir
				source="cameraDir";
				sourceScale=0.1;
				SourceLength=2;
				width=3;
				top=	0.25;
				center=	0.50;
				bottom=	0.75;
				lineXleft="0.04 + 0.085";
				lineYright="0.03 + 0.085";
				lineXleftMajor="0.04 + 0.085";
				lineYrightMajor="0.02 + 0.085";
				majorLineEach=3;
				numberEach=3;
				step=1;
				stepSize="(0.75 - 0.25) / 10";
				align="center";
				scale=1;
				pos[]=	{ 0.2475			,"0.01 + 0.065"};
				right[]={ "0.2475 + 0.03"	,"0.01 + 0.065"};
				down[]=	{ 0.2475			,"0.04 + 0.065"};
			};
		};
		class AC_Heading
		{
			type="text";
			source="heading";
			sourceScale=1;
			sourceLength=3;
			align="center";
			scale=1;
			pos[]=	{{0.50,0.82},1};
			right[]={{0.55,0.82},1};
			down[]=	{{0.50,0.87},1};
		};
	};
};
class HMCS_Common_Decluttered
{
	#include "cfg_HUD_A10C_104_Parameters_HMCS.hpp"
	#include "cfg_HUD_A10C_102_Bones.hpp"
	class Draw
	{
		condition = "on*(user0)*(1 - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=20))*(1 - (cameraHeadingDiffY<=10) + (abs(cameraHeadingDiffX)>=10))"; //-19 +24
		#include "cfg_HUD_A10C_103_Color.hpp"
		class G_Number_HMCS
		{
			type="text";
			source="gmeterYGrav";
			align="Left";
			scale=1;
			sourceScale=0.1;
			sourcePrecision=1;
			//pos[]=	{{"1-0.86"		,"0.48-0.35"},1};
			//right[]={{"1-0.86+0.04"	,"0.48-0.35"},1};
			//down[]=	{{"1-0.86"		,"0.52-0.35"},1};
			pos[]=	{{"0.08"			,"0.48-0.35"},1};
			right[]={{"0.08+0.04"		,"0.48-0.35"},1};
			down[]=	{{"0.08"			,"0.52-0.35"},1};
		};
		class G_Text_HMCS
		{
			type="text";
			source="static";
			text="G";
			align="Left";
			scale=1;
			pos[]=	{{"0.105"		,"0.48-0.35"},1};
			right[]={{"0.105+0.04"	,"0.48-0.35"},1};
			down[]=	{{"0.105"		,"0.52-0.35"},1};
		};
		class Bank_Indicator
		{
			type = "line";
			width = 4.0;
			points[] = 
			{
				/*{ "HorizonDive",{-0.046,0 },1 },
				{ "HorizonDive",{ 0.046,0 },1 },*/
				{"HorizonIndicatorBank",{"0 *1 /3","-0.02 *1 /3"},1},							
				{"HorizonIndicatorBank",{"0.0099999998 *1 /3","-0.01732 *1 /3"},1},							
				{"HorizonIndicatorBank",{"0.01732 *1 /3","-0.0099999998 *1 /3"},1},		
				{"HorizonIndicatorBank",{"0.02 *1 /3","0 *1 /3"},1},							
				{"HorizonIndicatorBank",{"0.01732 *1 /3","0.0099999998 *1 /3"},1},
				{"HorizonIndicatorBank",{"0.0099999998 *1 /3","0.01732 *1 /3"},1},							
				{"HorizonIndicatorBank",{"0 *1 /3","0.02 *1 /3"},1},							
				{"HorizonIndicatorBank",{"-0.0099999998 *1 /3","0.01732 *1 /3"},1},					
				{"HorizonIndicatorBank",{"-0.01732 *1 /3","0.0099999998 *1 /3"},1},							
				{"HorizonIndicatorBank",{"-0.02 *1 /3","0 *1 /3"},1},						
				{"HorizonIndicatorBank",{"-0.01732 *1 /3","-0.0099999998 *1 /3"},1},							
				{"HorizonIndicatorBank",{"-0.0099999998 *1 /3","-0.01732 *1 /3"},1},							
				{"HorizonIndicatorBank",{"0 *1 /3","-0.02 *1 /3"},1},
				{},							
				{"HorizonIndicatorBank",{0.046,0},1},							
				{"HorizonIndicatorBank",{"0.02 *1 /3",0},1},
				{},							
				{"HorizonIndicatorBank",{-0.046,0},1},							
				{"HorizonIndicatorBank",{"-0.02 *1 /3",0},1},
				{},							
				{"HorizonIndicatorBank",{0,"0.06 *1 /3"},1},
				{"HorizonIndicatorBank",{0,"0.02 *1 /3"},1}
			};
		};
		class Pitch_circle_Left
		{
			type="group";
			clipTL[]={0.0,0.0};
			clipBR[]={0.9,1.0};
			class Pitch_Circle_Group_Left
			{
				type = "line";
				width = 4.0;
				points[] = 
				{
					{"HorizonDive_Left",{"-1.0000 * 0.0500","-0.0000 * 0.0450"},1},			//180
					//----------------------------------------------------------------------------------
					{"HorizonDive_Left",{"-1.0000 * 0.0450","-0.0000 * 0.0450"},1},			//180
					{"HorizonDive_Left",{"-0.9962 * 0.0450","-0.0872 * 0.0450"},1},			//185
					{"HorizonDive_Left",{"-0.9848 * 0.0450","-0.1736 * 0.0450"},1},			//190
					{"HorizonDive_Left",{"-0.9659 * 0.0450","-0.2588 * 0.0450"},1},			//195
					{"HorizonDive_Left",{"-0.9397 * 0.0450","-0.3420 * 0.0450"},1},			//200
					{"HorizonDive_Left",{"-0.9063 * 0.0450","-0.4226 * 0.0450"},1},			//205
					{"HorizonDive_Left",{"-0.8660 * 0.0450","-0.5000 * 0.0450"},1},			//210
					{"HorizonDive_Left",{"-0.8192 * 0.0450","-0.5736 * 0.0450"},1},			//215
					{"HorizonDive_Left",{"-0.7660 * 0.0450","-0.6428 * 0.0450"},1},			//220
					{"HorizonDive_Left",{"-0.7071 * 0.0450","-0.7071 * 0.0450"},1},			//225
					{"HorizonDive_Left",{"-0.6428 * 0.0450","-0.7660 * 0.0450"},1},			//230
					{"HorizonDive_Left",{"-0.5736 * 0.0450","-0.8192 * 0.0450"},1},			//235
					{"HorizonDive_Left",{"-0.5000 * 0.0450","-0.8660 * 0.0450"},1},			//240
					{"HorizonDive_Left",{"-0.4226 * 0.0450","-0.9063 * 0.0450"},1},			//245
					{"HorizonDive_Left",{"-0.3420 * 0.0450","-0.9397 * 0.0450"},1},			//250
					{"HorizonDive_Left",{"-0.2588 * 0.0450","-0.9659 * 0.0450"},1},			//255
					{"HorizonDive_Left",{"-0.1736 * 0.0450","-0.9848 * 0.0450"},1},			//260
					{"HorizonDive_Left",{"-0.0872 * 0.0450","-0.9962 * 0.0450"},1},			//265
					{"HorizonDive_Left",{"-0.0000 * 0.0450","-1.0000 * 0.0450"},1},			//270
					//----------------------------------------------------------------------------------
					{"HorizonDive_Left",{"0.0872 * 0.0450","-0.9962 * 0.0450"},1},			//275
					{"HorizonDive_Left",{"0.1736 * 0.0450","-0.9848 * 0.0450"},1},			//280
					{"HorizonDive_Left",{"0.2588 * 0.0450","-0.9659 * 0.0450"},1},			//285
					{"HorizonDive_Left",{"0.3420 * 0.0450","-0.9397 * 0.0450"},1},			//290
					{"HorizonDive_Left",{"0.4226 * 0.0450","-0.9063 * 0.0450"},1},			//295
					{"HorizonDive_Left",{"0.5000 * 0.0450","-0.8660 * 0.0450"},1},			//300
					{"HorizonDive_Left",{"0.5736 * 0.0450","-0.8192 * 0.0450"},1},			//305
					{"HorizonDive_Left",{"0.6428 * 0.0450","-0.7660 * 0.0450"},1},			//310
					{"HorizonDive_Left",{"0.7071 * 0.0450","-0.7071 * 0.0450"},1},			//315
					{"HorizonDive_Left",{"0.7660 * 0.0450","-0.6428 * 0.0450"},1},			//320
					{"HorizonDive_Left",{"0.8192 * 0.0450","-0.5736 * 0.0450"},1},			//325
					{"HorizonDive_Left",{"0.8660 * 0.0450","-0.5000 * 0.0450"},1},			//330
					{"HorizonDive_Left",{"0.9063 * 0.0450","-0.4226 * 0.0450"},1},			//335
					{"HorizonDive_Left",{"0.9397 * 0.0450","-0.3420 * 0.0450"},1},			//340
					{"HorizonDive_Left",{"0.9659 * 0.0450","-0.2588 * 0.0450"},1},			//345
					{"HorizonDive_Left",{"0.9848 * 0.0450","-0.1736 * 0.0450"},1},			//350
					{"HorizonDive_Left",{"0.9962 * 0.0450","-0.0872 * 0.0450"},1},			//355
					{"HorizonDive_Left",{"1.0000 * 0.0450","-0.0000 * 0.0450"},1},			//360
					//----------------------------------------------------------------------------------
					{"HorizonDive_Left",{"1.0000 * 0.0500","-0.0000 * 0.0450"},1}			//360
				};
			};
		};
		class Pitch_circle_Right
		{
			type="group";
			clipTL[]={0.9,0.0};
			clipBR[]={1.0,1.0};
			class Pitch_Circle_Group_Right
			{
				type = "line";
				width = 4.0;
				points[] = 
				{
					{"HorizonDive_Right",{"-1.0000 * 0.0500","-0.0000 * 0.0450"},1},			//180
					//----------------------------------------------------------------------------------
					{"HorizonDive_Right",{"-1.0000 * 0.0450","-0.0000 * 0.0450"},1},			//180
					{"HorizonDive_Right",{"-0.9962 * 0.0450","-0.0872 * 0.0450"},1},			//185
					{"HorizonDive_Right",{"-0.9848 * 0.0450","-0.1736 * 0.0450"},1},			//190
					{"HorizonDive_Right",{"-0.9659 * 0.0450","-0.2588 * 0.0450"},1},			//195
					{"HorizonDive_Right",{"-0.9397 * 0.0450","-0.3420 * 0.0450"},1},			//200
					{"HorizonDive_Right",{"-0.9063 * 0.0450","-0.4226 * 0.0450"},1},			//205
					{"HorizonDive_Right",{"-0.8660 * 0.0450","-0.5000 * 0.0450"},1},			//210
					{"HorizonDive_Right",{"-0.8192 * 0.0450","-0.5736 * 0.0450"},1},			//215
					{"HorizonDive_Right",{"-0.7660 * 0.0450","-0.6428 * 0.0450"},1},			//220
					{"HorizonDive_Right",{"-0.7071 * 0.0450","-0.7071 * 0.0450"},1},			//225
					{"HorizonDive_Right",{"-0.6428 * 0.0450","-0.7660 * 0.0450"},1},			//230
					{"HorizonDive_Right",{"-0.5736 * 0.0450","-0.8192 * 0.0450"},1},			//235
					{"HorizonDive_Right",{"-0.5000 * 0.0450","-0.8660 * 0.0450"},1},			//240
					{"HorizonDive_Right",{"-0.4226 * 0.0450","-0.9063 * 0.0450"},1},			//245
					{"HorizonDive_Right",{"-0.3420 * 0.0450","-0.9397 * 0.0450"},1},			//250
					{"HorizonDive_Right",{"-0.2588 * 0.0450","-0.9659 * 0.0450"},1},			//255
					{"HorizonDive_Right",{"-0.1736 * 0.0450","-0.9848 * 0.0450"},1},			//260
					{"HorizonDive_Right",{"-0.0872 * 0.0450","-0.9962 * 0.0450"},1},			//265
					{"HorizonDive_Right",{"-0.0000 * 0.0450","-1.0000 * 0.0450"},1},			//270
					//----------------------------------------------------------------------------------
					{"HorizonDive_Right",{"0.0872 * 0.0450","-0.9962 * 0.0450"},1},			//275
					{"HorizonDive_Right",{"0.1736 * 0.0450","-0.9848 * 0.0450"},1},			//280
					{"HorizonDive_Right",{"0.2588 * 0.0450","-0.9659 * 0.0450"},1},			//285
					{"HorizonDive_Right",{"0.3420 * 0.0450","-0.9397 * 0.0450"},1},			//290
					{"HorizonDive_Right",{"0.4226 * 0.0450","-0.9063 * 0.0450"},1},			//295
					{"HorizonDive_Right",{"0.5000 * 0.0450","-0.8660 * 0.0450"},1},			//300
					{"HorizonDive_Right",{"0.5736 * 0.0450","-0.8192 * 0.0450"},1},			//305
					{"HorizonDive_Right",{"0.6428 * 0.0450","-0.7660 * 0.0450"},1},			//310
					{"HorizonDive_Right",{"0.7071 * 0.0450","-0.7071 * 0.0450"},1},			//315
					{"HorizonDive_Right",{"0.7660 * 0.0450","-0.6428 * 0.0450"},1},			//320
					{"HorizonDive_Right",{"0.8192 * 0.0450","-0.5736 * 0.0450"},1},			//325
					{"HorizonDive_Right",{"0.8660 * 0.0450","-0.5000 * 0.0450"},1},			//330
					{"HorizonDive_Right",{"0.9063 * 0.0450","-0.4226 * 0.0450"},1},			//335
					{"HorizonDive_Right",{"0.9397 * 0.0450","-0.3420 * 0.0450"},1},			//340
					{"HorizonDive_Right",{"0.9659 * 0.0450","-0.2588 * 0.0450"},1},			//345
					{"HorizonDive_Right",{"0.9848 * 0.0450","-0.1736 * 0.0450"},1},			//350
					{"HorizonDive_Right",{"0.9962 * 0.0450","-0.0872 * 0.0450"},1},			//355
					{"HorizonDive_Right",{"1.0000 * 0.0450","-0.0000 * 0.0450"},1},			//360
					//----------------------------------------------------------------------------------
					{"HorizonDive_Right",{"1.0000 * 0.0500","-0.0000 * 0.0450"},1}			//360
				};
			};
		};
		class Stall_Text
		{
			type = "group";
			condition = "stall";
			color[] = {1.0,0.0,0.0};
			blinkingPattern[] = {0.2,0.2};
			blinkingStartsOn = 1;
			class StallText
			{
				type = "text";
				source = "static";
				text = "STALL";
				align = "center";
				scale = 1;
				pos[] = {{ 0.5,"0.53 - 0.25" },1};
				right[] = {{ 0.55,"0.53 - 0.25" },1};
				down[] = {{ 0.5,"0.53 - 0.20" },1};
			};
		};
	};
};