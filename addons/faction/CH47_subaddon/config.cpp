#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class SUBADDON
    { 
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        units[] =
        {
            QGVAR(CH_47F_TTH_01),
            QGVAR(CH_47F_TTH_VIV_01)
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
    #include "CfgVehicles_CH47.hpp"
};
