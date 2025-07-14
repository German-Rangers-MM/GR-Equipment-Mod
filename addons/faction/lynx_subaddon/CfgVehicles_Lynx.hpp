//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Sea-Lynx
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------



class CUP_AW159_Unarmed_Base
{
	class Components;
    class EventHandlers;
	class Turrets
	{
		class MainTurret;
		class CargoTurret_01;
		class CargoTurret_02;
	};
};


class GVAR(Lynx_Unarmed_Base): CUP_AW159_Unarmed_Base
{
	scope = 1;
	side = 1;
	scopeCurator = 0;
	crew = "CUP_B_GER_HPilot";
	typicalCargo[] = {"CUP_B_GER_HPilot"};
	animationList[] = {"hide_radar",0,"hide_struts",0};
	hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_AW159\data\lynx_base_co.paa","\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"};
	
	class Components: Components
	{
		class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
		{
			defaultDisplay = "EmptyDisplay";
			class Components
			{
				class MissileDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "Missile";
				};
				class VehicleGunnerDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "PrimaryGunner";
				};
				class SensorsDisplay
				{
					componentType = "SensorsDisplayComponent";
					range[] = {16000,8000,4000,2000};
					resource = "RscCustomInfoSensors";
				};
				class CrewDisplay
				{
					componentType = "CrewDisplayComponent";
					resource = "RscCustomInfoCrew";
				};
				class MinimapDisplay
				{
					componentType = "MinimapDisplayComponent";
					resource = "RscCustomInfoMiniMap";
				};
				class SlingLoadDisplay
				{
					componentType = "SlingLoadDisplayComponent";
					resource = "RscCustomInfoSlingLoad";
				};
				class EmptyDisplay
				{
					componentType = "EmptyDisplayComponent";
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
		{
			defaultDisplay = "SensorsDisplay";
			class Components
			{
				class MissileDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "Missile";
				};
				class VehicleGunnerDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "PrimaryGunner";
				};
				class SensorsDisplay
				{
					componentType = "SensorsDisplayComponent";
					range[] = {16000,8000,4000,2000};
					resource = "RscCustomInfoSensors";
				};
				class CrewDisplay
				{
					componentType = "CrewDisplayComponent";
					resource = "RscCustomInfoCrew";
				};
				class MinimapDisplay
				{
					componentType = "MinimapDisplayComponent";
					resource = "RscCustomInfoMiniMap";
				};
				class SlingLoadDisplay
				{
					componentType = "SlingLoadDisplayComponent";
					resource = "RscCustomInfoSlingLoad";
				};
				class EmptyDisplay
				{
					componentType = "EmptyDisplayComponent";
				};
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
					angleRangeVertical = 360;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					aimDown = 10;
				};
				class PassiveSensorComponent: SensorTemplatePassiveRadar{};
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
	
	
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			body = "MainTurret";
			gunnerCompartments = "Compartment1";
			gun = "MainGun";
			animationSourceBody = "MainTurret";
			animationSourceGun = "MainGun";
			stabilizedInAxes = 3;
			gunnername = "$STR_A3_COPILOT";
			isCopilot = 1;
			memoryPointGunnerOptics = "commanderview";
			minElev = -40;
			maxElev = 20;
			initElev = 0;
			minTurn = -120;
			maxTurn = 120;
			initTurn = 0;
			gunBeg = "commanderview";
			gunEnd = "laserstart";
			memoryPointGun = "laserstart";
			canLock = 2;
			turretInfoType = "RscOptics_GENERAL_FLIR";
			weapons[] = {"Laserdesignator_mounted"};
			magazines[] = {"Laserbatteries"};
			proxyType = "CPGunner";
			inGunnerMayFire = 1;
			gunnerAction = "AW159_Pilot_BAF";
			gunnerGetInAction = "GetInHigh";
			gunnerGetOutAction = "GetOutHigh";
			gunnerOpticsEffect[] = {};
			gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
			discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
			discreteDistanceInitIndex = 5;
			class Components
			{
				class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
				{
					defaultDisplay = "EmptyDisplay";
					class Components
					{
						class MissileDisplay
						{
							componentType = "TransportFeedDisplayComponent";
							source = "Missile";
						};
						class SensorsDisplay
						{
							componentType = "SensorsDisplayComponent";
							range[] = {16000,8000,4000,2000};
							resource = "RscCustomInfoSensors";
						};
						class CrewDisplay
						{
							componentType = "CrewDisplayComponent";
							resource = "RscCustomInfoCrew";
						};
						class MinimapDisplay
						{
							componentType = "MinimapDisplayComponent";
							resource = "RscCustomInfoMiniMap";
						};
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
					};
				};
				class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
				{
					defaultDisplay = "SensorsDisplay";
					class Components
					{
						class MissileDisplay
						{
							componentType = "TransportFeedDisplayComponent";
							source = "Missile";
						};
						class SensorsDisplay
						{
							componentType = "SensorsDisplayComponent";
							range[] = {16000,8000,4000,2000};
							resource = "RscCustomInfoSensors";
						};
						class CrewDisplay
						{
							componentType = "CrewDisplayComponent";
							resource = "RscCustomInfoCrew";
						};
						class MinimapDisplay
						{
							componentType = "MinimapDisplayComponent";
							resource = "RscCustomInfoMiniMap";
						};
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
					};
				};
			};
			class OpticsIn
			{
				class WideNGS
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -35;
					maxAngleX = 10;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
					gunnerOpticsColor[] = {0.15,1,0.15,1};
					gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
					directionStabilized = 0;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				};
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -35;
					maxAngleX = 10;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
					gunnerOpticsColor[] = {0.15,1,0.15,1};
					gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
					directionStabilized = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					gunnerOpticsEffect[] = {"TankCommanderOptics1"};
				};
				class WideL: Wide
				{
					opticsDisplayName = "WL";
					initFov = 0.2;
					minFov = 0.2;
					maxFov = 0.2;
					gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
					gunnerOpticsColor[] = {0,0,0,1};
					directionStabilized = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				};
				class Medium: Wide
				{
					opticsDisplayName = "M";
					initFov = 0.1;
					minFov = 0.1;
					maxFov = 0.1;
					directionStabilized = 1;
					gunnerOpticsColor[] = {0,0,0,1};
					gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "N";
					gunnerOpticsColor[] = {0,0,0,1};
					gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
					directionStabilized = 1;
					initFov = 0.02;
					minFov = 0.02;
					maxFov = 0.02;
				};
				class Narrower: Wide
				{
					opticsDisplayName = "N";
					gunnerOpticsColor[] = {0,0,0,1};
					gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
					directionStabilized = 1;
					initFov = 0.01;
					minFov = 0.01;
					maxFov = 0.01;
				};
			};
			class OpticsOut
			{
				class Monocular
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.1;
					minFov = 0.133;
					maxFov = 1.1;
					visionMode[] = {"Normal","NVG"};
					gunnerOpticsModel = "";
					gunnerOpticsEffect[] = {};
				};
			};
			startEngine = 0;
			gunnerHasFlares = 0;
		};
		class CargoTurret_01: CargoTurret_01{};
		class CargoTurret_02: CargoTurret_02{};
	};
};

