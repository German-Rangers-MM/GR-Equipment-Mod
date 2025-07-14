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
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
    class Helicopter_Base_F: Helicopter
    {
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Components;
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
    };
    class Helicopter_Base_H: Helicopter_Base_F
    {
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
    };
    class LandVehicle;
    class Car: LandVehicle
    {
        class ACE_SelfActions
        {
            class startSiren
            {
                displayName = CSTRING(interaction_startSiren);
                condition = "driver vehicle player == player && {getCustomSoundController [_target,'CustomSoundController1'] < 0.5}";
                statement = "[_target,'CustomSoundController1',1,0.2] remoteExec ['BIS_fnc_setCustomSoundController', 0, ['CustomSoundController1', netID _target] joinString ':'];";
                icon = "A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa";
            };
            class stopSiren
            {
                displayName = CSTRING(interaction_stopSiren);
                condition = "driver vehicle player == player && {getCustomSoundController [_target,'CustomSoundController1'] > 0.5}";
                statement = "[_target,'CustomSoundController1',0,0.4] remoteExec ['BIS_fnc_setCustomSoundController', 0, ['CustomSoundController1', netID _target] joinString ':'];";
                icon = "A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa";
            };
        };
    };

    #include "CfgVehicles_Griffon.hpp"
    #include "CfgVehicles_UH60.hpp"

    
    #include "CfgVehicles_Dingo.hpp"
    #include "CfgVehicles_Fennek.hpp"
    #include "CfgVehicles_lkw_iveco.hpp"
    #include "CfgVehicles_Multi.hpp"
    #include "CfgVehicles_Van.hpp"
    #include "CfgVehicles_Wiesel.hpp"
    
    #include "CfgVehicles_MedicalTent.hpp"

    #include "CfgVehicles_Import.hpp"
};
