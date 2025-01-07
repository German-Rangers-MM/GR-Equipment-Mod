// GerRng_Faction\config.cpp 2024-04-23, 17:15

class CfgPatches {
    class GerRng_ {
        units[] = {
            "GerRng_AW101_Merlin_TTH_01",
            "GerRng_CH_146_Griffon_Radar_01",
            "GerRng_CH_146_Griffon_Transport_01",
            "GerRng_Ch_146_Griffon_MedEvac_01",
            "GerRng_Iveco_Medical_W",
            "GerRng_Iveco_Transport_W",
		"GerRng_Iveco_Transport_Covered_W",
            "GerRng_Iveco_Fuel_W",
            "GerRng_Iveco_Repair_W",
            "GerRng_Iveco_Ammo_W",
            "GerRng_Iveco_Medical_D",
            "GerRng_Iveco_Transport_D",
		"GerRng_Iveco_Transport_Covered_D",
            "GerRng_Iveco_Fuel_D",
            "GerRng_Iveco_Repair_D",
            "GerRng_Iveco_Ammo_D",
            "GerRng_CH_47F_TTH_01",
		"GerRng_CH_47F_TTH_VIV_01",
		"GerRng_Lkw15t_Box_W",
		"GerRng_Lkw15t_Repair_W",
		"GerRng_Lkw15t_Ammo_W",
		"GerRng_Lkw15t_Flatbed_W",
		"GerRng_Lkw15t_Box_D",
		"GerRng_Lkw15t_Repair_D",
		"GerRng_Lkw15t_Ammo_D",
		"GerRng_Lkw15t_Flatbed_D",
		"GerRng_CH_146_Griffon_CAS",
		"GerRng_B_FENNEK_GER_Wdl",
		"GerRng_B_FENNEK_GER_D",
		"GerRng_B_FENNEK_GER_HMG_Wdl",
		"GerRng_B_FENNEK_GER_HMG_D",
		"GerRng_B_FENNEK_GER_GMG_Wdl",
		"GerRng_B_FENNEK_GER_GMG_D",
		"GerRng_FENNEK_NEF_W",
		"GerRng_FENNEK_NEF_D",
        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "A3_Air_F_Beta_Heli_Transport_02",
            "A3_Air_F",
            "A3_Air_F_Heli_Light_01",
            "A3_Air_F_Heli_Light_02",
            "A3_Air_F_Beta_Heli_Transport_01",
            "CUP_AirVehicles_412",
            "CUP_AirVehicles_AH6",
            "A3_Air_F_Heli",
            "A3_Data_F",
            "A3_Data_F_Curator",
            "cba_xeh",
            "A3_Soft_F_Gamma_Truck_02",
            "A3_Sounds_F",
            "A3_Soft_F_Beta_Truck_02",
            "A3_Soft_F_Enoch_Truck_02",
            "A3_Soft_F",
            "A3_Soft_F_Beta_Truck_01",
            "A3_Soft_F_Gamma_Truck_01",
            "A3_Soft_F_Gamma_Van_01",
            "A3_Soft_F_EPC_Truck_03",
            "A3_Soft_F_Orange_Van_02",
            "CUP_WheeledVehicles_Ural",
            "CUP_WheeledVehicles_RM70",
            "A3_Soft_F_Gamma_Hatchback_01",
            "A3_Soft_F_Exp_Offroad_02",
            "A3_Data_F_ParticleEffects",
            "A3_Armor_F_Beta",
            "CUP_AirVehicles_CH47",
		"A3_Soft_F_Enoch_Truck_01",
		"A3_Soft_F_Beta_MRAP_03",
        };
        author = "dalleburn, jan";
        authors[] = {"Dalleburn, jan"};
    };
};

class CfgFactionClasses {
    class GerRng_ {
        displayName = "German Rangers";
        side = 1;
        flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
        priority = 0;
    };
};

