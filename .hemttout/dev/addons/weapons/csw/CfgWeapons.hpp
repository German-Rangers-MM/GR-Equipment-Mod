class CfgWeapons {
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class HMG_M2_Mounted;
	class GVAR(HMG_M2): HMG_M2_Mounted
	{
		magazineReloadTime = 0.5;
		Magazines [] = {"100Rnd_127x99_mag","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Green","100Rnd_127x99_mag_Tracer_Yellow",QGVAR(150Rnd_127x99_mag_v),QGVAR(150Rnd_127x99_mag_red_v),QGVAR(200Rnd_127x99_mag_v),QGVAR(200Rnd_127x99_mag_red_v)};
	};


	class ace_csw_staticHMGCarry: Launcher_Base_F
	{
		class ADDON
		{
			type = "weapon";
			deployTime = 7;
			pickupTime = 10;
			class assembleTo
			{
				ace_csw_m3Tripod = "B_HMG_02_high_F";
				ace_csw_m3TripodLow = "B_HMG_02_F";
			};
		};
	};

	class ace_csw_staticM2shieldcarry: ace_csw_staticHMGCarry
	{
		scope = 1;
	};


	class GVAR(HMG_M2_carry): ace_csw_staticHMGCarry
	{
		displayName = "[CSW] M2";
		scope = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			// We use mass in pounds * 10
			mass = 380; // 38 lb / 17.2 kg
		};
		class ADDON: ADDON
		{
			class assembleTo
			{
				ace_csw_m3Tripod = "GVAR(HMG_M2_high)";
				ace_csw_m3TripodLow = "GVAR(HMG_M2)";
			};
		};
	};


	class GVAR(HMG_M2_ScSh_carry): ace_csw_staticM2shieldcarry
	{
		displayName = "[CSW] M2 Schild und Optik";
		scope = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			// We use mass in pounds * 10
			mass = 440; // 44 lb / 19.9 kg
		};
		class ADDON: ADDON
		{
			class assembleTo {
			ace_csw_m3Tripod = "GVAR(HMG_M2_high_SS)";
			ace_csw_m3TripodLow = "GVAR(HMG_M2_SS)";
			};
		};
	};


	class GVAR(HMG_M2_Sc_carry): ace_csw_staticM2shieldcarry
	{
		displayName = "[CSW] M2 Optik";
		scope = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			// We use mass in pounds * 10
			mass = 390; // 39 lb / 17.6 kg
		};
		class ADDON: ADDON
		{
			class assembleTo {
				ace_csw_m3Tripod = "GVAR(HMG_M2_high_S)";
				ace_csw_m3TripodLow = "GVAR(HMG_M2_S)";
			};
		};
	};


	class GVAR(HMG_M2_Sh_carry): ace_csw_staticM2shieldcarry
	{
		displayName = "[CSW] M2 Schild";
		scope = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			// We use mass in pounds * 10
			mass = 400; // 40 lb / 18.1 kg
		};
		class ADDON: ADDON
		{
			class assembleTo
			{
				ace_csw_m3Tripod = "GVAR(HMG_M2_high_Sh)";
				ace_csw_m3TripodLow = "GVAR(HMG_M2_Sh)";
			};
		};
	};
};