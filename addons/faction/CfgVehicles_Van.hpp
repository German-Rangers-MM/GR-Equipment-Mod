//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			BW Sprinter
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class C_Van_02_transport_F;
class GVAR(Van_Transport_BW) : C_Van_02_transport_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sprinter (BW Fuhrpark)";
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
    editorSubcategory = QGVAR(Pkw_L_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 15000;
    tf_encryptionCode = "tf_west_radio_code";

    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\Van_02_body_CO_bwfuhrpark_komp.paa)
    };	
    
    textureList[]={};

    class PlateInfos
    {
        // name of section where plate number should generated
        name = "spz";
        // color used for plate number in (r,g,b,a) format
        color[] = {0,0,0,1};
        plateFont		= "RobotoCondensedLight";
        // "#" represent number & "$" represents letter
        plateFormat		= "Y-### ###";
        // Required even if you don't use any letters in plateFormat
        plateLetters	= "ABCDEFHIKLMOPRSTVXYZ";
    };
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=0;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };	
};

class C_Van_02_vehicle_F;
class GVAR(Van_cargo_BW) : C_Van_02_vehicle_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sprinter Cargo (BW Fuhrpark)";
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
    editorSubcategory = QGVAR(Pkw_L_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 15000;
    tf_encryptionCode = "tf_west_radio_code";

    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\Van_02_body_CO_bwfuhrpark_komp.paa)
    };	
    
    textureList[]={};

    class PlateInfos
    {
        // name of section where plate number should generated
        name = "spz";
        // color used for plate number in (r,g,b,a) format
        color[] = {0,0,0,1};
        plateFont		= "RobotoCondensedLight";
        // "#" represent number & "$" represents letter
        plateFormat		= "Y-### ###";
        // Required even if you don't use any letters in plateFormat
        plateLetters	= "ABCDEFHIKLMOPRSTVXYZ";
    };
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=0;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };	
};

class C_Van_02_service_F;
class GVAR(Van_service_BW) : C_Van_02_service_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sprinter Service (BW Fuhrpark)";
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	animationList[]=
    {
        "beacon_front_hide",0,
        "beacon_rear_hide",0,
        "LED_lights_hide",0,
        "reflective_tape_hide",0,
        "side_protective_frame_hide",1,
        "spare_tyre_hide",0,
        "spare_tyre_holder_hide",0,
        "roof_rack_hide",0,
        "ladder_hide",0,
        "front_protective_frame_hide",0,
        "rearsteps_hide",0,
        "sidesteps_hide",0
    };
    editorSubcategory = QGVAR(Pkw_L_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 15000;
    tf_encryptionCode = "tf_west_radio_code";

    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\Van_02_body_CO_bwfuhrpark_komp.paa)
    };	
    
    textureList[]={};

    class PlateInfos
    {
        // name of section where plate number should generated
        name = "spz";
        // color used for plate number in (r,g,b,a) format
        color[] = {0,0,0,1};
        plateFont		= "RobotoCondensedLight";
        // "#" represent number & "$" represents letter
        plateFormat		= "Y-### ###";
        // Required even if you don't use any letters in plateFormat
        plateLetters	= "ABCDEFHIKLMOPRSTVXYZ";
    };
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=5;};
		class _xx_SmokeShell {magazine="SmokeShell";count=4;};
		class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
		class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
		class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
		class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
	};
	class TransportWeapons
	{
		class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=1;};
	};
	class TransportItems
	{
		class _xx_Toolkit {name="Toolkit";count=4;};
		class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
		class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
		class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
		class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
		class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
		class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
		class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
		class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
		class _xx_ACE_morphine {name="ACE_morphine";count=2;};
		class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
		class _xx_ACE_splint {name="ACE_splint";count=2;};
		class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
		class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
		class _xx_ACE_rope12 {name="ACE_rope12";count=4;};
		class _xx_ACE_rope6 {name="ACE_rope6";count=4;};
		class _xx_ACE_Wheel {name="ACE_Wheel";count=20;};
	};
};