//class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class I_Heli_Transport_02_F;

    class CUP_B_CH47F_USA;
	class CUP_B_CH47F_VIV_USA;

    class CUP_I_412_Military_Radar_AAF;
    class CUP_I_412_Mil_Transport_AAF;
    class CUP_C_412_Medic;
	class CUP_I_412_Military_Armed_AAF;
	
	class I_E_Truck_02_F;
	class I_E_Truck_02_transport_F;
	class I_E_Truck_02_Medical_F;
	class I_E_Truck_02_fuel_F;
	class I_E_Truck_02_Box_F;
	class I_E_Truck_02_Ammo_F;
	class B_Truck_01_box_F;
	class B_Truck_01_repair_F;
	class B_Truck_01_ammo_F;
	class Truck_01_flatbed_base_F;
	class I_MRAP_03_F;
	class I_MRAP_03_hmg_F;
	class I_MRAP_03_gmg_F;



//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Merlin
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

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
			"GerRng_Faction\data\CH-49_BW-HFlg_0_main.paa",
			"GerRng_Faction\data\CH-49_BW-HFlg_1_tail.paa",
			"GerRng_Faction\data\CH-49_BW-HFlg_2_eng.paa"
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


//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Griffon
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

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
			"GerRng_Faction\data\CH-146_BW-HFlg_0_main.paa",
			"GerRng_Faction\data\CH-146_BW-HFlg_1_ext.paa",
			"GerRng_Faction\data\CH-146_BW-HFlg_2_ext2.paa",
			"GerRng_Faction\data\CH-146_BW-HFlg_3_sticker_73+08.paa"
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
			"GerRng_Faction\data\CH-146_BW-HFlg_0_main.paa",
			"GerRng_Faction\data\CH-146_BW-HFlg_1_ext.paa",
			"GerRng_Faction\data\CH-146_BW-HFlg_2_ext2.paa",
			"GerRng_Faction\data\CH-146_BW-HFlg_3_sticker_73+08.paa"
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
			"GerRng_Faction\data\CH-146_BW-HFlg_0_main.paa",
			"GerRng_Faction\data\CH-146_BW-HFlg_1_ext.paa",
			"GerRng_Faction\data\CH-146_BW-HFlg_2_ext2.paa",
			"GerRng_Faction\data\CH-146_BW-HFlg_3_sticker_73+08.paa"
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
			"GerRng_Faction\data\CH-146_BW-SAR_0_main.paa",
			"GerRng_Faction\data\CH-146_BW-HFlg_1_ext.paa",
			"GerRng_Faction\data\CH-146_BW-HFlg_2_ext2.paa",
			"GerRng_Faction\data\CH-146_BW-HFlg_3_sticker_73+08.paa",
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

//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Chinook
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

    class GerRng_CH_47F_TTH_01 : CUP_B_CH47F_USA {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-47F Chinook STH";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_HPilot";

		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\ch47_ext_1_BW_co.paa",
			"GerRng_Faction\data\ch47_ext_2_BW_co.paa",
			"GerRng_Faction\data\ch47f_nalepky_BW_ca.paa"
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
			class _xx_ACE_rope36 {name="ACE_rope36";count=2;};
		};	
	};

    class GerRng_CH_47F_TTH_VIV_01 : CUP_B_CH47F_VIV_USA {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-47F Chinook STH (ViV)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_HPilot";

		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\ch47_ext_1_BW2_co.paa",
			"GerRng_Faction\data\ch47_ext_2_BW2_co.paa",
			"GerRng_Faction\data\ch47f_nalepky_BW2_ca.paa"
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
			class _xx_ACE_rope36 {name="ACE_rope36";count=2;};
		};	
	};
	
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Trucks
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------
//
//			Trucks-Transport Uncovered
//
//--------------------------------------------------------------------------------------

    class GerRng_IVECO_Transport_W : I_E_Truck_02_transport_F {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Lkw 7t Transport offen (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Zamak_BW-W_trp_0.paa",
			"GerRng_Faction\data\Zamak_BW-W_trp_1.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"GerRng_Faction\data\Zamak_BW_W_any_3.paa"
		};
		
		class TransportBackpacks
		{
			class _xx_B_Parachute {backpack="B_Parachute";count=0;};
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
		};			
    };
	
    class GerRng_IVECO_Transport_D : GerRng_IVECO_Transport_W {

        displayName = "Lkw 7t Transport offen (Desert)";

		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Zamak_BW-D_trp_0.paa",
			"GerRng_Faction\data\Zamak_BW-D_trp_1.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"GerRng_Faction\data\Zamak_BW_D_any_3.paa"
		};		
    };

