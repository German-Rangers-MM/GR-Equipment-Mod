class CfgWeapons
{
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class kat_aatKit: ACE_ItemCore
    {
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 4;
        };
    };
    class GVAR(glucometerSet): ACE_ItemCore
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Cookie";
        displayName = CSTRING(glucometerSet);
        descriptionShort = CSTRING(glucometerSet_DESC);
        picture = "\x\kat\addons\surgery\ui\ultra.paa";
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        ACE_isMedicalItem = 1;
    };
    class ACE_Morphine;
    class GVAR(GSCI) : ACE_Morphine
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Cookie";
        displayName = CSTRING(GSCI);
        descriptionShort = CSTRING(GSCI_DESC);
        ACE_isMedicalItem = 1;
    };
};
