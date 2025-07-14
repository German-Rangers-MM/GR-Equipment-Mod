#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class SUBADDON
    { 
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        units[] =
        {
            QGVAR(Amarok_GER_Grn),
            QGVAR(Amarok_GER_FLK),
            QGVAR(Amarok_GER_TRP),
            QGVAR(Amarok_covered_GER_Grn),
            QGVAR(Amarok_covered_GER_FLK),
            QGVAR(Amarok_covered_GER_TRP),
            QGVAR(Amarok_covered_comms_GER_Grn),
            QGVAR(Amarok_covered_comms_GER_FLK),
            QGVAR(Amarok_covered_comms_GER_TRP),
            QGVAR(Amarok_covered_san_GER_Grn),
            QGVAR(Amarok_covered_san_GER_FLK),
            QGVAR(Amarok_covered_san_GER_TRP),
            QGVAR(Amarok_engineering_covered_GER_Grn),
            QGVAR(Amarok_engineering_covered_GER_FLK),
            QGVAR(Amarok_engineering_covered_GER_TRP),
            QGVAR(Amarok_engineering_GER_Grn),
            QGVAR(Amarok_engineering_GER_FLK),
            QGVAR(Amarok_engineering_GER_TRP)
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
    #include "CfgVehicles_Amarok.hpp"
};
