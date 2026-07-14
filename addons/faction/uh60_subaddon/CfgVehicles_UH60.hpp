/*
class CUP_Uh60S_Base;
class CUP_UH60S_Dap_2x_Dynamic_Base : CUP_Uh60S_Base
{
    class components{
        class TransportPylonsComponent{
            class pylons
            {
                class pylons1;
                class pylons2;
                class pylons3;
                class pylons4;
            };
        };
    };
};

*/
class CUP_UH60S_Dap_2x_Dynamic_Base
{
    class components{
        class TransportPylonsComponent
        {
            class pylons
            {
                class pylons1;
                class pylons2;
                class pylons3;
                class pylons4;
            };
        };
    };
    class Turrets
    {
        class CopilotTurret;
        class MainTurret;
        class RightDoorGun;
    };
};
class CUP_B_MH60L_DAP_2x_USN: CUP_UH60S_Dap_2x_Dynamic_Base
{
    class components : components
    {
        class TransportPylonsComponent : TransportPylonsComponent
        {
            UIPicture = "\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_2_3DEN_CA.paa";
            class pylons : pylons
            {
                class pylons1: pylons1
                {
                    attachment = "";
                    bay = -1;
                    hardpoints[] = {};
                    priority = 5;
                    turret[] = {};
                    UIposition[] = {2,0.35};
                };
                class pylons2: pylons2
                {
                    attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                    bay = -1;
                    hardpoints[] = {"DAR","DAGR","B_SHRIEKER","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
                    priority = 4;
                    turret[] = {};
                    UIposition[] = {0.08,0.4};
                };
                class pylons3: pylons3
                {
                    attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                    bay = -1;
                    hardpoints[] = {"DAR","DAGR","B_SHRIEKER","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
                    mirroredMissilePos = 2;
                    priority = 4;
                    turret[] = {};
                    UIposition[] = {0.57,0.4};
                };
                class pylons4: pylons4
                {
                    attachment = "";
                    bay = -1;
                    hardpoints[] = {};
                    priority = 5;
                    turret[] = {};
                    UIposition[] = {2,0.35};
                };
            };
        };
    };
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret{};
        class MainTurret: MainTurret{};
        class RightDoorGun: RightDoorGun{};
    };
};

class GVAR(MH60S_MEV) : CUP_B_MH60L_DAP_2x_USN
{
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "UH-60S MEV";
    faction = QGVAR(rangers_faction);
    editorPreview = QPATHTOF(data\preview\MH60S_MEV.jpg);
    
	editorSubcategory = QGVAR(Heli_M_Subcat);
    crew = "CUP_B_GER_Fleck_HPilot";
    typicalCargo[] = {"CUP_B_GER_Fleck_HPilot","CUP_B_GER_Fleck_HPilot"};
	receiveRemoteTargets = 1;
	reportRemoteTargets = 1;

    incomingMissileDetectionSystem = 16;
    lockDetectionSystem = "4+8";

	ace_fastroping_enabled = 1;

