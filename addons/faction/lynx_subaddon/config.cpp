#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class SUBADDON
    { 
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        units[] = {
            QGVAR(WG_13_Sea_Lynx),
            QGVAR(WG_13_Sea_Lynx_Armed)
        }; 
        weapons[] = {}; 
        requiredVersion = REQUIRED_VERSION; 
        requiredAddons[] = {}; 
        author = ECSTRING(main,Team); 
        VERSION_CONFIG;
        authors[] = {""};
    };
};

class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplatePassiveRadar;
class SensorTemplateVisual;
class DefaultVehicleSystemsDisplayManagerRight;
class DefaultVehicleSystemsDisplayManagerLeft;
class SensorTemplateAntiRadiation;

class CfgVehicles
{
    #include "CfgVehicles_Lynx.hpp"
};
