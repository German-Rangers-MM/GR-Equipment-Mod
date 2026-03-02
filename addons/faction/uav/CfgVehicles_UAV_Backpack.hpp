class B_UAV_06_backpack_F;
class GVAR(UAV_06_antimine_backpack_F): B_UAV_06_backpack_F
{
    displayName = "UAV Bag (Demining) [NATO]";
    class assembleInfo
    {
        assembleTo = QGVAR(UAV_06_antimine_F);
        base = "";
        displayName = "UAV Bag (Demining) [NATO]";
        dissasembleTo[] = {};
        primary = 1;
    };
};
class GVAR(UAV_06_backpack_F): B_UAV_06_backpack_F
{
    displayName = "UAV Bag (AL-6) [NATO]";
    class assembleInfo
    {
        assembleTo = QGVAR(UAV_06_F);
        displayName = "UAV Bag (AL-6) [NATO]";
        base = "";
        dissasembleTo[] = {};
        primary = 1;
    };
};
class GVAR(UAV_06_medical_backpack_F): B_UAV_06_backpack_F
{
    displayName = "UAV Bag (Medical) [NATO]";
    class assembleInfo
    {
        assembleTo = QGVAR(UAV_06_medical_F);
        displayName = "UAV Bag (Medical) [NATO]";
        base = "";
        dissasembleTo[] = {};
        primary = 1;
    };
};