//--------------------------------------------------------------------------------------
//
//			Trucks-Transport Covered
//
//--------------------------------------------------------------------------------------

    class GerRng_IVECO_Transport_Covered_W : I_E_Truck_02_F {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Lkw 7t Transport Plane (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Zamak_BW-W_trp_0.paa",
			"GerRng_Faction\data\Zamak_BW-W_trp_1.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"GerRng_Faction\data\Zamak_BW_W_any_3.paa"
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute {backpack="B_Parachute";count=0;};
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
		};			
    };
	
    class GerRng_IVECO_Transport_Covered_D : GerRng_IVECO_Transport_Covered_W {

        displayName = "Lkw 7t Transport Plane (Desert)";

		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Zamak_BW-D_trp_0.paa",
			"GerRng_Faction\data\Zamak_BW-D_trp_1.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"GerRng_Faction\data\Zamak_BW_D_any_3.paa"
		};		
    };

//--------------------------------------------------------------------------------------
//
//			Trucks-Medic
//
//--------------------------------------------------------------------------------------
	
	class GerRng_IVECO_Medic_W : I_E_Truck_02_F {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Lkw 7t Transport Sanität (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

		ace_cargo_space = 20;
		
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Zamak_BW-W_san_0.paa",
			"GerRng_Faction\data\Zamak_BW-W_san_1.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"GerRng_Faction\data\Zamak_BW_W_any_3.paa"
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute {backpack="B_Parachute";count=0;};
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
		};			
    };
	
    class GerRng_IVECO_Medic_D : GerRng_IVECO_Medic_W {

        displayName = "Lkw 7t Transport Sanität (Desert)";

		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Zamak_BW-D_san_0.paa",
			"GerRng_Faction\data\Zamak_BW-D_san_1.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"GerRng_Faction\data\Zamak_BW_D_any_3.paa"
		};		
    };
	

//--------------------------------------------------------------------------------------
//
//			Trucks Fuel
//
//--------------------------------------------------------------------------------------

    class GerRng_IVECO_Fuel_W : I_E_Truck_02_fuel_F {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Lkw 7t Treibstoff (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Zamak_BW-W_tank_0.paa",
			"GerRng_Faction\data\Zamak_BW-W_tank_1.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"GerRng_Faction\data\Zamak_BW_W_any_3.paa"
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute {backpack="B_Parachute";count=0;};
		};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
		};			
    };
	
    class GerRng_Iveco_Fuel_D : GerRng_IVECO_Fuel_W {

        displayName = "Lkw 7t Treibstoff (Desert)";

		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Zamak_BW-D_tank_0.paa",
			"GerRng_Faction\data\Zamak_BW-D_tank_1.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"GerRng_Faction\data\Zamak_BW_D_any_3.paa"
		};		
    };



