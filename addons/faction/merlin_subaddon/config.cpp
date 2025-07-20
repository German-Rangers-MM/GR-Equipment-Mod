#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class SUBADDON
    { 
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        units[] = {
            QGVAR(AW101_Merlin_TTH_01),
            QGVAR(AW101_Merlin_MTH_01)
        }; 
        weapons[] = {}; 
        requiredVersion = REQUIRED_VERSION; 
        requiredAddons[] = {}; 
        author = ECSTRING(main,Team); 
        VERSION_CONFIG;
        authors[] = {""};
    };
};

class SensorTemplateLaser;
class SensorTemplateMan;
class SensorTemplateNV;
class SensorTemplatePassiveRadar;
class SensorTemplateVisual;
class DefaultVehicleSystemsDisplayManagerRight;
class DefaultVehicleSystemsDisplayManagerLeft;


class CfgVehicles
{
    #include "CfgVehicles_Merlin.hpp"
};
