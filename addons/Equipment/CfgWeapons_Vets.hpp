class V_PlateCarrier1_rgr;
class VestItem;

class GerRng_PlateCarrier_Base: V_PlateCarrier1_rgr
{
    scope = 1;
    displayName = "GerRng Plate Carrier Base";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
    hiddenSelectionsTextures[] = {"y\GR_Equipment_Mod\addons\Equipment\data\Tropentarn.paa"};
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

class GerRng_PlateCarrier1_Tropentarn: GerRng_PlateCarrier_Base
{
    scope = 2;
    displayName = "GerRng Plate Carrier (Tropentarn)";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
    hiddenSelectionsTextures[] = {"y\GR_Equipment_Mod\addons\Equipment\data\Tropentarn.paa"};
    hiddenSelections[] = {"Camo"};
    author = "JAN";
};

class GerRng_PlateCarrier1_Flecktarn: GerRng_PlateCarrier_Base
{
    scope = 2;
    displayName = "GerRng Plate Carrier (Flecktarn)";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
    hiddenSelectionsTextures[] = {"y\GR_Equipment_Mod\addons\Equipment\data\Flecktarn.paa"};
    hiddenSelections[] = {"Camo"};
    author = "JAN";
};

class GerRng_PlateCarrier1_Flecktarn_B: GerRng_PlateCarrier_Base
{
    scope = 2;
    displayName = "GerRng Plate Carrier (Flecktarn B)";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
    hiddenSelectionsTextures[] = {"y\GR_Equipment_Mod\addons\Equipment\data\Flecktarn_B.paa"};
    hiddenSelections[] = {"Camo"};
    author = "JAN";
};

class GerRng_PlateCarrier1_Wintertarn: GerRng_PlateCarrier_Base
{
    scope = 2;
    displayName = "GerRng Plate Carrier (Wintertarn)";
    // picture = "\x\cfp\addons\vests\PlateCarrier1\ui\GerRngy.jpg";
    model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
    hiddenSelectionsTextures[] = {"y\GR_Equipment_Mod\addons\Equipment\data\Wintertarn.paa"};
    hiddenSelections[] = {"Camo"};
    author = "CFP";
};