#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
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
        author = ECSTRING(common,GerRngTeam);
        authors[] = {"jan","J, Smith"};

        addonRootClass = QUOTE(ADDON);
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazineWells.hpp"
