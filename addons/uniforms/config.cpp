#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class ADDON
    { 
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "gerrng_uniform_fleck_tee",
            "gerrng_uniform_trop_tee",
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = ECSTRING(main,Team);
        VERSION_CONFIG;
        authors[] = {"Cookie"};
    };
};

#include "CfgVehicles.hpp"

#include "CfgWeapons.hpp"
