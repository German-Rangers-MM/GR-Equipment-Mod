//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Wiesel
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class I_LT_01_AT_F;
class I_LT_01_AA_F;
class I_LT_01_scout_F;
class I_LT_01_cannon_F;

//Wiesel Stuff
class GVAR(wiesel_AT) : I_LT_01_AT_F {
    author = "dalleburn, jan, cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "Wiesel (AT)";
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_Fleck_Crew";

	
    hiddenSelections[] = {"camo1","camo2","CamoNet","CamoSlat"};
    textureList[] = {"Blufor_Olive",1};
	class TextureSources
	{
		class Blufor_Olive
		{
			displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
			author = "$STR_A3_Bohemia_Interactive";
			textures[] = {"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    hiddenSelectionsTextures[] = {"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"};
    animationList[] = {
		"showBags",0,
		"showBags2",0,
		"showCamonetHull",1,
		"showCamonetPlates1",1,
		"showCamonetPlates2",1,
		"showSLATHull",0,
		"showTools",0
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

	
	editorSubcategory = QGVAR(Wiesel_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
    tf_encryptionCode = "tf_west_radio_code";
};

class GVAR(wiesel_AA) : I_LT_01_AA_F {
    author = "dalleburn, jan, cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "Wiesel (AA)";
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_Fleck_Crew";
	

    
    hiddenSelections[] = {"camo1","camo2","CamoNet","CamoSlat"};
    textureList[] = {"Blufor_Olive",1};
	class TextureSources
	{
		class Blufor_Olive
		{
			displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
			author = "$STR_A3_Bohemia_Interactive";
			textures[] = {"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    hiddenSelectionsTextures[] = {"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"};
    animationList[] =
	{
		"showBags",0,
		"showBags2",0,
		"showCamonetHull",1,
		"showCamonetPlates1",1,
		"showCamonetPlates2",1,
		"showSLATHull",0,
		"showTools",0
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

	
	editorSubcategory = QGVAR(Wiesel_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
    tf_encryptionCode = "tf_west_radio_code";
};

class GVAR(wiesel_SC) : I_LT_01_scout_F {
    author = "dalleburn, jan, cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "Wiesel (Aufklärung)";
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_Fleck_Crew";
	

    
    hiddenSelections[] = {"camo1","camo2","CamoNet","CamoSlat"};
    textureList[] = {"Blufor_Olive",1};
	class TextureSources
	{
		class Blufor_Olive
		{
			displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
			author = "$STR_A3_Bohemia_Interactive";
			textures[] = {"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    hiddenSelectionsTextures[] = {"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"};
    animationList[] =
	{
		"showBags",0,
		"showBags2",0,
		"showCamonetHull",1,
		"showCamonetPlates1",1,
		"showCamonetPlates2",1,
		"showSLATHull",0,
		"showTools",0
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

	
	editorSubcategory = QGVAR(Wiesel_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 40000;
    tf_encryptionCode = "tf_west_radio_code";

	receiveRemoteTargets = 1;
	reportRemoteTargets = 1;
};

class GVAR(wiesel_CA) : I_LT_01_cannon_F {
    author = "dalleburn, jan, cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "Wiesel (MK)";
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_Fleck_Crew";
	

    
    hiddenSelections[] = {"camo1","camo2","CamoNet","CamoSlat"};
    textureList[] = {"Blufor_Olive",1};
	class TextureSources
	{
		class Blufor_Olive
		{
			displayName = "$STR_A3_TEXTURESOURCES_OLIVE0";
			author = "$STR_A3_Bohemia_Interactive";
			textures[] = {"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\LT_01_Cannon_Olive_CO.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    hiddenSelectionsTextures[] = {"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","A3\armor_f_tank\lt_01\data\LT_01_Cannon_Olive_CO.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\armor_f\data\cage_olive_co.paa"};
    animationList[] =
	{
		"showBags",0,
		"showBags2",0,
		"showCamonetHull",1,
		"showCamonetPlates1",1,
		"showCamonetPlates2",1,
		"showSLATHull",0,
		"showTools",0
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

	
	editorSubcategory = QGVAR(Wiesel_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
    tf_encryptionCode = "tf_west_radio_code";
};


class GVAR(wiesel_AT_slat) : GVAR(wiesel_AT) {
    displayName = "Wiesel (AT - Slat)";
    animationList[] = {
		"showBags",0,
		"showBags2",0,
		"showCamonetHull",1,
		"showCamonetPlates1",1,
		"showCamonetPlates2",1,
		"showSLATHull",1,
		"showTools",0
	};
};

class GVAR(wiesel_AA_slat) : GVAR(wiesel_AA) {
    displayName = "Wiesel (AA - Slat)";
    animationList[] = {
		"showBags",0,
		"showBags2",0,
		"showCamonetHull",1,
		"showCamonetPlates1",1,
		"showCamonetPlates2",1,
		"showSLATHull",1,
		"showTools",0
	};
};

class GVAR(wiesel_SC_slat) : GVAR(wiesel_SC) {
    displayName = "Wiesel (Aufklärung - Slat)";
    animationList[] = {
		"showBags",0,
		"showBags2",0,
		"showCamonetHull",1,
		"showCamonetPlates1",1,
		"showCamonetPlates2",1,
		"showSLATHull",1,
		"showTools",0
	};
};

class GVAR(wiesel_CA_slat) : GVAR(wiesel_CA) {
    displayName = "Wiesel (MK - Slat)";
    animationList[] = {
		"showBags",0,
		"showBags2",0,
		"showCamonetHull",1,
		"showCamonetPlates1",1,
		"showCamonetPlates2",1,
		"showSLATHull",1,
		"showTools",0
	};
};