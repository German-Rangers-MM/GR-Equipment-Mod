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
    displayName = "UH-60S MEV";
    faction = QGVAR(rangers_faction);
    editorPreview = QPATHTOF(data\preview\MH60S_MEV.jpg);
    
	editorSubcategory = QGVAR(Heli_M_Subcat);
    crew = "CUP_B_GER_Fleck_HPilot";
    typicalCargo[] = {"CUP_B_GER_Fleck_HPilot","CUP_B_GER_Fleck_HPilot"};
	receiveRemoteTargets = 1;
	reportRemoteTargets = 1;

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
            gunnerOpticsModel = "";
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
            turretFollowFreeLook = 0;
            turretInfoType = "RscOptics_UAV_gunner";
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
        class presets
        {
            class Empty
            {
                displayName = "Empty";
                attachment[] = {"","","",""};
            };
        };
        class TransportPylonsComponent : TransportPylonsComponent
        {
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

    
    class MFD
    {
        class AirplaneHUD
        {
            class Bones{};
            class Draw{};
            topLeft = "HUD_top_left";
            topRight = "HUD_top_right";
            bottomLeft = "HUD_bottom_left";
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.15,1,0.15,1};
            enableParallax = 0;
            helmetMountedDisplay = 1;
            helmetPosition[] = {0,0,0};
            helmetRight[] = {0,0,0};
            helmetDown[] = {0,0,0};
        };
        class Kimi_HUD_1
        {
            topLeft = "HUD_top_left";
            topRight = "HUD_top_right";
            bottomLeft = "HUD_bottom_left";
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.15,1,0.15,1};
            enableParallax = 0;
            class Bones
            {
                class PlaneOrientation
                {
                    type = "fixed";
                    pos[] = {0.5,0.5};
                };
                class GunnerAim
                {
                    type = "vector";
                    source = "weapon";
                    pos0[] = {0.5,"0.9 - 0.04 + 0.02667"};
                    pos10[] = {"0.5 + 0.0111","0.9 - 0.04 + 0.02667 + 0.0133"};
                };
                class Target
                {
                    source = "target";
                    type = "vector";
                    pos0[] = {0.5,0.5};
                    pos10[] = {0.85,0.85};
                };
                class Velocity
                {
                    type = "vector";
                    source = "velocity";
                    pos0[] = {0.5,0.5};
                    pos10[] = {0.65,0.65};
                };
                class Velocity_slip
                {
                    type = "vector";
                    source = "velocity";
                    pos0[] = {0.5,0.845};
                    pos10[] = {0.53,0.845};
                };
                class VspeedBone
                {
                    type = "linear";
                    source = "vspeed";
                    sourceScale = 1;
                    min = -10;
                    max = 10;
                    minPos[] = {0.93,0.2};
                    maxPos[] = {0.93,0.8};
                };
                class RadarAltitudeBone
                {
                    type = "linear";
                    source = "altitudeAGL";
                    sourceScale = 1;
                    min = 0;
                    max = 60;
                    minPos[] = {0.965,0.2};
                    maxPos[] = {0.965,0.8};
                };
                class HorizonBankRot
                {
                    type = "rotational";
                    source = "horizonBank";
                    center[] = {0.5,0.5};
                    min = -3.1416;
                    max = 3.1416;
                    minAngle = -180;
                    maxAngle = 180;
                    aspectRatio = 1;
                };
                class ForwardVec
                {
                    type = "vector";
                    source = "forward";
                    pos0[] = {0,0};
                    pos10[] = {0.235,0.235};
                };
                class WeaponAim
                {
                    type = "vector";
                    source = "weapon";
                    pos0[] = {0.5,0.5};
                    pos10[] = {0.753,0.753};
                };
                class Level0
                {
                    type = "horizon";
                    pos0[] = {0.5,0.5};
                    pos10[] = {0.78,0.78};
                    angle = 0;
                };
                class LevelP5: Level0
                {
                    angle = 5;
                };
                class LevelM5: Level0
                {
                    angle = -5;
                };
                class LevelP10: Level0
                {
                    angle = 10;
                };
                class LevelM10: Level0
                {
                    angle = -10;
                };
                class LevelP15: Level0
                {
                    angle = 15;
                };
                class LevelM15: Level0
                {
                    angle = -15;
                };
                class LevelP20: Level0
                {
                    angle = 20;
                };
                class LevelM20: Level0
                {
                    angle = -20;
                };
                class LevelP25: Level0
                {
                    angle = 25;
                };
                class LevelM25: Level0
                {
                    angle = -25;
                };
                class LevelP30: Level0
                {
                    angle = 30;
                };
                class LevelM30: Level0
                {
                    angle = -30;
                };
                class LevelP35: Level0
                {
                    angle = 35;
                };
                class LevelM35: Level0
                {
                    angle = -35;
                };
                class LevelP40: Level0
                {
                    angle = 40;
                };
                class LevelM40: Level0
                {
                    angle = -40;
                };
                class LevelP45: Level0
                {
                    angle = 45;
                };
                class LevelM45: Level0
                {
                    angle = -45;
                };
                class LevelP50: Level0
                {
                    angle = 50;
                };
                class LevelM50: Level0
                {
                    angle = -50;
                };
                class LevelP55: Level0
                {
                    angle = 55;
                };
                class LevelM55: Level0
                {
                    angle = -55;
                };
                class LevelP60: Level0
                {
                    angle = 60;
                };
                class LevelM60: Level0
                {
                    angle = -60;
                };
                class LevelP65: Level0
                {
                    angle = 65;
                };
                class LevelM65: Level0
                {
                    angle = -65;
                };
                class LevelP70: Level0
                {
                    angle = 70;
                };
                class LevelM70: Level0
                {
                    angle = -70;
                };
                class LevelP75: Level0
                {
                    angle = 75;
                };
                class LevelM75: Level0
                {
                    angle = -75;
                };
                class LevelP80: Level0
                {
                    angle = 80;
                };
                class LevelM80: Level0
                {
                    angle = -80;
                };
                class LevelP85: Level0
                {
                    angle = 85;
                };
                class LevelM85: Level0
                {
                    angle = -85;
                };
                class LevelP90: Level0
                {
                    angle = 90;
                };
                class LevelM90: Level0
                {
                    angle = -90;
                };
            };
            class Draw
            {
                color[] = {0.18,1,0.18};
                alpha = 1;
                condition = "on";
                class Horizont
                {
                    clipTL[] = {0.15,0.15};
                    clipBR[] = {0.85,0.85};
                    class Dimmed
                    {
                        class Level0
                        {
                            type = "line";
                            points[] = {{"Level0",{-0.42,0},1},{"Level0",{-0.38,0},1},{},{"Level0",{-0.37,0},1},{"Level0",{-0.33,0},1},{},{"Level0",{-0.32,0},1},{"Level0",{-0.28,0},1},{},{"Level0",{-0.27,0},1},{"Level0",{-0.23,0},1},{},{"Level0",{-0.22,0},1},{"Level0",{-0.18,0},1},{},{"Level0",{-0.17,0},1},{"Level0",{-0.13,0},1},{},{"Level0",{-0.12,0},1},{"Level0",{-0.08,0},1},{},{"Level0",{0.42,0},1},{"Level0",{0.38,0},1},{},{"Level0",{0.37,0},1},{"Level0",{0.33,0},1},{},{"Level0",{0.32,0},1},{"Level0",{0.28,0},1},{},{"Level0",{0.27,0},1},{"Level0",{0.23,0},1},{},{"Level0",{0.22,0},1},{"Level0",{0.18,0},1},{},{"Level0",{0.17,0},1},{"Level0",{0.13,0},1},{},{"Level0",{0.12,0},1},{"Level0",{0.08,0},1}};
                        };
                    };
                };
                class HorizonBankRot
                {
                    type = "line";
                    width = 3;
                    points[] = {{"HorizonBankRot",{0,0.25},1},{"HorizonBankRot",{-0.01,0.23},1},{"HorizonBankRot",{0.01,0.23},1},{"HorizonBankRot",{0,0.25},1}};
                };
                class Static_HAD_BOX
                {
                    clipTL[] = {0,1};
                    clipBR[] = {1,0};
                    type = "line";
                    width = 5;
                    points[] = {{{"0.5-0.1","0.9-0.04"},1},{{"0.5-0.1","0.9+0.04"},1},{{"0.5+0.1","0.9+0.04"},1},{{"0.5+0.1","0.9-0.04"},1},{{"0.5-0.1","0.9-0.04"},1},{},{{"0.5-0.1","0.9-0.04+0.02667"},1},{{"0.5-0.092","0.9-0.04+0.02667"},1},{},{{"0.5+0.1","0.9-0.04+0.02667"},1},{{"0.5+0.092","0.9-0.04+0.02667"},1},{},{{0.5,"0.9-0.04"},1},{{0.5,"0.9-0.032"},1},{},{{0.5,"0.9+0.04"},1},{{0.5,"0.9+0.032"},1},{}};
                };
                class Gunner_HAD
                {
                    type = "line";
                    width = 6;
                    points[] = {{"GunnerAim",{-0.015,-0.008},1},{"GunnerAim",{-0.015,0.008},1},{"GunnerAim",{0.015,0.008},1},{"GunnerAim",{0.015,-0.008},1},{"GunnerAim",{-0.015,-0.008},1}};
                };
                class Centerline
                {
                    type = "line";
                    width = 7;
                    points[] = {{{0.5,0.49},1},{{0.5,0.47},1},{},{{0.5,0.51},1},{{0.5,0.53},1},{},{{0.49,0.5},1},{{0.47,0.5},1},{},{{0.51,0.5},1},{{0.53,0.5},1},{}};
                };
                class Slip_ball_group
                {
                    class Slip_bars
                    {
                        type = "line";
                        width = 4;
                        points[] = {{{"0.5-0.018","0.9-0.04"},1},{{"0.5-0.018","0.9-0.075"},1},{},{{"0.5+0.018","0.9-0.04"},1},{{"0.5+0.018","0.9-0.075"},1}};
                    };
                    class Slip_ball
                    {
                        type = "line";
                        width = 6.0;
                        points[] = {{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},{"Velocity_slip",1,{"0.0099999998 * 0.75","-0.01732 * 0.75"},1},{"Velocity_slip",1,{"0.01732 * 0.75","-0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"0.02 * 0.75","0 * 0.75"},1},{"Velocity_slip",1,{"0.01732 * 0.75","0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"0.0099999998 * 0.75","0.01732 * 0.75"},1},{"Velocity_slip",1,{"0 * 0.75","0.02 * 0.75"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.75","0.01732 * 0.75"},1},{"Velocity_slip",1,{"-0.01732 * 0.75","0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"-0.02 * 0.75","0 * 0.75"},1},{"Velocity_slip",1,{"-0.01732 * 0.75","-0.0099999998 * 0.75"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.75","-0.01732 * 0.75"},1},{"Velocity_slip",1,{"0 * 0.75","-0.02 * 0.75"},1},{},{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},{"Velocity_slip",1,{"0.0099999998 * 0.6","-0.01732 * 0.6"},1},{"Velocity_slip",1,{"0.01732 * 0.6","-0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"0.02 * 0.6","0 * 0.6"},1},{"Velocity_slip",1,{"0.01732 * 0.6","0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"0.0099999998 * 0.6","0.01732 * 0.6"},1},{"Velocity_slip",1,{"0 * 0.6","0.02 * 0.6"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.6","0.01732 * 0.6"},1},{"Velocity_slip",1,{"-0.01732 * 0.6","0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"-0.02 * 0.6","0 * 0.6"},1},{"Velocity_slip",1,{"-0.01732 * 0.6","-0.0099999998 * 0.6"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.6","-0.01732 * 0.6"},1},{"Velocity_slip",1,{"0 * 0.6","-0.02 * 0.6"},1},{},{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},{"Velocity_slip",1,{"0.0099999998 * 0.5","-0.01732 * 0.5"},1},{"Velocity_slip",1,{"0.01732 * 0.5","-0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"0.02 * 0.5","0 * 0.5"},1},{"Velocity_slip",1,{"0.01732 * 0.5","0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"0.0099999998 * 0.5","0.01732 * 0.5"},1},{"Velocity_slip",1,{"0 * 0.5","0.02 * 0.5"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.5","0.01732 * 0.5"},1},{"Velocity_slip",1,{"-0.01732 * 0.5","0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"-0.02 * 0.5","0 * 0.5"},1},{"Velocity_slip",1,{"-0.01732 * 0.5","-0.0099999998 * 0.5"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.5","-0.01732 * 0.5"},1},{"Velocity_slip",1,{"0 * 0.5","-0.02 * 0.5"},1},{},{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},{"Velocity_slip",1,{"0.0099999998 * 0.4","-0.01732 * 0.4"},1},{"Velocity_slip",1,{"0.01732 * 0.4","-0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"0.02 * 0.4","0 * 0.4"},1},{"Velocity_slip",1,{"0.01732 * 0.4","0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"0.0099999998 * 0.4","0.01732 * 0.4"},1},{"Velocity_slip",1,{"0 * 0.4","0.02 * 0.4"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.4","0.01732 * 0.4"},1},{"Velocity_slip",1,{"-0.01732 * 0.4","0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"-0.02 * 0.4","0 * 0.4"},1},{"Velocity_slip",1,{"-0.01732 * 0.4","-0.0099999998 * 0.4"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.4","-0.01732 * 0.4"},1},{"Velocity_slip",1,{"0 * 0.4","-0.02 * 0.4"},1},{},{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},{"Velocity_slip",1,{"0.0099999998 * 0.30","-0.01732 * 0.30"},1},{"Velocity_slip",1,{"0.01732 * 0.30","-0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"0.02 * 0.30","0 * 0.30"},1},{"Velocity_slip",1,{"0.01732 * 0.30","0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"0.0099999998 * 0.30","0.01732 * 0.30"},1},{"Velocity_slip",1,{"0 * 0.30","0.02 * 0.30"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.30","0.01732 * 0.30"},1},{"Velocity_slip",1,{"-0.01732 * 0.30","0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"-0.02 * 0.30","0 * 0.30"},1},{"Velocity_slip",1,{"-0.01732 * 0.30","-0.0099999998 * 0.30"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.30","-0.01732 * 0.30"},1},{"Velocity_slip",1,{"0 * 0.30","-0.02 * 0.30"},1},{},{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},{"Velocity_slip",1,{"0.0099999998 * 0.20","-0.01732 * 0.20"},1},{"Velocity_slip",1,{"0.01732 * 0.20","-0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"0.02 * 0.20","0 * 0.20"},1},{"Velocity_slip",1,{"0.01732 * 0.20","0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"0.0099999998 * 0.20","0.01732 * 0.20"},1},{"Velocity_slip",1,{"0 * 0.20","0.02 * 0.20"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.20","0.01732 * 0.20"},1},{"Velocity_slip",1,{"-0.01732 * 0.20","0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"-0.02 * 0.20","0 * 0.20"},1},{"Velocity_slip",1,{"-0.01732 * 0.20","-0.0099999998 * 0.20"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.20","-0.01732 * 0.20"},1},{"Velocity_slip",1,{"0 * 0.20","-0.02 * 0.20"},1},{},{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1},{"Velocity_slip",1,{"0.0099999998 * 0.1","-0.01732 * 0.1"},1},{"Velocity_slip",1,{"0.01732 * 0.1","-0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"0.02 * 0.1","0 * 0.1"},1},{"Velocity_slip",1,{"0.01732 * 0.1","0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"0.0099999998 * 0.1","0.01732 * 0.1"},1},{"Velocity_slip",1,{"0 * 0.1","0.02 * 0.1"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.1","0.01732 * 0.1"},1},{"Velocity_slip",1,{"-0.01732 * 0.1","0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"-0.02 * 0.1","0 * 0.1"},1},{"Velocity_slip",1,{"-0.01732 * 0.1","-0.0099999998 * 0.1"},1},{"Velocity_slip",1,{"-0.0099999998 * 0.1","-0.01732 * 0.1"},1},{"Velocity_slip",1,{"0 * 0.1","-0.02 * 0.1"},1}};
                    };
                };
                class WeaponName
                {
                    type = "text";
                    source = "weapon";
                    sourceScale = 1;
                    align = "right";
                    scale = 1;
                    pos[] = {{0.61,0.86},1};
                    right[] = {{0.65,0.86},1};
                    down[] = {{0.61,0.9},1};
                };
                class Ammo_ALL
                {
                    type = "group";
                    condition = "on";
                    class Ammo_count_ALL
                    {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        align = "right";
                        scale = 1;
                        pos[] = {{0.61,0.89},1};
                        right[] = {{0.65,0.89},1};
                        down[] = {{0.61,0.93},1};
                    };
                };
                class LightsGroup
                {
                    type = "group";
                    condition = "lights";
                    class LightsText
                    {
                        type = "text";
                        source = "static";
                        text = "LIGHTS";
                        align = "right";
                        scale = 1;
                        pos[] = {{0.03,"0.53 + 0.055"},1};
                        right[] = {{0.07,"0.53 + 0.055"},1};
                        down[] = {{0.03,"0.53 + 0.095"},1};
                    };
                };
                class CollisionLightsGroup
                {
                    type = "group";
                    condition = "collisionlights";
                    class CollisionLightsText
                    {
                        type = "text";
                        source = "static";
                        text = "A-COL";
                        align = "right";
                        scale = 1;
                        pos[] = {{0.03,"0.53 + 0.105"},1};
                        right[] = {{0.07,"0.53 + 0.105"},1};
                        down[] = {{0.03,"0.53 + 0.145"},1};
                    };
                };
                class ATMissileTOFGroup
                {
                    condition = "ATmissile";
                    type = "group";
                    class TOFtext
                    {
                        type = "text";
                        align = "right";
                        source = "static";
                        text = "TOF=";
                        scale = 1;
                        pos[] = {{0.61,0.92},1};
                        right[] = {{0.65,0.92},1};
                        down[] = {{0.61,0.96},1};
                    };
                    class TOFnumber
                    {
                        type = "text";
                        source = "targetDist";
                        sourcescale = 0.0025;
                        align = "right";
                        scale = 1;
                        pos[] = {{0.69,0.92},1};
                        right[] = {{0.73,0.92},1};
                        down[] = {{0.69,0.96},1};
                    };
                };
                class RangeNumber
                {
                    type = "text";
                    source = "targetDist";
                    sourceScale = 1;
                    align = "left";
                    scale = 1;
                    pos[] = {{0.39,0.89},1};
                    right[] = {{0.43,0.89},1};
                    down[] = {{0.39,0.93},1};
                };
                class RangeText
                {
                    type = "text";
                    source = "static";
                    text = "RNG";
                    align = "left";
                    scale = 1;
                    pos[] = {{0.39,0.86},1};
                    right[] = {{0.43,0.86},1};
                    down[] = {{0.39,0.9},1};
                };
                class SpeedNumber
                {
                    type = "text";
                    align = "right";
                    scale = 1;
                    source = "speed";
                    sourceScale = 3.6;
                    pos[] = {{0.03,0.475},1};
                    right[] = {{0.08,0.475},1};
                    down[] = {{0.03,0.525},1};
                };
                class TorqueNumber
                {
                    condition = "simulRTD";
                    class Torque_number
                    {
                        type = "text";
                        align = "left";
                        scale = 1;
                        source = "rtdRotorTorque";
                        sourceScale = 363;
                        pos[] = {{0.065,0.175},1};
                        right[] = {{0.115,0.175},1};
                        down[] = {{0.065,0.225},1};
                    };
                    class Torquetext
                    {
                        type = "text";
                        source = "static";
                        text = "%";
                        align = "right";
                        scale = 1;
                        pos[] = {{0.07,0.175},1};
                        right[] = {{0.12,0.175},1};
                        down[] = {{0.07,0.225},1};
                    };
                };
                class AltNumber: SpeedNumber
                {
                    align = "right";
                    source = "altitudeAGL";
                    sourceScale = 1;
                    pos[] = {{0.83,0.475},1};
                    right[] = {{0.88,0.475},1};
                    down[] = {{0.83,0.525},1};
                };
                class ASLNumber
                {
                    type = "text";
                    source = "altitudeASL";
                    sourceScale = 1;
                    align = "right";
                    scale = 1;
                    pos[] = {{0.835,0.18},1};
                    right[] = {{0.875,0.18},1};
                    down[] = {{0.835,0.22},1};
                };
                class VspeedScalePosta
                {
                    type = "line";
                    width = 5;
                    points[] = {{{0.98,0.2},1},{{1.0,0.2},1},{},{{0.93,0.2},1},{{0.95,0.2},1},{},{{0.98,0.35},1},{{1.0,0.35},1},{},{{0.93,0.35},1},{{0.95,0.35},1},{},{{0.94,0.38},1},{{0.95,0.38},1},{},{{0.94,0.41},1},{{0.95,0.41},1},{},{{0.94,0.44},1},{{0.95,0.44},1},{},{{0.94,0.47},1},{{0.95,0.47},1},{},{{0.98,0.5},1},{{1.0,0.5},1},{},{{0.93,0.5},1},{{0.95,0.5},1},{},{{0.94,0.53},1},{{0.95,0.53},1},{},{{0.94,0.56},1},{{0.95,0.56},1},{},{{0.94,0.59},1},{{0.95,0.59},1},{},{{0.94,0.62},1},{{0.95,0.62},1},{},{{0.98,0.65},1},{{1.0,0.65},1},{},{{0.93,0.65},1},{{0.95,0.65},1},{},{{0.99,0.68},1},{{0.98,0.68},1},{},{{0.99,0.71},1},{{0.98,0.71},1},{},{{0.99,0.74},1},{{0.98,0.74},1},{},{{0.99,0.77},1},{{0.98,0.77},1},{},{{0.98,0.8},1},{{1.0,0.8},1},{},{{0.93,0.8},1},{{0.95,0.8},1},{}};
                };
                class RadarAltitudeBand
                {
                    clipTL[] = {0,0.2};
                    clipBR[] = {1,0.8};
                    class radarbanda
                    {
                        type = "line";
                        width = 17;
                        points[] = {{"RadarAltitudeBone",{0,0},1},{"RadarAltitudeBone",{0,0.6},1}};
                    };
                };
                class VspeedBand
                {
                    type = "line";
                    width = 3;
                    points[] = {{"VspeedBone",{-0.01,0.0},1},{"VspeedBone",{-0.025,-0.015},1},{"VspeedBone",{-0.025,0.015},1},{"VspeedBone",{-0.01,0.0},1},{}};
                };
                class HeadingNumber: SpeedNumber
                {
                    source = "heading";
                    sourceScale = 1;
                    align = "center";
                    pos[] = {{0.5,0.01},1};
                    right[] = {{0.56,0.01},1};
                    down[] = {{0.5,0.06},1};
                };
                class Center_box
                {
                    type = "line";
                    width = 3.0;
                    points[] = {{{0.44,0.005},1},{{"0.44 + 0.12",0.005},1},{{"0.44 + 0.12","0.005 + 0.06"},1},{{0.44,"0.005 + 0.06"},1},{{0.44,0.005},1}};
                };
                class HeadingArrow
                {
                    type = "line";
                    width = 7;
                    points[] = {{{"0.5","0.128 + 0.03"},1},{{0.5,0.128},1}};
                };
                class HeadingScale
                {
                    type = "scale";
                    horizontal = 1;
                    source = "heading";
                    sourceScale = 1;
                    width = 5;
                    top = 0.12;
                    center = 0.5;
                    bottom = 0.88;
                    lineXleft = "0.03 + 0.085";
                    lineYright = "0.02 + 0.085";
                    lineXleftMajor = "0.04 + 0.085";
                    lineYrightMajor = "0.02 + 0.085";
                    majorLineEach = 3;
                    numberEach = 3;
                    step = 10;
                    stepSize = "0.05";
                    align = "center";
                    scale = 1;
                    pos[] = {0.119,"0.0 + 0.065"};
                    right[] = {0.159,"0.0 + 0.065"};
                    down[] = {0.119,"0.04 + 0.065"};
                };
                class Fuel_Text
                {
                    type = "text";
                    source = "static";
                    text = "Fuel";
                    align = "right";
                    scale = 1;
                    pos[] = {{0.03,0.9},1};
                    right[] = {{0.07,0.9},1};
                    down[] = {{0.03,0.94},1};
                };
                class Fuel_Number
                {
                    type = "text";
                    source = "fuel";
                    sourceScale = 100;
                    align = "right";
                    scale = 1;
                    pos[] = {{0.1,0.9},1};
                    right[] = {{0.14,0.9},1};
                    down[] = {{0.1,0.94},1};
                };
            };
            helmetMountedDisplay = 1;
            helmetPosition[] = {-0.04,0.04,0.1};
            helmetRight[] = {0.08,0,0};
            helmetDown[] = {0,-0.08,0};
        };
        class Kimi_HUD_2
        {
            topLeft = "HUD_top_left";
            topRight = "HUD_top_right";
            bottomLeft = "HUD_bottom_left";
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.15,1,0.15,1};
            enableParallax = 0;
            class Bones
            {
                class Velocity
                {
                    type = "vector";
                    source = "velocity";
                    pos0[] = {0.5,0.5};
                    pos10[] = {0.75,0.75};
                };
                class ForwardVec1
                {
                    type = "vector";
                    source = "forward";
                    pos0[] = {0,0};
                    pos10[] = {0.25,0.25};
                };
                class ForwardVec
                {
                    type = "vector";
                    source = "forward";
                    pos0[] = {0,0};
                    pos10[] = {0.253,0.253};
                };
                class WeaponAim
                {
                    type = "vector";
                    source = "weapon";
                    pos0[] = {0.5,0.5};
                    pos10[] = {0.753,0.753};
                };
                class WeaponAim1
                {
                    type = "vector";
                    source = "weapon";
                    pos0[] = {0,0};
                    pos10[] = {0.253,0.23};
                };
                class Target
                {
                    type = "vector";
                    source = "target";
                    pos0[] = {0.5,0.5};
                    pos10[] = {0.753,0.753};
                };
                class RadarContact
                {
                    type = "fixed";
                    pos[] = {0,0};
                };
            };
            class Draw
            {
                color[] = {0.18,1,0.18};
                alpha = 1;
                condition = "on";
                class PlaneMovementCrosshair
                {
                    type = "line";
                    width = 7;
                    points[] = {{"ForwardVec1",1,"Velocity",1,{0,-0.02},1},{"ForwardVec1",1,"Velocity",1,{0.01,-0.01732},1},{"ForwardVec1",1,"Velocity",1,{0.01732,-0.01},1},{"ForwardVec1",1,"Velocity",1,{0.02,0},1},{"ForwardVec1",1,"Velocity",1,{0.01732,0.01},1},{"ForwardVec1",1,"Velocity",1,{0.01,0.01732},1},{"ForwardVec1",1,"Velocity",1,{0,0.02},1},{"ForwardVec1",1,"Velocity",1,{-0.01,0.01732},1},{"ForwardVec1",1,"Velocity",1,{-0.01732,0.01},1},{"ForwardVec1",1,"Velocity",1,{-0.02,0},1},{"ForwardVec1",1,"Velocity",1,{-0.01732,-0.01},1},{"ForwardVec1",1,"Velocity",1,{-0.01,-0.01732},1},{"ForwardVec1",1,"Velocity",1,{0,-0.02},1},{},{"ForwardVec1",1,"Velocity",1,{0.04,0},1},{"ForwardVec1",1,"Velocity",1,{0.02,0},1},{},{"ForwardVec1",1,"Velocity",1,{-0.04,0},1},{"ForwardVec1",1,"Velocity",1,{-0.02,0},1},{},{"ForwardVec1",1,"Velocity",1,{0,-0.04},1},{"ForwardVec1",1,"Velocity",1,{0,-0.02},1}};
                };
                class Gunner_AIM
                {
                    type = "line";
                    width = 7.0;
                    points[] = {{"ForwardVec",1,"WeaponAim",1,{0,-0.02},1},{"ForwardVec",1,"WeaponAim",1,{0,-0.01},1},{},{"ForwardVec",1,"WeaponAim",1,{0,-0.0225},1},{"ForwardVec",1,"WeaponAim",1,{0,-0.0325},1},{},{"ForwardVec",1,"WeaponAim",1,{0,0.01},1},{"ForwardVec",1,"WeaponAim",1,{0,0.02},1},{},{"ForwardVec",1,"WeaponAim",1,{0,0.0225},1},{"ForwardVec",1,"WeaponAim",1,{0,0.0325},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.02,0},1},{"ForwardVec",1,"WeaponAim",1,{-0.01,0},1},{},{"ForwardVec",1,"WeaponAim",1,{-0.0225,0},1},{"ForwardVec",1,"WeaponAim",1,{-0.0325,0},1},{},{"ForwardVec",1,"WeaponAim",1,{0.01,0},1},{"ForwardVec",1,"WeaponAim",1,{0.02,0},1},{},{"ForwardVec",1,"WeaponAim",1,{0.0225,0},1},{"ForwardVec",1,"WeaponAim",1,{0.0325,0},1}};
                };
                class TargetACQ
                {
                    type = "line";
                    width = 2;
                    points[] = {{"ForwardVec",1,"target",{0,-0.06},1},{"ForwardVec",1,"target",{0,-0.055},1},{},{"ForwardVec",1,"target",{0,-0.05},1},{"ForwardVec",1,"target",{0,-0.045},1},{},{"ForwardVec",1,"target",{0,-0.04},1},{"ForwardVec",1,"target",{0,-0.035},1},{},{"ForwardVec",1,"target",{0,-0.03},1},{"ForwardVec",1,"target",{0,-0.025},1},{},{"ForwardVec",1,"target",{0,-0.02},1},{"ForwardVec",1,"target",{0,-0.015},1},{},{"ForwardVec",1,"target",{0,-0.01},1},{"ForwardVec",1,"target",{0,-0.005},1},{},{"ForwardVec",1,"target",{0,0},1},{"ForwardVec",1,"target",{0,0},1},{},{"ForwardVec",1,"target",{0,0.06},1},{"ForwardVec",1,"target",{0,0.055},1},{},{"ForwardVec",1,"target",{0,0.05},1},{"ForwardVec",1,"target",{0,0.045},1},{},{"ForwardVec",1,"target",{0,0.04},1},{"ForwardVec",1,"target",{0,0.035},1},{},{"ForwardVec",1,"target",{0,0.03},1},{"ForwardVec",1,"target",{0,0.025},1},{},{"ForwardVec",1,"target",{0,0.02},1},{"ForwardVec",1,"target",{0,0.015},1},{},{"ForwardVec",1,"target",{0,0.01},1},{"ForwardVec",1,"target",{0,0.005},1},{},{"ForwardVec",1,"target",{-0.06,0},1},{"ForwardVec",1,"target",{-0.055,0},1},{},{"ForwardVec",1,"target",{-0.05,0},1},{"ForwardVec",1,"target",{-0.045,0},1},{},{"ForwardVec",1,"target",{-0.04,0},1},{"ForwardVec",1,"target",{-0.035,0},1},{},{"ForwardVec",1,"target",{-0.03,0},1},{"ForwardVec",1,"target",{-0.025,0},1},{},{"ForwardVec",1,"target",{-0.02,0},1},{"ForwardVec",1,"target",{-0.015,0},1},{},{"ForwardVec",1,"target",{-0.01,0},1},{"ForwardVec",1,"target",{-0.005,0},1},{},{"ForwardVec",1,"target",{0.06,0},1},{"ForwardVec",1,"target",{0.055,0},1},{},{"ForwardVec",1,"target",{0.05,0},1},{"ForwardVec",1,"target",{0.045,0},1},{},{"ForwardVec",1,"target",{0.04,0},1},{"ForwardVec",1,"target",{0.035,0},1},{},{"ForwardVec",1,"target",{0.03,0},1},{"ForwardVec",1,"target",{0.025,0},1},{},{"ForwardVec",1,"target",{0.02,0},1},{"ForwardVec",1,"target",{0.015,0},1},{},{"ForwardVec",1,"target",{0.01,0},1},{"ForwardVec",1,"target",{0.005,0},1},{}};
                };
                class AC_Centerline
                {
                    type = "group";
                    condition = "on";
                    class AC_Cross
                    {
                        type = "line";
                        width = 4;
                        points[] = {{"ForwardVec",1,{" -0.006 + 0.5","0 + 0.5"},1},{"ForwardVec",1,{" 0.006 + 0.5","0 + 0.5"},1},{},{"ForwardVec",1,{" -0.0 + 0.5","0.006 + 0.5"},1},{"ForwardVec",1,{" 0.0 + 0.5","-0.006 + 0.5"},1}};
                    };
                };
            };
            helmetMountedDisplay = 1;
            helmetPosition[] = {-0.035,0.035,0.1};
            helmetRight[] = {0.07,0,0};
            helmetDown[] = {0,-0.07,0};
        };
    };
};

