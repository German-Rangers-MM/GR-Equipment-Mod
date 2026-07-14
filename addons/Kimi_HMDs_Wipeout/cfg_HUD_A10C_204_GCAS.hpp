class GCAS_Group
{
	type="group";
	condition="(1-ils)*((AltitudeAGL/abs(vspeed*10))<10)*(vspeed<0)*(AltitudeAGL<500)";
	blinkingPattern[] = {2.00,3.00};
	blinkingStartsOn = 1;
	class GCAS_2_S
	{
		type="group";
		//condition="((1-ils)*(90-AltitudeAGL*3.28084)+((AltitudeAGL/abs(vspeed))<10))*(vspeed<0)";
		//condition="((AltitudeAGL/abs(vspeed))<10)*(vspeed<0)";
		blinkingPattern[] = {0.25,0.25};
		blinkingStartsOn = 1;
		class GCAS_Cross
		{
			type="line";
			width=3;
			points[]=
			{
				{{"0.50-0.15","0.32-0.15"},1},
				{{"0.50-0.05","0.32-0.05"},1},
				{},
				{{"0.50+0.15","0.32-0.15"},1},
				{{"0.50+0.05","0.32-0.05"},1},
				{},
				{{"0.50+0.15","0.32+0.15"},1},
				{{"0.50+0.05","0.32+0.05"},1},
				{},
				{{"0.50-0.15","0.32+0.15"},1},
				{{"0.50-0.05","0.32+0.05"},1}
			};
		};
	};
};