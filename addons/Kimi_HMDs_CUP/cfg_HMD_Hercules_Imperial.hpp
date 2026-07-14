class MFD
{
	class AirplaneHUD 
	{
		class Bones {};
		class Draw {};
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.15000001,1,0.15000001,1};
		enableParallax=0;
		////
		helmetMountedDisplay=1;
		helmetPosition[]={0,0,0};
		helmetRight[]={0,0,0};
		helmetDown[]={0,0,0};
	};
	class AirplaneHUD2
	{
		class Bones {};
		class Draw {};
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.15000001,1,0.15000001,1};
		enableParallax=0;
		////
		helmetMountedDisplay=1;
		helmetPosition[]={0,0,0};
		helmetRight[]={0,0,0};
		helmetDown[]={0,0,0};
	};
	class HUD_1
	{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft = 0; //0.07;
		borderRight = 0; //0.07;
		borderTop = 0;
		borderBottom = 0;
		color[] = {0,1,0,0.1};
		enableParallax = 1;
		helmetMountedDisplay=1;
		helmetPosition[]={-0.040,0.040,0.10};
		helmetRight[]={0.08000000,0,0};
		helmetDown[]={-0,-0.08000000,0};
		class Bones
		{
			class ForwardVec
			{
				type = "vector";
				source = "forward";
				pos0[] = {0.0,0.0};
				pos10[] = {0.0,0.0};
			};
			class HorizonBankRot
			{
				type="rotational";
				source="horizonBank";
				center[]={0.5,0.5};
				min=-3.1416;
				max=3.1416;
				//max=0.52359998;
				minAngle=-180;
				maxAngle=180;
				aspectRatio=1;
			};
			class RadarAltitudeBone
			{
				type="linear";
				source="altitudeAGL";
				sourceScale=3.28084;
				//hideValue=1500;
				min=0;
				max=1500;
				minPos[]={0.71,0.30};
				maxPos[]={0.71,0.50};
			};
			class ILS_H
			{
				type = "ils";
				pos0[] = {0.5,0.5};
				pos3[] = {0.6,0.5};
			};
			class ILS_W: ILS_H
			{
				pos3[] = {0.5,0.6};
			};
			class ASL_Instrument
			{
				type = "rotational";
				source = "altitudeASL";
				sourceScale=1;
				center[] = {0.9,0.40};
				min = 0;
				max = "50000/3.28084";
				minAngle = 0;
				maxAngle = 18000;
				aspectRatio = 1.13402;
			};
			class Speed_Instrument: ASL_Instrument
			{
				source = "speed";
				//sourceScale=1.94384;
				sourceScale=1;
				center[] = {0.1,0.40};
				max = "1000*1.852*1000/3600";
				maxAngle = 3600;
			};
		};
		class Draw
		{
			alpha = 0.9;
			color[]={0.15000001,1,0.15000001};
			condition = "on";
			class Static_Rots
			{
				type = "line";
				points[] = 
				{
					// horizontales speed
					{ {0.0225,0.4},1 },
					{ {0.0275,0.4},1 },
					{},
					{ {0.0282,0.3713},1 },
					{ {0.0332,0.3713},1 },
					{},
					{ {0.0445,0.3470},1 },
					{ {0.0495,0.3470},1 },
					{},
					{ {0.0688,0.3307},1 },
					{ {0.0738,0.3307},1 },
					{},
					{ {0.0975,0.3250},1 },
					{ {0.1025,0.3250},1 },
					{},
					{ {0.1262,0.3307},1 },
					{ {0.1312,0.3307},1 },
					{},
					{ {0.1505,0.3470},1 },
					{ {0.1555,0.3470},1 },
					{},
					{ {0.1668,0.3713},1 },
					{ {0.1718,0.3713},1 },
					{},
					{ {0.1725,0.4},1 },
					{ {0.1775,0.4},1 },
					{},
					{ {0.1668,0.4287},1 },
					{ {0.1718,0.4287},1 },
					{},
					{ {0.1505,0.4530},1 },
					{ {0.1555,0.4530},1 },
					{},
					{ {0.1262,0.4693},1 },
					{ {0.1312,0.4693},1 },
					{},
					{ {0.0975,0.4750},1 },
					{ {0.1025,0.4750},1 },
					{},
					{ {0.0688,0.4693},1 },
					{ {0.0738,0.4693},1 },
					{},
					{ {0.0445,0.4530},1 },
					{ {0.0495,0.4530},1 },
					{},
					{ {0.0282,0.4287},1 },
					{ {0.0332,0.4287},1 },
					{},
					// verticales speed
					{ {0.0250,0.3975},1 },
					{ {0.0250,0.4025},1 },
					{},
					{ {0.0307,0.3688},1 },
					{ {0.0307,0.3738},1 },
					{},
					{ {0.0470,0.3445},1 },
					{ {0.0470,0.3495},1 },
					{},
					{ {0.0713,0.3282},1 },
					{ {0.0713,0.3332},1 },
					{},
					{ {0.1,0.3225},1 },
					{ {0.1,0.3275},1 },
					{},
					{ {0.1287,0.3282},1 },
					{ {0.1287,0.3332},1 },
					{},
					{ {0.1530,0.3445},1 },
					{ {0.1530,0.3495},1 },
					{},
					{ {0.1693,0.3688},1 },
					{ {0.1693,0.3738},1 },
					{},
					{ {0.1750,0.3975},1 },
					{ {0.1750,0.4025},1 },
					{},
					{ {0.1693,0.4262},1 },
					{ {0.1693,0.4312},1 },
					{},
					{ {0.1530,0.4505},1 },
					{ {0.1530,0.4555},1 },
					{},
					{ {0.1287,0.4668},1 },
					{ {0.1287,0.4718},1 },
					{},
					{ {0.1,0.4725},1 },
					{ {0.1,0.4775},1 },
					{},
					{ {0.0713,0.4668},1 },
					{ {0.0713,0.4718},1 },
					{},
					{ {0.0470,0.4505},1 },
					{ {0.0470,0.4555},1 },
					{},
					{ {0.0307,0.4262},1 },
					{ {0.0307,0.4312},1 },
					{},
					// --------------------------------------
					// horizontales ALTITUDE
					{ {"0.80+0.0225",0.4},1 },
					{ {"0.80+0.0275",0.4},1 },
					{},
					{ {"0.80+0.0282",0.3713},1 },
					{ {"0.80+0.0332",0.3713},1 },
					{},
					{ {"0.80+0.0445",0.3470},1 },
					{ {"0.80+0.0495",0.3470},1 },
					{},
					{ {"0.80+0.0688",0.3307},1 },
					{ {"0.80+0.0738",0.3307},1 },
					{},
					{ {"0.80+0.0975",0.3250},1 },
					{ {"0.80+0.1025",0.3250},1 },
					{},
					{ {"0.80+0.1262",0.3307},1 },
					{ {"0.80+0.1312",0.3307},1 },
					{},
					{ {"0.80+0.1505",0.3470},1 },
					{ {"0.80+0.1555",0.3470},1 },
					{},
					{ {"0.80+0.1668",0.3713},1 },
					{ {"0.80+0.1718",0.3713},1 },
					{},
					{ {"0.80+0.1725",0.4},1 },
					{ {"0.80+0.1775",0.4},1 },
					{},
					{ {"0.80+0.1668",0.4287},1 },
					{ {"0.80+0.1718",0.4287},1 },
					{},
					{ {"0.80+0.1505",0.4530},1 },
					{ {"0.80+0.1555",0.4530},1 },
					{},
					{ {"0.80+0.1262",0.4693},1 },
					{ {"0.80+0.1312",0.4693},1 },
					{},
					{ {"0.80+0.0975",0.4750},1 },
					{ {"0.80+0.1025",0.4750},1 },
					{},
					{ {"0.80+0.0688",0.4693},1 },
					{ {"0.80+0.0738",0.4693},1 },
					{},
					{ {"0.80+0.0445",0.4530},1 },
					{ {"0.80+0.0495",0.4530},1 },
					{},
					{ {"0.80+0.0282",0.4287},1 },
					{ {"0.80+0.0332",0.4287},1 },
					{},
					// verticales ALTITUDE
					{ {"0.80+0.0250",0.3975},1 },
					{ {"0.80+0.0250",0.4025},1 },
					{},
					{ {"0.80+0.0307",0.3688},1 },
					{ {"0.80+0.0307",0.3738},1 },
					{},
					{ {"0.80+0.0470",0.3445},1 },
					{ {"0.80+0.0470",0.3495},1 },
					{},
					{ {"0.80+0.0713",0.3282},1 },
					{ {"0.80+0.0713",0.3332},1 },
					{},
					{ {"0.80+0.1",0.3225},1 },
					{ {"0.80+0.1",0.3275},1 },
					{},
					{ {"0.80+0.1287",0.3282},1 },
					{ {"0.80+0.1287",0.3332},1 },
					{},
					{ {"0.80+0.1530",0.3445},1 },
					{ {"0.80+0.1530",0.3495},1 },
					{},
					{ {"0.80+0.1693",0.3688},1 },
					{ {"0.80+0.1693",0.3738},1 },
					{},
					{ {"0.80+0.1750",0.3975},1 },
					{ {"0.80+0.1750",0.4025},1 },
					{},
					{ {"0.80+0.1693",0.4262},1 },
					{ {"0.80+0.1693",0.4312},1 },
					{},
					{ {"0.80+0.1530",0.4505},1 },
					{ {"0.80+0.1530",0.4555},1 },
					{},
					{ {"0.80+0.1287",0.4668},1 },
					{ {"0.80+0.1287",0.4718},1 },
					{},
					{ {"0.80+0.1",0.4725},1 },
					{ {"0.80+0.1",0.4775},1 },
					{},
					{ {"0.80+0.0713",0.4668},1 },
					{ {"0.80+0.0713",0.4718},1 },
					{},
					{ {"0.80+0.0470",0.4505},1 },
					{ {"0.80+0.0470",0.4555},1 },
					{},
					{ {"0.80+0.0307",0.4262},1 },
					{ {"0.80+0.0307",0.4312},1 },
					{},
					//---------------------------------------
					// bones
					{ "Speed_Instrument",{ 0,0.045 },1 },
					{ "Speed_Instrument",{ 0,0.065 },1 },
					{  },
					{ "ASL_Instrument",{ 0,0.045 },1 },
					{ "ASL_Instrument",{ 0,0.065 },1 },
				};
			};
			class SpeedNumber
			{
				type = "text";
				source = "speed";
				sourceScale=1.94384;
				align = "center";
				scale = 1;
				pos[] = 	{{ 0.10,0.365 },1};
				right[] = 	{{ 0.16,0.365 },1};
				down[] = 	{{ 0.10,0.425 },1};
			};
			class AltNumber: SpeedNumber
			{
				source = "altitudeASL";
				sourceScale=3.28084;
				pos[] = 	{{ 0.90,0.365 },1};
				right[] = 	{{ 0.96,0.365 },1};
				down[] = 	{{ 0.90,0.425 },1};
			};
			
			class Stall
			{
				condition = "stall";
				color[] = {1.0,0.0,0.0};
				blinkingPattern[] = {0.2,0.2};
				blinkingStartsOn = 1;
				class Text
				{
					type = "text";
					source = "static";
					text = "STALL";
					align = "center";
					scale = 1;
					pos[] = {{ 0.5,0.204124 },1};
					right[] = {{ 0.56,0.204124 },1};
					down[] = {{ 0.5,0.260825 },1};
				};
			};
			
			class Center_box
			{
				type = "line";
				width = 3.0;
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
			class HeadingNumber
			{
				type="text";
				scale=1;
				width = 2.0;
				source="heading";
				sourceScale=1;
				align="center";
				pos[]=
				{
					{0.5,0.01},
					1
				};
				right[]=
				{
					{0.55,0.01},
					1
				};
				down[]=
				{
					{0.5,0.06},
					1
				};
			};
			
			class HeadingScale
			{
				clipTL[]={0.35,0};
				clipBR[]={0.65,1};
				class Heading_Scale
				{
					type="scale";
					horizontal=1;
					source="heading";
					sourceScale=1;
					width=3;
					//top=0.00000001;
					//center=0.5;
					//bottom=0.99999999;
					top=	0.35;
					center=	0.50;
					bottom=	0.65;
					lineXleft="0.04 + 0.085";
					lineYright="0.03 + 0.085";
					lineXleftMajor="0.04 + 0.085";
					lineYrightMajor="0.02 + 0.085";
					majorLineEach=2;
					numberEach=2;
					step=5;
					//stepSize="0.1";
					stepSize="(0.65 - 0.35) / 5";
					align="center";
					scale=1;
					//pos[]={0.00000001,"0.0 + 0.065"};
					//right[]={0.03,"0.0 + 0.065"};
					//down[]={0.00000001,"0.03 + 0.065"};
					pos[]={0.35,"0.0 + 0.065"};
					right[]={"0.35 + 0.03","0.0 + 0.065"};
					down[]={0.35,"0.03 + 0.065"};
				};
			};
			
			class Bank_Marks
			{
				type="line";
				width=3;
				points[]=
				{
					////////////////////////////////////////////////////// LEFT
					{{0.4566,"1 - 0.2538 - 0.0"},1},			// 10º r25
					{{0.4549,"1 - 0.2439 - 0.0"},1},			// 10º r26
					{},	
					{{0.4145,"1 - 0.2651 - 0.0"},1},			// 20º r25
					{{0.4111,"1 - 0.2557 - 0.0"},1},			// 20º r26
					{},	
					{{0.3750,"1 - 0.2835 - 0.0"},1},			// 30º r25
					{{0.3650,"1 - 0.2662 - 0.0"},1},			// 30º r27
					{},	
					{{0.3232,"1 - 0.3232 - 0.0"},1}, 			// 45º r25
					{{0.3091,"1 - 0.3091 - 0.0"},1},			// 45º r27
					{},	
					/////////////////////////////////////////////////////// RIGHT
					{{"1 - 0.4566","1 - 0.2538 - 0.0"},1},	// 10º r25
					{{"1 - 0.4549","1 - 0.2439 - 0.0"},1},	// 10º r26
					{},	
					{{"1 - 0.4145","1 - 0.2651 - 0.0"},1},	// 20º r25
					{{"1 - 0.411)","1 - 0.2557 - 0.0"},1},	// 20º r26
					{},	
					{{"1 - 0.3750","1 - 0.2835 - 0.0"},1},	// 30º r25
					{{"1 - 0.3650","1 - 0.2662 - 0.0"},1},	// 30º r27
					{},	
					{{"1 - 0.3232","1 - 0.3232 - 0.0"},1}, 	// 45º r25
					{{"1 - 0.3091","1 - 0.3091 - 0.0"},1},	// 45º r27
					{},	
					/////////////////////////////////////////////////////// CENTER
					{{0.5,"1 - (0.5 - 0.25) - 0.0"},1}, 		// 0º r25
					{{0.5,"1 - (0.5 - 0.27) - 0.0"},1}		// 0º r27
				};
			};
			class Bank_Indicator
			{
				type="line";
				width=3;
				points[]=
				{
					{"HorizonBankRot",{0		, -0.27	},1},
					{"HorizonBankRot",{-0.01	, -0.29	},1},
					{"HorizonBankRot",{0.01		, -0.29	},1},
					{"HorizonBankRot",{0		, -0.27	},1}
				};
			};
			
			class GearGroup
			{
				type = "group";
				condition = "ils";
				class GearText
				{
					type = "text";
					source = "static";
					text = "GEAR";
					align = "left";
					width = 1;
					scale = 1;
					pos[] = {{ 0.165,0.69 },1};
					right[] = {{ "0.165 + 0.040",0.69 },1};
					down[] = {{ 0.165,"0.690 + 0.040" },1};
				};
				class radarbanda
				{
					type = "line";
					width = 4;
					points[] = {{ "RadarAltitudeBone",{ -0.005,0.005 },1 },{ "RadarAltitudeBone",{ -0.005,0 },1 },{ "RadarAltitudeBone",{ 0,0 },1 },{ { 0.71,"0.60 - 0.1" },1 },{  },{ { 0.71,"0.40 - 0.1" },1 },{ { 0.72,"0.40 - 0.1" },1 },{  },{ { 0.71,"0.44 - 0.1" },1 },{ { 0.72,"0.44 - 0.1" },1 },{  },{ { 0.71,"0.48 - 0.1" },1 },{ { 0.72,"0.48 - 0.1" },1 },{  },{ { 0.71,"0.52 - 0.1" },1 },{ { 0.72,"0.52 - 0.1" },1 },{  },{ { 0.71,"0.56 - 0.1" },1 },{ { 0.72,"0.56 - 0.1" },1 },{  },{ { 0.71,"0.60 - 0.1" },1 },{ { 0.72,"0.60 - 0.1" },1 }};
				};
				class radartext_15
				{
					type="text";
					source="static";
					text="15";
					align="right";
					scale=1;
					pos[]= 		{{0.721,"0.385 + 0.00 - 0.1"},1};
					right[]=	{{0.751,"0.385 + 0.00 - 0.1"},1};
					down[]=		{{0.721,"0.415 + 0.00 - 0.1"},1};
				};
				class radartext_12
				{
					type="text";
					source="static";
					text="12";
					align="right";
					scale=1;
					pos[]= 		{{0.721,"0.385 + 0.04 - 0.1"},1};
					right[]=	{{0.751,"0.385 + 0.04 - 0.1"},1};
					down[]=		{{0.721,"0.415 + 0.04 - 0.1"},1};
				};
				class radartext_9
				{
					type="text";
					source="static";
					text="9";
					align="right";
					scale=1;
					pos[]= 		{{0.721,"0.385 + 0.08 - 0.1"},1};
					right[]=	{{0.751,"0.385 + 0.08 - 0.1"},1};
					down[]=		{{0.721,"0.415 + 0.08 - 0.1"},1};
				};
				class radartext_6
				{
					type="text";
					source="static";
					text="6";
					align="right";
					scale=1;
					pos[]= 		{{0.721,"0.385 + 0.120 - 0.1"},1};
					right[]=	{{0.751,"0.385 + 0.120 - 0.1"},1};
					down[]=		{{0.721,"0.415 + 0.120 - 0.1"},1};
				};
				class radartext_3
				{
					type="text";
					source="static";
					text="3";
					align="right";
					scale=1;
					pos[]= 		{{0.721,"0.385 + 0.160 - 0.1"},1};
					right[]=	{{0.751,"0.385 + 0.160 - 0.1"},1};
					down[]=		{{0.721,"0.415 + 0.160 - 0.1"},1};
				};
				class radartext_0
				{
					type="text";
					source="static";
					text="0";
					align="right";
					scale=1;
					pos[]= 		{{0.721,"0.385 + 0.200 - 0.1"},1};
					right[]=	{{0.751,"0.385 + 0.200 - 0.1"},1};
					down[]=		{{0.721,"0.415 + 0.200 - 0.1"},1};
				};
			};
			class FLAPSGroup
			{
				type = "group";
				condition = "flaps";
				class FLAPSText
				{
					type = "text";
					source = "static";
					text = "FLAPS";
					align = "left";
					width = 1;
					scale = 1;
					pos[] = {{ 0.165,"0.690	+ 0.05" },1};
					right[] = {{ "0.165 + 0.040","0.690	+ 0.05" },1};
					down[] = {{ 0.165,"0.690 + 0.05 + 0.040" },1};
				};
			};
			class LightsGroup
			{
				type = "group";
				condition = "lights";
				class LightsText
				{
					type = "text";
					source = "static";
					text = "LLS";
					align = "left";
					width = 1;
					scale = 1;
					pos[] = {{ 0.165,"0.690	+ 0.10" },1};
					right[] = {{ "0.165 + 0.040","0.690	+ 0.10" },1};
					down[] = {{ 0.165,"0.690 + 0.10 + 0.040" },1};
				};
			};
			class CollisionLightsGroup
			{
				type = "group";
				condition = "collisionlights";
				class CollisionLightsText
				{
					type = "text";
					source = "static";
					text = "A-COL";
					align = "left";
					width = 1;
					scale = 1;
					pos[] = {{ 0.165,"0.690	+ 0.15" },1};
					right[] = {{ "0.165 + 0.040","0.690	+ 0.15" },1};
					down[] = {{ 0.165,"0.690 + 0.15 + 0.040" },1};
				};
			};
			class ILS_Bars
			{
				condition = "ils";
				color[] = {0.0,0.5,0.4};
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
							{  },
							{ "ILS_W",1,{ 0,0.01 },1,"ForwardVec",1 },
							{ "ILS_W",1,{ 0,-0.01 },1,"ForwardVec",1 },
							{  },
							{ "ILS_W",1,{ 0.05,0.01 },1,"ForwardVec",1 },
							{ "ILS_W",1,{ 0.05,-0.01 },1,"ForwardVec",1 },
							{  },
							{ "ILS_W",1,{ 0.1,0.01 },1,"ForwardVec",1 },
							{ "ILS_W",1,{ 0.1,-0.01 },1,"ForwardVec",1 },
							{  },
							{ "ILS_W",1,{ -0.05,0.01 },1,"ForwardVec",1 },
							{ "ILS_W",1,{ -0.05,-0.01 },1,"ForwardVec",1 },
							{  },
							{ "ILS_W",1,{ -0.1,0.01 },1,"ForwardVec",1 },
							{ "ILS_W",1,{ -0.1,-0.01 },1,"ForwardVec",1 },
							{  },
							{ "ILS_H",1,{ 0,-0.1 },1,"ForwardVec",1 },
							{ "ILS_H",1,{ 0,0.1 },1,"ForwardVec",1 },
							{  },
							{ "ILS_H",1,{ 0.01,0 },1,"ForwardVec",1 },
							{ "ILS_H",1,{ -0.01,0 },1,"ForwardVec",1 },
							{  },
							{ "ILS_H",1,{ 0.01,0.05 },1,"ForwardVec",1 },
							{ "ILS_H",1,{ -0.01,0.05 },1,"ForwardVec",1 },
							{  },
							{ "ILS_H",1,{ 0.01,0.1 },1,"ForwardVec",1 },
							{ "ILS_H",1,{ -0.01,0.1 },1,"ForwardVec",1 },
							{  },
							{ "ILS_H",1,{ 0.01,-0.05 },1,"ForwardVec",1 },
							{ "ILS_H",1,{ -0.01,-0.05 },1,"ForwardVec",1 },
							{  },
							{ "ILS_H",1,{ 0.01,-0.1 },1,"ForwardVec",1 },
							{ "ILS_H",1,{ -0.01,-0.1 },1,"ForwardVec",1 }
						};
					};
				};
			};
			
			class Altitude_ASL_text
			{
				type="text";
				align="left";
				source="static";
				text="AGL:";
				scale=1;
				width=1;
				pos[]=	{{"0.805","0.69"},1};
				right[]={{"0.845","0.69"},1};
				down[]=	{{"0.805","0.73"},1};
			};
			class Altitude_AGL_number
			{
				type="text";
				align="right";
				source = "altitudeAGL";
				sourceScale=3.28084;
				scale=1;
				width=1;
				pos[]=	{{"0.805 + 0.01","0.69"},1};
				right[]={{"0.845 + 0.01","0.69"},1};
				down[]=	{{"0.805 + 0.01","0.73"},1};
			};
			class Climb_text
			{
				type="text";
				align="left";
				source="static";
				text="VSpeed:";
				scale=1;
				width=1;
				pos[]=	{{"0.805","0.69 + 0.05"},1};
				right[]={{"0.845","0.69 + 0.05"},1};
				down[]=	{{"0.805","0.73 + 0.05"},1};
			};
			class Climb_number
			{
				type="text";
				align="right";
				source="vspeed";
				sourceScale=sourceScale=1.9685;
				scale=1;
				width=1;
				pos[]=	{{"0.805 + 0.01","0.69 + 0.05"},1};
				right[]={{"0.845 + 0.01","0.69 + 0.05"},1};
				down[]=	{{"0.805 + 0.01","0.73 + 0.05"},1};
			};
			class Fuel_text
			{
				type="text";
				align="left";
				source="static";
				text="Fuel:";
				scale=1;
				width=1;
				pos[]=	{{"0.805","0.69 + 0.10"},1};
				right[]={{"0.845","0.69 + 0.10"},1};
				down[]=	{{"0.805","0.73 + 0.10"},1};
			};
			class Fuel_number
			{
				type="text";
				align="right";
				source="fuel";
				sourceScale=100;
				scale=1;
				width=1;
				pos[]=	{{"0.805 + 0.01","0.69 + 0.10"},1};
				right[]={{"0.845 + 0.01","0.69 + 0.10"},1};
				down[]=	{{"0.805 + 0.01","0.73 + 0.10"},1};
			};
		};
	};
	class HUD_Horizon
	{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft = -0.2;
		borderRight = -0.2;
		borderTop = -0.2;
		borderBottom = -0.2;
		color[]={0.15000001,1,0.15000001,1};
		enableParallax=1;
		helmetMountedDisplay=1;
		helmetPosition[]={-0.040,0.040,0.10};
		helmetRight[]={0.08000000,0,0};
		helmetDown[]={-0,-0.08000000,0};
		class Bones
		{
			class ForwardVec
			{
				type = "vector";
				source = "forward";
				pos0[] = {0,0};
				//pos10[] = {0.2220,0.2220};
				pos10[] = {0.218,0.218};
			};
			class ForwardVec2
			{
				type = "vector";
				source = "forward";
				pos0[] = {0.0,0.0};
				//pos10[] = {0.2220,0.2220};
				pos10[] = {0.218,0.218};
			};
			class Velocity
			{
				type="vector";
				source="velocity";
				pos0[]={0.5,0.5};
				//pos10[]={"0.5 + 0.218","0.5 + 0.218"};
				pos10[]={"0.5 + 0.3","0.5 + 0.3"};
			};
			class Velocity2
			{
				type="vector";
				source="velocity";
				pos0[]={0.5,0.5};
				pos10[]={"0.5 + 0.3","0.5 + 0.0"};
			};
			class HorizonBankRot
			{
				type="rotational";
				source="horizonBank";
				center[]={0.5,0.5};
				min=-3.1416;
				max=3.1416;
				minAngle=-180;
				maxAngle=180;
				aspectRatio=1;
			};
			class PlaneOrientation
			{
				type="fixed";
				pos[]={0.5,0.50};
			};
			class Velocity_slip
			{
				type="vector";
				source="velocity";
				pos0[]={0.5,0.845};
				pos10[]={0.57,0.845};
			};
			class Level0
			{
				type="horizon";
				pos0[]=	{0.50,0.50};
				pos10[]={"0.50 + 0.225","0.50 + 0.225"};
				//pos10[]={0.775,0.775};
				angle=0;
			};
			class LevelP5: Level0
			{
				angle=5;
			};
			class LevelM5: Level0
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
		class Draw
		{
			alpha = 0.9;
			color[]={0.15000001,1,0.15000001};
			condition="on";
			#include "cfg_HMD_Horizon_3_fwd.hpp"
			class Slip_ball_group
			{
				class Slip_bars
				{
					type="line";
					width=4;
					points[]=
					{
						{{"0.5-0.018","0.9-0.04"},1},
						{{"0.5-0.018","0.9-0.075"},1},
						{},
						{{"0.5+0.018","0.9-0.04"},1},
						{{"0.5+0.018","0.9-0.075"},1},
						{},
						{{"0.5+0.2","0.9-0.04"},1},
						{{"0.5-0.2","0.9-0.04"},1},
					};
				};
				class Slip_ball
				{
					type = "line";
					width = 6.0;
					points[]=
					{
						{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.75","-0.01732 * 0.75"},1},
						{"Velocity_slip",1,{"0.01732 * 0.75","-0.0099999998 * 0.75"},1},
						{"Velocity_slip",1,{"0.02 * 0.75","0 * 0.75"},1},
						{"Velocity_slip",1,{"0.01732 * 0.75","0.0099999998 * 0.75"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.75","0.01732 * 0.75"},1},
						{"Velocity_slip",1,{"0 * 0.75","0.02 * 0.75"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.75","0.01732 * 0.75"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.75","0.0099999998 * 0.75"},1},
						{"Velocity_slip",1,{"-0.02 * 0.75","0 * 0.75"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.75","-0.0099999998 * 0.75"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.75","-0.01732 * 0.75"},1},
						{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},
						{},
						{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.6","-0.01732 * 0.6"},1},
						{"Velocity_slip",1,{"0.01732 * 0.6","-0.0099999998 * 0.6"},1},
						{"Velocity_slip",1,{"0.02 * 0.6","0 * 0.6"},1},
						{"Velocity_slip",1,{"0.01732 * 0.6","0.0099999998 * 0.6"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.6","0.01732 * 0.6"},1},
						{"Velocity_slip",1,{"0 * 0.6","0.02 * 0.6"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.6","0.01732 * 0.6"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.6","0.0099999998 * 0.6"},1},
						{"Velocity_slip",1,{"-0.02 * 0.6","0 * 0.6"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.6","-0.0099999998 * 0.6"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.6","-0.01732 * 0.6"},1},
						{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},
						{},
						{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.5","-0.01732 * 0.5"},1},
						{"Velocity_slip",1,{"0.01732 * 0.5","-0.0099999998 * 0.5"},1},
						{"Velocity_slip",1,{"0.02 * 0.5","0 * 0.5"},1},
						{"Velocity_slip",1,{"0.01732 * 0.5","0.0099999998 * 0.5"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.5","0.01732 * 0.5"},1},
						{"Velocity_slip",1,{"0 * 0.5","0.02 * 0.5"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.5","0.01732 * 0.5"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.5","0.0099999998 * 0.5"},1},
						{"Velocity_slip",1,{"-0.02 * 0.5","0 * 0.5"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.5","-0.0099999998 * 0.5"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.5","-0.01732 * 0.5"},1},
						{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},
						{},
						{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.4","-0.01732 * 0.4"},1},
						{"Velocity_slip",1,{"0.01732 * 0.4","-0.0099999998 * 0.4"},1},
						{"Velocity_slip",1,{"0.02 * 0.4","0 * 0.4"},1},
						{"Velocity_slip",1,{"0.01732 * 0.4","0.0099999998 * 0.4"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.4","0.01732 * 0.4"},1},
						{"Velocity_slip",1,{"0 * 0.4","0.02 * 0.4"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.4","0.01732 * 0.4"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.4","0.0099999998 * 0.4"},1},
						{"Velocity_slip",1,{"-0.02 * 0.4","0 * 0.4"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.4","-0.0099999998 * 0.4"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.4","-0.01732 * 0.4"},1},
						{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},
						{},
						{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.30","-0.01732 * 0.30"},1},
						{"Velocity_slip",1,{"0.01732 * 0.30","-0.0099999998 * 0.30"},1},
						{"Velocity_slip",1,{"0.02 * 0.30","0 * 0.30"},1},
						{"Velocity_slip",1,{"0.01732 * 0.30","0.0099999998 * 0.30"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.30","0.01732 * 0.30"},1},
						{"Velocity_slip",1,{"0 * 0.30","0.02 * 0.30"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.30","0.01732 * 0.30"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.30","0.0099999998 * 0.30"},1},
						{"Velocity_slip",1,{"-0.02 * 0.30","0 * 0.30"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.30","-0.0099999998 * 0.30"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.30","-0.01732 * 0.30"},1},
						{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},
						{},
						{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.20","-0.01732 * 0.20"},1},
						{"Velocity_slip",1,{"0.01732 * 0.20","-0.0099999998 * 0.20"},1},
						{"Velocity_slip",1,{"0.02 * 0.20","0 * 0.20"},1},
						{"Velocity_slip",1,{"0.01732 * 0.20","0.0099999998 * 0.20"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.20","0.01732 * 0.20"},1},
						{"Velocity_slip",1,{"0 * 0.20","0.02 * 0.20"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.20","0.01732 * 0.20"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.20","0.0099999998 * 0.20"},1},
						{"Velocity_slip",1,{"-0.02 * 0.20","0 * 0.20"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.20","-0.0099999998 * 0.20"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.20","-0.01732 * 0.20"},1},
						{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},
						{},
						{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.1","-0.01732 * 0.1"},1},
						{"Velocity_slip",1,{"0.01732 * 0.1","-0.0099999998 * 0.1"},1},
						{"Velocity_slip",1,{"0.02 * 0.1","0 * 0.1"},1},
						{"Velocity_slip",1,{"0.01732 * 0.1","0.0099999998 * 0.1"},1},
						{"Velocity_slip",1,{"0.0099999998 * 0.1","0.01732 * 0.1"},1},
						{"Velocity_slip",1,{"0 * 0.1","0.02 * 0.1"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.1","0.01732 * 0.1"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.1","0.0099999998 * 0.1"},1},
						{"Velocity_slip",1,{"-0.02 * 0.1","0 * 0.1"},1},
						{"Velocity_slip",1,{"-0.01732 * 0.1","-0.0099999998 * 0.1"},1},
						{"Velocity_slip",1,{"-0.0099999998 * 0.1","-0.01732 * 0.1"},1},
						{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1}
					};
				};
			};
			class Waterline_mark
			{
				type="group";
				class waterline
				{
					type="line";
					width=2.5;
					points[]=
					{
						{ "ForwardVec",1,"PlaneOrientation",1,{ -0.025,0.000 },1 },
						{ "ForwardVec",1,"PlaneOrientation",1,{ -0.010,0.000 },1 },
						///
						{ "ForwardVec",1,"PlaneOrientation",1,{ -0.005,0.0085 },1 },
						{ "ForwardVec",1,"PlaneOrientation",1,{ 0.000,0.000 },1 },
						{ "ForwardVec",1,"PlaneOrientation",1,{ 0.005,0.0085 },1 },
						///
						{ "ForwardVec",1,"PlaneOrientation",1,{ 0.010,0.000 },1 },
						{ "ForwardVec",1,"PlaneOrientation",1,{ 0.025,0.000 },1 }
					};
				};
			};
			class TVV
			{
				type="line";
				width=3.0;
				points[]=
				{
					{"ForwardVec",1,"Velocity",1,{"0 *1 /3","-0.02 *1 /3"},1},							
					{"ForwardVec",1,"Velocity",1,{"0.0099999998 *1 /3","-0.01732 *1 /3"},1},							
					{"ForwardVec",1,"Velocity",1,{"0.01732 *1 /3","-0.0099999998 *1 /3"},1},		
					{"ForwardVec",1,"Velocity",1,{"0.02 *1 /3","0 *1 /3"},1},							
					{"ForwardVec",1,"Velocity",1,{"0.01732 *1 /3","0.0099999998 *1 /3"},1},
					{"ForwardVec",1,"Velocity",1,{"0.0099999998 *1 /3","0.01732 *1 /3"},1},							
					{"ForwardVec",1,"Velocity",1,{"0 *1 /3","0.02 *1 /3"},1},							
					{"ForwardVec",1,"Velocity",1,{"-0.0099999998 *1 /3","0.01732 *1 /3"},1},					
					{"ForwardVec",1,"Velocity",1,{"-0.01732 *1 /3","0.0099999998 *1 /3"},1},							
					{"ForwardVec",1,"Velocity",1,{"-0.02 *1 /3","0 *1 /3"},1},						
					{"ForwardVec",1,"Velocity",1,{"-0.01732 *1 /3","-0.0099999998 *1 /3"},1},							
					{"ForwardVec",1,"Velocity",1,{"-0.0099999998 *1 /3","-0.01732 *1 /3"},1},							
					{"ForwardVec",1,"Velocity",1,{"0 *1 /3","-0.02 *1 /3"},1},
					{},							
					{"ForwardVec",1,"Velocity",1,{0.025,0},1},							
					{"ForwardVec",1,"Velocity",1,{"0.02 *1 /3",0},1},
					{},							
					{"ForwardVec",1,"Velocity",1,{-0.025,0},1},							
					{"ForwardVec",1,"Velocity",1,{"-0.02 *1 /3",0},1},
					{},							
					{"ForwardVec",1,"Velocity",1,{0,"-0.039999999 *1 /3"},1},
					{"ForwardVec",1,"Velocity",1,{0,"-0.02 *1 /3"},1}
				};
			};
			/*class PlaneMovementCrosshair
			{
				type="line";
				width=7;
				points[]=
				{
					{"ForwardVec",1,"Velocity",1,{0,-0.02},1},
					{"ForwardVec",1,"Velocity",1,{0.0099999998,-0.01732},1},
					{"ForwardVec",1,"Velocity",1,{0.01732,-0.0099999998},1},
					{"ForwardVec",1,"Velocity",1,{0.02,0},1},
					{"ForwardVec",1,"Velocity",1,{0.01732,0.0099999998},1},
					{"ForwardVec",1,"Velocity",1,{0.0099999998,0.01732},1},
					{"ForwardVec",1,"Velocity",1,{0,0.02},1},
					{"ForwardVec",1,"Velocity",1,{-0.0099999998,0.01732},1},
					{"ForwardVec",1,"Velocity",1,{-0.01732,0.0099999998},1},
					{"ForwardVec",1,"Velocity",1,{-0.02,0},1},
					{"ForwardVec",1,"Velocity",1,{-0.01732,-0.0099999998},1},
					{"ForwardVec",1,"Velocity",1,{-0.0099999998,-0.01732},1},
					{"ForwardVec",1,"Velocity",1,{0,-0.02},1},
					{},
					{"ForwardVec",1,"Velocity",1,{0.039999999,0},1},
					{"ForwardVec",1,"Velocity",1,{0.02,0},1},
					{},
					{"ForwardVec",1,"Velocity",1,{-0.039999999,0},1},
					{"ForwardVec",1,"Velocity",1,{-0.02,0},1},
					{},
					{"ForwardVec",1,"Velocity",1,{0,-0.039999999},1},
					{"ForwardVec",1,"Velocity",1,{0,-0.02},1}
				};
			};*/
			class AC_Centerline
			{
				type="group";
				condition="on";
				class AC_Cross
				{
					type = "line";
					width=4;
					points[] = 
					{
						{{" -0.006 + 0.5" , "0 + 0.5" },1},
						{{" 0.006 + 0.5" , "0 + 0.5" },1},
						{ },
						{{" -0.0 + 0.5" , "0.006 + 0.5" },1},
						{{" 0.0 + 0.5" , "-0.006 + 0.5" },1}
					};
				};
			};
		};
	};
};