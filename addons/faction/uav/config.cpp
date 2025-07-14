#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class SUBADDON
    { 
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        units[] =
        {

            QGVAR(UAV_01_F),
            QGVAR(UGV_02_Demining_F),
            QGVAR(UGV_02_Science_F),
            QGVAR(UAV_02_dynamicLoadout_F),

            QGVAR(UAV_06_F),
            QGVAR(UAV_06_antimine_F),
            QGVAR(UAV_06_medical_F)
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
    #include "CfgVehicles_UAV.hpp"
    #include "CfgVehicles_UAV_Backpack.hpp"
};
