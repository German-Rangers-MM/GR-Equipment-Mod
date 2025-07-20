#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
		name = COMPONENT_NAME;
        units[] = {
            "gerrng_radiosetter_frequency_module"
        };
        weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Modules_F"};
        author = ECSTRING(main,Team);
        VERSION_CONFIG;
        authors[] = {"Cookie"};
    };
};

class CfgFactionClasses {
    class NO_CATEGORY;
    class gerrng_modules:NO_CATEGORY {
        displayName = "German Rangers Modules";
        icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
    };
};

#include "CfgVehicles.hpp"

#include "CfgEventHandlers.hpp"

class ace_arsenal_sorts {
    class sortBase;

    class GVAR(radioRangeSort): sortBase {
        scope = 2;
        displayName = CSTRING(sortByRadioRange);
        statement =  QUOTE(call FUNC(sortTFRange));
        condition = "true";
        tabs[] = { {5, 12}, { } };
    };
};
