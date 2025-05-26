class CfgMagazines
{
    class MAA_MAAWS_GMM_HEAT;
    class MAA_MAAWS_GMM_HE;
    class MAA_MAAWS_GMM_MT;

    class GVAR(MAAWS_GMM_HE): MAA_MAAWS_GMM_HE
    {
        initspeed = 75;
        ammo = QGVAR(GMM_HE);
    };

    class GVAR(MAAWS_GMM_HEAT): MAA_MAAWS_GMM_HEAT
    {
        initspeed = 75;
        ammo = QGVAR(GMM_HEAT);
    };

    class GVAR(MAAWS_GMM_MT): MAA_MAAWS_GMM_MT
    {
        initspeed = 75;
        ammo = QGVAR(GMM_MT);
    };
};
