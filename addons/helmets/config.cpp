#include "script_component.hpp"

class CfgPatches
{
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
		requiredAddons[]={"CUP_Creatures_People_LoadOrder"};
        author = ECSTRING(main,Team);
        VERSION_CONFIG;
        authors[] = {"Dalleburn", "Jan", "Cookie"};
    };
};

#include "CfgVehicles.hpp"
#include "Cfginsignias.hpp"
#include "CfgWeapons.hpp"

#include "CfgEventHandlers.hpp"