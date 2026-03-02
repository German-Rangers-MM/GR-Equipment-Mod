class CfgMagazines {
    // M2 Ball
    class ace_csw_100Rnd_127x99_mag;
    class 100Rnd_127x99_mag;
    class ger_100Rnd_127x99_mag: 100Rnd_127x99_mag{
        count = 100;
    };
    class ger_150Rnd_127x99_mag: 100Rnd_127x99_mag{
        count = 150;
    };
    class ger_200Rnd_127x99_mag: 100Rnd_127x99_mag{
        count = 200;
    };
    class MAGAZINE(100Rnd_127x99_mag_csw): ace_csw_100Rnd_127x99_mag{
        author = "J. Smith";
        displayName = CSTRING(100Rnd_127x99_ball);
        model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
        type = 256;
        count = 100;
        ACE_isBelt = 1;
    };
    
    class MAGAZINE(150Rnd_127x99_mag_csw): MAGAZINE(100Rnd_127x99_mag_csw){
        displayName = CSTRING(150Rnd_127x99_ball);
        count = 150;
        mass = 144;
    };
    
    class MAGAZINE(200Rnd_127x99_mag_csw): MAGAZINE(100Rnd_127x99_mag_csw){
        displayName = CSTRING(200Rnd_127x99_ball);
        count = 200;
        mass = 192;
    };

    // M2 Ball Tracer
    class ace_csw_100Rnd_127x99_mag_red;
    class 100Rnd_127x99_mag_tracer_red;
    class ger_100Rnd_127x99_mag_red: 100Rnd_127x99_mag_tracer_red{
        count = 100;
    };
    class ger_150Rnd_127x99_mag_red: 100Rnd_127x99_mag_tracer_red{
        count = 150;
    };
    class ger_200Rnd_127x99_mag_red: 100Rnd_127x99_mag_tracer_red{
        count = 200;
    };
    class MAGAZINE(100Rnd_127x99_mag_red_csw): ace_csw_100Rnd_127x99_mag_red{
        author = "J. Smith";
        displayName = CSTRING(100Rnd_127x99_tracer);
        model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
        type = 256;
        count = 100;
        ACE_isBelt = 1;
    };

    class MAGAZINE(150Rnd_127x99_mag_red_csw): MAGAZINE(100Rnd_127x99_mag_red_csw){
        displayName = CSTRING(150Rnd_127x99_tracer);
        count = 150;
        mass = 144;
    };

    class MAGAZINE(200Rnd_127x99_mag_red_csw): MAGAZINE(100Rnd_127x99_mag_red_csw){
        displayName = CSTRING(200Rnd_127x99_tracer);
        count = 200;
        mass = 192;
    };

    // M2 SLAP
    class ger_100Rnd_127x99_mag_slap: 100Rnd_127x99_mag{
        count = 100;
        ammo = "B_127x99_SLAP";
    };
    class ger_150Rnd_127x99_mag_slap: ger_100Rnd_127x99_mag_slap{
        count = 150;
    };
    class ger_200Rnd_127x99_mag_slap: ger_100Rnd_127x99_mag_slap{
        count = 200;
    };
    class MAGAZINE(100Rnd_127x99_mag_slap_csw): ace_csw_100Rnd_127x99_mag_red{
        author = "J. Smith";
        displayName = CSTRING(100Rnd_127x99_slap);
        model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
        type = 256;
        count = 100;
        ammo = "B_127x99_SLAP";
        ACE_isBelt = 1;
    };

    class MAGAZINE(150Rnd_127x99_mag_slap_csw): MAGAZINE(100Rnd_127x99_mag_slap_csw){
        displayName = CSTRING(150Rnd_127x99_slap);
        count = 150;
        mass = 144;
    };

    class MAGAZINE(200Rnd_127x99_mag_slap_csw): MAGAZINE(100Rnd_127x99_mag_slap_csw){
        displayName = CSTRING(200Rnd_127x99_slap);
        count = 200;
        mass = 192;
    };

        // M2 SLAP Tracer
    class ger_100Rnd_127x99_mag_slap_tracer_red: 100Rnd_127x99_mag_tracer_red{
        count = 100;
        ammo = "B_127x99_SLAP_Tracer_Red";
    };
    class ger_150Rnd_127x99_mag_slap_tracer_red: ger_100Rnd_127x99_mag_slap_tracer_red{
        count = 150;
    };
    class ger_200Rnd_127x99_mag_slap_tracer_red: ger_100Rnd_127x99_mag_slap_tracer_red{
        count = 200;
    };
    class MAGAZINE(100Rnd_127x99_mag_slap_tracer_red_csw): ace_csw_100Rnd_127x99_mag_red{
        author = "J. Smith";
        displayName = CSTRING(100Rnd_127x99_slap_tracer_red);
        model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
        type = 256;
        count = 100;
        ammo = "B_127x99_SLAP_Tracer_Red";
        ACE_isBelt = 1;
    };

    class MAGAZINE(150Rnd_127x99_mag_slap_tracer_red_csw): MAGAZINE(100Rnd_127x99_mag_slap_tracer_red_csw){
        displayName = CSTRING(150Rnd_127x99_slap_tracer_red);
        count = 150;
        mass = 144;
    };

    class MAGAZINE(200Rnd_127x99_mag_slap_tracer_red_csw): MAGAZINE(100Rnd_127x99_mag_slap_tracer_red_csw){
        displayName = CSTRING(200Rnd_127x99_slap_tracer_red);
        count = 200;
        mass = 192;
    };
};
