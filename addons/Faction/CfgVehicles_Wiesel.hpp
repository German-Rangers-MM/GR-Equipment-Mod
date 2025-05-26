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
		postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};

	editorCategory = QGVAR(rangers_cat);
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
		postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};

	editorCategory = QGVAR(rangers_cat);
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
		postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};

	editorCategory = QGVAR(rangers_cat);
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
		postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};

	editorCategory = QGVAR(rangers_cat);
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