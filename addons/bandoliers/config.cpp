#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class ADDON
    { 
        name = COMPONENT_NAME; 
        units[] = {}; 
        weapons[] = {
            QGVAR(grenade_3_3_flare_hand),
            QGVAR(grenade_8_8_flare_40mm),
            QGVAR(grenade_8_8_exp_40mm),
            QGVAR(grenade_3_3_exp_hand),
            QGVAR(grenade_8_8_smoke_40mm),
            QGVAR(grenade_5_5_smoke_hand),
            QGVAR(mg_4_4_m249_200Rnd),
            QGVAR(mg_4_4_mk48_100Rnd),
            QGVAR(mg_4_4_MG3_120Rnd),
            QGVAR(rifle_5_5_417_30Rnd),
            QGVAR(rifle_5_5_416_30Rnd),
            QGVAR(rifle_5_5_G36_30Rnd),
            QGVAR(pistol_6_6_G17_17Rnd),
            QGVAR(pistol_6_6_M17_21Rnd)
        }; 
        requiredVersion = REQUIRED_VERSION; 
        requiredAddons[] = {}; 
        author = "German Rangers"; 
        VERSION_CONFIG; 
    };
};

#include "CfgVehicles.hpp"

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
