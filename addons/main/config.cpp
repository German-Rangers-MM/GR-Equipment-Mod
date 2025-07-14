#include "script_component.hpp"

class CfgPatches
{
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = ECSTRING(main,Team);
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@gerrng";
        name = "German Rangers Equipment";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        description = "";
    };
};

#include "CfgEventHandlers.hpp"
