#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class SUBADDON
    { 
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        units[] =
        {
            QGVAR(M1129_MC_MK19_Wdl),
            QGVAR(M270_HE_Wdl),
            QGVAR(MBT_01_arty_F),
            QGVAR(M119),
            QGVAR(M252)
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
    #include "CfgVehicles_Arty.hpp"
};

#include "CfgMagazines.hpp"

#include "CfgWeapons.hpp"
