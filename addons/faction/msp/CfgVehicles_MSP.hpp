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
class Box_NATO_AmmoOrd_F;
class Box_NATO_Grenades_F;
class Box_NATO_WpsLaunch_F;
class Box_NATO_WpsSpecial_F;
class Box_NATO_Equip_F;
class Box_NATO_Uniforms_F;
class Land_PlasticCase_01_large_olive_CBRN_F;
class Land_PlasticCase_01_medium_olive_CBRN_F;
class Land_PlasticCase_01_large_black_F;
class Land_PlasticCase_01_medium_black_F;


// CBRN Supply Boxes
class GVAR(Box_P_CBRN_I): Land_PlasticCase_01_large_olive_CBRN_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste CBRN Typ I";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(msp\data\CBRN_I_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_P_CBRN_II): Land_PlasticCase_01_large_olive_CBRN_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste CBRN Typ II";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(msp\data\CBRN_II_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_P_CBRN_III): Land_PlasticCase_01_medium_olive_CBRN_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste CBRN Typ III";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(msp\data\CBRN_III_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};

// EOD Supply Boxes
class GVAR(Box_U_EOD_I): Box_NATO_Uniforms_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste EOD Typ I";
	hiddenSelections[] = {"camo","camo_signs"};
	hiddenSelectionsTextures[] = {
		"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa",
		QPATHTOF(msp\data\EOD_I_E_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WS_EOD_II): Box_NATO_WpsSpecial_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste EOD Typ II";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\EOD_II_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_U_EOD_III): Box_NATO_Uniforms_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste EOD Typ III";
	hiddenSelections[] = {"camo","camo_signs"};
	hiddenSelectionsTextures[] = {
		"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa",
		QPATHTOF(msp\data\EOD_III_E_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_U_EOD_IV): Box_NATO_Uniforms_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste EOD Typ IV";
	hiddenSelections[] = {"camo","camo_signs"};
	hiddenSelectionsTextures[] = {
		"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa",
		QPATHTOF(msp\data\EOD_IV_E_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};

// Medical Supply Boxes
class GVAR(Box_P_SAN_II): Land_PlasticCase_01_medium_black_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste SAN Typ II";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa",
		QPATHTOF(msp\data\SAN_II_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};

// Sierra Supply Boxes
class GVAR(Box_P_Sierra_I): Land_PlasticCase_01_medium_black_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Sierra Typ I";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa",
		QPATHTOF(msp\data\Sierra_I_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_P_Sierra_II): Land_PlasticCase_01_medium_black_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Sierra Typ II";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa",
		QPATHTOF(msp\data\Sierra_II_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_P_Sierra_III): Land_PlasticCase_01_medium_black_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Sierra Typ III";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa",
		QPATHTOF(msp\data\Sierra_III_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_P_Sierra_IV): Land_PlasticCase_01_medium_black_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Sierra Typ IV";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa",
		QPATHTOF(msp\data\Sierra_IV_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_P_Sierra_V): Land_PlasticCase_01_medium_black_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Sierra Typ V";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa",
		QPATHTOF(msp\data\Sierra_V_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_P_Sierra_VI): Land_PlasticCase_01_medium_black_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Sierra Typ VI";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa",
		QPATHTOF(msp\data\Sierra_VI_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_P_Sierra_VII): Land_PlasticCase_01_medium_black_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Sierra Typ VII";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa",
		QPATHTOF(msp\data\Sierra_VII_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_P_Sierra_VIII): Land_PlasticCase_01_large_black_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Sierra Typ VIII";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa",
		QPATHTOF(msp\data\Sierra_VIII_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_P_Sierra_IX): Land_PlasticCase_01_large_black_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Sierra Typ IX";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa",
		QPATHTOF(msp\data\Sierra_IX_P_01_Logo_01_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};

// WaGru Supply Boxes
class GVAR(Box_WS_WaGru_I): Box_NATO_WpsSpecial_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGru Typ I";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGru_I_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WS_WaGru_II): Box_NATO_WpsSpecial_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGru Typ II";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGru_II_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WL_WaGru_III): Box_NATO_WpsLaunch_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGru Typ III";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGru_III_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WS_WaGru_IV): Box_NATO_WpsSpecial_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGru Typ IV";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGru_IV_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WL_WaGru_V): Box_NATO_WpsLaunch_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGru Typ V";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGru_V_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WS_WaGru_VI): Box_NATO_WpsSpecial_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGru Typ VI";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGru_VI_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WL_WaGru_VII): Box_NATO_WpsLaunch_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGru Typ VII";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGru_VI_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WS_WaGru_VIII): Box_NATO_WpsSpecial_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGru Typ VIII";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGru_VIII_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};