class I_E_Van_02_medevac_F;
class GVAR(Van_San_BW) : I_E_Van_02_medevac_F
{
    author = "cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sprinter (RTW)";
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
    editorSubcategory = QGVAR(Pkw_L_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 15000;
    tf_encryptionCode = "tf_west_radio_code";

    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\van_body_Ambulance_Flk_CO.paa),
        "a3\Soft_F_enoch\Van_02\Data\van_wheel_ldf_MP_CO.paa",
        "a3\Soft_F_Enoch\Van_02\Data\van_glass_medevac_ldf_CA.paa",
        "a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
        QPATHTOF(data\van_body_Ambulance_Flk_CO.paa)
    };	
    
    textureList[]={};

    class PlateInfos
    {
        // name of section where plate number should generated
        name = "spz";
        // color used for plate number in (r,g,b,a) format
        color[] = {0,0,0,1};
        plateFont		= "RobotoCondensedLight";
        // "#" represent number & "$" represents letter
        plateFormat		= "Y-### ###";
        // Required even if you don't use any letters in plateFormat
        plateLetters	= "ABCDEFHIKLMOPRSTVXYZ";
    };
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=0;};
    };
    class TransportItems
    {
		class _xx_Toolkit {name="Toolkit";count=1;};
		class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=10;};
		class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=10;};
		class _xx_ACE_packingBandage {name="ACE_packingBandage";count=10;};
		class _xx_ACE_quikclot {name="ACE_quikclot";count=10;};
		class _xx_kat_chestSeal {name="kat_chestSeal";count=5;};
		class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
		class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
		class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
		class _xx_ACE_morphine {name="ACE_morphine";count=5;};
		class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=10;};
		class _xx_ACE_splint {name="ACE_splint";count=5;};
		class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
		class _xx_kat_IV_16 {name="kat_IV_16";count=10;};
		class _xx_kat_CarbonateItem {name="kat_CarbonateItem";count=5;};
		class _xx_kat_atropine {name="kat_atropine";count=5;};
		class _xx_kat_AED {name="kat_AED";count=1;};
		class _xx_kat_BVM {name="kat_BVM";count=5;};
		class _xx_kat_EACA {name="kat_EACA";count=5;};
		class _xx_ACE_epinephrine {name="ACE_epinephrine";count=5;};
		class _xx_kat_IO_FAST {name="kat_IO_FAST";count=5;};
		class _xx_kat_fentanyl {name="kat_fentanyl";count=5;};
		class _xx_kat_ketamine {name="kat_ketamine";count=5;};
		class _xx_kat_larynx {name="kat_larynx";count=5;};
		class _xx_kat_lorazepam {name="kat_lorazepam";count=5;};
		class _xx_kat_nalbuphine {name="kat_nalbuphine";count=5;};
		class _xx_kat_naloxone {name="kat_naloxone";count=5;};
		class _xx_kat_nitroglycerin {name="kat_nitroglycerin";count=5;};
		class _xx_kat_norepinephrine {name="kat_norepinephrine";count=5;};
		class _xx_ACE_personalAidKit {name="ACE_personalAidKit";count=1;};
		class _xx_kat_phenylephrine {name="kat_phenylephrine";count=5;};
		class _xx_kat_oxygenTank_300_Item {name="kat_oxygenTank_300_Item";count=2;};
		class _xx_kat_Pulseoximeter {name="kat_Pulseoximeter";count=3;};
		class _xx_ACE_surgicalKit {name="ACE_surgicalKit";count=1;};
		class _xx_kat_TXA {name="kat_TXA";count=5;};
		class _xx_Attachable_Helistretcher {name="Attachable_Helistretcher";count=1;};
		class _xx_ACE_tourniquet {name="ACE_tourniquet";count=5;};
		class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };	
};

//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			BW Pritsche
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class C_Van_01_box_F;
class GVAR(T5_box_BW) : C_Van_01_box_F 
{
    author = "cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "T5 (Rüstsatzträger)";
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
    editorSubcategory = QGVAR(Pkw_L_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 15000;
    tf_encryptionCode = "tf_west_radio_code";
    textureList[]={"WDL",1};
    class TextureSources
    {
        class WDL
        {
            displayName = "Woodland";
            author = "cookie";
            textures[] = {QPATHTOF(data\T5_ext_wdl.paa),QPATHTOF(data\T5_adds_wdl.paa),"\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
    };

    class PlateInfos
    {
        // name of section where plate number should generated
        name = "spz";
        // color used for plate number in (r,g,b,a) format
        color[] = {0,0,0,1};
        plateFont		= "RobotoCondensedLight";
        // "#" represent number & "$" represents letter
        plateFormat		= "Y-### ###";
        // Required even if you don't use any letters in plateFormat
        plateLetters	= "ABCDEFHIKLMOPRSTVXYZ";
    };
};

class C_Van_01_fuel_F;
class GVAR(T5_fuel_BW) : C_Van_01_fuel_F 
{
    author = "cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "T5 (Treibstoff)";
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
    editorSubcategory = QGVAR(Pkw_L_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 15000;
    tf_encryptionCode = "tf_west_radio_code";
    textureList[]={"WDL",1};
    class TextureSources
    {
        class WDL
        {
            displayName = "Woodland";
            author = "cookie";
            textures[] = {QPATHTOF(data\T5_ext_wdl.paa),QPATHTOF(data\T5_tank_wdl.paa),"\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
    };

    class PlateInfos
    {
        // name of section where plate number should generated
        name = "spz";
        // color used for plate number in (r,g,b,a) format
        color[] = {0,0,0,1};
        plateFont		= "RobotoCondensedLight";
        // "#" represent number & "$" represents letter
        plateFormat		= "Y-### ###";
        // Required even if you don't use any letters in plateFormat
        plateLetters	= "ABCDEFHIKLMOPRSTVXYZ";
    };
};

class C_Van_01_transport_F;
class GVAR(T5_transport_BW) : C_Van_01_transport_F 
{
    author = "cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "T5 (Pritsche)";
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
    editorSubcategory = QGVAR(Pkw_L_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 15000;
    tf_encryptionCode = "tf_west_radio_code";
    textureList[]={"WDL",1};
    class TextureSources
    {
        class WDL
        {
            displayName = "Woodland";
            author = "cookie";
            textures[] = {QPATHTOF(data\T5_ext_wdl.paa),QPATHTOF(data\T5_adds_wdl.paa),"\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
            factions[] = {QGVAR(rangers_faction)};
        };
    };

    class PlateInfos
    {
        // name of section where plate number should generated
        name = "spz";
        // color used for plate number in (r,g,b,a) format
        color[] = {0,0,0,1};
        plateFont		= "RobotoCondensedLight";
        // "#" represent number & "$" represents letter
        plateFormat		= "Y-### ###";
        // Required even if you don't use any letters in plateFormat
        plateLetters	= "ABCDEFHIKLMOPRSTVXYZ";
    };
};