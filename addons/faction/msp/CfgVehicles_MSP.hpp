//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Multiple Support Platform
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
class B_Slingload_01_Repair_F;

class GVAR(MSP_Cargo_F): B_Slingload_01_Repair_F
{
	author = "cookie";
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	side = 3;
	scopeCurator = 2;
	scope = 2;
	supplyRadius = 10;
	displayName = "Wartungs-Container";
	ace_cargo_hasCargo = 1;
	ace_cargo_space = 30;
	ace_rearm_defaultSupply = 600;
	ace_refuel_fuelCargo = 2000;
	transportRepair = 1e+12;
	ace_repair_canRepair = 1;
	class ACE_Cargo
	{
            class Cargo
			{
                class ACE_Wheel
				{
                    type = "ACE_Wheel";
                    amount = 10;
                };
                class ACE_Track
				{
                    type = "ACE_Track";
                    amount = 4;
                };
            };
        };
	class TransportItems
	{
		class _xx_Toolkit {name="Toolkit";count=5;};
	};
	class TransportBackpacks{};
	class TransportMagazines{};
	class TransportWeapons{};
};

//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Small Supply Box
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class Land_PlasticCase_01_large_olive_F;
class Land_PlasticCase_01_medium_olive_F;
class Land_PlasticCase_01_small_olive_F;

class GVAR(Box_ammo_L_F): Land_PlasticCase_01_large_olive_F
{
	author = "cookie";
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	side = 3;
	scopeCurator = 2;
	scope = 2;
	displayName = CSTRING(box_ammo_l);
	ace_dragging_canCarry = 1;
	ace_dragging_canDrag = 1;
	ace_rearm_defaultSupply = 400;
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(data\PlasticCase_01_Ammo_Logo_01_CA)
	};
	editorPreview = QPATHTOF(data\preview\Box_ammo_L_F.jpg);
};

class GVAR(Box_ammo_M_F): Land_PlasticCase_01_medium_olive_F
{
	author = "cookie";
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	side = 3;
	scopeCurator = 2;
	scope = 2;
	displayName = CSTRING(box_ammo_m);
	ace_dragging_canCarry = 1;
	ace_dragging_canDrag = 1;
	ace_rearm_defaultSupply = 200;
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(data\PlasticCase_01_Ammo_Logo_01_CA)
	};
	editorPreview = QPATHTOF(data\preview\Box_ammo_M_F.jpg);
};

class GVAR(Box_ammo_S_F): Land_PlasticCase_01_small_olive_F
{
	author = "cookie";
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	side = 3;
	scopeCurator = 2;
	scope = 2;
	displayName = CSTRING(box_ammo_s);
	ace_dragging_canCarry = 1;
	ace_dragging_canDrag = 1;
	ace_rearm_defaultSupply = 100;
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(data\PlasticCase_01_Ammo_Logo_01_CA)
	};
	editorPreview = QPATHTOF(data\preview\Box_ammo_S_F.jpg);
};


//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Supply Box Retex
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
class Box_NATO_Ammo_F;
class Box_NATO_Wps_F;
class Box_NATO_AmmoOrd_F;
class Box_NATO_Grenades_F;
class Box_NATO_WpsLaunch_F;
class Box_NATO_WpsSpecial_F;
class Box_NATO_Support_F;
class Box_NATO_Equip_F;
class Box_NATO_Uniforms_F;
class Land_PlasticCase_01_large_olive_CBRN_F;
class Land_PlasticCase_01_medium_olive_CBRN_F;
class Land_PlasticCase_01_small_olive_CBRN_F;

class GVAR(Box_Ammo_EOD_II): Box_NATO_Ammo_F
{
	
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste EOD Typ II (Ammo)";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\EOD_II_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
		MACRO_ADDITEM(ACE_VMH3, 3);
		MACRO_ADDITEM(ACE_DefusalKit, 3);
		MACRO_ADDITEM(ACE_Clacker, 3);
		MACRO_ADDITEM(ace_marker_flags_orange, 15);
	};
	class TransportMagazines
	{
		MACRO_ADDMAGAZINE(Chemlight_green, 5);
		MACRO_ADDMAGAZINE(Chemlight_red, 5);
		MACRO_ADDMAGAZINE(Chemlight_blue, 5);
		MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag, 5);
	};
};
class GVAR(Box_Wps_EOD_II): Box_NATO_Wps_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste EOD Typ II (Weapons)";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\EOD_II_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
};
class GVAR(Box_AmmoOrd_EOD_II): Box_NATO_AmmoOrd_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste EOD Typ II (Ammo Ordnance)";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\EOD_II_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
};
class GVAR(Box_Grenades_EOD_II): Box_NATO_Grenades_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste EOD Typ II (Grenades)";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\EOD_II_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
};
class GVAR(Box_WpsLaunch_EOD_II): Box_NATO_WpsLaunch_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste EOD Typ II (Weapons Launchers)";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\EOD_II_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
};
class GVAR(Box_WpsSpecial_EOD_II): Box_NATO_WpsSpecial_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste EOD Typ II (Weapons Special)";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\EOD_II_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
};
class GVAR(Box_Support_EOD_II): Box_NATO_Support_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste EOD Typ II (Support)";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\EOD_II_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
};
class GVAR(Box_Equip_EOD_I): Box_NATO_Equip_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste EOD Typ I (Equipment)";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\EOD_I_E_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
};
class GVAR(Box_P_CBRN_I_L): Land_PlasticCase_01_large_olive_CBRN_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste CBRN Typ I (Large)";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(msp\data\CBRN_I_P_01_Logo_01_CA.paa)
	};
};
class GVAR(Box_P_CBRN_I_M): Land_PlasticCase_01_medium_olive_CBRN_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste CBRN Typ I (Medium)";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(msp\data\CBRN_I_P_01_Logo_01_CA.paa)
	};
};
class GVAR(Box_P_CBRN_I_S): Land_PlasticCase_01_small_olive_CBRN_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste CBRN Typ I (Small)";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(msp\data\CBRN_I_P_01_Logo_01_CA.paa)
	};
};

class GVAR(Box_P_SAN_II_L): Land_PlasticCase_01_large_olive_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste San Typ II (Large)";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(msp\data\San_II_P_01_Logo_01_CA.paa)
	};
};
class GVAR(Box_P_SAN_II_M): Land_PlasticCase_01_medium_olive_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste San Typ II (Medium)";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(msp\data\San_II_P_01_Logo_01_CA.paa)
	};
};
class GVAR(Box_P_SAN_II_S): Land_PlasticCase_01_small_olive_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste San Typ II (Small)";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(msp\data\San_II_P_01_Logo_01_CA.paa)
	};
};