
class CUP_B_M1129_MC_MK19_Woodland;
class GVAR(M1129_MC_MK19_Wdl) : CUP_B_M1129_MC_MK19_Woodland
{
    side = 1;
    faction = QGVAR(rangers_faction);
	
    crew = "CUP_B_GER_Fleck_Crew";
    displayName = "M1129 Mortar-Carrier GMG";
    receiveRemoteTargets = 1;
    class TextureSources
    {
        class Woodland
        {
            displayName = "Woodland";
            author = "Community Upgrade Project";
            textures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_mortar_des_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\icv_des_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
        class Desert
        {
            displayName = "Desert";
            author = "Community Upgrade Project";
            textures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\stryker_body1_mortar_des_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\stryker_body2_des_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\slat_armor_des_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\icv_des_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\default_co.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
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
            displayName = "Woodland";
            author = "Community Upgrade Project";
            textures[] = {"\cup\trackedvehicles\cup_trackedvehicles_m270\data\mlrs_hull_woodland_co.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
        
        class Desert
        {
            displayName = "Desert";
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
            displayName = "Sand (Woodland Camonet)";
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
	class EventHandlers : EventHandlers
	{
        fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        init = "";
        killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
        class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers
        {
            animChanged = "call cba_xeh_fnc_animChanged";
            animDone = "call cba_xeh_fnc_animDone";
            animStateChanged = "call cba_xeh_fnc_animStateChanged";
            assembled = "call cba_xeh_fnc_assembled";
            attached = "call cba_xeh_fnc_attached";
            cargoLoaded = "call cba_xeh_fnc_cargoLoaded";
            cargoUnloaded = "call cba_xeh_fnc_cargoUnloaded";
            containerClosed = "call cba_xeh_fnc_containerClosed";
            containerOpened = "call cba_xeh_fnc_containerOpened";
            controlsShifted = "call cba_xeh_fnc_controlsShifted";
            dammaged = "call cba_xeh_fnc_dammaged";
            deleted = "call cba_xeh_fnc_deleted";
            detached = "call cba_xeh_fnc_detached";
            disassembled = "call cba_xeh_fnc_disassembled";
            engine = "call cba_xeh_fnc_engine";
            epeContact = "call cba_xeh_fnc_epeContact";
            epeContactEnd = "call cba_xeh_fnc_epeContactEnd";
            epeContactStart = "call cba_xeh_fnc_epeContactStart";
            explosion = "call cba_xeh_fnc_explosion";
            fired = "call cba_xeh_fnc_fired";
            firedMan = "call cba_xeh_fnc_firedMan";
            firedNear = "call cba_xeh_fnc_firedNear";
            fuel = "call cba_xeh_fnc_cba_xeh_fuel";
            gear = "call cba_xeh_fnc_gear";
            gestureChanged = "call cba_xeh_fnc_gestureChanged";
            gestureDone = "call cba_xeh_fnc_gestureDone";
            getIn = "call cba_xeh_fnc_getIn";
            getInMan = "call cba_xeh_fnc_getInMan";
            getOut = "call cba_xeh_fnc_getOut";
            getOutMan = "call cba_xeh_fnc_getOutMan";
            handleHeal = "call cba_xeh_fnc_handleHeal";
            hit = "call cba_xeh_fnc_hit";
            hitPart = "call cba_xeh_fnc_hitPart";
            incomingMissile = "call cba_xeh_fnc_incomingMissile";
            init = "call cba_xeh_fnc_init";
            inventoryClosed = "call cba_xeh_fnc_inventoryClosed";
            inventoryOpened = "call cba_xeh_fnc_inventoryOpened";
            killed = "call cba_xeh_fnc_killed";
            landedStopped = "call cba_xeh_fnc_landedStopped";
            landedTouchDown = "call cba_xeh_fnc_landedTouchDown";
            leaningChanged = "call cba_xeh_fnc_leaningChanged";
            local = "call cba_xeh_fnc_local";
            magazineReloading = "call cba_xeh_fnc_magazineReloading";
            opticsModeChanged = "call cba_xeh_fnc_opticsModeChanged";
            opticsSwitch = "call cba_xeh_fnc_opticsSwitch";
            put = "call cba_xeh_fnc_put";
            reloaded = "call cba_xeh_fnc_reloaded";
            respawn = "call cba_xeh_fnc_respawn";
            ropeAttach = "call cba_xeh_fnc_ropeAttach";
            ropeBreak = "call cba_xeh_fnc_ropeBreak";
            seatSwitched = "call cba_xeh_fnc_seatSwitched";
            seatSwitchedMan = "call cba_xeh_fnc_seatSwitchedMan";
            slotItemChanged = "call cba_xeh_fnc_slotItemChanged";
            soundPlayed = "call cba_xeh_fnc_soundPlayed";
            suppressed = "call cba_xeh_fnc_suppressed";
            take = "call cba_xeh_fnc_take";
            turnIn = "call cba_xeh_fnc_turnIn";
            turnOut = "call cba_xeh_fnc_turnOut";
            visionModeChanged = "call cba_xeh_fnc_visionModeChanged";
            weaponAssembled = "call cba_xeh_fnc_weaponAssembled";
            weaponChanged = "call cba_xeh_fnc_weaponChanged";
            weaponDeployed = "call cba_xeh_fnc_weaponDeployed";
            weaponDisassembled = "call cba_xeh_fnc_weaponDisassembled";
            weaponRested = "call cba_xeh_fnc_weaponRested";
        };
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