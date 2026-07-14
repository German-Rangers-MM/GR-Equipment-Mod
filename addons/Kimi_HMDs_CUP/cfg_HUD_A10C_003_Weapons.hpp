class HUD_2_Weapons
{
	#include "cfg_HUD_A10C_101_Parameters.hpp"
	#include "cfg_HUD_A10C_102_Bones.hpp"
	class Draw
	{
		condition="on";
		#include "cfg_HUD_A10C_103_Color.hpp"
		class HMCS_OFF
		{
			type="group";
			condition="1-user0";
			class TGP_Point_HUD
			{
				type="line";
				width=4;
				points[]=
				{
					{"TGP_SPI",{-0.0075, 0.0000},1},
					{"TGP_SPI",{ 0.0000,-0.0100},1},
					{"TGP_SPI",{ 0.0075, 0.0000},1},
					{"TGP_SPI",{ 0.0000, 0.0100},1},
					{"TGP_SPI",{-0.0075, 0.0000},1}
				};
			};
		};
		class Laser_ON
		{
			type="group";
			condition="laserON";
			//color[] = {1.0,1.0,1.0};
			blinkingPattern[] = {0.3,0.3};
			blinkingStartsOn = 1;
			class Lasing
			{
				type="text";
				source="static";
				text="L";
				sourceScale=1;
				align="Left";
				scale=1;
				pos[]=	{{"0.15 + 0.1",0.71},1};
				right[]={{"0.19 + 0.1",0.71},1};
				down[]=	{{"0.15 + 0.1",0.75},1};
			};
		};
		class RangeText
		{
			type = "text";
			source = "static";
			text = "RNG/";
			align = "left";
			scale = 1;
			pos[] = 	{{ "0.21 - 0.04",0.76 },1};
			right[] = 	{{ "0.21 - 0.00",0.76 },1};
			down[] = 	{{ "0.21 - 0.04",0.80 },1};
		};
		class RangeNumber
		{
			type = "text";
			source = "targetDist";
			sourceScale=0.00054;
			sourcePrecision=1;
			align = "left";
			scale = 1;
			pos[] = 	{{ 0.21,0.76 },1};
			right[] = 	{{ 0.25,0.76 },1};
			down[] = 	{{ 0.21,0.80 },1};
		};
		class WeaponName
		{
			type = "text";
			source = "weapon";
			sourceScale = 1;
			align = "left";
			scale = 1;
			pos[] = 	{{ 0.21,0.81 },1};
			right[] = 	{{ 0.25,0.81 },1};
			down[] = 	{{ 0.21,0.85 },1};
		};
		class AmmoCount
		{
			type = "text";
			source = "ammo";
			sourceScale = 1;
			align = "left";
			scale = 1;
			pos[] = 	{{ 0.21,0.86 },1};
			right[] = 	{{ 0.25,0.86 },1};
			down[] = 	{{ 0.21,0.90 },1};
		};
		class AGM_group
		{
			condition = "ATmissile";
			type = "group";
			class RangeBand_AGM_Imperial
			{
				type="group";
				condition="user1";
				class Range_Imperial
				{
					type = "line";
					width = 3;
					points[] = 
					{
						{ "RangeBone_Imperial",{ 0,0 },1 },
						{ "RangeBone_Imperial",{ -0.01,-0.01 },1 },
						{ "RangeBone_Imperial",{ -0.01,0.01 },1 },
						{ "RangeBone_Imperial",{ 0,0 },1 }
					};
				};
			};
			class RangeBand_AGM_Metric
			{
				type="group";
				condition="1-user1";
				class Range_Imperial
				{
					type = "line";
					width = 3;
					points[] = 
					{
						{ "RangeBone_Metric",{ 0,0 },1 },
						{ "RangeBone_Metric",{ -0.01,-0.01 },1 },
						{ "RangeBone_Metric",{ -0.01,0.01 },1 },
						{ "RangeBone_Metric",{ 0,0 },1 }
					};
				};
			};
			class Range_marks_AGM
			{
				type = "line";
				width = 3;
				points[] = 
				{
					{{ 0.08,0.4 },1 },
					{{ 0.1,0.4 },1 },
					{},
					{{ 0.08,0.467 },1 },
					{{ 0.1,0.467 },1 },
					{},
					{{ 0.08,0.567 },1 },
					{{ 0.1,0.567 },1 },
					{},
					{{ 0.08,0.6 },1 },
					{{ 0.1,0.6 },1 },
					{},
					{{ 0.08,0.467 },1 },
					{{ 0.08,0.567 },1 }
				};
			};
		};
		class TOF_group
		{
			condition = "(Bomb+ATmissile)*(120-MissileFlightTime)";
			type = "group";
			/*class TOFtext_BOMB
			{
				type = "text";
				align = "right";
				source = "static";
				text = "TOF=";
				scale = 1;
				pos[] = {{ 0.15,0.62 },1};
				right[] = {{ 0.19,0.62 },1};
				down[] = {{ 0.15,0.66 },1};
			};*/
			class TOFnumber_BOMB
			{
				//sourcescale = 0.0025; // mav
				//sourcescale = 0.013; // gbu
				type = "text";
				source = "MissileFlightTime";
				text="%X";
				sourceScale = 1;
				align = "right";
				scale = 1;
				pos[] = 	{{ 0.08,0.63 },1};
				right[] = 	{{ 0.12,0.63 },1};
				down[] = 	{{ 0.08,0.67 },1};
			};
		};
	};
};