    attendant = 1;
    
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
            ace_fcs_DistanceInterval = 5;
            ace_fcs_Enabled = 0;
            ace_fcs_MaxDistance = 5500;
            ace_fcs_MinDistance = 200;
            aggregateReflectors[] = {};
            allowLauncherIn = 0;
            allowLauncherOut = 0;
            allowTabLock = 1;
            animationSourceBody = "flirTurret";
            animationSourceCamElev = "camElev";
            animationSourceGun = "flirGun";
            animationSourceHatch = "hatchGunner";
            armorLights = 0.4;
            body = "flirTurret";
            CanEject = 0;
            canHideGunner = -1;
            canUseScanners = 1;
            castGunnerShadow = 1;
            commanding = -3;
            disableSoundAttenuation = 0;
            dontCreateAI = 0;
            ejectDeadGunner = 0;
            enableManualFire = 0;
            forceHideGunner = 0;
            forceNVG = 0;
            gun = "flirGun";
            gunBeg = "laser_end";
            gunEnd = "gunnerview_flir";
            gunnerAction = "CUP_UH60M_Pilot_EP1";
            gunnerCompartments = "Compartment3";
            GunnerDoor = "";
            gunnerFireAlsoInInternalCamera = 1;
            gunnerForceOptics = 0;
            gunnerGetInAction = "GetInHeli_Transport_01Cargo";
            gunnerGetOutAction = "GetOutLow";
            gunnerInAction = "CUP_UH60M_Pilot_EP1";
            gunnerLeftHandAnimName = "";
            gunnerLeftLegAnimName = "copilot_pedalL";
            gunnerName = "Copilot";
            gunnerNotSpawned = 1;
            gunnerOpticsColor[] = {0,0,0,1};
            gunnerOpticsEffect[] = {};
            gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
            gunnerOpticsShowCursor = 0;
            gunnerOutFireAlsoInInternalCamera = 1;
            gunnerOutForceOptics = 0;
            gunnerOutOpticsColor[] = {0,0,0,1};
            gunnerOutOpticsEffect[] = {};
            gunnerOutOpticsModel = "";
            gunnerOutOpticsShowCursor = 0;
            gunnerRightHandAnimName = "stick_copilot";
            gunnerRightLegAnimName = "copilot_pedalR";
            gunnerType = "";
            gunnerUsesPilotView = 0;
            hasGunner = 1;
            hideWeaponsGunner = 1;
            inGunnerMayFire = 1;
            initCamElev = 0;
            initElev = 0;
            initOutElev = 0;
            initOutTurn = 0;
            initTurn = 0;
            isCopilot = 1;
            lockWhenDriverOut = 0;
            lockWhenVehicleSpeed = -1;
            LODTurnedIn = 1200;
            LODTurnedOut = 1200;
            magazines[] = {"Laserbatteries","CUP_fake_weapon_mag"};
            maxCamElev = 90;
            maxElev = 10;
            maxHorizontalRotSpeed = 3;
            maxOutElev = 20;
            maxOutTurn = 60;
            maxTurn = 180;
            maxVerticalRotSpeed = 3;
            memoryPointGun = "laser_start";
            memoryPointGunnerOptics = "gunnerview_flir";
            memoryPointGunnerOutOptics = "";
            memoryPointsGetInGunner = "pos codriver";
            memoryPointsGetInGunnerDir = "pos codriver dir";
            memoryPointsGetInGunnerPrecise = "";
            minCamElev = -90;
            minElev = -85;
            minOutElev = -4;
            minOutTurn = -60;
            minTurn = -180;
            missileBeg = "spice rakety";
            missileEnd = "konec rakety";
            outGunnerMayFire = 1;
            playerPosition = 0;
            preciseGetInOut = 0;
            primary = 1;
            primaryGunner = 1;
            primaryObserver = 0;
            proxyIndex = 3;
            proxyType = "CPGunner";
            selectionFireAnim = "zasleh";
            showAllTargets = 0;
            showCrewAim = 0;
            showHMD = 0;
            slingLoadOperator = 0;
            soundElevation[] = {"",0.00316228,1};
            soundServo[] = {"",0.00316228,1};
            stabilizedInAxes = 3;
            startEngine = 0;
            turretCanSee = "1 + 2 + 4 + 8 + 32";
            turretFollowFreeLook = 2;
            turretInfoType = "RscOptics_GENERAL_FLIR";
            viewGunnerInExternal = 0;
            viewGunnerShadow = 1;
            viewGunnerShadowAmb = 1;
            viewGunnerShadowDiff = 1;
            weapons[] = {"CUP_weapon_mastersafe","Laserdesignator_mounted"};
            class OpticsIn
            {
                class Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0.15,1,0.15,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
                    initAngleX = 90;
                    initAngleY = 0;
                    initFov = 0.466;
                    maxAngleX = 0;
                    maxAngleY = 0;
                    maxFov = 0.466;
                    minAngleX = 0;
                    minAngleY = 0;
                    minFov = 0.466;
                    opticsDisplayName = "W";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class WideL: Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0,0,0,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
                    initFov = 0.2;
                    maxFov = 0.2;
                    minFov = 0.2;
                    opticsDisplayName = "WL";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class WideNGS
                {
                    directionStabilized = 0;
                    gunnerOpticsColor[] = {0.15,1,0.15,1};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
                    initAngleX = 0;
                    initAngleY = 0;
                    initFov = 0.466;
                    maxAngleX = 0;
                    maxAngleY = 0;
                    maxFov = 0.466;
                    minAngleX = 0;
                    minAngleY = 0;
                    minFov = 0.466;
                    opticsDisplayName = "W";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class Medium: Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0,0,0,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
                    initFov = 0.1;
                    maxFov = 0.1;
                    minFov = 0.1;
                    opticsDisplayName = "M";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class Narrow: Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0,0,0,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_n_F.p3d";
                    initFov = 0.02;
                    maxFov = 0.02;
                    minFov = 0.02;
                    opticsDisplayName = "N";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class Narrower: Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0,0,0,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_n_F.p3d";
                    initFov = 0.01;
                    maxFov = 0.01;
                    minFov = 0.01;
                    opticsDisplayName = "N";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
            };
        };
        class MainTurret: MainTurret{};
        class RightDoorGun: RightDoorGun{};
    };

