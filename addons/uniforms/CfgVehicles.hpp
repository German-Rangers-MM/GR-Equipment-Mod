class CfgVehicles {
    class CUP_B_CZ_Soldier_13;
    class gerrng_B_Soldier_Wdl_1: CUP_B_CZ_Soldier_13 {
        faction = QEGVAR(faction,rangers_faction);
        hiddenSelections[] = {"camo","camo2","insignia"};
        hiddenSelectionsMaterials[] = {
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_ACR\data\ACR_Uniforma_DES.rvmat",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_ACR\data\ACR_Basicbody.rvmat"
            };
        hiddenSelectionsTextures[] = {
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\crye_fleck_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_ACR\data\ACR_basicbody_des_co.paa"
        };

    };
    class gerrng_B_Soldier_Des_1: gerrng_B_Soldier_Wdl_1 {
        hiddenSelections[] = {"camo","camo2","insignia"};
        hiddenSelectionsMaterials[] = {
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_ACR\data\ACR_Uniforma_DES.rvmat",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_ACR\data\ACR_Basicbody.rvmat"
            };
        hiddenSelectionsTextures[] = {
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\crye_trop_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_ACR\data\ACR_basicbody_des_co.paa"
        };
    };
};
