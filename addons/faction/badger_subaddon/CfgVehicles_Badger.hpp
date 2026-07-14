	class B_APC_Wheeled_01_cannon_F;
    class GVAR(Badger_base): B_APC_Wheeled_01_cannon_F
    {
		scope = 1;
		scopeCurator = 1;
		class EventHandlers;
        class Turrets{};
		class AnimationSources
		{
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "autocannon_40mm_CTWS";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "autocannon_40mm_CTWS";
			};
			class revolving_cannon
			{
				source = "revolving";
				weapon = "autocannon_40mm_CTWS";
			};
			class HideTurret
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class HitEngine_src
			{
				source = "Hit";
				hitpoint = "HitEngine";
				raw = 1;
			};
			class HitFuel_src
			{
				source = "Hit";
				hitpoint = "HitFuel";
				raw = 1;
			};
			class HitHull_src
			{
				source = "Hit";
				hitpoint = "HitHull";
				raw = 1;
			};
			class HitMainGun_src
			{
				source = "Hit";
				hitpoint = "HitGun";
				raw = 1;
			};
			class HitTurret_src
			{
				source = "Hit";
				hitpoint = "HitTurret";
				raw = 1;
			};
			class HitComTurret_src
			{
				source = "Hit";
				hitpoint = "HitComTurret";
				raw = 1;
			};
			class HitSLAT_Left_1_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_1";
				raw = 1;
			};
			class HitSLAT_Left_2_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_2";
				raw = 1;
			};
			class HitSLAT_Left_3_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_3";
				raw = 1;
			};
			class HitSLAT_Right_1_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_1";
				raw = 1;
			};
			class HitSLAT_Right_2_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_2";
				raw = 1;
			};
			class HitSLAT_Right_3_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_3";
				raw = 1;
			};
			class HitSLAT_back_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_back";
				raw = 1;
			};
			class HitSLAT_front_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_front";
				raw = 1;
			};
			class HitSLAT_top_back_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_top_back";
				raw = 1;
			};
			class HitSLAT_top_right_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_top_right";
				raw = 1;
			};
			class HitSLAT_top_left_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_top_left";
				raw = 1;
			};
			class showBags
			{
				displayName = "$STR_A3_animationsources_showbagsturret0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
			class showCamonetHull
			{
				displayName = "$STR_A3_animationsources_showcamonethull0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
			class showCamonetCannon
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class showCamonetTurret
			{
				displayName = "$STR_A3_animationsources_showcamonetturret0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				forceAnimatePhase = 1;
				forceAnimate[] = {"showCamonetCannon",1};
				forceAnimate2[] = {"showCamonetCannon",0};
				mass = -50;
			};
			class showSLATHull
			{
				displayName = "$STR_A3_animationsources_showslathull0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
			class showSLATTurret
			{
				displayName = "$STR_A3_animationsources_showslatturret0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
		};
		animationList[] = {"showBags",0,"showCamonetHull",0,"showCamonetCannon",0,"showCamonetTurret",0,"showSLATHull",0,"showSLATTurret",0};
        
        textureList[] = {"Sand",1};
        class TextureSources
        {
            class Sand
            {
                displayName = CSTRING(camo_snd);
                author = "Bohemia Interactive";
                textures[] = {"a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_base_co.paa","a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_adds_co.paa","a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_tows_co.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa"};
                factions[] = {QGVAR(rangers_faction)};
            };
            
            class Sand_alt
            {
                displayName = CSTRING(camo_snd_wdlNetting);
                author = "Bohemia Interactive";
                textures[] = {"a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_base_co.paa","a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_adds_co.paa","a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_tows_co.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa"};
                factions[] = {QGVAR(rangers_faction)};
            };
            class Green
            {
                displayName = CSTRING(camo_grn);
                author = "Bohemia Interactive";
                textures[] = {"A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_base_olive_CO.paa","A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_adds_olive_co.paa","A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_tows_olive_co.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_olive_CO.paa"};
                factions[] = {QGVAR(rangers_faction)};
            };
        };
	};
    class GVAR(Badger_unarmed): GVAR(Badger_base)
    {
        crew = "CUP_B_GER_Fleck_Crew";
		typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
		scope = 2;
		scopeCurator = 2;
        displayName = "Badger IFV (Unarmed)";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
            class XEH_CLASS { EXTENDED_EVENTHANDLERS };
		};
        faction = QGVAR(rangers_faction);
		side = 1;
		class AnimationSources
		{
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "autocannon_40mm_CTWS";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "autocannon_40mm_CTWS";
			};
			class revolving_cannon
			{
				source = "revolving";
				weapon = "autocannon_40mm_CTWS";
			};
			class HideTurret
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.001;
			};
			class HitEngine_src
			{
				source = "Hit";
				hitpoint = "HitEngine";
				raw = 1;
			};
			class HitFuel_src
			{
				source = "Hit";
				hitpoint = "HitFuel";
				raw = 1;
			};
			class HitHull_src
			{
				source = "Hit";
				hitpoint = "HitHull";
				raw = 1;
			};
			class HitMainGun_src
			{
				source = "Hit";
				hitpoint = "HitGun";
				raw = 1;
			};
			class HitTurret_src
			{
				source = "Hit";
				hitpoint = "HitTurret";
				raw = 1;
			};
			class HitComTurret_src
			{
				source = "Hit";
				hitpoint = "HitComTurret";
				raw = 1;
			};
			class HitSLAT_Left_1_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_1";
				raw = 1;
			};
			class HitSLAT_Left_2_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_2";
				raw = 1;
			};
			class HitSLAT_Left_3_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_3";
				raw = 1;
			};
			class HitSLAT_Right_1_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_1";
				raw = 1;
			};
			class HitSLAT_Right_2_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_2";
				raw = 1;
			};
			class HitSLAT_Right_3_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_3";
				raw = 1;
			};
			class HitSLAT_back_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_back";
				raw = 1;
			};
			class HitSLAT_front_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_front";
				raw = 1;
			};
			class HitSLAT_top_back_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_top_back";
				raw = 1;
			};
			class HitSLAT_top_right_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_top_right";
				raw = 1;
			};
			class HitSLAT_top_left_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_top_left";
				raw = 1;
			};
			class showCamonetHull
			{
				displayName = "$STR_A3_animationsources_showcamonethull0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
			class showSLATHull
			{
				displayName = "$STR_A3_animationsources_showslathull0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
		};
		animationList[] = {"showCamonetHull",1,"showSLATHull",0};
		driverCanSee = "4+8+2+32+16";
		gunnerCanSee = "4+2+8+32+16";
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		threat[] = {0,0,0};
		forceInGarage = 1;
		class TransportBackpack{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
	};

