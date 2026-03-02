[
    QGVAR(basicChangeTime),
    "SLIDER",
    ["Time requirement (Basic)", "Time required to change vehicle function without any bonuses (in seconds)."],
    [CBA_SETTINGS_CAT],
    [1, 30, 20, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(engineerChangeTime),
    "SLIDER",
    ["Time requirement (Engineer)", "Time required to change vehicle function as an engineer or in a repair facility/near a repair vehicle (in seconds)."],
    [CBA_SETTINGS_CAT],
    [1, 30, 15, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(advancedEngineerChangeTime),
    "SLIDER",
    ["Time requirement (Adv. Engineer)", "Time required to change vehicle function as an advanced engineer (in seconds)."],
    [CBA_SETTINGS_CAT],
    [1, 30, 10, 0],
    true
] call CBA_fnc_addSetting;