class GVAR(MH_60S_2_pylon) : GVAR(MH60S_MEV)
{
    displayName = "MH-60S DAP (2 Stores)";
    scope = 2;
    scopeCurator = 2;
    
    attendant = 0;
    class components : components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent
                {
                    aimDown = 0;
                    allowsMarking = 1;
                    angleRangeHorizontal = 30;
                    angleRangeVertical = 30;
                    animDirection = "CopilotTurret";
                    color[] = {1,0,0,1};
                    componentType = "IRSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxFogSeeThrough = 0.995;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 1e+10;
                    maxTrackableSpeed = 110;
                    minSpeedThreshold = 0;
                    minTrackableATL = -1e+10;
                    minTrackableSpeed = -1e+10;
                    typeRecognitionDistance = 1500;

                    class AirTarget
                    {
                        maxRange = 2000;
                        minRange = 0;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                        maxRange = 2000;
                        minRange = 0;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                };
                class LaserSensorComponent
                {
                    aimDown = 0;
                    allowsMarking = 1;
                    angleRangeHorizontal = 180;
                    angleRangeVertical = 180;
                    animDirection = "";
                    color[] = {1,1,1,0};
                    componentType = "LaserSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 1e+10;
                    maxTrackableSpeed = 1e+10;
                    minSpeedThreshold = 0;
                    minTrackableATL = -1e+10;
                    minTrackableSpeed = -1e+10;
                    typeRecognitionDistance = 0;

