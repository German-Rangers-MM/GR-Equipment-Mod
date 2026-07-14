

class SMG_05_F
{
    class WeaponSlotsInfo;
};

class CfgWeapons{
	class Rifle_Base_F;
	class CUP_arifle_G36_Base: Rifle_Base_F
	{
		author = "jan";
		magazineWell[]= {QGVAR(G36_MagWell)};
	};

	class CUP_arifle_G36K_KSK;
	class GVAR(G36KA4) : CUP_arifle_G36K_KSK
	{
		author = "jan";
		displayName = "G36KA4";
	};

	class CUP_arifle_G36K_KSK_camo;
	class GVAR(G36KA4_camo) : CUP_arifle_G36K_KSK_camo
	{
		author = "jan";
		displayName = "G36KA4 Desert";
	};

	class CUP_arifle_G36K_KSK_VFG;
	class GVAR(G36KA4_VFG) : CUP_arifle_G36K_KSK_VFG
	{
		author = "jan";
		displayName = "G36KA4 VFG";
	};

	class GVAR(G36KA4_VFG_camo) : CUP_arifle_G36K_KSK
	{
		author = "jan";
		displayName = "G36KA4 VFG Desert";
	};

	class CUP_arifle_G36K_KSK_AFG;
	class GVAR(G36KA4_AFG) : CUP_arifle_G36K_KSK_AFG
	{
		author = "jan";
		displayName = "G36KA4 AFG";
	};

	class CUP_arifle_G36K_KSK_AFG_camo;
	class GVAR(G36KA4_AFG_camo) : CUP_arifle_G36K_KSK_AFG_camo
	{
		author = "jan";
		displayName = "G36KA4 AFG Desert";
	};

    class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};

    class GVAR(PzF3): Launcher_Base_F
    {
        author = "Cookie";
        displayName = "Panzerfaust 3";
        class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 110;
			allowedSlots[] = {901};
		};
		aimTransitionSpeed = 0.5;
		scope = 2;
        scopeArsenal = 2;
		model = "\CUP\Weapons\CUP_Weapons_Panzerfaust\CUP_PzFst3.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_Panzerfaust\data\anim\Pzf3.rtm"};
		magazines[] = {
            QGVAR(PTF3IT_M),
            QGVAR(PTFHE_M),
            QGVAR(PTFHC_M)
        };
        magazineWell[] = {QGVAR(PzF3_MagWell)};
		AGM_Backblast_Angle = 45;
		AGM_Backblast_Range = 20;
		AGM_Backblast_Damage = 1;
		sounds[] = {"StandardSound"};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32.wss",1,1,10};
		drySound[] = {"CUP\Weapons\CUP_Weapons_Panzerfaust\data\sfx\Dry.wss",1,1,35};
		soundFly[] = {"CUP\Weapons\CUP_Weapons_Panzerfaust\data\sfx\Fly.wss",0.31622776,1.5,900};
		weaponSoundEffect = "DefaultRifle";
		jsrs_soundeffect = "JSRS2_Distance_Effects_rpg";
		reloadAction = "GestureReloadRPG7";
		magazineReloadSwitchPhase = 0.4;
		magazineReloadTime = 0.1;
        picture = "\CUP\Weapons\CUP_Weapons_Panzerfaust\data\ui\icon_launch_pzf3_x_ca.paa";
		recoil = "recoil_rpg";
		class Library
		{
			libTextDesc = "$STR_CUP_lib_PzF3";
		};
		descriptionShort = "Panzerfaust 3";
		weaponInfoType = "RscWeaponEmpty";
		modelOptics = "\CUP\Weapons\CUP_Weapons_Panzerfaust\CUP_PzF_reticle.p3d";
		class OpticsModes
		{
			class PzFScope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				opticsZoomMin = "2.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomMax = "2.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomInit = "2.5 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				discreteInitIndex = 0;
				memoryPointCamera = "eye";
				visionMode[] = {"Normal","NVG"};
				cameraDir = "eye_dir";
			};
		};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",1.99526,1,1500};
				soundBegin[] = {"begin1",1};
				soundSetShot[] = {"CUP_RPG7_Closure_SoundSet","CUP_RPG7_Shot_SoundSet","CUP_mmg1_Tail_SoundSet"};
			};
			aiRateOfFire = 7;
			aiRateOfFireDistance = 500;
			minRange = 10;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};

    };
};
