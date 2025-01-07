//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			BW Transporter
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class C_Van_02_transport_F;
class GerRng_Van_Transport_BW : C_Van_02_transport_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sprinter (BW Fuhrpark)";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_B_GER_BW_Fleck_Soldier";

    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[]=
    {
        "y\GR_Equipment_Mod\addons\GerRng_Faction\data\Van_02_body_CO_bwfuhrpark_komp.paa"
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