    class components : components
    {   
        class TransportPylonsComponent : TransportPylonsComponent
        {
            class presets
            {
                class Empty
                {
                    displayName = "Empty";
                    attachment[] = {"","","",""};
                };
            };
            UIPicture = "\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_2_3DEN_CA.paa";
            class pylons : pylons
            {
                class pylons1: pylons1{};
                class pylons2: pylons2
                {
                    hardpoints[] = {};
                    attachment = "";
                };
                class pylons3: pylons3
                {
                    hardpoints[] = {};
                    attachment = "";
                };
                class pylons4: pylons4{};
            };
        };
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					aimDown = 0;
					animDirection = "CopilotTurret";
					angleRangeHorizontal = 30;
					angleRangeVertical = 30;
					maxTrackableSpeed = 110;
					typeRecognitionDistance = 1500;
					class AirTarget
					{
						maxRange = 4000;
						minRange = 0;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						maxRange = 4000;
						minRange = 0;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
				};
				class VisualSensorComponent: SensorTemplateVisual
				{
					aimDown = 0;
					animDirection = "CopilotTurret";
					angleRangeHorizontal = 30;
					angleRangeVertical = 30;
					maxTrackableSpeed = 110;
					typeRecognitionDistance = 1250;
					class AirTarget
					{
						maxRange = 3000;
						minRange = 0;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						maxRange = 3000;
						minRange = 0;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
				};
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					class AirTarget
					{
						minRange = 12000;
						maxRange = 12000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 12000;
						maxRange = 12000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					maxTrackableSpeed = 300;
					angleRangeVertical = 180;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					aimDown = 10;
					allowsMarking = 1;
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
				class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
				{
					aimDown = 0;
					allowsMarking = 1;
					angleRangeHorizontal = 360;
					angleRangeVertical = 180;
					animDirection = "";
					color[] = {0.5,1,0.5,0.5};
					componentType = "PassiveRadarSensorComponent";
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					maxSpeedThreshold = 0;
					maxTrackableATL = 100;
					maxTrackableSpeed = 60;
					minSpeedThreshold = 0;
					minTrackableATL = -1e+10;
					minTrackableSpeed = -1e+10;
					typeRecognitionDistance = 12000;
					class AirTarget
					{
						maxRange = 16000;
						minRange = 16000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						maxRange = 16000;
						minRange = 16000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
				};
				class NVSensorComponent: SensorTemplateNV
				{
					aimDown = 0;
					animDirection = "CopilotTurret";
					angleRangeHorizontal = 30;
					angleRangeVertical = 30;
					maxTrackableSpeed = 110;
					typeRecognitionDistance = 1000;
					class AirTarget
					{
						maxRange = 2000;
						minRange = 50;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						maxRange = 2000;
						minRange = 50;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
				};
				class LaserSensorComponent: SensorTemplateLaser{};
			};
		};
    };
    animationList[] =
    {
        "Filters_Hide",0,
        "Hide_ESSS2x",1,
        "Hide_ESSS4x",1,
        "Hide_Nose",0,
        "Hide_Probe",0,
        "Navyclan_hide",1,
        "Navyclan2_hide",1

    };
    textureList[] = {"Medical",1};
};

class GVAR(MH_60S_2_pylon) : GVAR(MH60S_MEV)
{
    displayName = "MH-60S DAP (2 Stores)";
    scope = 2;
    scopeCurator = 2;

