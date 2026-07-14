class CfgMagazines {
    class CA_Magazine;
    class GVAR(vaseline): CA_Magazine {
        author = "Cookie";
        scope = 2;

        displayName = CSTRING(Vaseline_Display);
        descriptionShort = CSTRING(Vaseline_DescShort);
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = QPATHTOF(data\ui\vaseline_ui.paa);

        ammo = "";
        count = 30;
        initSpeed = 0;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        mass = 0.5;
        ACE_isMedicalItem = 1;
        ACE_asItem = 1;
    };
};