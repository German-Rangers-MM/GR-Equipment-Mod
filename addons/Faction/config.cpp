#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class ADDON
    { 
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = ECSTRING(main,Team);
        authors[] = {"jan","dalleburn","cookie"};
        VERSION_CONFIG;
    };
};
class CfgFactionClasses {
    class GVAR(rangers_faction) {
        displayName = "German Rangers";
        side = 1;
        flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
        priority = 0;
    };
};

class CfgEditorCategories
{
    class GVAR(rangers_cat)
    {
        displayName = "German Rangers";
        side = 1;
    };
};

class CfgEditorSubcategories
{
    class GVAR(Pkw_L_Subcat)
    {
        displayName = CSTRING(subcat_pkw_light);
    };
    class GVAR(Pkw_A_Subcat)
    {
        displayName = CSTRING(subcat_pkw_armored);
    };
    class GVAR(Wiesel_Subcat)
    {
        displayName = CSTRING(subcat_wiesel);
    };
    class GVAR(Lkw_Subcat)
    {
        displayName = CSTRING(subcat_lkw);
    };
    
    class GVAR(Heli_L_Subcat)
    {
        displayName = CSTRING(subcat_heli_light);
    };
    
    class GVAR(Heli_M_Subcat)
    {
        displayName = CSTRING(subcat_heli_medium);
    };
    
    class GVAR(Heli_H_Subcat)
    {
        displayName = CSTRING(subcat_heli_heavy);
    };
};

class ace_medical_facilities {
    gerrng[] = { QGVAR(MedTent_01) };
};
#include "CfgVehicles.hpp"
