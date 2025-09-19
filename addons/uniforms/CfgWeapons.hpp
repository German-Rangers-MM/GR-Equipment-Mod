class CfgWeapons {
    class CUP_U_B_CZ_DST_TShirt;
    class UniformItem;
    class gerrng_uniform_fleck_tee: CUP_U_B_CZ_DST_TShirt {
        scope=2;
        displayName="GER Crye Combat (Flecktarn/Shirt)";
        picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\icon_CUP_CRYE_V1_Full.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel="-";
            uniformClass="gerrng_B_Soldier_Wdl_1";
            containerClass="Supply40";
            mass=20;
        };
    };
    class gerrng_uniform_trop_tee: CUP_U_B_CZ_DST_TShirt {
        scope=2;
        displayName="GER Crye Combat (Tropentarn/Shirt)";
        picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ui\icon_CUP_CRYE_V1_Full.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel="-";
            uniformClass="gerrng_B_Soldier_Des_1";
            containerClass="Supply40";
            mass=20;
        };
    };
};