                    class AirTarget
                    {
                        maxRange = 6000;
                        minRange = 6000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        maxRange = 6000;
                        minRange = 6000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                };
                class NVSensorComponent
                {
                    aimDown = 0;
                    allowsMarking = 1;
                    angleRangeHorizontal = 30;
                    angleRangeVertical = 30;
                    animDirection = "CopilotTurret";
                    color[] = {1,1,1,0};
                    componentType = "NVSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 1e+10;
                    maxTrackableSpeed = 110;
                    minSpeedThreshold = 0;
                    minTrackableATL = -1e+10;
                    minTrackableSpeed = -1e+10;
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
                class ActiveRadarSensorComponent
                {
                    aimDown = 10;
                    allowsMarking = 1;
                    angleRangeHorizontal = 120;
                    angleRangeVertical = 120;
                    animDirection = "";
                    color[] = {0,1,1,1};
                    componentType = "ActiveRadarSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 1e+10;
                    maxTrackableSpeed = 1e+10;
                    minSpeedThreshold = 0;
                    minTrackableATL = -1e+10;
                    minTrackableSpeed = -1e+10;
                    typeRecognitionDistance = 8000;

                    class AirTarget
                    {
                        maxRange = 12000;
                        minRange = 12000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        maxRange = 12000;
                        minRange = 12000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                };
                class PassiveRadarSensorComponent
                {
                    aimDown = 0;
                    allowsMarking = 0;
                    angleRangeHorizontal = 360;
                    angleRangeVertical = 360;
                    animDirection = "";
                    color[] = {0.5,1,0.5,0.5};
                    componentType = "PassiveRadarSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 1e+10;
                    maxTrackableSpeed = 1e+10;
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
                class VisualSensorComponent
                {
                    aimDown = 0;
                    allowsMarking = 1;
                    angleRangeHorizontal = 30;
                    angleRangeVertical = 30;
                    animDirection = "CopilotTurret";
                    color[] = {1,1,0.5,0.8};
                    componentType = "VisualSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxFogSeeThrough = 0.94;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 1e+10;
                    maxTrackableSpeed = 110;
                    minSpeedThreshold = 0;
                    minTrackableATL = -1e+10;
                    minTrackableSpeed = -1e+10;
                    nightRangeCoef = 0;
                    typeRecognitionDistance = 1250;
                    class AirTarget
                    {
                        maxRange = 1000;
                        minRange = 0;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                        maxRange = 1000;
                        minRange = 0;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                };
            };
        };
    
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
                    hardpoints[] = {"B_FUELTANK_HELI","UNI_SCALPEL","B_ASRRAM_EJECTOR","DAR","DAGR","B_SHRIEKER","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
                    priority = 4;
                    turret[] = {};
                    UIposition[] = {0.08,0.4};
                };
                class pylons3: pylons3
                {
                    attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                    bay = -1;
                    hardpoints[] = {"B_FUELTANK_HELI","UNI_SCALPEL","B_ASRRAM_EJECTOR","DAR","DAGR","B_SHRIEKER","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
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
};

class GVAR(MH_60S_4_pylon) : GVAR(MH_60S_2_pylon)
{
    displayName = "MH-60S DAP (4 Stores)";
    scope = 2;
    scopeCurator = 2;
    class components : components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent
                {
                    aimDown = 0;
                    allowsMarking = 1;
                    angleRangeHorizontal = 30;
                    angleRangeVertical = 30;
                    animDirection = "CopilotTurret";
                    color[] = {1,0,0,1};
                    componentType = "IRSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxFogSeeThrough = 0.995;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 1e+10;
                    maxTrackableSpeed = 110;
                    minSpeedThreshold = 0;
                    minTrackableATL = -1e+10;
                    minTrackableSpeed = -1e+10;
                    typeRecognitionDistance = 1500;