class GVAR(WG_13_Sea_Lynx) : GVAR(Lynx_Unarmed_Base) {
    author = "cookie";
	scope = 2;
	scopeCurator = 2;
	side = 1;
    displayName = "WG-13 Sea Lynx Mk88a (Marine)";
	model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159.p3d";
	picture = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_unarmed_ca.paa";
	icon = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_unarmed_ca.paa";
    faction = QGVAR(rangers_faction);

	
	editorSubcategory = QGVAR(Heli_L_Subcat);
	
    crew = "CUP_B_GER_HPilot";
	typicalCargo[] = {"CUP_B_GER_HPilot"};
	animationList[] = {"hide_radar",0,"hide_struts",0};
	hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_AW159\skins\lynx_marine_co.paa","\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret{};
		class CargoTurret_01: CargoTurret_01{};
		class CargoTurret_02: CargoTurret_02{};
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
        class XEH_CLASS { EXTENDED_EVENTHANDLERS };
	};
	editorPreview = "CUP\AirVehicles\CUP_AirVehicles_AW159\Data\preview\CUP_B_AW159_Unarmed_GB.jpg";
	maximumLoad = 1000;
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};

	
	class TransportBackpacks
	{
		class _xx_B_Parachute {backpack="B_Parachute";count=4;};
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=5;};
		class _xx_HandGrenade {magazine="HandGrenade";count=2;};
		class _xx_SmokeShell {magazine="SmokeShell";count=2;};
		class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=2;};
		class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=2;};
		class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
		class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
	};
	class TransportWeapons
	{
		class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=1;};
	};
	class TransportItems
	{
		class _xx_Toolkit {name="Toolkit";count=1;};
		class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
		class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
		class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
		class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
		class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
		class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
		class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
		class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
		class _xx_ACE_morphine {name="ACE_morphine";count=2;};
		class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
		class _xx_ACE_splint {name="ACE_splint";count=2;};
		class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
		class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
		class _xx_ACE_rope36 {name="ACE_rope36";count=2;};
	};		
};


