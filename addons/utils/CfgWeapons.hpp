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
};
