#include "script_component.hpp"
#include "CfgMagazineGroups.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

class CfgPatches {
    class SUBADDON {
		name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = ECSTRING(common,GerRngTeam);
        authors[] = {"J, Smith"};
        addonRootClass = QUOTE(ADDON);
    };
};
