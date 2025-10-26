#include "script_component.hpp"

/*
if (["ace_weather"] call ACEFUNC(common,isModLoaded) && GVAR(lightHeadgearBonus)) then {
    [
        0,
        {
            if (headgear _this in GVAR(lightHeadgearArray)) then {
                linearConversion [40, 60, missionNamespace getVariable [QACEGVAR(weather,currentTemperature), 25], 0, -0.5, true];
            };
        }
    ] call ACEFUNC(field_rations,addStatusModifier);
};
*/

#define ARSENAL_CATEGORY_ICON "a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa"

// Custom Arsenal Tab
if (["ace_arsenal"] call ace_common_fnc_isModLoaded) then {
    [keys EPA_ITEMS, "GerRng EPAs", ARSENAL_CATEGORY_ICON, -1, true] call ace_arsenal_fnc_addRightPanelButton;
};
TRACE_1("EPA Items Keys",keys EPA_ITEMS);
