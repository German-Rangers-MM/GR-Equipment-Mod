#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class SUBADDON
    { 
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        units[] = {
            QGVAR(MH60S_MEV),
            QGVAR(MH_60S_2_pylon),
            QGVAR(MH_60S_4_pylon)
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
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class DefaultVehicleSystemsDisplayManagerRight;
class DefaultVehicleSystemsDisplayManagerLeft;
class SensorTemplateAntiRadiation;


class CfgVehicles
{
    #include "CfgVehicles_UH60.hpp"
};
