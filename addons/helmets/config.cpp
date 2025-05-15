#include "script_component.hpp"

class CfgPatches
{
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
		requiredAddons[]={"CUP_Creatures_People_LoadOrder"};
        author = "German Rangers";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "Cfginsignias.hpp"
#include "CfgWeapons.hpp"

#include "CfgEventHandlers.hpp"