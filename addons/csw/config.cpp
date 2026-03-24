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
            QGVAR(GMG_GraMaWa),
            QGVAR(GMG_GraMaWa_Tripod_bag),
            QGVAR(GMG_GraMaWa_Gun_Bag)
        }; 
        weapons[] = {
            QGVAR(GraMaWa_carry),
            QGVAR(M3M_carry_Shield),
            QGVAR(M3M_carry_ScopeShield),
            QGVAR(M3M_carry_Scope),
            QGVAR(M3M_carry)
        }; 
        requiredVersion = REQUIRED_VERSION; 
        requiredAddons[] = {}; 
        author = ECSTRING(main,Team); 
        VERSION_CONFIG; 
    };
};
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ACE_CSW_Groups.hpp"
