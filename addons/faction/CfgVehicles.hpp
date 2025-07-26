class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateNV;
class SensorTemplateLaser;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle
    {
        class ACE_SelfActions
        {
            class startSiren
            {
                displayName = CSTRING(interaction_startSiren);
                condition = "driver vehicle player == player && {getCustomSoundController [_target,'CustomSoundController1'] < 0.5} && (vehicle player isKindof 'GerRng_faction_FENNEK_NEF_W' || vehicle player isKindof 'GerRng_faction_IVECO_Medic_W' || vehicle player isKindof 'GerRng_faction_Lkw15t_medical_W')";
                statement = "[_target,'CustomSoundController1',1,0.2] remoteExec ['BIS_fnc_setCustomSoundController', 0, ['CustomSoundController1', netID _target] joinString ':'];";
                icon = "A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa";
            };
            class stopSiren
            {
                displayName = CSTRING(interaction_stopSiren);
                condition = "driver vehicle player == player && {getCustomSoundController [_target,'CustomSoundController1'] > 0.5} && (vehicle player isKindof 'GerRng_faction_FENNEK_NEF_W' || vehicle player isKindof 'GerRng_faction_IVECO_Medic_W' || vehicle player isKindof 'GerRng_faction_Lkw15t_medical_W')";
                statement = "[_target,'CustomSoundController1',0,0.4] remoteExec ['BIS_fnc_setCustomSoundController', 0, ['CustomSoundController1', netID _target] joinString ':'];";
                icon = "A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa";
            };
        };
    };

    #include "CfgVehicles_Dingo.hpp"
    #include "CfgVehicles_Fennek.hpp"
    #include "CfgVehicles_lkw_iveco.hpp"
    #include "CfgVehicles_Multi.hpp"
    #include "CfgVehicles_Van.hpp"
    #include "CfgVehicles_Wiesel.hpp"
    
    #include "CfgVehicles_MedicalTent.hpp"

    #include "CfgVehicles_Import.hpp"
};
