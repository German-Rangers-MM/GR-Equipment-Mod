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
            QGVAR(G36KA4_AFG_camo),
            QGVAR(PzF3)
        };
		requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cup_weapons_g36",
            "cup_weapons_panzerfaust",
            "A3_Weapons_F",
            "cba_main",
            "A3_Data_F"
        };
        author = ECSTRING(main,Team);
        authors[] = {"jan","J, Smith", "Cookie"};

    };
};

class CowsSlot;
class Mode_SemiAuto;

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