                    class AirTarget
                    {
                        maxRange = 2000;
                        minRange = 0;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                        maxRange = 2000;
                        minRange = 0;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                };
                class LaserSensorComponent
                {
                    aimDown = 0;
                    allowsMarking = 1;
                    angleRangeHorizontal = 180;
                    angleRangeVertical = 180;
                    animDirection = "";
                    color[] = {1,1,1,0};
                    componentType = "LaserSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 1e+10;
                    maxTrackableSpeed = 1e+10;
                    minSpeedThreshold = 0;
                    minTrackableATL = -1e+10;
                    minTrackableSpeed = -1e+10;
                    typeRecognitionDistance = 0;

                    class AirTarget
                    {
                        maxRange = 6000;
                        minRange = 6000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        maxRange = 6000;
                        minRange = 6000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                };
                class NVSensorComponent
                {
                    aimDown = 0;
                    allowsMarking = 1;
                    angleRangeHorizontal = 30;
                    angleRangeVertical = 30;
                    animDirection = "CopilotTurret";
                    color[] = {1,1,1,0};
                    componentType = "NVSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 1e+10;
                    maxTrackableSpeed = 110;
                    minSpeedThreshold = 0;
                    minTrackableATL = -1e+10;
                    minTrackableSpeed = -1e+10;
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
                class ActiveSensorComponent
                {
                    aimDown = 0;
                    allowsMarking = 0;
                    angleRangeHorizontal = 120;
                    angleRangeVertical = 120;
                    animDirection = "";
                    color[] = {1,0.5,0.5,0.5};
                    componentType = "ActiveRadarSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 1e+10;
                    maxTrackableSpeed = 1e+10;
                    minSpeedThreshold = 0;
                    minTrackableATL = -1e+10;
                    minTrackableSpeed = -1e+10;
                    typeRecognitionDistance = 8000;

