class ACE_ItemCore;
class CBA_MiscItem_ItemInfo;

class GVARMAIN(vehCamonetItem): ACE_ItemCore
{
    scope = 2;
    //displayName = CSTRING(veh_camonet_item_display);
    displayName = "Vehicle Camonet Item";
    picture = "";
    class ItemInfo: CBA_MiscItem_ItemInfo
    {
        mass = 5;
    };
};
