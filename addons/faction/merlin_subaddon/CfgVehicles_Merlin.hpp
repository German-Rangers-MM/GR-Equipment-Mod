//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Merlin
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
class I_Heli_Transport_02_F;

class GVAR(AW101_Merlin_TTH_01) : I_Heli_Transport_02_F {
    author = "dalleburn, jan";
    scope = 2;
    scopeCurator = 2;
    displayName = "CH-101 Merlin TTH";
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_HPilot";
	
	receiveRemoteTargets = 1;

	
	editorSubcategory = QGVAR(Heli_M_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_anarc210";
	tf_range = 40000;
    tf_encryptionCode = "tf_west_radio_code";


	hiddenSelections[] = {"camo1", "camo2", "camo3"};
	hiddenSelectionsTextures[]=
	{
		QPATHTOF(merlin_subaddon\data\CH-49_BW-HFlg_0_main.paa),
		QPATHTOF(merlin_subaddon\data\CH-49_BW-HFlg_1_tail.paa),
		QPATHTOF(merlin_subaddon\data\CH-49_BW-HFlg_2_eng.paa)
	};
	
	class TransportBackpacks
	{
		class _xx_B_Parachute {backpack="B_Parachute";count=16;};
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
		class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
		class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
		class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
		class _xx_HandGrenade {magazine="HandGrenade";count=5;};
		class _xx_SmokeShell {magazine="SmokeShell";count=4;};
		class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
		class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
		class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
		class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
		class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
		class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
		class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
	};
	class TransportWeapons
	{
		class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
		class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
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
		class _xx_ACE_rope36 {name="ACE_rope36";count=4;};
	};	
};

//Merlin MTH

class AllVehicles;
class thingX;
class Air: AllVehicles
{
	class NewTurret;
	class ViewPilot;
};
class Helicopter: Air
{
	class Turrets
	{
		class MainTurret;
	};
	class NewTurret;
	class AnimationSources;
	class HitPoints;
};
class Helicopter_Base_F: Helicopter
{
	class RotorLibHelicopterProperties;
	class DefaultEventhandlers;
	class HitPoints: HitPoints
	{
		class HitHull;
		class HitHRotor;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
		class HitGlass5;
	};
	class Components;
	class Turrets: Turrets
	{
		class MainTurret;
	};
	class AnimationSources;
	class Eventhandlers;
	class ViewOptics;
};
class Helicopter_Base_H: Helicopter_Base_F{};

class CUP_Merlin_Rescue_Base : Helicopter_Base_H
{
	class Turrets: Turrets
	{
		class CopilotTurret: MainTurret{};
		class FLIRTurret: MainTurret{};
		class LoadmasterTurret: MainTurret{};
	};
};


class GVAR(Merlin_MTH_base) : CUP_Merlin_Rescue_Base
{
	scope = 1;
	side = 1;
	model = "\CUP\AirVehicles\CUP_AirVehicles_HC3\CUP_MerlinHC3_Medic";
	scopeCurator = 0;
	displayName = "Merlin_MTH_base";
	author = "cookie";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_SAR_co.paa","\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_2_co.paa"};

	attendant = 1;

