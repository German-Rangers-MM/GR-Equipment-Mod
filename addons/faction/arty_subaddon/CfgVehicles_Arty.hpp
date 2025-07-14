class Wheeled_Apc_F
{
    class Turrets;
};
class CUP_StrykerBase: Wheeled_Apc_F
{
    class Turrets: Turrets
    {
        class MainTurret;
        class CargoTurret_01;
        class ObsTurret;
    };
};
class CUP_M1126_ICV_BASE: CUP_StrykerBase
{
    class Turrets: Turrets
    {
        class MainTurret: MainTurret{};
        class CargoTurret_01: CargoTurret_01{};
        class ObsTurret: ObsTurret{};
    };
    
};
class CUP_B_M1126_ICV_MK19_Desert: CUP_M1126_ICV_BASE
{
    class Turrets: Turrets
    {
        class MainTurret: MainTurret{};
        class CargoTurret_01: CargoTurret_01{};
        class ObsTurret: ObsTurret{};
    };
};
class CUP_B_M1129_MC_MK19_Desert: CUP_B_M1126_ICV_MK19_Desert
{
    class Turrets: Turrets
    {
        class MainTurret: MainTurret{};
        class CargoTurret_01: CargoTurret_01{};
        class ObsTurret: ObsTurret{};
    };
    
};
class CUP_B_M1129_MC_MK19_Woodland: CUP_B_M1129_MC_MK19_Desert
{
    class Turrets: Turrets
    {
        class MainTurret: MainTurret{};
        class CargoTurret_01: CargoTurret_01{};
        class ObsTurret: ObsTurret{};
    };
};

class GVAR(M1129_MC_MK19_Wdl) : CUP_B_M1129_MC_MK19_Woodland
{
    side = 1;
    faction = QGVAR(rangers_faction);
	
    crew = "CUP_B_GER_Fleck_Crew";
    displayName = CSTRING(M1129_MC);
    receiveRemoteTargets = 1;
    class TextureSources
    {
        class Woodland
        {
            displayName = CSTRING(camo_wdl);
            author = "Community Upgrade Project";
            textures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_mortar_des_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\icv_des_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
        class Desert
        {
            displayName = CSTRING(camo_des);
            author = "Community Upgrade Project";
            textures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\stryker_body1_mortar_des_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\stryker_body2_des_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\slat_armor_des_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\icv_des_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\default_co.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
    };

    class Turrets: Turrets
    {
        class CargoTurret_01: CargoTurret_01{};
        class MainTurret: MainTurret
        {
            magazines[] = {"CUP_32Rnd_120mm_HE_M934","CUP_6Rnd_120mm_Smoke_M929","CUP_6Rnd_120mm_Smoke_M929","GerRng_8Rnd_120mm_Flare_White","GerRng_8Rnd_120mm_Flare_White","GerRng_8Rnd_120mm_Guided_HE","GerRng_8Rnd_120mm_Laser_Guided_HE"};
            weapons[] = {QGVAR(Mortar_M121)};
        };
        class ObsTurret: ObsTurret{};
    };
};

class CUP_B_M270_HE_USMC;
class GVAR(M270_HE_Wdl) : CUP_B_M270_HE_USMC
{
    side = 1;
    faction = QGVAR(rangers_faction);
	
    displayName = "MARS II - HE";
    crew = "CUP_B_GER_Fleck_Crew";
    receiveRemoteTargets = 1;
    class TextureSources
    {
        class Woodland
        {
            displayName = CSTRING(camo_wdl);
            author = "Community Upgrade Project";
            textures[] = {"\cup\trackedvehicles\cup_trackedvehicles_m270\data\mlrs_hull_woodland_co.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
        
        class Desert
        {
            displayName = CSTRING(camo_des);
            author = "Community Upgrade Project";
            textures[] = {"\cup\trackedvehicles\cup_trackedvehicles_m270\data\mlrs_hull_desert_co.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
    };
};

class B_MBT_01_arty_F;
class GVAR(MBT_01_arty_F) : B_MBT_01_arty_F
{
    side = 1;
    faction = QGVAR(rangers_faction);
	
    hiddenSelectionsTextures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa","A3\armor_f_gamma\MBT_01\data\MBT_01_scorcher_co.paa","A3\Data_F\Vehicles\Turret_CO.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
    crew = "CUP_B_GER_Fleck_Crew";
    receiveRemoteTargets = 1;
    class TextureSources
    {
        class Sand
        {
            displayName = "$STR_A3_TextureSources_Sand0";
            author = "$STR_A3_Bohemia_Interactive";
            textures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa","A3\armor_f_gamma\MBT_01\data\MBT_01_scorcher_co.paa","A3\Data_F\Vehicles\Turret_CO.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
        class SandAlt
        {
            displayName = CSTRING(camo_snd_wdlNetting);
            author = "$STR_A3_Bohemia_Interactive";
            textures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa","A3\armor_f_gamma\MBT_01\data\MBT_01_scorcher_co.paa","A3\Data_F\Vehicles\Turret_CO.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
        class Olive
        {
            displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
            author = "$STR_A3_Bohemia_Interactive";
            textures[] = {"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa","A3\Armor_F_Exp\MBT_01\data\MBT_01_scorcher_olive_CO.paa","A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
    };
    animationList[] =
    {
        "showCamonetTurret",1,
        "showCamonetHull",1
    };
	class EventHandlers
	{
        fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        init = "";
        killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
        class XEH_CLASS { EXTENDED_EVENTHANDLERS };
	};
};

class CUP_B_M119_US;
class GVAR(M119) : CUP_B_M119_US
{
    side = 1;
    faction = QGVAR(rangers_faction);
	
    editorSubcategory = "EdSubcat_Artillery";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    receiveRemoteTargets = 1;
};

class CUP_B_M252_US;
class GVAR(M252) : CUP_B_M252_US
{
    side = 1;
    faction = QGVAR(rangers_faction);
    
    editorSubcategory = "EdSubcat_Artillery";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
};
