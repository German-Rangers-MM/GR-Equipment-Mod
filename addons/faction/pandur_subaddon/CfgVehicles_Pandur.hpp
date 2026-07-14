	class I_APC_Wheeled_03_cannon_F{
        class EventHandlers;
    };

    class GVAR(Pandur_unarmed): I_APC_Wheeled_03_cannon_F
    {
        scope = 2;
        scopeCurator = 2;
		textureList[] = {"Blu_Arid",1};
		class Turrets{};
        faction = QGVAR(rangers_faction);
        side = 1;
        displayName = "Pandur II (Unarmed)";
        crew = "CUP_B_GER_Fleck_Crew";
		typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
		class TextureSources
		{
			class Blu_Arid
			{
				displayName = "Arid";
				author = "Phantom hawk";
				textures[] = {"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa","A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa","A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa","A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa"};
				factions[] = {"BLU_F_A","BLU_F_WD","BLU_F_D",QGVAR(rangers_faction)};
			};
        };
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideTurret']}";
            class XEH_CLASS { EXTENDED_EVENTHANDLERS };
		};

        tf_hasLRradio = 1;
        tf_RadioType = "tf_rt1523g";
        tf_encryptionCode = "tf_west_radio_code";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6"};
        hiddenSelectionsTextures[] = {"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa","A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa","A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa","A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa"};
		animationList[] = {"showCamonetHull",0,"showBags",0,"showBags2",1,"showTools",1,"showSLATHull",0};
		driverCanSee = "4+8+2+32+16";
		gunnerCanSee = "4+2+8+32+16";
		weapons[] = {"TruckHorn","SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
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
        class AnimationSources{
            class BreakWater
            {
                animPeriod = 2;
                initPhase = 0;
                source = "user";
            };
            class HideTurret
            {
                animPeriod = 0.001;
                initPhase = 1;
                source = "user";
            };
            class HitComTurret_src
            {
                hitpoint = "HitComTurret";
                raw = 1;
                source = "Hit";
            };
            class HitEngine_src
            {
                hitpoint = "HitEngine";
                raw = 1;
                source = "Hit";
            };
            class HitFuel_src
            {
                hitpoint = "HitFuel";
                raw = 1;
                source = "Hit";
            };
            class HitHull_src
            {
                hitpoint = "HitHull";
                raw = 1;
                source = "Hit";
            };
            class HitLBWheel
            {
                hitpoint = "HitLF2Wheel";
                raw = 1;
                source = "Hit";
            };
            class HitLF2Wheel
            {
                hitpoint = "HitLBWheel";
                raw = 1;
                source = "Hit";
            };
            class HitLFWheel
            {
                hitpoint = "HitLFWheel";
                raw = 1;
                source = "Hit";
            };
            class HitLMWheel
            {
                hitpoint = "HitLMWheel";
                raw = 1;
                source = "Hit";
            };
            class HitMainGun_src
            {
                hitpoint = "HitGun";
                raw = 1;
                source = "Hit";
            };
            class HitRBWheel
            {
                hitpoint = "HitRF2Wheel";
                raw = 1;
                source = "Hit";
            };
            class HitRF2Wheel
            {
                hitpoint = "HitRBWheel";
                raw = 1;
                source = "Hit";
            };
            class HitRFWheel
            {
                hitpoint = "HitRFWheel";
                raw = 1;
                source = "Hit";
            };
            class HitRMWheel
            {
                hitpoint = "HitRMWheel";
                raw = 1;
                source = "Hit";
            };
            class HitSLAT_back_src
            {
                hitpoint = "HitSLAT_back";
                raw = 1;
                source = "Hit";
            };
            class HitSLAT_front_src
            {
                hitpoint = "HitSLAT_front";
                raw = 1;
                source = "Hit";
            };
            class HitSLAT_Left_1_src
            {
                hitpoint = "HitSLAT_Left_1";
                raw = 1;
                source = "Hit";
            };
            class HitSLAT_Left_2_src
            {
                hitpoint = "HitSLAT_Left_2";
                raw = 1;
                source = "Hit";
            };
            class HitSLAT_Left_3_src
            {
                hitpoint = "HitSLAT_Left_3";
                raw = 1;
                source = "Hit";
            };
            class HitSLAT_Right_1_src
            {
                hitpoint = "HitSLAT_Right_1";
                raw = 1;
                source = "Hit";
            };
            class HitSLAT_Right_2_src
            {
                hitpoint = "HitSLAT_Right_2";
                raw = 1;
                source = "Hit";
            };
            class HitSLAT_Right_3_src
            {
                hitpoint = "HitSLAT_Right_3";
                raw = 1;
                source = "Hit";
            };
            class HitTurret_src
            {
                hitpoint = "HitTurret";
                raw = 1;
                source = "Hit";
            };
            class Missiles_reloadMagazine
            {
                source = "reloadMagazine";
                weapon = "missiles_titan";
            };
            class Missiles_revolving
            {
                source = "revolving";
                weapon = "missiles_titan";
            };
            class muzzle_hide
            {
                source = "reload";
                weapon = "autocannon_30mm_CTWS";
            };
            class muzzle_rot
            {
                source = "ammorandom";
                weapon = "autocannon_30mm_CTWS";
            };
            class revolving_cannon
            {
                source = "revolving";
                weapon = "autocannon_30mm_CTWS";
            };
            class showBags
            {
                animPeriod = 0.001;
                author = "Bohemia Interactive";
                displayName = "Show Bags (Hull)";
                initPhase = 0;
                mass = -50;
                source = "user";
            };
            class showBags2
            {
                animPeriod = 0.001;
                author = "Bohemia Interactive";
                displayName = "Show Bags (Turret)";
                initPhase = 0;
                mass = -50;
                source = "user";
            };
            class showCamonetHull
            {
                animPeriod = 0.001;
                author = "Bohemia Interactive";
                displayName = "Show Camonet (Hull)";
                initPhase = 0;
                mass = -50;
                source = "user";
            };
            class showSLATHull
            {
                animPeriod = 0.001;
                author = "Bohemia Interactive";
                displayName = "Show SLAT (Hull)";
                initPhase = 0;
                mass = -50;
                source = "user";
            };
            class showTools
            {
                animPeriod = 0.001;
                author = "Bohemia Interactive";
                displayName = "Show Tools (Hull)";
                initPhase = 0;
                mass = -50;
                source = "user";
            };
        };
    };

