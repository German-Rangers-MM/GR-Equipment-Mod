#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main"
        };
        author = "German Rangers";
        url = "";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@GR-EQUIPMENT-Mod";
        name = "German Rangers Equipment";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        description = "";
    };
};