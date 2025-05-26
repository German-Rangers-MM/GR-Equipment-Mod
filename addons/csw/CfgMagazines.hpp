class CfgMagazines {
    // M2 Ball
    class ace_csw_100Rnd_127x99_mag;
    class MAGAZINE(100Rnd_127x99_mag_csw): ace_csw_100Rnd_127x99_mag{
        author = "J. Smith";
        displayName = "[CSW] 100Rnd 127x99 Belt Ball";
        model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
        type = 256;
        count = 100;
        ACE_isBelt = 1;
    };
    
    class MAGAZINE(150Rnd_127x99_mag_csw): MAGAZINE(100Rnd_127x99_mag_csw){
        displayName = "[CSW] 150Rnd 127x99 Belt Ball";
        count = 150;
        mass = 110;
    };
    
    class MAGAZINE(200Rnd_127x99_mag_csw): MAGAZINE(100Rnd_127x99_mag_csw){
        displayName = "[CSW] 200Rnd 127x99 Belt Ball";
        count = 200;
        mass = 110;
    };


    // M2 Ball Tracer
    class ace_csw_100Rnd_127x99_mag_red;
    class MAGAZINE(100Rnd_127x99_mag_red_csw): ace_csw_100Rnd_127x99_mag_red{
        author = "J. Smith";
        displayName = "[CSW] 100Rnd 127x99 Belt Tracer";
        model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
        type = 256;
        count = 100;
        ACE_isBelt = 1;
    };
    
    class MAGAZINE(150Rnd_127x99_mag_red_csw): MAGAZINE(100Rnd_127x99_mag_red_csw){
        displayName = "[CSW] 150Rnd 127x99 Belt Tracer";
        count = 150;
        mass = 110;
    };
    
    class MAGAZINE(200Rnd_127x99_mag_red_csw): MAGAZINE(100Rnd_127x99_mag_red_csw){
        displayName = "[CSW] 200Rnd 127x99 Belt Tracer";
        count = 200;
        mass = 110;
    };
};