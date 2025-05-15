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
class gerrng_Wiesel_AT : I_LT_01_AT_F {
    author = "dalleburn, jan, cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "Wiesel (AT)";
    side = 1;
    faction = "gerrng";
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	editorCategory = "gerrng";
	editorSubcategory = "WieselSubcat";

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
    tf_encryptionCode = "tf_west_radio_code";
};

class gerrng_Wiesel_AA : I_LT_01_AA_F {
    author = "dalleburn, jan, cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "Wiesel (AA)";
    side = 1;
    faction = "gerrng";
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	editorCategory = "gerrng";
	editorSubcategory = "WieselSubcat";

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
    tf_encryptionCode = "tf_west_radio_code";
};

class gerrng_Wiesel_SC : I_LT_01_scout_F {
    author = "dalleburn, jan, cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "Wiesel (Aufklärung)";
    side = 1;
    faction = "gerrng";
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	editorCategory = "gerrng";
	editorSubcategory = "WieselSubcat";

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 40000;
    tf_encryptionCode = "tf_west_radio_code";
};

class gerrng_Wiesel_CA : I_LT_01_cannon_F {
    author = "dalleburn, jan, cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "Wiesel (MK)";
    side = 1;
    faction = "gerrng";
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	editorCategory = "gerrng";
	editorSubcategory = "WieselSubcat";

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
    tf_encryptionCode = "tf_west_radio_code";
};