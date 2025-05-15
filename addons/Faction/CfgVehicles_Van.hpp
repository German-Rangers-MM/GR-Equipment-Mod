//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			BW Transporter
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class C_Van_02_transport_F;
class gerrng_Van_Transport_BW : C_Van_02_transport_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sprinter (BW Fuhrpark)";
    side = 1;
    faction = "gerrng";
    crew = "CUP_B_GER_BW_Fleck_Soldier";

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

class I_E_Van_02_medevac_F;
class gerrng_Van_San_BW : I_E_Van_02_medevac_F
{
    author = "cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sprinter (RTW)";
    side = 1;
    faction = "gerrng";
    crew = "CUP_B_GER_BW_Fleck_Soldier";

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