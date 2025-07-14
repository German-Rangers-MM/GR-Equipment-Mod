//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			HEMTT Box
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
class B_Truck_01_box_F;
class B_Truck_01_repair_F;
class B_Truck_01_ammo_F;
class Truck_01_flatbed_base_F;

class B_Truck_01_fuel_F;

class B_Truck_01_transport_F;
class B_Truck_01_covered_F;
class B_Truck_01_medical_F;

class GVAR(Lkw15t_Box_W) : B_Truck_01_box_F {
    author = "dalleburn";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(lkw_15t_con_w);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
	editorSubcategory = QGVAR(Lkw_Subcat);

    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-W_0.paa),
        QPATHTOF(data\HEMTT_BW-W_1.paa),
        QPATHTOF(data\HEMTT_BW-W_2.paa)
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

class GVAR(Lkw15t_Box_D) : GVAR(Lkw15t_Box_W) {

    displayName = CSTRING(lkw_15t_con_d);

    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-D_0.paa),
        QPATHTOF(data\HEMTT_BW-D_1.paa),
        QPATHTOF(data\HEMTT_BW-D_2.paa)
    };		
};

//--------------------------------------------------------------------------------------
//
//			HEMTT Repair
//
//--------------------------------------------------------------------------------------

class GVAR(Lkw15t_Repair_W) : B_Truck_01_repair_F {
    author = "dalleburn";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(lkw_15t_rep_w);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
	editorSubcategory = QGVAR(Lkw_Subcat);
    
	ace_repair_canRepair = 1;

    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-W_0.paa),
        QPATHTOF(data\HEMTT_BW-W_1.paa),
        QPATHTOF(data\HEMTT_BW-W_2.paa)
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

class GVAR(Lkw15t_Repair_D) : GVAR(Lkw15t_Repair_W) {

    displayName = CSTRING(lkw_15t_rep_d);

    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-D_0.paa),
        QPATHTOF(data\HEMTT_BW-D_1.paa),
        QPATHTOF(data\HEMTT_BW-D_2.paa)
    };		
};

//--------------------------------------------------------------------------------------
//
//			HEMTT Ammo
//
//--------------------------------------------------------------------------------------

class GVAR(Lkw15t_Ammo_W) : B_Truck_01_ammo_F {
    author = "dalleburn";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(lkw_15t_ammo_w);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
	editorSubcategory = QGVAR(Lkw_Subcat);

    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-W_0.paa),
        QPATHTOF(data\HEMTT_BW-W_1.paa),
        QPATHTOF(data\HEMTT_BW-W_2.paa)
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

class GVAR(Lkw15t_Ammo_D) : GVAR(Lkw15t_Ammo_W) {

    displayName = CSTRING(lkw_15t_ammo_d);

    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-D_0.paa),
        QPATHTOF(data\HEMTT_BW-D_1.paa),
        QPATHTOF(data\HEMTT_BW-D_2.paa)
    };		
};

//--------------------------------------------------------------------------------------
//
//			HEMTT Flatbed
//
//--------------------------------------------------------------------------------------

class GVAR(Lkw15t_Flatbed_W) : Truck_01_flatbed_base_F {
    author = "dalleburn";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(lkw_15t_flatbed_w);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
	editorSubcategory = QGVAR(Lkw_Subcat);

    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-W_0.paa),
        QPATHTOF(data\HEMTT_BW-W_1.paa),
        QPATHTOF(data\HEMTT_BW-W_2.paa),
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

class GVAR(Lkw15t_Flatbed_D) : GVAR(Lkw15t_Flatbed_W) {

    displayName = CSTRING(lkw_15t_flatbed_d);

    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-D_0.paa),
        QPATHTOF(data\HEMTT_BW-D_1.paa),
        QPATHTOF(data\HEMTT_BW-D_2.paa),
    };		
};

//--------------------------------------------------------------------------------------
//
//			HEMTT Transport
//
//--------------------------------------------------------------------------------------

class GVAR(Lkw15t_transport_W) : B_Truck_01_transport_F {
    author = "dalleburn";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(lkw_15t_transport_w);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
	editorSubcategory = QGVAR(Lkw_Subcat);

    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-W_0.paa),
        QPATHTOF(data\HEMTT_BW-W_1.paa),
        "\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa"
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

class GVAR(Lkw15t_transport_D) : GVAR(Lkw15t_transport_W) {

    displayName = CSTRING(lkw_15t_transport_d);

    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-D_0.paa),
        QPATHTOF(data\HEMTT_BW-D_1.paa),
        "\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa"
    };		
};

class GVAR(Lkw15t_covered_W) : B_Truck_01_covered_F {
    author = "dalleburn";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(lkw_15t_covered_w);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
	editorSubcategory = QGVAR(Lkw_Subcat);

    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-W_0.paa),
        QPATHTOF(data\HEMTT_BW-W_1.paa),
        "\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa",
        "\a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"
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

class GVAR(Lkw15t_covered_D) : GVAR(Lkw15t_covered_W) {

    displayName = CSTRING(lkw_15t_covered_d);

    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-D_0.paa),
        QPATHTOF(data\HEMTT_BW-D_1.paa),
        "\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa",
        "\a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"
    };		
};

//--------------------------------------------------------------------------------------
//
//			HEMTT Medical
//
//--------------------------------------------------------------------------------------

class GVAR(Lkw15t_medical_W) : B_Truck_01_medical_F {
    author = "dalleburn";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(lkw_15t_med_w);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
	editorSubcategory = QGVAR(Lkw_Subcat);

    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-W_0.paa),
        QPATHTOF(data\HEMTT_BW-W_1.paa),
        "\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa",
        "\a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"
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

class GVAR(Lkw15t_medical_D) : GVAR(Lkw15t_medical_W) {

    displayName = CSTRING(lkw_15t_med_d);

    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-D_0.paa),
        QPATHTOF(data\HEMTT_BW-D_1.paa),
        "\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa",
        "\a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"
    };		
};

//--------------------------------------------------------------------------------------
//
//			HEMTT Fuel
//
//--------------------------------------------------------------------------------------

class GVAR(Lkw15t_fuel_W) : B_Truck_01_fuel_F {
    author = "dalleburn";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(lkw_15t_fuel_w);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	
	editorSubcategory = QGVAR(Lkw_Subcat);

    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-W_0.paa),
        QPATHTOF(data\HEMTT_BW-W_1.paa),
        "\A3\Soft_F_Gamma\Truck_01\Data\truck_01_Fuel_CO.paa"
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

class GVAR(Lkw15t_fuel_D) : GVAR(Lkw15t_fuel_W) {

    displayName = CSTRING(lkw_15t_fuel_d);

    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(data\HEMTT_BW-D_0.paa),
        QPATHTOF(data\HEMTT_BW-D_1.paa),
        "\A3\Soft_F_Gamma\Truck_01\Data\truck_01_Fuel_CO.paa"
    };		
};
