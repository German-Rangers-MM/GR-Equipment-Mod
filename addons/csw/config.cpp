#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class ADDON
    { 
        name = COMPONENT_NAME; 
        units[] = {
            QGVAR(HMG_M3M_high),
            QGVAR(HMG_M3M),
            QGVAR(HMG_M3M_high_ScopeShield),
            QGVAR(HMG_M3M_ScopeShield),
            QGVAR(HMG_M3M_high_Scope),
            QGVAR(HMG_M3M_Scope),
            QGVAR(HMG_M3M_high_Shield),
            QGVAR(HMG_M3M_Shield),
            QGVAR(m3mTripod),
            QGVAR(m3mTripodLow)
        }; 
        weapons[] = {}; 
        requiredVersion = REQUIRED_VERSION; 
        requiredAddons[] = {}; 
        author = ECSTRING(main,Team); 
        VERSION_CONFIG; 
    };
};
#include "CfgVehicles.hpp"

#include "CfgWeapons.hpp"

#include "CfgMagazines.hpp"

#include "CfgAmmo.hpp"

#include "ACE_CSW_Groups.hpp"
