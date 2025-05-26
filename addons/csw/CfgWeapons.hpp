class CfgWeapons {
	class Launcher;
	class Launcher_Base_F: Launcher 
	{
		class WeaponSlotsInfo;
	};

	class GVAR(M3M_carry): Launcher_Base_F 
	{
		scope = 2;
		displayName = "[CSW] M3M Gun-Bag";
		model = QACEPATHTOF(apl,ACE_CSW_Bag.p3d);
		modes[] = {};
		picture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\data\ui\icomap_M2_ca.paa";
		class ACE_CSW 
		{
			type = "weapon";
			deployTime = 4;
			pickupTime = 4;
			class assembleTo 
			{
				ACEGVAR(csw,m3Tripod) = QGVAR(HMG_M3M_high);
				ACEGVAR(csw,m3TripodLow) = QGVAR(HMG_M3M);
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 840;
			class MuzzleSlot 
			{
				iconScale = 0.1;
			};
		};
	};
	
	class GVAR(M3M_carry_Scope): Launcher_Base_F {
		scope = 2;
		displayName = "[CSW] M3M Gun-Bag (Scope)";
		model = QACEPATHTOF(apl,ACE_CSW_Bag.p3d);
		modes[] = {};
		picture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\data\ui\icomap_M2_ca.paa";
		class ACE_CSW 
		{
			type = "weapon";
			deployTime = 4;
			pickupTime = 4;
			class assembleTo 
			{
				ACEGVAR(csw,m3Tripod) = QGVAR(HMG_M3M_high_Scope);
				ACEGVAR(csw,m3TripodLow) = QGVAR(HMG_M3M_Scope);
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 840;
			class MuzzleSlot 
			{
				iconScale = 0.1;
			};
		};
	};
	
	class GVAR(M3M_carry_ScopeShield): Launcher_Base_F
	{
		scope = 2;
		displayName = "[CSW] M3M Gun-Bag (Scope + Shield)";
		model = QACEPATHTOF(apl,ACE_CSW_Bag.p3d);
		modes[] = {};
		picture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\data\ui\icomap_M2_ca.paa";
		class ACE_CSW {
			type = "weapon";
			deployTime = 4;
			pickupTime = 4;
			class assembleTo 
			{
				ACEGVAR(csw,m3Tripod) = QGVAR(HMG_M3M_high_ScopeShield);
				ACEGVAR(csw,m3TripodLow) = QGVAR(HMG_M3M_ScopeShield);
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 840;
			class MuzzleSlot 
			{
				iconScale = 0.1;
			};
		};
	};
	
	class GVAR(M3M_carry_Shield): Launcher_Base_F {
		scope = 2;
		displayName = "[CSW] M3M Gun-Bag (Shield)";
		model = QACEPATHTOF(apl,ACE_CSW_Bag.p3d);
		modes[] = {};
		picture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\data\ui\icomap_M2_ca.paa";
		class ACE_CSW
		{
			type = "weapon";
			deployTime = 4;
			pickupTime = 4;
			class assembleTo 
			{
				ACEGVAR(csw,m3Tripod) = QGVAR(HMG_M3M_high_Shield);
				ACEGVAR(csw,m3TripodLow) = QGVAR(HMG_M3M_Shield);
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 840;
			class MuzzleSlot
			{
				iconScale = 0.1;
			};
		};
	};

	class GVAR(GraMaWa_carry): Launcher_Base_F 
	{
		scope = 2;
		displayName = "[CSW] GraMaWa Gun-Bag";
		model = QACEPATHTOF(apl,ACE_CSW_Bag.p3d);
				modes[] = {};
		picture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\M2\data\ui\icomap_M2_ca.paa";
		class ACE_CSW 
		{
			type = "weapon";
			deployTime = 4;
			pickupTime = 4;
			class assembleTo {
				ACEGVAR(csw,m3TripodLow) = QGVAR(GMG_GraMaWa);
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 840;
			class MuzzleSlot {
				iconScale = 0.1;
			};
		};
	};
	class CUP_Vgmg_MK19_veh;
	class GVAR(Vgmg_GraMaWa_veh): CUP_Vgmg_MK19_veh {
		displayName = "GraMaWa 40mm";
	};

	class HMG_M2_Mounted;
	class GVAR(HMG_M3M_Mounted): HMG_M2_Mounted {
		displayName = "M3M";
	};
	CREATE_CSW_PROXY(HMG_M3M_Static);
};