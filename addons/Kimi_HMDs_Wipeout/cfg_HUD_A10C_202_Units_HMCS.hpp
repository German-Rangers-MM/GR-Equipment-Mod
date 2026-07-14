class Imperial_Units_HMCS
{
	type="group";
	condition="user1*(1-user2)";
	class Airspeed_Number_HMCS
	{
		type="text";
		align="left";
		scale=1;
		source="speed";
		width = 2.0;
		sourceScale=1.94384;
		pos[]=	{{0.15,0.40},1};
		right[]={{0.20,0.40},1};
		down[]=	{{0.15,0.45},1};
	};
	class Altitude_MSL_Number_HMCS
	{
		type="group";
		//condition="100-altitudeASL*3.28084";
		class alt_num
		{
			type="text";
			scale=1;
			align="right";
			source="altitudeASL";
			//sourcePrecision=0;
			//SourceLength=5;
			sourceScale=3.28084;
			pos[]=	{{0.85,0.40},1};
			right[]={{0.90,0.40},1};
			down[]=	{{0.85,0.45},1};
		};
	};
	class Radar_Altitude_Number
	{
		type="group";
		condition="(1+5000)-altitudeAGL*3.28084";
		class radaralt
		{
			type="text";
			source="altitudeAGL";
			align="right";
			scale=1;
			sourceScale=3.28084;
			pos[]=	{{0.87,0.45},1};
			right[]={{0.91,0.45},1};
			down[]=	{{0.87,0.49},1};
		};
	};
	class Radar_Altitude_Number_NOT
	{
		type="group";
		condition="altitudeAGL*3.28084-5000";
		class radaralt
		{
			type="text";
			source="static";
			text="XXXX";
			align="right";
			scale=1;
			pos[]=	{{0.87,0.45},1};
			right[]={{0.91,0.45},1};
			down[]=	{{0.87,0.49},1};
		};
	};
};
class Metric_Units_HMCS
{
	type="group";
	condition="(1-user1)*(1-user2)";
	class Airspeed_Number_HMCS
	{
		type="text";
		align="left";
		scale=1;
		source="speed";
		width = 2.0;
		sourceScale=3.6; //kph
		pos[]=	{{0.15,0.40},1};
		right[]={{0.20,0.40},1};
		down[]=	{{0.15,0.45},1};
	};
	class Altitude_MSL_Number_HMCS
	{
		type="group";
		class alt_num
		{
			type="text";
			scale=1;
			align="right";
			source="altitudeASL";
			sourceScale=1; //m
			pos[]=	{{0.85,0.40},1};
			right[]={{0.90,0.40},1};
			down[]=	{{0.85,0.45},1};
		};
	};
	class Radar_Altitude_Number
	{
		type="group";
		condition="(1+1500)-altitudeAGL";
		class radaralt
		{
			type="text";
			source="altitudeAGL";
			align="right";
			scale=1;
			sourceScale=1; //m
			pos[]=	{{0.87,0.45},1};
			right[]={{0.91,0.45},1};
			down[]=	{{0.87,0.49},1};
		};
	};
	class Radar_Altitude_Number_NOT
	{
		type="group";
		condition="altitudeAGL-1500";
		class radaralt
		{
			type="text";
			source="static";
			text="XXXX";
			align="right";
			scale=1;
			pos[]=	{{0.87,0.45},1};
			right[]={{0.91,0.45},1};
			down[]=	{{0.87,0.49},1};
		};
	};
};
class Other_Stuff_HMCS
{
	type="group";
	condition="1-user2"
	class Radar_Altitude_Text
	{
		type="text";
		source="static";
		text="R";
		align="right";
		scale=1;
		pos[]=	{{0.84,0.45},1};
		right[]={{0.88,0.45},1};
		down[]=	{{0.84,0.49},1};
	};
	class Clock
	{
		type = "text";
		source = "time";
		text = "%X";
		sourceScale = 1;
		align = "right";
		scale = 1;
		pos[]=	{{0.85,0.70},1};
		right[]={{0.89,0.70},1};
		down[]=	{{0.85,0.74},1};
	};
};