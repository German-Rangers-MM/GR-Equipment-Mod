class CfgAmmo
{
  class M_Titan_AA;
  class GVAR(Titan_AA): M_Titan_AA
	{
    	cmImunity = 0.97;
    	thrustTime = 8;
  };

  class MAA_M_GMM_HE;
  class GVAR(GMM_HE): MAA_M_GMM_HE
	{
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
 	class GVAR(GMM_HEAT): MAA_M_GMM_HEAT
	{
      	maxSpeed = 275;
   	initTime = 1.5;
   	thrust = 35;
   	thrustTime = 2.5;
   	timeToLive = 40;
   	manueuvrability = 25;
   	sideAirFriction = 1.5;
	};

  class MAA_M_GMM_MT;
  class GVAR(GMM_MT): MAA_M_GMM_MT
	{
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
	class G_40mm_Smoke: SmokeShell
	{
    	simulation = "shotSmoke";
    	deflectionSlowDown = 0;
	};
};