//--------------------------------------------------------------------------------------
//
//			Trucks Ammo
//
//--------------------------------------------------------------------------------------

    class GerRng_IVECO_Ammo_W : I_E_Truck_02_Ammo_F {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Lkw 7t Munition (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

		ace_cargo_space = 40;
		
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Zamak_BW-W_ammo_0.paa",
			"GerRng_Faction\data\Zamak_BW-W_ammo_1.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"GerRng_Faction\data\Zamak_BW_W_any_3.paa"
		};

		class TransportBackpacks
		{
			class _xx_B_Parachute {backpack="B_Parachute";count=0;};
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
	
    class GerRng_IVECO_Ammo_D : GerRng_IVECO_Ammo_W {
        displayName = "Lkw 7t Munition (Desert)";

		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Zamak_BW-D_ammo_0.paa",
			"GerRng_Faction\data\Zamak_BW-D_ammo_1.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"GerRng_Faction\data\Zamak_BW_D_any_3.paa"
		};		
    };
	

//--------------------------------------------------------------------------------------
//
//			Trucks Repair
//
//--------------------------------------------------------------------------------------

    class GerRng_IVECO_Repair_W : I_E_Truck_02_Box_F {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Lkw 7t Instandsetzung (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

		ace_cargo_space = 40;
		
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Zamak_BW-W_rep_0.paa",
			"GerRng_Faction\data\Zamak_BW-W_rep_1.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"GerRng_Faction\data\Zamak_BW_W_any_3.paa"
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
			class _xx_Toolkit {name="Toolkit";count=2;};
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=2;};
			class _xx_ACE_rope6 {name="ACE_rope6";count=2;};
			class _xx_ACE_Wheel {name="ACE_Wheel";count=6;};
		};			

        class ACE_Cargo {
            class Cargo {
                class ACE_Wheel {
                    type = "ACE_Wheel";
                    amount = 20;
                };
			};
		};

    };
	
    class GerRng_IVECO_Repair_D : GerRng_IVECO_Repair_W {
        displayName = "Lkw 7t Instandsetzung (Desert)";

		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Zamak_BW-D_rep_0.paa",
			"GerRng_Faction\data\Zamak_BW-D_rep_1.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"GerRng_Faction\data\Zamak_BW_D_any_3.paa"
		};		
    };

//--------------------------------------------------------------------------------------
//
//			Dingo
//
//--------------------------------------------------------------------------------------

	class CUP_B_Dingo_GER_Wdl;
    class GerRng_B_Dingo_GER_Wdl : CUP_B_Dingo_GER_Wdl {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Dingo ATF MG (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";
		
		class TransportBackpacks
		{
			class _xx_B_Parachute {backpack="B_Parachute";count=0;};
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
		};	
    };

	class CUP_B_Dingo_GER_Des;
    class GerRng_B_Dingo_GER_D : CUP_B_Dingo_GER_Des {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Dingo ATF MG (Desert)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";
		
		class TransportBackpacks
		{
			class _xx_B_Parachute {backpack="B_Parachute";count=0;};
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
		};	
    };

//--------------------------------------------------------------------------------------
//
//			Fennek
//
//--------------------------------------------------------------------------------------

    class GerRng_B_FENNEK_GER_Wdl : I_MRAP_03_F {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fennek Spähwagen (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

	ace_cargo_space = 20;
		
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[]=
	{
		"GerRng_Faction\data\Strider_BW-W_recon_0.paa",
	};
		
		class TransportBackpacks
		{
			class _xx_B_Parachute {backpack="B_Parachute";count=0;};
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
		};	
    };
	
    class GerRng_B_FENNEK_GER_D : GerRng_B_FENNEK_GER_Wdl {
        displayName = "Fennek Spähwagen (Desert)";

		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Strider_BW-D_recon_0.paa",
		};	
    };
//--------------------------------------------------------------------------------------
//
//			Fennek HMG
//
//--------------------------------------------------------------------------------------

    class GerRng_B_FENNEK_GER_HMG_Wdl : I_MRAP_03_hmg_F {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fennek HMG (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

	ace_cargo_space = 20;
		
	hiddenSelections[] = {"camo1", "camo2"};
	hiddenSelectionsTextures[]=
	{
		"GerRng_Faction\data\Strider_BW-W_recon_0.paa",
		"\a3\data_f\vehicles\turret_co.paa"
	};
		
		class TransportBackpacks
		{
			class _xx_B_Parachute {backpack="B_Parachute";count=0;};
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
		};	
    };
	
    class GerRng_B_FENNEK_GER_HMG_D : GerRng_B_FENNEK_GER_HMG_Wdl {
        displayName = "Fennek HMG (Desert)";

		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Strider_BW-D_recon_0.paa",
			"\a3\data_f\vehicles\turret_co.paa"
		};	
    };

//--------------------------------------------------------------------------------------
//
//			Fennek GMG
//
//--------------------------------------------------------------------------------------

    class GerRng_B_FENNEK_GER_GMG_Wdl : I_MRAP_03_gmg_F {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fennek GMG (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

	ace_cargo_space = 20;
		
	hiddenSelections[] = {"camo1", "camo2"};
	hiddenSelectionsTextures[]=
	{
		"GerRng_Faction\data\Strider_BW-W_recon_0.paa",
		"\a3\data_f\vehicles\turret_co.paa"
	};
		
		class TransportBackpacks
		{
			class _xx_B_Parachute {backpack="B_Parachute";count=0;};
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
		};	
    };
	
    class GerRng_B_FENNEK_GER_GMG_D : GerRng_B_FENNEK_GER_GMG_Wdl {
        displayName = "Fennek GMG (Desert)";

		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Strider_BW-D_recon_0.paa",
			"\a3\data_f\vehicles\turret_co.paa"
		};	
    };

//--------------------------------------------------------------------------------------
//
//			Fennek NEF
//
//--------------------------------------------------------------------------------------

    class GerRng_FENNEK_NEF_W : I_MRAP_03_F {
        author = "dalleburn, jan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fennek Notarztfahrzeug (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Strider_BW-W_san_0.paa"
		};	
		
		class TransportBackpacks
		{
			class _xx_B_Parachute {backpack="B_Parachute";count=0;};
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
		};			
    };
	
    class GerRng_FENNEK_NEF_D : GerRng_FENNEK_NEF_W {
        displayName = "Fennek Notarztfahrzeug (Desert)";

		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\Strider_BW-D_san_0.paa"
		};			
    };