    incomingMissileDetectionSystem = 16;
    lockDetectionSystem = "4+8";

	ace_fastroping_enabled = 1;
    
    attendant = 0;
    weapons[] = {"CMFlareLauncher","CUP_weapon_mastersafe"};
    magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","CUP_fake_weapon_mag"};
    class components : components
    {
    
        class TransportPylonsComponent : TransportPylonsComponent
        {
            UIPicture = "\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_2_3DEN_CA.paa";
            class presets
            {
                class AntiTank
                {
                    attachment[] = {"","CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M","CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",""};
                    displayName = "AT";
                };
                class Empty
                {
                    attachment[] = {"","","",""};
                    displayName = "Empty";
                };
                class Escort
                {
                    attachment[] = {"","CUP_PylonPod_19Rnd_Rocket_FFAR_M","CUP_PylonPod_19Rnd_Rocket_FFAR_M",""};
                    displayName = "Escort";
                };
                class MultiRole
                {
                    attachment[] = {"","CUP_PylonPod_19Rnd_Rocket_FFAR_M","CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",""};
                    displayName = "Multirole";
                };
            };
            class pylons : pylons
            {
                class pylons1: pylons1
                {
                    attachment = "";
                    bay = -1;
                    hardpoints[] = {};
                    priority = 5;
                    turret[] = {};
                    UIposition[] = {2,0.35};
                };
                class pylons2: pylons2
                {
                    attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                    bay = -1;
                    hardpoints[] = {"B_BIM9X_RAIL","B_BIM9X_DUAL_RAIL","B_AMRAAM_D_RAIL","B_AMRAAM_D_DUAL_RAIL","B_AGM65_RAIL","B_FUELTANK_HELI","UNI_SCALPEL","DAR","DAGR","B_SHRIEKER","B_ZEPHYR","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
                    priority = 4;
                    turret[] = {};
                    UIposition[] = {0.08,0.4};
                };
                class pylons3: pylons3
                {
                    attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                    bay = -1;
                    hardpoints[] = {"B_BIM9X_RAIL","B_BIM9X_DUAL_RAIL","B_AMRAAM_D_RAIL","B_AMRAAM_D_DUAL_RAIL","B_AGM65_RAIL","B_FUELTANK_HELI","UNI_SCALPEL","DAR","DAGR","B_SHRIEKER","B_ZEPHYR","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
                    mirroredMissilePos = 2;
                    priority = 4;
                    turret[] = {};
                    UIposition[] = {0.57,0.4};
                };
                class pylons4: pylons4
                {
                    attachment = "";
                    bay = -1;
                    hardpoints[] = {};
                    priority = 5;
                    turret[] = {};
                    UIposition[] = {2,0.35};
                };
            };
        };
    };
    animationList[] =
    {
        "Filters_Hide",0,
        "Hide_ESSS2x",0,
        "Hide_ESSS4x",1,
        "Hide_Nose",0,
        "Hide_Probe",0,
        "Navyclan_hide",1,
        "Navyclan2_hide",1

    };
    textureList[] = {"Black",1};
    
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
            ace_fcs_DistanceInterval = 5;
            ace_fcs_Enabled = 0;
            ace_fcs_MaxDistance = 5500;
            ace_fcs_MinDistance = 200;
            aggregateReflectors[] = {};
            allowLauncherIn = 0;
            allowLauncherOut = 0;
            allowTabLock = 1;
            animationSourceBody = "flirTurret";
            animationSourceCamElev = "camElev";
            animationSourceGun = "flirGun";
            animationSourceHatch = "hatchGunner";
            armorLights = 0.4;
            body = "flirTurret";
            CanEject = 0;
            canHideGunner = -1;
            canUseScanners = 1;
            castGunnerShadow = 1;
            commanding = -3;
            disableSoundAttenuation = 0;
            dontCreateAI = 0;
            ejectDeadGunner = 0;
            enableManualFire = 0;
            forceHideGunner = 0;
            forceNVG = 0;
            gun = "flirGun";
            gunBeg = "laser_end";
            gunEnd = "gunnerview_flir";
            gunnerAction = "CUP_UH60M_Pilot_EP1";
            gunnerCompartments = "Compartment3";
            GunnerDoor = "";
            gunnerFireAlsoInInternalCamera = 1;
            gunnerForceOptics = 0;
            gunnerGetInAction = "GetInHeli_Transport_01Cargo";
            gunnerGetOutAction = "GetOutLow";
            gunnerInAction = "CUP_UH60M_Pilot_EP1";
            gunnerLeftHandAnimName = "";
            gunnerLeftLegAnimName = "copilot_pedalL";
            gunnerName = "Copilot";
            gunnerNotSpawned = 1;
            gunnerOpticsColor[] = {0,0,0,1};
            gunnerOpticsEffect[] = {};
            gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
            gunnerOpticsShowCursor = 0;
            gunnerOutFireAlsoInInternalCamera = 1;
            gunnerOutForceOptics = 0;
            gunnerOutOpticsColor[] = {0,0,0,1};
            gunnerOutOpticsEffect[] = {};
            gunnerOutOpticsModel = "";
            gunnerOutOpticsShowCursor = 0;
            gunnerRightHandAnimName = "stick_copilot";
            gunnerRightLegAnimName = "copilot_pedalR";
            gunnerType = "";
            gunnerUsesPilotView = 0;
            hasGunner = 1;
            hideWeaponsGunner = 1;
            inGunnerMayFire = 1;
            initCamElev = 0;
            initElev = 0;
            initOutElev = 0;
            initOutTurn = 0;
            initTurn = 0;
            isCopilot = 1;
            lockWhenDriverOut = 0;
            lockWhenVehicleSpeed = -1;
            LODTurnedIn = 1200;
            LODTurnedOut = 1200;
            magazines[] = {"Laserbatteries","CUP_fake_weapon_mag"};
            maxCamElev = 90;
            maxElev = 10;
            maxHorizontalRotSpeed = 3;
            maxOutElev = 20;
            maxOutTurn = 60;
            maxTurn = 180;
            maxVerticalRotSpeed = 3;
            memoryPointGun = "laser_start";
            memoryPointGunnerOptics = "gunnerview_flir";
            memoryPointGunnerOutOptics = "";
            memoryPointsGetInGunner = "pos codriver";
            memoryPointsGetInGunnerDir = "pos codriver dir";
            memoryPointsGetInGunnerPrecise = "";
            minCamElev = -90;
            minElev = -85;
            minOutElev = -4;
            minOutTurn = -60;
            minTurn = -180;
            missileBeg = "spice rakety";
            missileEnd = "konec rakety";
            outGunnerMayFire = 1;
            playerPosition = 0;
            preciseGetInOut = 0;
            primary = 1;
            primaryGunner = 1;
            primaryObserver = 0;
            proxyIndex = 3;
            proxyType = "CPGunner";
            selectionFireAnim = "zasleh";
            showAllTargets = 0;
            showCrewAim = 0;
            showHMD = 0;
            slingLoadOperator = 0;
            soundElevation[] = {"",0.00316228,1};
            soundServo[] = {"",0.00316228,1};
            stabilizedInAxes = 3;
            startEngine = 0;
            turretCanSee = "1 + 2 + 4 + 8 + 32";
            turretFollowFreeLook = 2;
            turretInfoType = "RscOptics_GENERAL_FLIR";
            viewGunnerInExternal = 0;
            viewGunnerShadow = 1;
            viewGunnerShadowAmb = 1;
            viewGunnerShadowDiff = 1;
            weapons[] = {"CUP_weapon_mastersafe","Laserdesignator_mounted"};
            class OpticsIn
            {
                class Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0.15,1,0.15,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
                    initAngleX = 0;
                    initAngleY = 0;
                    initFov = 0.466;
                    maxAngleX = 0;
                    maxAngleY = 0;
                    maxFov = 0.466;
                    minAngleX = 0;
                    minAngleY = 0;
                    minFov = 0.466;
                    opticsDisplayName = "W";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class WideL: Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0,0,0,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
                    initFov = 0.2;
                    maxFov = 0.2;
                    minFov = 0.2;
                    opticsDisplayName = "WL";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class WideNGS
                {
                    directionStabilized = 0;
                    gunnerOpticsColor[] = {0.15,1,0.15,1};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
                    initAngleX = 0;
                    initAngleY = 0;
                    initFov = 0.466;
                    maxAngleX = 0;
                    maxAngleY = 0;
                    maxFov = 0.466;
                    minAngleX = 0;
                    minAngleY = 0;
                    minFov = 0.466;
                    opticsDisplayName = "W";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class Medium: Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0,0,0,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
                    initFov = 0.1;
                    maxFov = 0.1;
                    minFov = 0.1;
                    opticsDisplayName = "M";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class Narrow: Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0,0,0,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_n_F.p3d";
                    initFov = 0.01;
                    maxFov = 0.01;
                    minFov = 0.01;
                    opticsDisplayName = "N";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class Narrower: Wide
                {
                    gunnerOpticsColor[] = {0,0,0,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_n_F.p3d";
                    initFov = 0.02;
                    maxFov = 0.02;
                    minFov = 0.02;
                    opticsDisplayName = "N";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
            };
        };
        class MainTurret: MainTurret{};
        class RightDoorGun: RightDoorGun{};
    };
};

class GVAR(MH_60S_4_pylon) : GVAR(MH_60S_2_pylon)
{
    displayName = "MH-60S DAP (4 Stores)";
    scope = 2;
    scopeCurator = 2;
    class components : components
    {
        class TransportPylonsComponent : TransportPylonsComponent
        {
            class presets
            {
                class AntiTank
                {
                    attachment[] = {"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M","CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M","CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M","CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M"};
                    displayName = "AT";
                };
                class Empty
                {
                    attachment[] = {"","","",""};
                    displayName = "Empty";
                };
                class Escort
                {
                    attachment[] = {"CUP_PylonPod_19Rnd_Rocket_FFAR_M","CUP_PylonPod_19Rnd_Rocket_FFAR_M","CUP_PylonPod_19Rnd_Rocket_FFAR_M","CUP_PylonPod_19Rnd_Rocket_FFAR_M"};
                    displayName = "Escort";
                };
                class MultiRole
                {
                    attachment[] = {"CUP_PylonPod_19Rnd_Rocket_FFAR_M","CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M","CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M","CUP_PylonPod_19Rnd_Rocket_FFAR_M"};
                    displayName = "Multirole";
                };
            };
            UIPicture = "\CUP\AirVehicles\CUP_AirVehicles_UH60\data\ui\CUP_UH60M_4_3DEN_CA.paa";
            class pylons : pylons
            {
                class pylons1: pylons1
                {
                    attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                    bay = -1;
                    hardpoints[] = {"B_BIM9X_RAIL","B_BIM9X_DUAL_RAIL","B_AMRAAM_D_RAIL","B_AMRAAM_D_DUAL_RAIL","B_AGM65_RAIL","B_FUELTANK_HELI","UNI_SCALPEL","DAR","DAGR","B_SHRIEKER","B_ZEPHYR","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
                    priority = 5;
                    turret[] = {};
                    UIposition[] = {0.06,0.35};
                };
                class pylons2: pylons2
                {
                    attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                    bay = -1;
                    hardpoints[] = {"B_BIM9X_RAIL","B_BIM9X_DUAL_RAIL","B_AMRAAM_D_RAIL","B_AMRAAM_D_DUAL_RAIL","B_AGM65_RAIL","B_FUELTANK_HELI","UNI_SCALPEL","DAR","DAGR","B_SHRIEKER","B_ZEPHYR","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
                    priority = 4;
                    turret[] = {};
                    UIposition[] = {0.08,0.4};
                };
                class pylons3: pylons3
                {
                    attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                    bay = -1;
                    hardpoints[] = {"B_BIM9X_RAIL","B_BIM9X_DUAL_RAIL","B_AMRAAM_D_RAIL","B_AMRAAM_D_DUAL_RAIL","B_AGM65_RAIL","B_FUELTANK_HELI","UNI_SCALPEL","DAR","DAGR","B_SHRIEKER","B_ZEPHYR","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
                    mirroredMissilePos = 2;
                    priority = 4;
                    turret[] = {};
                    UIposition[] = {0.57,0.4};
                };
                class pylons4: pylons4
                {
                    attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                    bay = -1;
                    hardpoints[] = {"B_BIM9X_RAIL","B_BIM9X_DUAL_RAIL","B_AMRAAM_D_RAIL","B_AMRAAM_D_DUAL_RAIL","B_AGM65_RAIL","B_FUELTANK_HELI","UNI_SCALPEL","DAR","DAGR","B_SHRIEKER","B_ZEPHYR","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
                    priority = 4;
                    turret[] = {};
                    UIposition[] = {0.59,0.35};
                };
            };
        };
    };
    animationList[] =
    {
        "Filters_Hide",0,
        "Hide_ESSS2x",1,
        "Hide_ESSS4x",0,
        "Hide_Nose",0,
        "Hide_Probe",0,
        "Navyclan_hide",1,
        "Navyclan2_hide",1
    };
    
    
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
            ace_fcs_DistanceInterval = 5;
            ace_fcs_Enabled = 0;
            ace_fcs_MaxDistance = 5500;
            ace_fcs_MinDistance = 200;
            aggregateReflectors[] = {};
            allowLauncherIn = 0;
            allowLauncherOut = 0;
            allowTabLock = 1;
            animationSourceBody = "flirTurret";
            animationSourceCamElev = "camElev";
            animationSourceGun = "flirGun";
            animationSourceHatch = "hatchGunner";
            armorLights = 0.4;
            body = "flirTurret";
            CanEject = 0;
            canHideGunner = -1;
            canUseScanners = 1;
            castGunnerShadow = 1;
            commanding = -3;
            disableSoundAttenuation = 0;
            dontCreateAI = 0;
            ejectDeadGunner = 0;
            enableManualFire = 0;
            forceHideGunner = 0;
            forceNVG = 0;
            gun = "flirGun";
            gunBeg = "laser_end";
            gunEnd = "gunnerview_flir";
            gunnerAction = "CUP_UH60M_Pilot_EP1";
            gunnerCompartments = "Compartment3";
            GunnerDoor = "";
            gunnerFireAlsoInInternalCamera = 1;
            gunnerForceOptics = 0;
            gunnerGetInAction = "GetInHeli_Transport_01Cargo";
            gunnerGetOutAction = "GetOutLow";
            gunnerInAction = "CUP_UH60M_Pilot_EP1";
            gunnerLeftHandAnimName = "";
            gunnerLeftLegAnimName = "copilot_pedalL";
            gunnerName = "Copilot";
            gunnerNotSpawned = 1;
            gunnerOpticsColor[] = {0,0,0,1};
            gunnerOpticsEffect[] = {};
            gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
            gunnerOpticsShowCursor = 0;
            gunnerOutFireAlsoInInternalCamera = 1;
            gunnerOutForceOptics = 0;
            gunnerOutOpticsColor[] = {0,0,0,1};
            gunnerOutOpticsEffect[] = {};
            gunnerOutOpticsModel = "";
            gunnerOutOpticsShowCursor = 0;
            gunnerRightHandAnimName = "stick_copilot";
            gunnerRightLegAnimName = "copilot_pedalR";
            gunnerType = "";
            gunnerUsesPilotView = 0;
            hasGunner = 1;
            hideWeaponsGunner = 1;
            inGunnerMayFire = 1;
            initCamElev = 0;
            initElev = 0;
            initOutElev = 0;
            initOutTurn = 0;
            initTurn = 0;
            isCopilot = 1;
            lockWhenDriverOut = 0;
            lockWhenVehicleSpeed = -1;
            LODTurnedIn = 1200;
            LODTurnedOut = 1200;
            magazines[] = {"Laserbatteries","CUP_fake_weapon_mag"};
            maxCamElev = 90;
            maxElev = 10;
            maxHorizontalRotSpeed = 3;
            maxOutElev = 20;
            maxOutTurn = 60;
            maxTurn = 180;
            maxVerticalRotSpeed = 3;
            memoryPointGun = "laser_start";
            memoryPointGunnerOptics = "gunnerview_flir";
            memoryPointGunnerOutOptics = "";
            memoryPointsGetInGunner = "pos codriver";
            memoryPointsGetInGunnerDir = "pos codriver dir";
            memoryPointsGetInGunnerPrecise = "";
            minCamElev = -90;
            minElev = -85;
            minOutElev = -4;
            minOutTurn = -60;
            minTurn = -180;
            missileBeg = "spice rakety";
            missileEnd = "konec rakety";
            outGunnerMayFire = 1;
            playerPosition = 0;
            preciseGetInOut = 0;
            primary = 1;
            primaryGunner = 1;
            primaryObserver = 0;
            proxyIndex = 3;
            proxyType = "CPGunner";
            selectionFireAnim = "zasleh";
            showAllTargets = 0;
            showCrewAim = 0;
            showHMD = 0;
            slingLoadOperator = 0;
            soundElevation[] = {"",0.00316228,1};
            soundServo[] = {"",0.00316228,1};
            stabilizedInAxes = 3;
            startEngine = 0;
            turretCanSee = "1 + 2 + 4 + 8 + 32";
            turretFollowFreeLook = 2;
            turretInfoType = "RscOptics_GENERAL_FLIR";
            viewGunnerInExternal = 0;
            viewGunnerShadow = 1;
            viewGunnerShadowAmb = 1;
            viewGunnerShadowDiff = 1;
            weapons[] = {"CUP_weapon_mastersafe","Laserdesignator_mounted"};
            class OpticsIn
            {
                class Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0.15,1,0.15,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
                    initAngleX = 0;
                    initAngleY = 0;
                    initFov = 0.466;
                    maxAngleX = 0;
                    maxAngleY = 0;
                    maxFov = 0.466;
                    minAngleX = 0;
                    minAngleY = 0;
                    minFov = 0.466;
                    opticsDisplayName = "W";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class WideL: Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0,0,0,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
                    initFov = 0.2;
                    maxFov = 0.2;
                    minFov = 0.2;
                    opticsDisplayName = "WL";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class WideNGS
                {
                    directionStabilized = 0;
                    gunnerOpticsColor[] = {0.15,1,0.15,1};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
                    initAngleX = 0;
                    initAngleY = 0;
                    initFov = 0.466;
                    maxAngleX = 0;
                    maxAngleY = 0;
                    maxFov = 0.466;
                    minAngleX = 0;
                    minAngleY = 0;
                    minFov = 0.466;
                    opticsDisplayName = "W";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class Medium: Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0,0,0,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
                    initFov = 0.1;
                    maxFov = 0.1;
                    minFov = 0.1;
                    opticsDisplayName = "M";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class Narrow: Wide
                {
                    directionStabilized = 1;
                    gunnerOpticsColor[] = {0,0,0,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_n_F.p3d";
                    initFov = 0.01;
                    maxFov = 0.01;
                    minFov = 0.01;
                    opticsDisplayName = "N";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class Narrower: Wide
                {
                    gunnerOpticsColor[] = {0,0,0,1};
                    gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                    gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_n_F.p3d";
                    initFov = 0.02;
                    maxFov = 0.02;
                    minFov = 0.02;
                    opticsDisplayName = "N";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                    thermalMode[] = {0,1};
                    visionMode[] = {"Normal","NVG","Ti"};
                };
            };
        };
        class MainTurret: MainTurret{};
        class RightDoorGun: RightDoorGun{};
    };
};
