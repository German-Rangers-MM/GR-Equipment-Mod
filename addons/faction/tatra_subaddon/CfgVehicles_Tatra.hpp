class CUP_B_T810_Armed_CZ_WDL;

class GVAR(Lkw5t_Covered_Armed_Wdl): CUP_B_T810_Armed_CZ_WDL
{
    side = 1;
    faction = QGVAR(rangers_faction);
    displayName = CSTRING(lkw_7t_gtf_w);
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    editorSubcategory = QGVAR(Lkw_Subcat);
    hiddenSelections[] = {"camo1","camo2","camo3"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(tatra_subaddon\data\MG\Flecktarn\cabin2_bw_CO.paa),
        QPATHTOF(tatra_subaddon\data\MG\Flecktarn\bed_bw_co.paa),
        QPATHTOF(tatra_subaddon\data\MG\Flecktarn\undercarriage_bw_CO.paa)
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

class GVAR(Lkw5t_Covered_Armed_D): GVAR(Lkw5t_Covered_Armed_Wdl)
{
    displayName = CSTRING(lkw_7t_gtf_d);
    hiddenSelections[] = {"camo1","camo2","camo3"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(tatra_subaddon\data\MG\Tropentarn\cabin2_bw_des_CO.paa),
        QPATHTOF(tatra_subaddon\data\MG\Tropentarn\bed_bw_desert_co.paa),
        QPATHTOF(tatra_subaddon\data\MG\Tropentarn\undercarriage_bw_des_CO.paa)
    };
};