                    class AirTarget
                    {
                        maxRange = 12000;
                        minRange = 12000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        maxRange = 12000;
                        minRange = 12000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                };
                class PassiveSensorComponent
                {
                    aimDown = 0;
                    allowsMarking = 0;
                    angleRangeHorizontal = 360;
                    angleRangeVertical = 360;
                    animDirection = "";
                    color[] = {0.5,1,0.5,0.5};
                    componentType = "PassiveRadarSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 1e+10;
                    maxTrackableSpeed = 1e+10;
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
                class VisualSensorComponent
                {
                    aimDown = 0;
                    allowsMarking = 1;
                    angleRangeHorizontal = 30;
                    angleRangeVertical = 30;
                    animDirection = "CopilotTurret";
                    color[] = {1,1,0.5,0.8};
                    componentType = "VisualSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxFogSeeThrough = 0.94;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 1e+10;
                    maxTrackableSpeed = 110;
                    minSpeedThreshold = 0;
                    minTrackableATL = -1e+10;
                    minTrackableSpeed = -1e+10;
                    nightRangeCoef = 0;
                    typeRecognitionDistance = 1250;
                    class AirTarget
                    {
                        maxRange = 1000;
                        minRange = 0;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                        maxRange = 1000;
                        minRange = 0;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                };
            };
        };
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
                    hardpoints[] = {"B_FUELTANK_HELI","UNI_SCALPEL","B_ASRRAM_EJECTOR","DAR","DAGR","B_SHRIEKER","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
                    priority = 5;
                    turret[] = {};
                    UIposition[] = {0.06,0.35};
                };
                class pylons2: pylons2
                {
                    attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                    bay = -1;
                    hardpoints[] = {"B_FUELTANK_HELI","UNI_SCALPEL","B_ASRRAM_EJECTOR","DAR","DAGR","B_SHRIEKER","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
                    priority = 4;
                    turret[] = {};
                    UIposition[] = {0.08,0.4};
                };
                class pylons3: pylons3
                {
                    attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                    bay = -1;
                    hardpoints[] = {"B_FUELTANK_HELI","UNI_SCALPEL","B_ASRRAM_EJECTOR","DAR","DAGR","B_SHRIEKER","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
                    mirroredMissilePos = 2;
                    priority = 4;
                    turret[] = {};
                    UIposition[] = {0.57,0.4};
                };
                class pylons4: pylons4
                {
                    attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                    bay = -1;
                    hardpoints[] = {"B_FUELTANK_HELI","UNI_SCALPEL","B_ASRRAM_EJECTOR","DAR","DAGR","B_SHRIEKER","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_UH60"};
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
};