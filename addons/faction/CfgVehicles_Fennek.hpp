//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Fennek
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------


class MRAP_03_base_F;
class MRAP_03_hmg_base_F;
class MRAP_03_gmg_base_F;
class I_MRAP_03_F : MRAP_03_base_F
{
    class TextureSources
	{
		class Fleck
		{
			displayName = CSTRING(camo_flk);
			author = "dalleburn, jan";
			textures[] = {QPATHTOF(data\Strider_BW-W_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
			faction[] = {QGVAR(rangers_faction)};
		};
		class Tropen
		{
			displayName = CSTRING(camo_trp);
			author = "dalleburn, jan";
			textures[] = {QPATHTOF(data\Strider_BW-D_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
			faction[] = {QGVAR(rangers_faction)};
		};

        class FleckSan
		{
			displayName = CSTRING(camo_flk_san);
			author = "dalleburn, jan";
			textures[] = {QPATHTOF(data\Strider_BW-W_san_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
			faction[] = {QGVAR(rangers_faction)};
		};
		class TropenSan
		{
			displayName = CSTRING(camo_trp_san);
			author = "dalleburn, jan";
			textures[] = {QPATHTOF(data\Strider_BW-D_san_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
			faction[] = {QGVAR(rangers_faction)};
		};
	};
    
};
class I_MRAP_03_hmg_F : MRAP_03_hmg_base_F
{
    class TextureSources
    {
        class Fleck
        {
            displayName = CSTRING(camo_flk);
            author = "dalleburn, jan";
            textures[] = {QPATHTOF(data\Strider_BW-W_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
            faction[] = {QGVAR(rangers_faction)};
        };
        class Tropen
        {
            displayName = CSTRING(camo_trp);
            author = "dalleburn, jan";
            textures[] = {QPATHTOF(data\Strider_BW-D_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
            faction[] = {QGVAR(rangers_faction)};
        };
    };
};
class I_MRAP_03_gmg_F : MRAP_03_gmg_base_F
{
    class TextureSources
    {
        class Fleck
		{
			displayName = CSTRING(camo_flk);
			author = "dalleburn, jan";
			textures[] = {QPATHTOF(data\Strider_BW-W_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
			faction[] = {QGVAR(rangers_faction)};
		};
		class Tropen
		{
			displayName = CSTRING(camo_trp);
			author = "dalleburn, jan";
			textures[] = {QPATHTOF(data\Strider_BW-D_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
			faction[] = {QGVAR(rangers_faction)};
		};
    };
};

class GVAR(B_FENNEK_GER_Wdl) : I_MRAP_03_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(fennek_flk);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

    ace_cargo_space = 11;
    
	reportRemoteTargets = 1;
    
	
	editorSubcategory = QGVAR(Pkw_A_Subcat);

    hiddenSelections[] = {"Camo1","Camo2"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Strider_BW-W_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
	textureList[] = {"Fleck",1};
    
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

class GVAR(B_FENNEK_GER_D) : GVAR(B_FENNEK_GER_Wdl) {
    displayName = CSTRING(fennek_trp);

	textureList[]={"Tropen",1};	
    hiddenSelectionsTextures[] = {QPATHTOF(data\Strider_BW-D_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
};

class GVAR(B_FENNEK_GER_SF_Wdl): GVAR(B_FENNEK_GER_Wdl) {
    displayName = CSTRING(fennek_flk_sf);
    author = "dalleburn, jan";
    crew = "CUP_B_GER_Fleck_Soldier_Scout";
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_40Rnd_46x30_MP7 {magazine="CUP_40Rnd_46x30_MP7";count=12;};
        class _xx_CUP_17Rnd_9x19_glock17 {magazine="CUP_17Rnd_9x19_glock17";count=9;};
        class _xx_HandGrenade {magazine="HandGrenade";count=6;};
        class _xx_SmokeShell {magazine="SmokeShell";count=6;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
        class _xx_B_IR_Grenade {magazine="B_IR_Grenade";count=2;};
        class _xx_ACE_HandFlare_Green {magazine="ACE_HandFlare_Green";count=2;};
        class _xx_ACE_HandFlare_Red {magazine="ACE_HandFlare_Red";count=2;};
    };
    class TransportWeapons
    {
        class _xx_CUP_smg_MP7_Holo_Laser_Snds {weapon="CUP_smg_MP7_Holo_Laser_Snds";count=2;};
        class _xx_CUP_hgun_glock17_blk_snds {weapon="CUP_hgun_glock17_blk_snds";count=2;};
        class _xx_CUP_launch_M136 {weapon="CUP_launch_M136";count=2;};
    };
    class TransportItems
    {
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=10;};
        class _xx_ACE_splint {name="ACE_splint";count=6;};
        class _xx_ACE_surgicalKit {name="ACE_surgicalKit";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_morphine {name="ACE_morphine";count=5;};
        class _xx_ACE_epinephrine {name="ACE_epinephrine";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=15;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=15;};

        class _xx_kat_TXA {name="kat_TXA";count=10;};
        class _xx_kat_EACA {name="kat_EACA";count=10;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=5;};
        class _xx_kat_ncdKit {name="kat_ncdKit";count=5;};
        class _xx_kat_Pulseoximeter {name="kat_Pulseoximeter";count=2;};
        class _xx_kat_Stethoscope {name="kat_Stethoscope";count=1;};
        class _xx_kat_IO_FAST {name="kat_IO_FAST";count=15;};
        class _xx_kat_IV_16 {name="kat_IV_16";count=15;};
        class _xx_kat_ketamine {name="kat_ketamine";count=10;};
        class _xx_kat_Penthrox {name="kat_Penthrox";count=3;};
        class _xx_kat_larynx {name="kat_larynx";count=15;};
        class _xx_kat_nitroglycerin {name="kat_nitroglycerin";count=5;};

        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=2;};
        class _xx_ACE_UAVBattery {name="ACE_UAVBattery";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_rope15 {name="ACE_rope12";count=1;};
        class _xx_ACE_Tripod {name="ACE_Tripod";count=1;};
        class _xx_ACE_SpottingScope {name="ACE_SpottingScope";count=1;};
        class _xx_ACE_RangeCard {name="ACE_RangeCard";count=2;};
        class _xx_ACE_key_west {name="ACE_key_west";count=1;};
        class _xx_ACE_key_lockpick {name="ACE_key_lockpick";count=1;};
        class _xx_ACE_CableTie {name="ACE_CableTie";count=12;};
        class _xx_ACE_M26_Clacker {name="ACE_M26_Clacker";count=1;};
        class _xx_ACE_DefusalKit {name="ACE_DefusalKit";count=1;};
        class _xx_ACE_microDAGR {name="ACE_microDAGR";count=1;};
        class _xx_ACE_ATragMX {name="ACE_ATragMX";count=1;};
        class _xx_ACE_Kestrel4500 {name="ACE_Kestrel4500";count=1;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=3;};

        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_B_UavTerminal {name="B_UavTerminal";count=1;};
    };
};

class GVAR(B_FENNEK_GER_SF_D): GVAR(B_FENNEK_GER_SF_Wdl) {
    displayName = CSTRING(fennek_trp_sf);
    author = "dalleburn, jan";
    textureList[] = {"Tropen",1};
    crew = "CUP_B_GER_Soldier_Scout";
    hiddenSelectionsTextures[] = {QPATHTOF(data\Strider_BW-D_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
};

//--------------------------------------------------------------------------------------
//
//			Fennek HMG
//
//--------------------------------------------------------------------------------------

class GVAR(B_FENNEK_GER_HMG_Wdl) : I_MRAP_03_hmg_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(fennek_flk_hmg);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

    ace_cargo_space = 11;

	reportRemoteTargets = 1;
    
	
	editorSubcategory = QGVAR(Pkw_A_Subcat);

	textureList[]={"Fleck",1};
    hiddenSelections[] = {"Camo1","Camo2"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Strider_BW-W_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
    
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

class GVAR(B_FENNEK_GER_HMG_D) : GVAR(B_FENNEK_GER_HMG_Wdl) {
    displayName = CSTRING(fennek_trp_hmg);

	textureList[]={"Tropen",1};	
    hiddenSelectionsTextures[] = {QPATHTOF(data\Strider_BW-D_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
};


class GVAR(B_FENNEK_GER_SF_HMG_Wdl): GVAR(B_FENNEK_GER_HMG_Wdl) {
    displayName = CSTRING(fennek_flk_hmg_sf);
    author = "dalleburn, jan";
    crew = "CUP_B_GER_Fleck_Soldier_Scout";
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_40Rnd_46x30_MP7 {magazine="CUP_40Rnd_46x30_MP7";count=12;};
        class _xx_CUP_17Rnd_9x19_glock17 {magazine="CUP_17Rnd_9x19_glock17";count=9;};
        class _xx_HandGrenade {magazine="HandGrenade";count=6;};
        class _xx_SmokeShell {magazine="SmokeShell";count=6;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
        class _xx_B_IR_Grenade {magazine="B_IR_Grenade";count=2;};
        class _xx_ACE_HandFlare_Green {magazine="ACE_HandFlare_Green";count=2;};
        class _xx_ACE_HandFlare_Red {magazine="ACE_HandFlare_Red";count=2;};
    };
    class TransportWeapons
    {
        class _xx_CUP_smg_MP7_Holo_Laser_Snds {weapon="CUP_smg_MP7_Holo_Laser_Snds";count=2;};
        class _xx_CUP_hgun_glock17_blk_snds {weapon="CUP_hgun_glock17_blk_snds";count=2;};
        class _xx_CUP_launch_M136 {weapon="CUP_launch_M136";count=2;};
    };
    class TransportItems
    {
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=10;};
        class _xx_ACE_splint {name="ACE_splint";count=6;};
        class _xx_ACE_surgicalKit {name="ACE_surgicalKit";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_morphine {name="ACE_morphine";count=5;};
        class _xx_ACE_epinephrine {name="ACE_epinephrine";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=15;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=15;};

        class _xx_kat_TXA {name="kat_TXA";count=10;};
        class _xx_kat_EACA {name="kat_EACA";count=10;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=5;};
        class _xx_kat_ncdKit {name="kat_ncdKit";count=5;};
        class _xx_kat_Pulseoximeter {name="kat_Pulseoximeter";count=2;};
        class _xx_kat_Stethoscope {name="kat_Stethoscope";count=1;};
        class _xx_kat_IO_FAST {name="kat_IO_FAST";count=15;};
        class _xx_kat_IV_16 {name="kat_IV_16";count=15;};
        class _xx_kat_ketamine {name="kat_ketamine";count=10;};
        class _xx_kat_Penthrox {name="kat_Penthrox";count=3;};
        class _xx_kat_larynx {name="kat_larynx";count=15;};
        class _xx_kat_nitroglycerin {name="kat_nitroglycerin";count=5;};

        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=2;};
        class _xx_ACE_UAVBattery {name="ACE_UAVBattery";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_rope15 {name="ACE_rope12";count=1;};
        class _xx_ACE_Tripod {name="ACE_Tripod";count=1;};
        class _xx_ACE_SpottingScope {name="ACE_SpottingScope";count=1;};
        class _xx_ACE_RangeCard {name="ACE_RangeCard";count=2;};
        class _xx_ACE_key_west {name="ACE_key_west";count=1;};
        class _xx_ACE_key_lockpick {name="ACE_key_lockpick";count=1;};
        class _xx_ACE_CableTie {name="ACE_CableTie";count=12;};
        class _xx_ACE_M26_Clacker {name="ACE_M26_Clacker";count=1;};
        class _xx_ACE_DefusalKit {name="ACE_DefusalKit";count=1;};
        class _xx_ACE_microDAGR {name="ACE_microDAGR";count=1;};
        class _xx_ACE_ATragMX {name="ACE_ATragMX";count=1;};
        class _xx_ACE_Kestrel4500 {name="ACE_Kestrel4500";count=1;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=3;};

        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_B_UavTerminal {name="B_UavTerminal";count=1;};
    };

};

class GVAR(B_FENNEK_GER_SF_HMG_D): GVAR(B_FENNEK_GER_SF_HMG_Wdl) {
    displayName = CSTRING(fennek_trp_hmg_sf);
    author = "dalleburn, jan";
    textureList[] = {"Tropen",1};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Strider_BW-D_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
    crew = "CUP_B_GER_Soldier_Scout";
};
//--------------------------------------------------------------------------------------
//
//			Fennek GMG
//
//--------------------------------------------------------------------------------------

class GVAR(B_FENNEK_GER_GMG_Wdl) : I_MRAP_03_gmg_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(fennek_flk_gmg);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

    ace_cargo_space = 11;

	reportRemoteTargets = 1;
    
	
	editorSubcategory = QGVAR(Pkw_A_Subcat);

	textureList[]={"Fleck",1};
    hiddenSelections[] = {"Camo1","Camo2"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Strider_BW-W_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
    
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

class GVAR(B_FENNEK_GER_GMG_D) : GVAR(B_FENNEK_GER_GMG_Wdl) {
    displayName = CSTRING(fennek_trp_gmg);

	textureList[]={"Tropen",1};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Strider_BW-D_recon_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
};

//--------------------------------------------------------------------------------------
//
//			Fennek NEF
//
//--------------------------------------------------------------------------------------

class GVAR(B_FENNEK_med_base) : GVAR(B_FENNEK_GER_Wdl)
{
    scope = 1;
    scopeCurator = 0;
    class Sounds
    {
        sounndSets[] ={};
        soundSetsInt[] = {"Mrap_03_Engine_RPM0_INT_SoundSet","Mrap_03_Engine_RPM1_INT_SoundSet","Mrap_03_Engine_RPM2_INT_SoundSet","Mrap_03_Engine_RPM3_INT_SoundSet","Mrap_03_Engine_RPM4_INT_SoundSet","Mrap_03_Rattling_INT_SoundSet","Mrap_03_Stress_INT_SoundSet","Mrap_03_Rain_INT_SoundSet","Mrap_03_Tires_Rock_Fast_INT_SoundSet","Mrap_03_Tires_Grass_Fast_INT_SoundSet","Mrap_03_Tires_Sand_Fast_INT_SoundSet","Mrap_03_Tires_Gravel_Fast_INT_SoundSet","Mrap_03_Tires_Mud_Fast_INT_SoundSet","Mrap_03_Tires_Asphalt_Fast_INT_SoundSet","Mrap_03_Tires_Water_Fast_INT_SoundSet","Mrap_03_Tires_Rock_Slow_INT_SoundSet","Mrap_03_Tires_Grass_Slow_INT_SoundSet","Mrap_03_Tires_Sand_Slow_INT_SoundSet","Mrap_03_Tires_Gravel_Slow_INT_SoundSet","Mrap_03_Tires_Mud_Slow_INT_SoundSet","Mrap_03_Tires_Asphalt_Slow_INT_SoundSet","Mrap_03_Tires_Water_Slow_INT_SoundSet","Mrap_03_Tires_Turn_Hard_INT_SoundSet","Mrap_03_Tires_Turn_Soft_INT_SoundSet","Mrap_03_Tires_Brake_Hard_INT_SoundSet","Mrap_03_Tires_Brake_Soft_INT_SoundSet","","Tires_Movement_Dirt_Int_01_SoundSet","Fennek_AmbulanceSiren_01_Int_SoundSet"};
        soundSetsExt[] = {"Mrap_03_Engine_RPM0_EXT_SoundSet","Mrap_03_Engine_RPM1_EXT_SoundSet","Mrap_03_Engine_RPM2_EXT_SoundSet","Mrap_03_Engine_RPM3_EXT_SoundSet","Mrap_03_Engine_RPM4_EXT_SoundSet","Mrap_03_Rattling_EXT_SoundSet","Mrap_03_Stress_EXT_SoundSet","Mrap_03_Rain_EXT_SoundSet","Mrap_03_Tires_Rock_Fast_EXT_SoundSet","Mrap_03_Tires_Grass_Fast_EXT_SoundSet","Mrap_03_Tires_Sand_Fast_EXT_SoundSet","Mrap_03_Tires_Gravel_Fast_EXT_SoundSet","Mrap_03_Tires_Mud_Fast_EXT_SoundSet","Mrap_03_Tires_Asphalt_Fast_EXT_SoundSet","Mrap_03_Tires_Water_Fast_EXT_SoundSet","Mrap_03_Tires_Rock_Slow_EXT_SoundSet","Mrap_03_Tires_Grass_Slow_EXT_SoundSet","Mrap_03_Tires_Sand_Slow_EXT_SoundSet","Mrap_03_Tires_Gravel_Slow_EXT_SoundSet","Mrap_03_Tires_Mud_Slow_EXT_SoundSet","Mrap_03_Tires_Asphalt_Slow_EXT_SoundSet","Mrap_03_Tires_Water_Slow_EXT_SoundSet","Mrap_03_Tires_Turn_Hard_EXT_SoundSet","Mrap_03_Tires_Turn_Soft_EXT_SoundSet","Mrap_03_Tires_Brake_Hard_EXT_SoundSet","Mrap_03_Tires_Brake_Soft_EXT_SoundSet","","Tires_Movement_Dirt_Ext_01_SoundSet","Fennek_AmbulanceSiren_01_Ext_SoundSet"};
    };
};

class GVAR(FENNEK_NEF_W) : GVAR(B_FENNEK_med_base) {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(fennek_flk_san);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";

    ace_cargo_space = 20;
    attendant = 1;

	reportRemoteTargets = 1;

	
	editorSubcategory = QGVAR(Pkw_A_Subcat);

	textureList[]={"FleckSan",1};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Strider_BW-W_san_0.paa),"\a3\data_f\vehicles\turret_co.paa"};
    
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

class GVAR(FENNEK_NEF_D) : GVAR(FENNEK_NEF_W) {
    displayName = CSTRING(fennek_trp_san);

	textureList[]={"TropenSan",1};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Strider_BW-D_san_0.paa),"\a3\data_f\vehicles\turret_co.paa"};				
};
