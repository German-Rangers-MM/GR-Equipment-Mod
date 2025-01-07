#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
		name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "GerRng_arifle_G36KA4",
            "GerRng_arifle_G36KA4_camo",
            "GerRng_arifle_G36KA4_VFG",
            "GerRng_arifle_G36KA4_VFG_camo",
            "GerRng_arifle_G36KA4_AFG",
            "GerRng_arifle_G36KA4_AFG_camo",
            "GerRng_GMG_Mk19"
        };
		requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cup_weapons_g36"
        };
        author = ECSTRING(common,GerRngTeam);
        authors[] = {"jan"};
        VERSION_CONFIG;

        addonRootClass = QUOTE(ADDON);
    };
};

#include "cfgWeapons.hpp"
#include "cfgAmmo.hpp"
#include "cfgMagazines.hpp"
#include "cfgMagazineWells.hpp"