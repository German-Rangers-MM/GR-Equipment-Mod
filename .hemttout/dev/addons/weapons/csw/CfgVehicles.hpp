class CfgVehicles {
  class B_G_HMG_02_high_F;
  class GVAR(HMG_M2_high_base): B_G_HMG_02_high_F{
    class Turrets: Turrets{
      class MainTurret: MainTurret{
        weapons [] = {QGVAR(HMG_M2)};
        Magazines [] = {"100Rnd_127x99_mag","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Green","100Rnd_127x99_mag_Tracer_Yellow",QGVAR(150Rnd_127x99_mag_v),QGVAR(150Rnd_127x99_mag_red_v),QGVAR(200Rnd_127x99_mag_v),QGVAR(200Rnd_127x99_mag_red_v)};
      };
    };
  };
  class B_G_HMG_02_F;
  class GVAR(HMG_M2_base): B_G_HMG_02_F{
    class Turrets: Turrets{
      class MainTurret: MainTurret{
        weapons [] = {QGVAR(HMG_M2)};
        Magazines [] = {"100Rnd_127x99_mag","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Green","100Rnd_127x99_mag_Tracer_Yellow",QGVAR(150Rnd_127x99_mag_v),QGVAR(150Rnd_127x99_mag_red_v),QGVAR(200Rnd_127x99_mag_v),QGVAR(200Rnd_127x99_mag_red_v)};
      };
    };
  };
  class GVAR(HMG_M2_high): GVAR(HMG_M2_high_base)
  {
    class ace_csw{
      dissasembleWeapon = "";
      dissasembleTurret = "ace_csw_m3Tripod";
    };
    animationList[] = {"Hide_Shield",1,"Hide_Rail",1};
  };

  class GVAR(HMG_M2): GVAR(HMG_M2_base)
  {
    class ace_csw{
      dissasembleWeapon = QGVAR(HMG_M2_carry);
      dissasembleTurret = "ace_csw_m3TripodLow";
    };
    animationList[] = {"Hide_Shield",1,"Hide_Rail",1};
  };

  class GVAR(HMG_M2_high_ScSh): GVAR(HMG_M2_high_base)
  {
    class ace_csw{
      dissasembleWeapon = QGVAR(HMG_M2_ScSh_carry);
      dissasembleTurret = "ace_csw_m3Tripod";
    };
    animationList[] = {"Hide_Shield",0,"Hide_Rail",0};
  };

  class GVAR(HMG_M2_ScSh): GVAR(HMG_M2_base)
  {
    class ace_csw{
      dissasembleWeapon = QGVAR(HMG_M2_ScSh_carry);
      dissasembleTurret = "ace_csw_m3TripodLow";
    };
    animationList[] = {"Hide_Shield",0,"Hide_Rail",0};
  };

  class GVAR(HMG_M2_high_Sc): GVAR(HMG_M2_high_base)
  {
    class ace_csw{
      dissasembleWeapon = QGVAR(HMG_M2_Sc_carry);
      dissasembleTurret = "ace_csw_m3Tripod";
    };
      animationList[] = {"Hide_Shield",1,"Hide_Rail",0};
  };

  class GVAR(HMG_M2_Sc): GVAR(HMG_M2_base)
  {
    class ace_csw{
      dissasembleWeapon = QGVAR(HMG_M2_Sc_carry);
      dissasembleTurret = "ace_csw_m3TripodLow";
    };
    animationList[] = {"Hide_Shield",1,"Hide_Rail",0};
  };

  class GVAR(HMG_M2_high_Sh): GVAR(HMG_M2_high_base)
  {
    class ace_csw{
      dissasembleWeapon = QGVAR(HMG_M2_Sh_carry);
      dissasembleTurret = "ace_csw_m3Tripod";
    };
    animationList[] = {"Hide_Shield",0,"Hide_Rail",1};
  };

  class GVAR(HMG_M2_Sh): GVAR(HMG_M2_base)
  {
    class ace_csw{
      dissasembleWeapon = QGVAR(HMG_M2_Sh_carry);
      dissasembleTurret = "ace_csw_m3TripodLow";
    };
    animationList[] = {"Hide_Shield",0,"Hide_Rail",1};
  };
};