[
    QGVAR(checkHydrationTime),
    "SLIDER",
    [LLSTRING(SETTING_checkHydrationTime), LLSTRING(SETTING_checkHydrationTime_DESC)],
    [CBA_SETTINGS_CAT, LSTRING(SubCategory_Treatment_Hydration_BloodSugar)],
    [1, 20, 6, 1],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(checkBloodSugarTime),
    "SLIDER",
    [LLSTRING(SETTING_checkBloodSugarTime), LLSTRING(SETTING_checkBloodSugarTime_DESC)],
    [CBA_SETTINGS_CAT, LSTRING(SubCategory_Treatment_Hydration_BloodSugar)],
    [1, 20, 6, 1],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(gsciThirstAmount),
    "SLIDER",
    [LLSTRING(SETTING_gsciThirstAmount), LLSTRING(SETTING_gsciThirstAmount_DESC)],
    [CBA_SETTINGS_CAT, LSTRING(SubCategory_Treatment_GSCI)],
    [3, 8, 5, 1],
    true
] call CBA_fnc_addSetting;
[
    QGVAR(gsciHungerAmount),
    "SLIDER",
    [LLSTRING(SETTING_gsciHungerAmount), LLSTRING(SETTING_gsciHungerAmount_DESC)],
    [CBA_SETTINGS_CAT, LSTRING(SubCategory_Treatment_GSCI)],
    [3, 8, 5, 1],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(gsciHungerThreshold),
    "SLIDER",
    [LLSTRING(SETTING_gsciHungerThreshold), LLSTRING(SETTING_gsciHungerThreshold_DESC)],
    [CBA_SETTINGS_CAT, LSTRING(SubCategory_Treatment_GSCI)],
    [15, 70, 40, 1],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(gsciThirstThreshold),
    "SLIDER",
    [LLSTRING(SETTING_gsciThirstThreshold), LLSTRING(SETTING_gsciThirstThreshold_DESC)],
    [CBA_SETTINGS_CAT, LSTRING(SubCategory_Treatment_GSCI)],
    [15, 70, 40, 1],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(medLvl_GSCI),
    "LIST",
    [LLSTRING(SETTING_gsciMedicLvl), LLSTRING(SETTING_gsciMedicLvl_DESC)],
    [CBA_SETTINGS_CAT, LSTRING(SubCategory_Treatment_GSCI)],
    [[0, 1, 2], [ACELSTRING(medical_treatment,Anyone), ACELSTRING(medical_treatment,Medics), ACELSTRING(medical_treatment,Doctors)], 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(treatmentTime_GSCI),
    "SLIDER",
    [LLSTRING(SETTING_treatmentTime_GSCI), LLSTRING(SETTING_treatmentTime_GSCI_DESC)],
    [CBA_SETTINGS_CAT, LSTRING(SubCategory_Treatment_GSCI)],
    [1, 8, 5, 1],
    true
] call CBA_fnc_addSetting;

