#include "script_component.hpp"

class CfgPatches {
    class ADDON {
		name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QGVAR(G36KA4),
            QGVAR(G36KA4_camo),
            QGVAR(G36KA4_VFG),
            QGVAR(G36KA4_VFG_camo),
            QGVAR(G36KA4_AFG),
            QGVAR(G36KA4_AFG_camo)
        };
		requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cup_weapons_g36"
        };
        author = ECSTRING(main,Team);
        authors[] = {"jan","J, Smith", "Cookie"};

        addonRootClass = QUOTE(ADDON);
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazineWells.hpp"
