#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class SUBADDON
    { 
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        units[] = {

            QGVAR(C130J),
            QGVAR(C130J_Cargo)
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
    #include "CfgVehicles_c130.hpp"
};
