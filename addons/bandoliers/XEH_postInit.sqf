#include "script_component.hpp"

#define ARSENAL_CATEGORY_ICON "a3\3den\data\cfgwaypoints\cycle_ca.paa"

// Custom Arsenal Tab
if (["ace_arsenal"] call ace_common_fnc_isModLoaded) then {
    [keys BANDOLIER_ITEMS, "GerRng Bandoliers", ARSENAL_CATEGORY_ICON, -1, true] call ace_arsenal_fnc_addRightPanelButton;
};
