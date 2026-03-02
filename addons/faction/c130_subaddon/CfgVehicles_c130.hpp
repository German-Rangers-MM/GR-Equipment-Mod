class CUP_B_C130J_USMC;
class GVAR(C130J): CUP_B_C130J_USMC
{
	side = 1;
	faction = QGVAR(rangers_faction);
    displayName = "C-130J Hercules";
	
	crew = "CUP_B_GER_Fleck_HPilot";

    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {QPATHTOF(c130_subaddon\data\c130j_0_GAF_body_co.paa),QPATHTOF(c130_subaddon\data\c130j_1_GAF_wings_co.paa)};

    class TextureSources
    {
        class GAF
        {
            displayName = "GAF";
            author = "Dalleburn";
            textures[] = {QPATHTOF(c130_subaddon\data\c130j_0_GAF_body_co.paa),QPATHTOF(c130_subaddon\data\c130j_1_GAF_wings_co.paa)};
            factions[] = {QGVAR(rangers_faction)};
        };
    };
};

class CUP_B_C130J_Cargo_USMC;
class GVAR(C130J_Cargo): CUP_B_C130J_Cargo_USMC
{
	side = 1;
	faction = QGVAR(rangers_faction);
    displayName = "C-130J Hercules (ViV)";
	
	crew = "CUP_B_GER_Fleck_HPilot";

    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {QPATHTOF(c130_subaddon\data\c130j_0_GAF_body_co.paa),QPATHTOF(c130_subaddon\data\c130j_1_GAF_wings_co.paa)};

    class TextureSources
    {
        class GAF
        {
            displayName = "GAF";
            author = "Dalleburn";
            textures[] = {QPATHTOF(c130_subaddon\data\c130j_0_GAF_body_co.paa),QPATHTOF(c130_subaddon\data\c130j_1_GAF_wings_co.paa)};
            factions[] = {QGVAR(rangers_faction)};
        };
    };
};
