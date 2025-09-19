class CfgVehicles {
    class B_Kitbag_Base;
    class B_Kitbag_rgr_Medic : B_Kitbag_Base
    {
        scope = 2;
        scopeCurator = 0;
        author = "Apache";
        displayName = "Kitbag Medic (Green)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\GerRng_backpack_fast_rgr_med_co.paa)};
        picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
    };
    class B_Kitbag_cbr_Medic : B_Kitbag_Base
    {
        scope = 2;
        scopeCurator = 0;
        author = "Apache";
        displayName = "Kitbag Medic (Coyote)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\GerRng_backpack_fast_cbr_med_co.paa)};
        picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_Kitbag_cbr_ca.paa";
    };
    class B_Kitbag_tan_Medic : B_Kitbag_Base
    {
        scope = 2;
        scopeCurator = 0;
        author = "Apache";
        displayName = "Kitbag Medic (Tan)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\GerRng_backpack_fast_tan_med_co.paa)};
        picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Kitbag_tan_ca.paa";
    };
};
