#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class ADDON
    { 
        name = COMPONENT_NAME; 
        units[] = {
            QGVAR(item_remote_designator_w),
            QGVAR(item_remote_designator_d)
        }; 
        weapons[] = {
            QGVAR(remote_designator_w),
            QGVAR(remote_designator_d)
        }; 
        requiredVersion = REQUIRED_VERSION; 
        requiredAddons[] = {}; 
        author = ECSTRING(main,Team); 
        VERSION_CONFIG;
        authors[] = {"cookie"};
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgVehicles.hpp"

#include "CfgWeapons.hpp"
