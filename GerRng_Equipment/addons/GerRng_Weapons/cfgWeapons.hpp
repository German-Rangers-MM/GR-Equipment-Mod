class cfgWeapons
{
  class Launcher;
  class Launcher_Base_F: Launcher {
    class WeaponSlotsInfo;
  };
/*  class B_HMG_02_F;
  class B_HMG_02_high_F;
  class ace_csw_staticHMGCarry: Launcher_Base_F{
    class ADDON {
            type = "weapon";
            deployTime = 7;
            pickupTime = 10;
            class assembleTo {
                ace_csw_m3Tripod = "B_HMG_02_high_F";
                ace_csw_m3TripodLow = "B_HMG_02_F";
            };
        };
  };
  class ace_csw_staticM2shieldcarry: ace_csw_staticHMGCarry{
    scope = 1;
  };
  class GerRng_HMG_M2_carry: ace_csw_staticHMGCarry{
    displayName = "[CSW] M2";
    scope = 2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
      // We use mass in pounds * 10
      mass = 380; // 38 lb / 17.2 kg
    };
    class ADDON: ADDON {
      class assembleTo {
        ace_csw_m3Tripod = "GerRng_HMG_M2_high";
        ace_csw_m3TripodLow = "GerRng_HMG_M2";
      };
    };
  };



  class GerRng_HMG_M2_ScSh_carry: ace_csw_staticM2shieldcarry{
    displayName = "[CSW] M2 Schild und Optik";
    scope = 2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
      // We use mass in pounds * 10
      mass = 440; // 44 lb / 19.9 kg
    };
    class ADDON: ADDON {
      class assembleTo {
        ace_csw_m3Tripod = "GerRng_HMG_M2_high_SS";
        ace_csw_m3TripodLow = "GerRng_HMG_M2_SS";
      };
    };
  };
  class GerRng_csw_staticM2scarry: ace_csw_staticM2shieldcarry{
    displayName = "[CSW] M2 Optik";
    scope = 2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
      // We use mass in pounds * 10
      mass = 390; // 39 lb / 17.6 kg
    };
    class ADDON: ADDON {
      class assembleTo {
        ace_csw_m3Tripod = "GerRng_HMG_M2_high_S"
        ace_csw_m3TripodLow = "GerRng_HMG_M2_S";
      };
    };
  };
  class GerRng_HMG_M2_Sh_carry: ace_csw_staticM2shieldcarry{
    displayName = "[CSW] M2 Schild";
    scope = 2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
      // We use mass in pounds * 10
      mass = 400; // 40 lb / 18.1 kg
    };
    class ADDON: ADDON {
      class assembleTo {
        ace_csw_m3Tripod = "GerRng_HMG_M2_high_Sh";
        ace_csw_m3TripodLow = "GerRng_HMG_M2_Sh";
      };
    };
  };
*/
/*class launch_O_Vorona_brown_F;
class GerRng_launch_O_Vorona_brown_F: launch_O_Vorona_brown_F{
  maxRange = 2000;
};
*/
class CUP_MK19_carry:Launcher_Base_F{
  class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class GerRng_GMG_Mk19: CUP_MK19_carry {
    displayName = "[CSW] Mk19 GerRng";
    scope = 2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 490; // 49 lb / 22.2 kg
    };
};

  class Rifle_Base_F;
  class CUP_arifle_G36_Base: Rifle_Base_F
	{
  	author = "jan";
		magazineWell[]= { "GerRng_G36_MagWell"};
	};
  class CUP_arifle_G36K_KSK;
	class GerRng_arifle_G36KA4 : CUP_arifle_G36K_KSK
	{
		author = "jan";
		displayName = "G36KA4";
	};
  class CUP_arifle_G36K_KSK_camo;
	class GerRng_arifle_G36KA4_camo : CUP_arifle_G36K_KSK_camo
	{
		author = "jan";
		displayName = "G36KA4 Desert";
	};
  class CUP_arifle_G36K_KSK_VFG;
	class GerRng_arifle_G36KA4_VFG : CUP_arifle_G36K_KSK_VFG
	{
		author = "jan";
		displayName = "G36KA4 VFG";
	};
	class GerRng_arifle_G36KA4_VFG_camo : CUP_arifle_G36K_KSK
	{
		author = "jan";
		displayName = "G36KA4 VFG Desert";
	};
  class CUP_arifle_G36K_KSK_AFG;
	class GerRng_arifle_G36KA4_AFG : CUP_arifle_G36K_KSK_AFG
	{
		author = "jan";
		displayName = "G36KA4 AFG";
	};
  class CUP_arifle_G36K_KSK_AFG_camo;
	class GerRng_arifle_G36KA4_AFG_camo : CUP_arifle_G36K_KSK_AFG_camo
	{
		author = "jan";
		displayName = "G36KA4 AFG Desert";
	};
};