class GVAR(Lynx_Dynamic_Base): GVAR(Lynx_Unarmed_Base)
{
	dlc = "CUP_Vehicles";
	scope = 1;
	side = 1;
	scopeCurator = 0;
	ace_fastroping_enabled = 0;
	class Components: Components
	{
		class TransportPylonsComponent
		{
			UIPicture = "\CUP\AirVehicles\CUP_AirVehicles_AW159\Data\UI\CUP_AW159_3DEN_CA.paa";
			class presets
			{
				class Empty
				{
					displayName = "$STR_EMPTY";
					attachment[] = {};
				};
				class AntiTank
				{
					displayName = "$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
					attachment[] = {"CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M","CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M"};
				};
				class GroundSupport
				{
					displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
					attachment[] = {"CUP_PylonPod_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M","CUP_PylonPod_12Rnd_CRV7_HE_M"};
				};
			};
			class pylons
			{
				class pylons1
				{
					hardpoints[] = {"DAR","DAGR","B_SHRIEKER","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_AW159"};
					attachment = "CUP_PylonPod_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M";
					bay = -1;
					priority = 1;
					UIposition[] = {0.06,0.35};
					turret[] = {};
				};
				class pylons2: pylons1
				{
					UIposition[] = {0.59,0.35};
					turret[] = {};
					mirroredMissilePos = 1;
					attachment = "CUP_PylonPod_12Rnd_CRV7_HE_M";
				};
			};
		};
	};
};


class GVAR(WG_13_Sea_Lynx_Armed): GVAR(Lynx_Dynamic_Base)
{
	author = "dalleburn, jan, cookie";
	scope = 2;
	scopeCurator = 2;
	side = 1;
	displayname = "WG-13 Sea Lynx Mk88a (Marine - Armed)";
	model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159.p3d";
	picture = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_unarmed_ca.paa";
	icon = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_unarmed_ca.paa";
    faction = QGVAR(rangers_faction);

	
	editorSubcategory = QGVAR(Heli_L_Subcat);
	crew = "CUP_B_GER_HPilot";
	typicalCargo[] = {"CUP_B_GER_HPilot"};
	animationList[] = {"hide_radar",0,"hide_struts",1};
	hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_AW159\skins\lynx_marine_co.paa","\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret{};
		class CargoTurret_01: CargoTurret_01{};
		class CargoTurret_02: CargoTurret_02{};
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
        class XEH_CLASS { EXTENDED_EVENTHANDLERS };
	};
	editorPreview = "CUP\AirVehicles\CUP_AirVehicles_AW159\Data\preview\CUP_B_AW159_Unarmed_GB.jpg";
	class TransportWeapons
	{
		class _xx_CUP_arifle_G36C
		{
			weapon = "CUP_arifle_G36C";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_556x45_G36
		{
			magazine = "CUP_30Rnd_556x45_G36";
			count = 10;
		};
		class _xx_SmokeShell
		{
			magazine = "SmokeShell";
			count = 2;
		};
		class _xx_SmokeShellOrange
		{
			magazine = "SmokeShellOrange";
			count = 2;
		};
		class _xx_Chemlight_Red
		{
			magazine = "Chemlight_Red";
			count = 2;
		};
	};
	maximumLoad = 1000;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 4;
		};
	};
	class TransportBackpacks{};
};
