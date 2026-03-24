#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class SUBADDON
    { 
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        units[] = {
            QGVAR(Lkw5t_Covered_Armed_Wdl),
            QGVAR(Lkw5t_Covered_Armed_D)
        }; 
        weapons[] = {}; 
        requiredVersion = REQUIRED_VERSION; 
        requiredAddons[] = {}; 
        author = ECSTRING(main,Team); 
        VERSION_CONFIG;
        authors[] = {""};
    };
};


class CfgVehicles
{
    #include "CfgVehicles_Tatra.hpp"
};
