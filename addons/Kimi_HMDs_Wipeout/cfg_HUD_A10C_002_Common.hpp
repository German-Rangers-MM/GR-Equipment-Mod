class HUD_2_Common
{
	#include "cfg_HUD_A10C_101_Parameters.hpp"
	#include "cfg_HUD_A10C_102_Bones.hpp"
	class Draw
	{
		condition="on";
		#include "cfg_HUD_A10C_103_Color.hpp"
		#include "cfg_HUD_A10C_201_Units.hpp"
		#include "cfg_HUD_A10C_204_GCAS.hpp"
		class AC_Centerline
		{
			type = "line";
			width=4;
			points[] = 
			{
				{"ForwardVec",1,{" -0.008 + 0.5" , "0 + 0.32" },1},
				{"ForwardVec",1,{" 0.008 + 0.5" , "0 + 0.32" },1},
				{ },
				{"ForwardVec",1,{" -0.0 + 0.5" , "0.008 + 0.32" },1},
				{"ForwardVec",1,{" 0.0 + 0.5" , "-0.008 + 0.32" },1}
			};
		};
		class ILS_Bars
		{
			condition = "ils";
			class Glideslope
			{
				clipTL[] = {0.0,0.0};
				clipBR[] = {1.0,1.0};
				class ILS
				{
					type = "line";
					width=2.5;
					points[] = 
					{
						{ "ILS_W",1,{ -0.1,0 },1,"ForwardVec",1,"ForwardVec",1 },
						{ "ILS_W",1,{ 0.1,0 },1,"ForwardVec",1 },
						{},
						{ "ILS_W",1,{ 0,0.01 },1,"ForwardVec",1 },
						{ "ILS_W",1,{ 0,-0.01 },1,"ForwardVec",1 },
						{},
						{ "ILS_W",1,{ 0.05,0.01 },1,"ForwardVec",1 },
						{ "ILS_W",1,{ 0.05,-0.01 },1,"ForwardVec",1 },
						{},
						{ "ILS_W",1,{ 0.1,0.01 },1,"ForwardVec",1 },
						{ "ILS_W",1,{ 0.1,-0.01 },1,"ForwardVec",1 },
						{},
						{ "ILS_W",1,{ -0.05,0.01 },1,"ForwardVec",1 },
						{ "ILS_W",1,{ -0.05,-0.01 },1,"ForwardVec",1 },
						{},
						{ "ILS_W",1,{ -0.1,0.01 },1,"ForwardVec",1 },
						{ "ILS_W",1,{ -0.1,-0.01 },1,"ForwardVec",1 },
						{},
						{ "ILS_H",1,{ 0,-0.1 },1,"ForwardVec",1 },
						{ "ILS_H",1,{ 0,0.1 },1,"ForwardVec",1 },
						{},
						{ "ILS_H",1,{ 0.01,0 },1,"ForwardVec",1 },
						{ "ILS_H",1,{ -0.01,0 },1,"ForwardVec",1 },
						{},
						{ "ILS_H",1,{ 0.01,0.05 },1,"ForwardVec",1 },
						{ "ILS_H",1,{ -0.01,0.05 },1,"ForwardVec",1 },
						{},
						{ "ILS_H",1,{ 0.01,0.1 },1,"ForwardVec",1 },
						{ "ILS_H",1,{ -0.01,0.1 },1,"ForwardVec",1 },
						{},
						{ "ILS_H",1,{ 0.01,-0.05 },1,"ForwardVec",1 },
						{ "ILS_H",1,{ -0.01,-0.05 },1,"ForwardVec",1 },
						{},
						{ "ILS_H",1,{ 0.01,-0.1 },1,"ForwardVec",1 },
						{ "ILS_H",1,{ -0.01,-0.1 },1,"ForwardVec",1 }
					};
				};
			};
		};
		class Stall_Text
		{
			type="group";
			condition="stall";
			color[]={1,0,0};
			blinkingPattern[]={0.2,0.2};
			blinkingStartsOn=1;
			class StallText
			{
				type="text";
				source="static";
				text="STALL";
				align="center";
				scale=1;
				pos[]=	{{0.5,"0.53 - 0.25"},1};
				right[]={{0.55000001,"0.53 - 0.25"},1};
				down[]=	{{0.5,"0.53 - 0.21"},1};
			};
		};
		class G_meter
		{
			type="text";
			source="gmeterYGrav";
			align="Left";
			scale=1;
			sourceScale=0.1;
			sourcePrecision=1;
			pos[]=	{{"0.15 + 0.1","0.53 - 0.40"},1};
			right[]={{"0.20 + 0.1","0.53 - 0.40"},1};
			down[]=	{{"0.15 + 0.1","0.53 - 0.40 + 0.05"},1};
		};
		class Mach_Text_M
		{
			type="text";
			source="static";
			text="M";
			align="left";
			scale=1;
			pos[]=	{{"0.1501 + 0.1",0.53},1};
			right[]={{"0.2001 + 0.1",0.53},1};
			down[]=	{{"0.1501 + 0.1",0.58},1};
		};
		class Mach_Number
		{
			type="text";
			align="left";
			scale=1;
			source="speed";
			sourceScale=0.00294;
			sourcePrecision=2;
			pos[]=	{{"0.12 + 0.1",0.53},1};
			right[]={{"0.17 + 0.1",0.53},1};
			down[]=	{{"0.12 + 0.1",0.58},1};
		};
		class Units_Imperial
		{
			type="group";
			condition="user1";
			class Units_Imperial_HUD
			{
				type="text";
				scale=1;
				source="static";
				text="I";
				align="right";
				pos[]=	{{"0.85 - 0.1",0.15},1};
				right[]={{"0.90 - 0.1",0.15},1};
				down[]=	{{"0.85 - 0.1",0.20},1};
			};
		};
		class Units_Metric
		{
			type="group";
			condition="1-user1";
			class Units_Metric_HUD
			{
				type="text";
				scale=1;
				source="static";
				text="M";
				align="right";
				pos[]=	{{"0.85 - 0.1",0.15},1};
				right[]={{"0.90 - 0.1",0.15},1};
				down[]=	{{"0.85 - 0.1",0.20},1};
			};
		};
		class Pitch_Number
		{
			type="text";
			source="horizonDive";
			sourceScale=57.29578;
			align="right";
			scale=1;
			pos[]=	{{"0.85 - 0.1",0.53},1};
			right[]={{"0.90 - 0.1",0.53},1};
			down[]=	{{"0.85 - 0.1",0.58},1};
		};
		class Heading_Scale
		{
			type="scale";
			horizontal=1;
			source="heading";
			sourceScale=0.1;
			SourceLength=2;
			width=5;
			top=0.35;
			center=0.50;
			bottom=0.65;
			lineXleft="0.06 + 0.85";
			lineYright="0.05 + 0.85";
			lineXleftMajor="0.06 + 0.85";
			lineYrightMajor="0.04 + 0.85";
			majorLineEach=2;
			numberEach=2;
			step="1 / 2";
			stepSize="(0.65 - 0.35) / 6";
			align="center";
			scale=1;
			pos[]=	{0.345,"0.0 + 0.855"};
			right[]={0.385,"0.0 + 0.855"};
			down[]=	{0.345,"0.04 + 0.855"};
		};
		class Heading_Indicator
		{
			type="line";
			width=4;
			points[]=
			{
				{{0.50,0.91},1},
				{{0.515,0.925},1},
				{{0.485,0.925},1},
				{{0.50,0.91},1}
			};
		};
		class WYPT_HDG_Carat
		{
			type="line";
			width=4;
			points[]=
			{
				{"HDG_Tape_WYPT_Indicator",1,"Limit_HDG_Tape",1,{-0.005, 0.000},1},
				{"HDG_Tape_WYPT_Indicator",1,"Limit_HDG_Tape",1,{-0.005, 0.020},1},
				{},
				{"HDG_Tape_WYPT_Indicator",1,"Limit_HDG_Tape",1,{ 0.005, 0.000},1},
				{"HDG_Tape_WYPT_Indicator",1,"Limit_HDG_Tape",1,{ 0.005, 0.020},1}
			};
		};
	};
};