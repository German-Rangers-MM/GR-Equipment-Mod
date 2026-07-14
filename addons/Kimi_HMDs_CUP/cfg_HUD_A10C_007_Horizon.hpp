class HUD_Horizon
{
	topLeft="HUD_top_left";
	topRight="HUD_top_right";
	bottomLeft="HUD_bottom_left";
	//borderLeft=0.2;
	//borderRight=0.2;
	//borderTop=0.2;
	//borderBottom = 0.2; //0.2
	borderLeft=0.12;
	borderRight=0.12;
	borderTop=0.05;
	borderBottom=0.15;

	color[] = {0.15,1.0,0.15,1.0};
	enableParallax=1;
	
	#include "cfg_HUD_A10C_102_Bones.hpp"
	
	class Draw
	{
		condition="on";
		#include "cfg_HUD_A10C_103_Color.hpp"
		class Total_Velocity_Vector
		{
			type = "line";
			width = 4;
			points[] = 
			{
				{"Velocity",1,{0*0.75				,-0.02*0.75			},1},
				{"Velocity",1,{0.0099999998*0.75	,-0.01732*0.75		},1},
				{"Velocity",1,{0.01732*0.75			,-0.0099999998*0.75	},1},
				{"Velocity",1,{0.02*0.75			,0*0.75				},1},
				{"Velocity",1,{0.01732*0.75			,0.0099999998*0.75	},1},
				{"Velocity",1,{0.0099999998*0.75	,0.01732*0.75		},1},
				{"Velocity",1,{0*0.75				,0.02*0.75			},1},
				{"Velocity",1,{-0.0099999998*0.75	,0.01732*0.75		},1},
				{"Velocity",1,{-0.01732*0.75		,0.0099999998*0.75	},1},
				{"Velocity",1,{-0.02*0.75			,0*0.75				},1},
				{"Velocity",1,{-0.01732*0.75		,-0.0099999998*0.75	},1},
				{"Velocity",1,{-0.0099999998*0.75	,-0.01732*0.75		},1},
				{"Velocity",1,{0*0.75				,-0.02*0.75			},1},
				{},
				{"Velocity",1,{0.039999999*0.75		,0*0.75				},1},
				{"Velocity",1,{0.02*0.75			,0*0.75				},1},
				{},
				{"Velocity",1,{-0.039999999*0.75	,0*0.75				},1},
				{"Velocity",1,{-0.02*0.75			,0*0.75				},1},
				{},
				{"Velocity",1,{0*0.75				,-0.039999999*0.75	},1},
				{"Velocity",1,{0*0.75				,-0.02*0.75			},1}
			};
		};
		class Pitch_Ladder
		{
			type="group";
			clipTL[] = {0.1,0.1};
			clipBR[] = {0.9,0.9};
			
			class Level0 //Velocity_Pitch_Ladder this was intended to slave the pitch ladder to the velocity vector.
			{
				type="line";
				width=8.0;
				points[]=
				{
					{"Level0",{-0.1800, 0.00},1,"ForwardVec",1,"Velocity_Pitch_Ladder",1},
					{"Level0",{-0.0500, 0.00},1,"ForwardVec",1,"Velocity_Pitch_Ladder",1},
					{},
					{"Level0",{ 0.0500, 0.00},1,"ForwardVec",1,"Velocity_Pitch_Ladder",1},
					{"Level0",{ 0.1800, 0.00},1,"ForwardVec",1,"Velocity_Pitch_Ladder",1}
				};
			};
			#include "cfg_HUD_A10C_203_Horizon_VALP.hpp"
			#include "cfg_HUD_A10C_203_Horizon_VALM.hpp"
		};
	};
};
