class CfgVehicles {
	class Man;
	class CAManBase: Man {
        class ACE_SelfActions {
			class GVAR(place_designator) {
				displayName = "Place Remote Designator";
				condition = QUOTE([_player] call FUNC(canPlaceDesignator));
				statement = "";
				insertChildren = QUOTE([_player] call FUNC(addDesignatorActions));
				icon = "a3\3den\data\cfgwaypoints\load_ca.paa";
			};
            class GVAR(dropChemlight) {
                displayName = "Drop Chemlight";
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


};
