class CfgWeapons
{
    class V_PlateCarrier1_rgr;
    class VestItem;

    class gerrng_PlateCarrier_Base: V_PlateCarrier1_rgr
    {
        scope = 1;
        displayName = "gerrng Plate Carrier Base";
        editorPreview = QPATHTOF(data\preview\gerrng_PlateCarrier_Base.jpg);
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Tropentarn.paa)};
        hiddenSelections[] = {"Camo"};
        author = "Cookie";
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply220";
            hiddenSelections[] = {"camo"};
            mass = 90;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;

                };
            };
        };
    };

    class gerrng_PlateCarrier1_Tropentarn: gerrng_PlateCarrier_Base
    {
        scope = 2;
        displayName = "gerrng Plate Carrier (Tropentarn)";
        editorPreview = QPATHTOF(data\preview\gerrng_PlateCarrier1_Tropentarn.jpg);
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Tropentarn.paa)};
        hiddenSelections[] = {"Camo"};
        author = "JAN";
    };

    class gerrng_PlateCarrier1_Flecktarn: gerrng_PlateCarrier_Base
    {
        scope = 2;
        displayName = "gerrng Plate Carrier (Flecktarn)";
        editorPreview = QPATHTOF(data\preview\gerrng_PlateCarrier1_Flecktarn.jpg);
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Flecktarn.paa)};
        hiddenSelections[] = {"Camo"};
        author = "JAN";
    };

    class gerrng_PlateCarrier1_Flecktarn_B: gerrng_PlateCarrier_Base
    {
        scope = 2;
        displayName = "gerrng Plate Carrier (Flecktarn B)";
        editorPreview = QPATHTOF(data\preview\gerrng_PlateCarrier1_Flecktarn_B.jpg);
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Flecktarn_B.paa)};
        hiddenSelections[] = {"Camo"};
        author = "JAN";
    };

    class gerrng_PlateCarrier1_Wintertarn: gerrng_PlateCarrier_Base
    {
        scope = 2;
        displayName = "gerrng Plate Carrier (Wintertarn)";
        editorPreview = QPATHTOF(data\preview\gerrng_PlateCarrier1_Wintertarn.jpg);
        // picture = "\x\cfp\addons\vests\PlateCarrier1\ui\gerrngy.jpg";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Wintertarn.paa)};
        hiddenSelections[] = {"Camo"};
        author = "CFP";
    };
};
