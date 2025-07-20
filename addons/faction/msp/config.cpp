#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class SUBADDON
    { 
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        units[] = {
            QGVAR(MSP_Cargo_F),
            QGVAR(Box_ammo_L_F),
            QGVAR(Box_ammo_M_F),
            QGVAR(Box_ammo_S_F)
            }; 
        weapons[] = {}; 
        requiredVersion = REQUIRED_VERSION; 
        requiredAddons[] = {}; 
        author = ECSTRING(main,Team); 
        VERSION_CONFIG;
        authors[] = {"Cookie"};
    };
};


class CfgVehicles
{
    #include "CfgVehicles_MSP.hpp"
};
