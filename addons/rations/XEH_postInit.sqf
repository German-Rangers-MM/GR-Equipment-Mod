#include "script_component.hpp"

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