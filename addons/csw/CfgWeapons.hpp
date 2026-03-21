class CfgWeapons {
	class Launcher;
	class Launcher_Base_F: Launcher 
	{
		class WeaponSlotsInfo;
	};

	class GVAR(M3M_carry): Launcher_Base_F 
	{
		scope = 2;
		displayName = CSTRING(m3m_gunbag_displayName);
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
		displayName = CSTRING(m3mScope_gunbag_displayName);
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
		displayName = CSTRING(m3mScopeShield_gunbag_displayName);
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
		displayName = CSTRING(m3mShield_gunbag_displayName);
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
		displayName = CSTRING(graMaWa_gunbag_displayName);
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
        magazineReloadTime = 0.5;
	};

	class HMG_M2_Mounted;
	class GVAR(HMG_M3M_Mounted): HMG_M2_Mounted {
		displayName = "M3M";
        magazineReloadTime = 0.5;
		magazines[] = {"100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","ger_100Rnd_127x99_mag_red","ger_150Rnd_127x99_mag_red","ger_200Rnd_127x99_mag_red","ger_100Rnd_127x99_mag","ger_150Rnd_127x99_mag","ger_200Rnd_127x99_mag","ger_100Rnd_127x99_mag_slap","ger_150Rnd_127x99_mag_slap","ger_200Rnd_127x99_mag_slap","ger_100Rnd_127x99_mag_slap_tracer_red","ger_150Rnd_127x99_mag_slap_tracer_red","ger_200Rnd_127x99_mag_slap_tracer_red"}; 
	};
};