//--------------------------------------------------------------------------------------
//
//			BW Transporter
//
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
			"GerRng_Faction\data\Van_02_body_CO_bwfuhrpark_komp.paa"
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

//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			HEMTT
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------
//
//			HEMTT Box
//
//--------------------------------------------------------------------------------------

    class GerRng_Lkw15t_Box_W : B_Truck_01_box_F {
        author = "dalleburn";
        scope = 2;
        scopeCurator = 2;
        displayName = "Lkw 15t GL MULTI Container (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\HEMTT_BW-W_0.paa",
			"GerRng_Faction\data\HEMTT_BW-W_1.paa",
			"GerRng_Faction\data\HEMTT_BW-W_2.paa"
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
			class _xx_Toolkit {name="Toolkit";count=2;};
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=2;};
			class _xx_ACE_rope6 {name="ACE_rope6";count=2;};
			class _xx_ACE_Wheel {name="ACE_Wheel";count=6;};
		};			
    };
	
    class GerRng_Lkw15t_Box_D : GerRng_Lkw15t_Box_W {

        displayName = "Lkw 15t GL MULTI Container (Desert)";

		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\HEMTT_BW-D_0.paa",
			"GerRng_Faction\data\HEMTT_BW-D_1.paa",
			"GerRng_Faction\data\HEMTT_BW-D_2.paa"
		};		
    };

//--------------------------------------------------------------------------------------
//
//			HEMTT Repair
//
//--------------------------------------------------------------------------------------

    class GerRng_Lkw15t_Repair_W : B_Truck_01_repair_F {
        author = "dalleburn";
        scope = 2;
        scopeCurator = 2;
        displayName = "Lkw 15t GL MULTI Instandsetzung (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\HEMTT_BW-W_0.paa",
			"GerRng_Faction\data\HEMTT_BW-W_1.paa",
			"GerRng_Faction\data\HEMTT_BW-W_2.paa"
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
	
    class GerRng_Lkw15t_Repair_D : GerRng_Lkw15t_Repair_W {

        displayName = "Lkw 15t GL MULTI Instantsetzung (Desert)";

		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\HEMTT_BW-D_0.paa",
			"GerRng_Faction\data\HEMTT_BW-D_1.paa",
			"GerRng_Faction\data\HEMTT_BW-D_2.paa"
		};		
    };

