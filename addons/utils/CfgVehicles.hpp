class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	class Man;
	class CAManBase: Man {
        class ACE_SelfActions {
			class ACE_Equipment
			{
				class GVAR(place_designator) {
					displayName = "Place Remote Designator";
					condition = QUOTE([_player] call FUNC(canPlaceDesignator));
					statement = "";
					exceptions[] = {"isNotInside","isNotEscorting","isNotHandcuffed","isNotSurrendering","notOnMap","isNotUnconscious","isNotDragging","isNotDragging","isNotSwimming","isNotOnLadder"};
					insertChildren = QUOTE([_player] call FUNC(addDesignatorActions));
					icon = "a3\3den\data\cfgwaypoints\load_ca.paa";
				};
			};
            class GVAR(dropChemlight) {
                displayName = "Drop Marking Item";
				condition = QUOTE([_player] call FUNC(canDropMarker));
				exceptions[] = {"isNotInside","isNotEscorting","isNotHandcuffed","isNotSurrendering","notOnMap","isNotUnconscious","isNotDragging","isNotDragging","isNotSwimming","isNotOnLadder"};
				statement = "";
				insertChildren = QUOTE([_player] call FUNC(populateChemlights));
				icon = "a3\modules_f_curator\data\portraitchemlight_ca.paa";
				showDisabled = 1;
            };
		};
	};
    
    class Item_Base_F;
    class GVAR(item_remote_designator_w): Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Remote Designator WDL (Disassembled)";
		author = "Cookie";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyBinoc.p3d";
		class TransportItems
		{
			class GVAR(remote_designator_w)
			{
				name = QGVAR(remote_designator_w);
				count = 1;
			};
		};
	};
    
    class GVAR(item_remote_designator_d): Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Remote Designator DES (Disassembled)";
		author = "Cookie";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		model = "\A3\Weapons_F\DummyBinoc.p3d";
		class TransportItems
		{
			class GVAR(remote_designator_d)
			{
				name = QGVAR(remote_designator_d);
				count = 1;
			};
		};
	};

	class Air;
	class Plane: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class GVAR(C130_changeToVIV)
				{
					displayName = "Change to VIV Configuration";
					condition = QUOTE(_target isKindOf 'EGVAR(faction,C130J)');
					statement = QUOTE([ARR_3(_target,_player,'EGVAR(faction,C130J_Cargo)')] call FUNC(handleVehicleChange));
					exceptions[] = {"isNotInside","isNotEscorting","isNotHandcuffed","isNotSurrendering","notOnMap","isNotUnconscious","isNotDragging","isNotDragging","isNotSwimming","isNotOnLadder"};
					icon = "a3\3den\data\cfgwaypoints\load_ca.paa";
				};

				class GVAR(C130_changeToTransport)
				{
					displayName = "Change to Transport Configuration";
					condition = QUOTE(_target isKindOf 'EGVAR(faction,C130J_Cargo)');
					statement = QUOTE([ARR_3(_target,_player,'EGVAR(faction,C130J)')] call FUNC(handleVehicleChange));
					exceptions[] = {"isNotInside","isNotEscorting","isNotHandcuffed","isNotSurrendering","notOnMap","isNotUnconscious","isNotDragging","isNotDragging","isNotSwimming","isNotOnLadder"};
					icon = "a3\3den\data\cfgwaypoints\load_ca.paa";
				};
			};
		};
	};
    class Helicopter: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class GVAR(CH47F_changeToVIV)
				{
					displayName = "Change to VIV Configuration";
					condition = QUOTE(_target isKindOf 'EGVAR(faction,CH_47F_TTH_01)');
					statement = QUOTE([ARR_3(_target,_player,'EGVAR(faction,CH_47F_TTH_VIV_01)')] call FUNC(handleVehicleChange));
					exceptions[] = {"isNotInside","isNotEscorting","isNotHandcuffed","isNotSurrendering","notOnMap","isNotUnconscious","isNotDragging","isNotDragging","isNotSwimming","isNotOnLadder"};
					icon = "a3\3den\data\cfgwaypoints\load_ca.paa";
				};

				class GVAR(CH47F_changeToTransport)
				{
					displayName = "Change to Transport Configuration";
					condition = QUOTE(_target isKindOf 'EGVAR(faction,CH_47F_TTH_VIV_01)');
					statement = QUOTE([ARR_3(_target,_player,'EGVAR(faction,CH_47F_TTH_01)')] call FUNC(handleVehicleChange));
					exceptions[] = {"isNotInside","isNotEscorting","isNotHandcuffed","isNotSurrendering","notOnMap","isNotUnconscious","isNotDragging","isNotDragging","isNotSwimming","isNotOnLadder"};
					icon = "a3\3den\data\cfgwaypoints\load_ca.paa";
				};

				class GVAR(CH53E_changeToVIV)
				{
					displayName = "Change to VIV Configuration";
					condition = QUOTE(_target isKindOf 'EGVAR(faction,CH_53E_TTH_01)');
					statement = QUOTE([ARR_3(_target,_player,'EGVAR(faction,CH_53E_TTH_VIV_01)')] call FUNC(handleVehicleChange));
					exceptions[] = {"isNotInside","isNotEscorting","isNotHandcuffed","isNotSurrendering","notOnMap","isNotUnconscious","isNotDragging","isNotDragging","isNotSwimming","isNotOnLadder"};
					icon = "a3\3den\data\cfgwaypoints\load_ca.paa";
				};

				class GVAR(CH53E_changeToTransport)
				{
					displayName = "Change to Transport Configuration";
					condition = QUOTE(_target isKindOf 'EGVAR(faction,CH_53E_TTH_VIV_01)');
					statement = QUOTE([ARR_3(_target,_player,'EGVAR(faction,CH_53E_TTH_01)')] call FUNC(handleVehicleChange));
					exceptions[] = {"isNotInside","isNotEscorting","isNotHandcuffed","isNotSurrendering","notOnMap","isNotUnconscious","isNotDragging","isNotDragging","isNotSwimming","isNotOnLadder"};
					icon = "a3\3den\data\cfgwaypoints\load_ca.paa";
				};

				class GVAR(C130_changeToVIV)
				{
					displayName = "Change to VIV Configuration";
					condition = QUOTE(_target isKindOf 'EGVAR(faction,C130J_USMC)');
					statement = QUOTE([ARR_3(_target,_player,'EGVAR(faction,C130J_USMC_Cargo)')] call FUNC(handleVehicleChange));
					exceptions[] = {"isNotInside","isNotEscorting","isNotHandcuffed","isNotSurrendering","notOnMap","isNotUnconscious","isNotDragging","isNotDragging","isNotSwimming","isNotOnLadder"};
					icon = "a3\3den\data\cfgwaypoints\load_ca.paa";
				};

				class GVAR(C130_changeToTransport)
				{
					displayName = "Change to Transport Configuration";
					condition = QUOTE(_target isKindOf 'EGVAR(faction,C130J_USMC_Cargo)');
					statement = QUOTE([ARR_3(_target,_player,'EGVAR(faction,C130J_USMC)')] call FUNC(handleVehicleChange));
					exceptions[] = {"isNotInside","isNotEscorting","isNotHandcuffed","isNotSurrendering","notOnMap","isNotUnconscious","isNotDragging","isNotDragging","isNotSwimming","isNotOnLadder"};
					icon = "a3\3den\data\cfgwaypoints\load_ca.paa";
				};
			};
		};
	};

    class Module_F;
    class GVAR(moduleBase): Module_F {
        author = "ZEN Mod";
        category = "NO_CATEGORY";
        function = "";
        scope = 1;
        scopeCurator = 2;
        class EventHandlers {
            init = QUOTE(_this call FUNC(initModule));
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };

    class GVAR(moduleSereInit): GVAR(moduleBase) {
        displayName = "SERE Module";
        function = QFUNC(moduleSereInit);
        category = "Curator";
        curatorCanAttach = 1;
        scope = 2;
        scopeCurator = 2;
    };
	
};
