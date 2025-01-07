class cfgAmmo
{
  class MissileBase;
  class M_Titan_AA: MissileBase{
    cmImunity = 0.97;
    thrustTime = 8;
  };
  class MAA_M_GMM_HE;
  class GerRng_GMM_HE: MAA_M_GMM_HE{
        maxSpeed = 275;
    initTime = 1.5;
    thrust = 35;
    thrustTime = 2.5;
    timeToLive = 40;
    manueuvrability = 25;
    indirectHitRange = 15;
    indirectHit = 50;
    sideAirFriction = 1.5;
  };
  class MAA_M_GMM_HEAT;
 class GerRng_GMM_HEAT: MAA_M_GMM_HEAT{
      maxSpeed = 275;
   initTime = 1.5;
   thrust = 35;
   thrustTime = 2.5;
   timeToLive = 40;
   manueuvrability = 25;
   sideAirFriction = 1.5;
  };
  class MAA_M_GMM_MT;
  class GerRng_GMM_MT: MAA_M_GMM_MT{
        maxSpeed = 275;
    initTime = 1.5;
    thrust = 35;
    thrustTime = 2.5;
    timeToLive = 40;
    manueuvrability = 25;
    indirectHitRange = 10;
    indirectHit = 40;
    sideAirFriction = 1.5;
  };
  class SmokeShell;
  class G_40mm_Smoke: SmokeShell {
    simulation = "shotSmoke";
    deflectionSlowDown = 0;
  };
};