// WaGru Stat Supply Boxes
class GVAR(Box_E_WaGru_st_I): Box_NATO_Equip_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGruStat Typ I";
	hiddenSelections[] = {"camo","camo_signs"};
	hiddenSelectionsTextures[] = {
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa",
		QPATHTOF(msp\data\WaGruStat_I_E_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WS_WaGru_st_II): Box_NATO_Equip_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGruStat Typ II";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGruStat_II_E_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_E_WaGru_st_III): Box_NATO_Equip_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGruStat Typ III";
	hiddenSelections[] = {"camo","camo_signs"};
	hiddenSelectionsTextures[] = {
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa",
		QPATHTOF(msp\data\WaGruStat_III_E_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WS_WaGru_st_IV): Box_NATO_Equip_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGruStat Typ IV";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGruStat_IV_E_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_E_WaGru_st_V): Box_NATO_Equip_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGruStat Typ V";
	hiddenSelections[] = {"camo","camo_signs"};
	hiddenSelectionsTextures[] = {
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa",
		QPATHTOF(msp\data\WaGruStat_V_E_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WS_WaGru_st_VI): Box_NATO_Equip_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGruStat Typ VI";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGruStat_VI_E_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_E_WaGru_st_VII): Box_NATO_Equip_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGruStat Typ VII";
	hiddenSelections[] = {"camo","camo_signs"};
	hiddenSelectionsTextures[] = {
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa",
		QPATHTOF(msp\data\WaGruStat_VII_E_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WS_WaGru_st_VIII): Box_NATO_Equip_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGruStat Typ VIII";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGruStat_VIII_E_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WS_WaGru_st_IX): Box_NATO_Equip_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste WaGruStat Typ IX";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\WaGruStat_IX_E_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};

// Zug Supply Boxes
class GVAR(Box_A_Zug_I): Box_NATO_Ammo_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Zug Typ I";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\Zug_I_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_A_Zug_II): Box_NATO_Ammo_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Zug Typ II";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\Zug_II_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_A_Zug_III): Box_NATO_Ammo_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Zug Typ III";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\Zug_III_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_A_Zug_IV): Box_NATO_Ammo_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Zug Typ IV";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\Zug_IV_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_G_Zug_V): Box_NATO_Grenades_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Zug Typ V";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\Zug_V_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_G_Zug_VI): Box_NATO_Grenades_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Zug Typ VI";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\Zug_VI_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_AO_Zug_VII): Box_NATO_AmmoOrd_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Zug Typ VII";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\Zug_VII_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_WL_Zug_VIII): Box_NATO_WpsLaunch_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Zug Typ VIII";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\Zug_VIII_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_U_Zug_IX): Box_NATO_Uniforms_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Zug Typ IX";
	hiddenSelections[] = {"camo","camo_signs"};
	hiddenSelectionsTextures[] = {
		"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa",
		QPATHTOF(msp\data\Zug_IX_E_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_U_Zug_X): Box_NATO_Uniforms_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Zug Typ X";
	hiddenSelections[] = {"camo","camo_signs"};
	hiddenSelectionsTextures[] = {
		"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa",
		QPATHTOF(msp\data\Zug_X_E_CA.paa)
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_A_Zug_XI): Box_NATO_Ammo_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Zug Typ XI";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\Zug_XI_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
class GVAR(Box_G_Zug_XII): Box_NATO_Grenades_F
{
	editorCategory = QGVAR(rangers_objectst);
	editorSubcategory = "EdSubcat_Storage";
	author = "cookie";
	displayName = "Kiste Zug Typ XII";
	hiddenSelections[] = {"Camo_Signs","Camo"};
	hiddenSelectionsTextures[] = {
		QPATHTOF(msp\data\Zug_XII_signs_CA.paa),
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems
	{
	};
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
