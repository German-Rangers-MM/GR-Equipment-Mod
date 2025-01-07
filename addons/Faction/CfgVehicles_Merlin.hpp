//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Merlin
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
class I_Heli_Transport_02_F;

class GerRng_AW101_Merlin_TTH_01 : I_Heli_Transport_02_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "CH-101 Merlin TTH";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_B_GER_HPilot";


	hiddenSelections[] = {"camo1", "camo2", "camo3"};
	hiddenSelectionsTextures[]=
	{
		"y\GR_Equipment_Mod\addons\GerRng_Faction\data\CH-49_BW-HFlg_0_main.paa",
		"y\GR_Equipment_Mod\addons\GerRng_Faction\data\CH-49_BW-HFlg_1_tail.paa",
		"y\GR_Equipment_Mod\addons\GerRng_Faction\data\CH-49_BW-HFlg_2_eng.paa"
	};
	
	class TransportBackpacks
	{
		class _xx_B_Parachute {backpack="B_Parachute";count=16;};
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
		class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
		class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
		class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
		class _xx_HandGrenade {magazine="HandGrenade";count=5;};
		class _xx_SmokeShell {magazine="SmokeShell";count=4;};
		class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
		class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
		class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
		class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
		class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
		class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
		class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
	};
	class TransportWeapons
	{
		class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
		class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
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
		class _xx_ACE_rope36 {name="ACE_rope36";count=4;};
	};	
};