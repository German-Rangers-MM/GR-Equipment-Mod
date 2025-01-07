//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Trucks-Transport Uncovered
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
class I_E_Truck_02_F;
class I_E_Truck_02_transport_F;
class I_E_Truck_02_Medical_F;
class I_E_Truck_02_fuel_F;
class I_E_Truck_02_Box_F;
class I_E_Truck_02_Ammo_F;

class GerRng_IVECO_Transport_W : I_E_Truck_02_transport_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "Lkw 7t Transport offen (Woodland)";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    
	editorCategory = "GerRng_";
	editorSubcategory = "LkwSubcat";

    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[]=
    {
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-W_trp_0.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-W_trp_1.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW_W_any_3.paa"
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
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-D_trp_0.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-D_trp_1.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW_D_any_3.paa"
    };		
};

//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Trucks-Transport Covered
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class GerRng_IVECO_Transport_Covered_W : I_E_Truck_02_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "Lkw 7t Transport Plane (Woodland)";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_B_GER_BW_Fleck_Soldier";

	editorCategory = "GerRng_";
	editorSubcategory = "LkwSubcat";

    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[]=
    {
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-W_trp_0.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-W_trp_1.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW_W_any_3.paa"
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
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-D_trp_0.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-D_trp_1.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW_D_any_3.paa"
    };		
};

//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Trucks-Medic
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class GerRng_IVECO_Medic_W : I_E_Truck_02_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "Lkw 7t Transport Sanität (Woodland)";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    
	editorCategory = "GerRng_";
	editorSubcategory = "LkwSubcat";

    ace_cargo_space = 20;

    attendant = 1;
    
    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[]=
    {
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-W_san_0.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-W_san_1.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW_W_any_3.paa"
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
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-D_san_0.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-D_san_1.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW_D_any_3.paa"
    };		
};


//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Trucks Fuel
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class GerRng_IVECO_Fuel_W : I_E_Truck_02_fuel_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "Lkw 7t Treibstoff (Woodland)";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    
	editorCategory = "GerRng_";
	editorSubcategory = "LkwSubcat";

    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[]=
    {
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-W_tank_0.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-W_tank_1.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW_W_any_3.paa"
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
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-D_tank_0.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-D_tank_1.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW_D_any_3.paa"
    };		
};



//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Trucks Ammo
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class GerRng_IVECO_Ammo_W : I_E_Truck_02_Ammo_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "Lkw 7t Munition (Woodland)";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    
	editorCategory = "GerRng_";
	editorSubcategory = "LkwSubcat";

    ace_cargo_space = 40;
    
    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[]=
    {
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-W_ammo_0.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-W_ammo_1.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW_W_any_3.paa"
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
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-D_ammo_0.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-D_ammo_1.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW_D_any_3.paa"
    };		
};


//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Trucks Repair
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class GerRng_IVECO_Repair_W : I_E_Truck_02_Box_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "Lkw 7t Instandsetzung (Woodland)";
    side = 1;
    faction = "GerRng_";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    
	editorCategory = "GerRng_";
	editorSubcategory = "LkwSubcat";

    ace_cargo_space = 40;
	ace_repair_canRepair = 1;
    
    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[]=
    {
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-W_rep_0.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-W_rep_1.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW_W_any_3.paa"
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
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-D_rep_0.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW-D_rep_1.paa",
        "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "y\GR-Equipment-Mod\addons\GerRng_Faction\data\Zamak_BW_D_any_3.paa"
    };		
};