//--------------------------------------------------------------------------------------
//
//			HEMTT Ammo
//
//--------------------------------------------------------------------------------------

    class GerRng_Lkw15t_Ammo_W : B_Truck_01_ammo_F {
        author = "dalleburn";
        scope = 2;
        scopeCurator = 2;
        displayName = "Lkw 15t GL MULTI Munition (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\HEMTT_BW-W_0.paa",
			"GerRng_Faction\data\HEMTT_BW-W_1.paa",
			"GerRng_Faction\data\HEMTT_BW-W_2.paa"
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
			class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
		};			
    };
	
    class GerRng_Lkw15t_Ammo_D : GerRng_Lkw15t_Ammo_W {

        displayName = "Lkw 15t GL MULTI Munition (Desert)";

		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\HEMTT_BW-D_0.paa",
			"GerRng_Faction\data\HEMTT_BW-D_1.paa",
			"GerRng_Faction\data\HEMTT_BW-D_2.paa"
		};		
    };

//--------------------------------------------------------------------------------------
//
//			HEMTT Flatbed
//
//--------------------------------------------------------------------------------------

    class GerRng_Lkw15t_Flatbed_W : Truck_01_flatbed_base_F {
        author = "dalleburn";
        scope = 2;
        scopeCurator = 2;
        displayName = "Lkw 15t GL MULTI Pritsche (Woodland)";
        side = 1;
        faction = "GerRng_";
        crew = "CUP_B_GER_BW_Fleck_Soldier";

		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\HEMTT_BW-W_0.paa",
			"GerRng_Faction\data\HEMTT_BW-W_1.paa",
			"GerRng_Faction\data\HEMTT_BW-W_2.paa",
		};
		
		class TransportMagazines
		{
			class _xx_6Rnd_GreenSignal_F {magazine="6Rnd_GreenSignal_F";count=1;};
			class _xx_C6Rnd_RedSignal_F {magazine="6Rnd_RedSignal_F";count=1;};
			class _xx_SmokeShell {magazine="SmokeShell";count=2;};
			class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=2;};
			class _xx_B_IR_Grenade {magazine="B_IR_Grenade";count=2;};
		};
		
		class TransportWeapons
		{
			class _xx_hgun_Pistol_Signal_F {weapon="hgun_Pistol_Signal_F";count=1;};
		};
		
		class TransportItems
		{
			class _xx_Toolkit {name="Toolkit";count=1;};
			class _xx_FirstAidKit {name="FirstAidKit";count=3;};
		};			
    };
	
    class GerRng_Lkw15t_Flatbed_D : GerRng_Lkw15t_Flatbed_W {

        displayName = "Lkw 15t GL MULTI Pritsche (Desert)";

		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[]=
		{
			"GerRng_Faction\data\HEMTT_BW-D_0.paa",
			"GerRng_Faction\data\HEMTT_BW-D_1.paa",
			"GerRng_Faction\data\HEMTT_BW-D_2.paa",
		};		
    };
	


//--------------------------------------------------------------------------------------
//
//			Medic Tent
//
//--------------------------------------------------------------------------------------

	class Land_MedicalTent_01_NATO_generic_open_F;
	class GerRng_MedTent_01 : Land_MedicalTent_01_NATO_generic_open_F {
        author = "dalleburn, jan";
        displayName = "Ger Rng Medical Tent";

		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]=
		{
			"\a3\structures_f_orange\humanitarian\camps\data\medicaltent_01_mtp_f_co.paa",
		};
	};
	
	class B_supplyCrate_F;
	class GerRng_supplyCrate_F : B_supplyCrate_F {
        author = "dalleburn, jan";
        displayName = "Supply Box [GerRng]";
	
	ace_cargo_space = 10;
	ace_cargo_hasCargo = 1;
	ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
    ace_cargo_noRename = 0;  // Blocks renaming object (1-blocked, 0-allowed)
    ace_cargo_blockUnloadCarry = 0; // Blocks object from being automatically picked up by player on unload

	};

};

class ace_medical_facilities {
    GerRng_Helme[] = { "GerRng_MedTent_01" };
};
