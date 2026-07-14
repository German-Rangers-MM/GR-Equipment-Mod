#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class ADDON
    { 
        name = COMPONENT_NAME; 
        units[] = {
        }; 
        weapons[] = {
            QGVAR(halligan),
            QGVAR(crowbar),
            QGVAR(sledgehammer),
            QGVAR(pickgun),
            QGVAR(speedsquare),
            QGVAR(screwdriver),
            QGVAR(M1014_entry)
        }; 
        requiredVersion = REQUIRED_VERSION; 
        requiredAddons[] = {}; 
        author = ECSTRING(main,Team); 
        VERSION_CONFIG;
        authors[] = {"cookie"};
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgWeapons.hpp"
