//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Griffon
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
class CUP_I_412_Military_Radar_AAF;
class CUP_I_412_Mil_Transport_AAF;
class CUP_C_412_Medic;
class CUP_I_412_Military_Armed_AAF;
class CUP_I_412_dynamicLoadout_AAF;

class GerRng_CH_146_Griffon_Radar_01 : CUP_I_412_Military_Radar_AAF {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "OH-146 Griffon Aufklärung";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_B_GER_HPilot";


	hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
	hiddenSelectionsTextures[]=
	{
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_0_main.paa",
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_1_ext.paa",
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_2_ext2.paa",
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_3_sticker_73+08.paa"
	};
	
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



class GerRng_CH_146_Griffon_Transport_01 : CUP_I_412_Mil_Transport_AAF {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "CH-146 Griffon Transport";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_B_GER_HPilot";


	hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
	hiddenSelectionsTextures[]=
	{
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_0_main.paa",
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_1_ext.paa",
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_2_ext2.paa",
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_3_sticker_73+08.paa"
	};

	hiddenSelectionsMaterials[] = 
	{ 
		"\CUP\AirVehicles\CUP_AirVehicles_412\data\heli_medium01_military_main.rvmat", 
		"\CUP\AirVehicles\CUP_AirVehicles_412\data\heli_medium01_military_ext.rvmat", 
		"\CUP\AirVehicles\CUP_AirVehicles_412\data\heli_medium01_military_ext1.rvmat" 
	};
	
	class TransportBackpacks
	{
		class _xx_B_Parachute {backpack="B_Parachute";count=4;};
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
		class _xx_ACE_rope36 {name="ACE_rope36";count=2;};
	};	
};



class GerRng_CH_146_Griffon_CAS_01 : CUP_I_412_Military_Armed_AAF {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "AH-146 Griffon Multirole";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_B_GER_HPilot";


	hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
	hiddenSelectionsTextures[]=
	{
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_0_main.paa",
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_1_ext.paa",
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_2_ext2.paa",
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_3_sticker_73+08.paa"
	};
	class TransportBackpacks
	{
	class _xx_B_Parachute {backpack="B_Parachute";count=4;};
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
		class _xx_ACE_rope36 {name="ACE_rope36";count=2;};
	};
};
	
	


class GerRng_Ch_146_Griffon_MedEvac_01 : CUP_C_412_Medic {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "HH-146 Griffon SAR";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_C_C_AirMedic_red_01";

	hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
	hiddenSelectionsTextures[]=
	{
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-SAR_0_main.paa",
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_1_ext.paa",
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_2_ext2.paa",
		"y\GR-Equipment-Mod\addons\GerRng_Faction\data\CH-146_BW-HFlg_3_sticker_73+08.paa",
		"\CUP\AirVehicles\CUP_AirVehicles_412\data\heli_medium01_military_in_co.paa"
	};
	hiddenSelectionsMaterials[] = 
	{ 
    	"\CUP\AirVehicles\CUP_AirVehicles_412\data\heli_medium01_military_main.rvmat", 
		"\CUP\AirVehicles\CUP_AirVehicles_412\data\heli_medium01_military_ext.rvmat", 
		"\CUP\AirVehicles\CUP_AirVehicles_412\data\heli_medium01_military_ext1.rvmat" 
	};
	class TransportBackpacks
	{
		class _xx_B_Parachute {backpack="B_Parachute";count=2;};
	};
	class TransportMagazines
	{
    	class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=2;};
		class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=2;};
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
		class _xx_ACE_rope36 {name="ACE_rope36";count=2;};
	};	
};
