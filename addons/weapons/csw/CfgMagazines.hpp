class CfgMagazines
{
    class ace_csw_100Rnd_127x99_mag;
    class 100Rnd_127x99_mag;

    class GVAR(150Rnd_127x99_mag_v): 100Rnd_127x99_mag
    {
        count = 150;
    };

    class GVAR(150Rnd_127x99_mag): ace_csw_100Rnd_127x99_mag
    {
        author = "J. Smith";
        displayName = "[CSW] 127x99 150Rnd";
        model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
        type = 256;
        mass = 110;
        ACE_isBelt = 1;
    };

    class GVAR(200Rnd_127x99_mag_v): GVAR(150Rnd_127x99_mag_v)
    {
        count = 200;
    };

    class GVAR(200Rnd_127x99_mag): ace_csw_100Rnd_127x99_mag
    {
        displayName = "[CSW] 127x99 200Rnd";
        mass = 130;
    };

    class ace_csw_100Rnd_127x99_mag_red;
    class 100Rnd_127x99_mag_Tracer_Red;
    class GVAR(150Rnd_127x99_mag_red_v): 100Rnd_127x99_mag_Tracer_Red
    {
        count = 150;
    };

    class GVAR(150Rnd_127x99_mag_red): ace_csw_100Rnd_127x99_mag_red
    {
        author = "J. Smith";
        displayName = "[CSW] 127x99 150Rnd Tracer";
        model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
        type = 256;
        mass = 110;
        ACE_isBelt = 1;
    };

    class GVAR(200Rnd_127x99_mag_red_v): 100Rnd_127x99_mag_Tracer_Red{
        count = 200;
    };

    class GVAR(200Rnd_127x99_mag_red): ace_csw_100Rnd_127x99_mag_red{
        displayName = "[CSW] 127x99 200Rnd Tracer";
        mass = 130;
    };
};
