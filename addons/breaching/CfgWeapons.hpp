class CfgWeapons {

    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    class GVAR(halligan): CBA_MiscItem
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Halligan Bar";
        descriptionShort = "A Halligan Bar, used for breaching doors, decent weight and effective.";
        picture = QPATHTOF(data\ui\halligan.paa);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 50;
            type = 302;
        };
    };

    class GVAR(sledgehammer): GVAR(halligan)
    {
        displayName = "Sledgehammer";
        descriptionShort = "A Sledgehammer, used for breaching doors, heavy but quick.";
        picture = QPATHTOF(data\ui\sledgehammer.paa);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 80;
        };
    };

    class GVAR(crowbar): GVAR(halligan)
    {
        displayName = "Crowbar";
        descriptionShort = "A Crowbar, used for breaching doors, light but less effective.";
        picture = QPATHTOF(data\ui\crowbar.paa);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 20;
        };
    };

    class GVAR(pickgun): GVAR(halligan)
    {
        displayName = "Lockpick-Gun";
        descriptionShort = "A Lockpick-Gun, used for breaching doors, silent and quick.";
        picture = QPATHTOF(data\ui\pickgun.paa);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 12;
        };
    };
    
    class GVAR(speedsquare): GVAR(halligan)
    {
        displayName = "Speed Square";
        descriptionShort = "The McNally Special, a really sharp speed square. Truely, a masters tool for breaching.";
        picture = QPATHTOF(data\ui\speedsquare.paa);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };
    
    class GVAR(screwdriver): GVAR(halligan)
    {
        displayName = "Screwdriver";
        descriptionShort = "A standard screwdriver, you can bump a lock with it.";
        picture = QPATHTOF(data\ui\screwdriver.paa);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 8;
        };
    };

};
