[
    QGVAR(halliganUseTime),
    "SLIDER",
    ["Time requirement (Halligan)", "Time required to breach a door with a Halligan tool (in seconds)."],
    [CBA_SETTINGS_CAT, LLSTRING(tool_subcat)],
    [1, 30, 10, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(crowbarUseTime),
    "SLIDER",
    ["Time requirement (Crowbar)", "Time required to breach a door with a Crowbar (in seconds)."],
    [CBA_SETTINGS_CAT, LLSTRING(tool_subcat)],
    [1, 30, 15, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(sledgeUseTime),
    "SLIDER",
    ["Time requirement (Sledgehammer)", "Time required to breach a door with a Sledgehammer (in seconds)."],
    [CBA_SETTINGS_CAT, LLSTRING(tool_subcat)],
    [1, 30, 5, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(pickgunUseTime),
    "SLIDER",
    ["Time requirement (Lockpick-Gun)", "Time required to breach a door with a Lockpick-Gun (in seconds)."],
    [CBA_SETTINGS_CAT, LLSTRING(tool_subcat)],
    [1, 30, 8, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(speedsquareUseTime),
    "SLIDER",
    ["Time requirement (Speed Square)", "Time required to breach a door with a Speed Square (in seconds)."],
    [CBA_SETTINGS_CAT, LLSTRING(tool_subcat)],
    [1, 30, 20, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(screwdriverUseTime),
    "SLIDER",
    ["Time requirement (Screwdriver)", "Time required to breach a door with a Screwdriver (in seconds)."],
    [CBA_SETTINGS_CAT, LLSTRING(tool_subcat)],
    [1, 30, 25, 0],
    true
] call CBA_fnc_addSetting;


[
    "gerrng_cba_breaching_halligan",
    "EDITBOX",
    ["Halligan Chances", "Chances of picking doors. [Glass, Civil, Military, Reinforced]"],
    [CBA_SETTINGS_CAT, LLSTRING(tool_subcat)],
    '[1,0.9,0.55,0.3]',
    true,
    {gerrng_cba_breaching_halligan = call compile gerrng_cba_breaching_halligan}
] call CBA_fnc_addSetting;

[
    "gerrng_cba_breaching_crowbar",
    "EDITBOX",
    ["Crowbar Chances", "Chances of picking doors. [Glass, Civil, Military, Reinforced]"],
    [CBA_SETTINGS_CAT, LLSTRING(tool_subcat)],
    '[1,0.75,0.3,0.2]',
    true,
    {gerrng_cba_breaching_crowbar = call compile gerrng_cba_breaching_crowbar}
] call CBA_fnc_addSetting;

[
    "gerrng_cba_breaching_sledgehammer",
    "EDITBOX",
    ["Sledgehammer Chances", "Chances of picking doors. [Glass, Civil, Military, Reinforced]"],
    [CBA_SETTINGS_CAT, LLSTRING(tool_subcat)],
    '[1,0.90,0.65,0.35]',
    true,
    {gerrng_cba_breaching_sledgehammer = call compile gerrng_cba_breaching_sledgehammer}
] call CBA_fnc_addSetting;

[
    "gerrng_cba_breaching_pickgun",
    "EDITBOX",
    ["Lockpick-Gun Chances", "Chances of picking doors. [Glass, Civil, Military, Reinforced]"],
    [CBA_SETTINGS_CAT, LLSTRING(tool_subcat)],
    '[0,0.95,0.75,0.45]',
    true,
    {gerrng_cba_breaching_pickgun = call compile gerrng_cba_breaching_pickgun}
] call CBA_fnc_addSetting;

[
    "gerrng_cba_breaching_speedsquare",
    "EDITBOX",
    ["Speed Square Chances", "Chances of picking doors. [Glass, Civil, Military, Reinforced]"],
    [CBA_SETTINGS_CAT, LLSTRING(tool_subcat)],
    '[0.5,0.3,0.1,0]',
    true,
    {gerrng_cba_breaching_speedsquare = call compile gerrng_cba_breaching_speedsquare}
] call CBA_fnc_addSetting;

[
    "gerrng_cba_breaching_screwdriver",
    "EDITBOX",
    ["Screwdriver Chances", "Chances of picking doors. [Glass, Civil, Military, Reinforced]"],
    [CBA_SETTINGS_CAT, LLSTRING(tool_subcat)],
    '[0.4,0.15,0.05,0]',
    true,
    {gerrng_cba_breaching_screwdriver = call compile gerrng_cba_breaching_screwdriver}
] call CBA_fnc_addSetting;



[  
    QGVAR(enableAiAwareness),
    "CHECKBOX",
    ["Enable AI Noise Awareness", "Allow AI units to become aware of noise from breaching attempts."],
    [CBA_SETTINGS_CAT, LLSTRING(AI_subcat)],
    true,
    true
] call CBA_fnc_addSetting;

[  
    QGVAR(halliganAwarenessRadius),
    "SLIDER",
    ["Halligan Noise Radius", "Radius within which AI can hear breaching attempts with a Halligan tool (in meters)."],
    [CBA_SETTINGS_CAT, LLSTRING(AI_subcat)],
    [0, 30, 15, 0],
    true
] call CBA_fnc_addSetting;

[  
    QGVAR(crowbarAwarenessRadius),
    "SLIDER",
    ["Crowbar Noise Radius", "Radius within which AI can hear breaching attempts with a Crowbar (in meters)."],
    [CBA_SETTINGS_CAT, LLSTRING(AI_subcat)],
    [0, 30, 10, 0],
    true
] call CBA_fnc_addSetting;

[  
    QGVAR(sledgehammerAwarenessRadius),
    "SLIDER",
    ["Sledgehammer Noise Radius", "Radius within which AI can hear breaching attempts with a Sledgehammer (in meters)."],
    [CBA_SETTINGS_CAT, LLSTRING(AI_subcat)],
    [0, 50, 25, 0],
    true
] call CBA_fnc_addSetting;

[  
    QGVAR(pickgunAwarenessRadius),
    "SLIDER",
    ["Lockpick-Gun Noise Radius", "Radius within which AI can hear breaching attempts with a Lockpick-Gun (in meters)."],
    [CBA_SETTINGS_CAT, LLSTRING(AI_subcat)],
    [0, 10, 2, 0],
    true
] call CBA_fnc_addSetting;

[  
    QGVAR(squareAwarenessRadius),
    "SLIDER",
    ["Speed Square Noise Radius", "Radius within which AI can hear breaching attempts with a Speed Square (in meters)."],
    [CBA_SETTINGS_CAT, LLSTRING(AI_subcat)],
    [0, 10, 2, 0],
    true
] call CBA_fnc_addSetting;

[  
    QGVAR(screwdriverAwarenessRadius),
    "SLIDER",
    ["Screwdriver Noise Radius", "Radius within which AI can hear breaching attempts with a Screwdriver (in meters)."],
    [CBA_SETTINGS_CAT, LLSTRING(AI_subcat)],
    [0, 10, 2, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(fatigue_modifier_enabled),
    "CHECKBOX",
    ["Enable Fatigue Modifier", "Enable fatigue modifier for breaching tools."],
    [CBA_SETTINGS_CAT, LLSTRING(fatigue_subcat)],
    true,
    true
] call CBA_fnc_addSetting;