	tf_hasLRradio = 1;
	tf_RadioType = "tf_anarc210";
	tf_range = 40000;
    tf_encryptionCode = "tf_west_radio_code";
	class CargoTurret;
	class Turrets: Turrets
	{
		class CopilotTurret: MainTurret
		{
			gunnername = "FLIR Operator";
			isCopilot = 1;
			proxyIndex = 3;
			primaryObserver = 0;
			minElev = -40;
			maxElev = 20;
			initElev = 0;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			memoryPointsGetInGunner = "pos loadmaster";
			memoryPointsGetInGunnerDir = "pos loadmaster dir";
			turretInfoType = "RscOptics_UAV_gunner";
			proxyType = "CPGunner";
			weapons[] = {};
			magazines[] = {};
			body = "";
			gun = "";
			gunBeg = "";
			gunEnd = "";
			animationSourceBody = "";
			animationSourceGun = "";
			memoryPointGun = "";
			gunnerOpticsModel = "";
			memoryPointGunnerOptics = "";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 0;
			primaryGunner = 0;
			gunnerAction = "ChopperHeavy_LP_Static_H";
			gunnerGetInAction = "GetInHigh";
			gunnerGetOutAction = "GetOutHigh";
			gunnerOpticsEffect[] = {};
			LODTurnedIn = 1100;
			LODTurnedOut = 1100;
			class Components
			{
				class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
				{
					defaultDisplay = "EmptyDisplay";
					class Components
					{
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
			};
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			startEngine = 0;
			gunnerHasFlares = 0;
		};
		class FLIRTurret: MainTurret
		{
			body = "FLIR_turret";
			gun = "FLIR_gun";
			animationSourceBody = "FLIR_turret";
			animationSourceGun = "FLIR_gun";
			memoryPointGunnerOptics = "FLIR_end";
			gunBeg = "FLIR_end";
			gunEnd = "FLIR_begin";
			memoryPointGun = "FLIR_end";
			stabilizedInAxes = 3;
			gunnername = "$STR_A3_COPILOT";
			isCopilot = 1;
			primaryObserver = 1;
			proxyIndex = 1;
			proxyType = "CPGunner";
			minElev = -40;
			maxElev = 20;
			initElev = 0;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			memoryPointsGetInGunner = "pos codriver";
			memoryPointsGetInGunnerDir = "pos codriver dir";
			turretInfoType = "RscOptics_GENERAL_FLIR";
			weapons[] = {};
			magazines[] = {};
			inGunnerMayFire = 0;
			gunnerAction = "Merlin_Pilot_BAF";
			gunnerGetInAction = "GetInHigh";
			gunnerGetOutAction = "GetOutHigh";
			gunnerOpticsEffect[] = {};
			gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
			discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
			discreteDistanceInitIndex = 5;
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
					gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
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
					gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
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
					gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
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
					gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "N";
					gunnerOpticsColor[] = {0,0,0,1};
					gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
					directionStabilized = 1;
					initFov = 0.02;
					minFov = 0.02;
					maxFov = 0.02;
				};
				class Narrower: Wide
				{
					opticsDisplayName = "N";
					gunnerOpticsColor[] = {0,0,0,1};
					gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
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
		
		class LoadmasterTurret: MainTurret
		{
			gunnername = "Loadmaster";
			isCopilot = 0;
			proxyIndex = 2;
			primaryObserver = 0;
			minElev = -40;
			maxElev = 20;
			initElev = 0;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			memoryPointsGetInGunner = "pos loadmaster";
			memoryPointsGetInGunnerDir = "pos loadmaster dir";
			turretInfoType = "RscOptics_UAV_gunner";
			proxyType = "CPGunner";
			weapons[] = {};
			magazines[] = {};
			body = "";
			gun = "";
			gunBeg = "";
			gunEnd = "";
			animationSourceBody = "";
			animationSourceGun = "";
			memoryPointGun = "";
			gunnerOpticsModel = "";
			memoryPointGunnerOptics = "";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 0;
			primaryGunner = 0;
			gunnerAction = "ChopperHeavy_LP_Static_H";
			gunnerGetInAction = "GetInHigh";
			gunnerGetOutAction = "GetOutHigh";
			gunnerOpticsEffect[] = {};
			LODTurnedIn = 1100;
			LODTurnedOut = 1100;
			class Components{};
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			startEngine = 0;
			gunnerHasFlares = 0;
		};
	};
	textureList[] = {"SAR",1};
	class TextureSources
	{
		class GRN
		{
			displayname = "Green";
			author = "ravendk";
			textures[] = {"\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_1_RDAF_co.paa","\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_2_co.paa"};
			factions[] = {};
		};
		class SAR
		{
			displayname = "SAR";
			author = "ravendk";
			textures[] = {"\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_SAR_co.paa","\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_2_co.paa"};
			factions[] = {};
		};
	};
};

class GVAR(AW101_Merlin_MTH_01): GVAR(Merlin_MTH_base)
{
	author = "cookie";
	scope = 2;
	scopeCurator = 2;
	displayName = "CH-101 Merlin MTH";
	
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_HPilot";

	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine"};
	
	
	receiveRemoteTargets = 1;
	reportRemoteTargets = 1;
	
	class CargoTurret;
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class FLIRTurret: FLIRTurret{};
		class LoadmasterTurret: LoadmasterTurret{};
	};

	
	editorSubcategory = QGVAR(Heli_M_Subcat);
	typicalCargo[] = {"CUP_B_GER_HPilot","CUP_B_GER_HPilot"};
	hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_SAR_co.paa","\CUP\AirVehicles\CUP_AirVehicles_HC3\data\merlinhc3_2_co.paa"};
	editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_C_Merlin_HC3_CIV_Rescue.jpg";
	textureList[] = {"GRN",1};
};
