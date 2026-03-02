class CfgWeapons {
	class Launcher;
	class Launcher_Base_F: Launcher 
	{
		class WeaponSlotsInfo;
	};
	class GVAR(remote_designator_w): Launcher_Base_F {
        scope = 2;
		author = "Cookie";
		model = QACEPATHTOF(apl,ACE_CSW_Bag.p3d);
		modes[] = {};
		displayname = "Remote Designator WDL [NATO]";
		descriptionShort = "Remote Designator WDL [NATO]";
		ACE_isTool = 1;
		picture = "\A3\Static_F_Mark\Designator_01\Data\UI\Designator_01_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot 
			{
				iconScale = 0.1;
			};
		};
	};


	class GVAR(remote_designator_d): GVAR(remote_designator_w) {
		displayname = "Remote Designator DES [NATO]";
		descriptionShort = "Remote Designator DES [NATO]";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot 
			{
				iconScale = 0.1;
			};
		};
	};

	class Laserdesignator;
	class GVAR(Laserdesignator_snd): Laserdesignator
	{
		displayName = "Laser Designator (Sand) [1x-25x]";
		descriptionShort = "Magnification: 1x-25x";
		opticsZoomInit = 0.25;
		opticsZoomMax = 0.25;
		opticsZoomMin = 0.01;
		modelOptics = "\A3\Weapons_F_Mark\Reticle\optics_laserDesignator_02.p3d";
		weaponInfoType = "RscOptics_LaserDesignator_02";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0,1};
	};
	class GVAR(Laserdesignator_khk): GVAR(Laserdesignator_snd)
	{
		displayName = "Laser Designator (Khaki) [1x-25x]";
		model = "\A3\Weapons_F\Binocular\laserdesignator_01_khk_f.p3d";
		picture = "\A3\Weapons_F_Exp\Binocular\Data\UI\icon_Laserdesignator_01_khk_x_ca.paa";
	};
	class GVAR(Laserdesignator_olv): GVAR(Laserdesignator_snd)
	{
		displayName = "Laser Designator (Olive) [1x-25x]";
		model = "\A3\Weapons_F\Binocular\laserdesignator_03_f.p3d";
		picture = "\A3\Weapons_F_Mark\Data\UI\gear_laserdesignator_03_X_ca.paa";
	};
};
