//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Sea-Lynx
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
class CUP_B_AW159_Unarmed_GER;

class GerRng_WG_13_Sea_Lynx : CUP_B_AW159_Unarmed_GER {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "WG-13 Sea Lynx Mk88a (Marine)";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_B_GER_HPilot";

	
	class TransportBackpacks
	{
		class _xx_B_Parachute {backpack="B_Parachute";count=4;};
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=5;};
		class _xx_HandGrenade {magazine="HandGrenade";count=2;};
		class _xx_SmokeShell {magazine="SmokeShell";count=2;};
		class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=2;};
		class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=2;};
		class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
		class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
	};
	class TransportWeapons
	{
		class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=1;};
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
		class _xx_ACE_rope36 {name="ACE_rope36";count=2;};
	};		
};