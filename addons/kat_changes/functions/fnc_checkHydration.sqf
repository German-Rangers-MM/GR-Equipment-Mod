#include "..\script_component.hpp"

/*
Checking for patient dehydration using ace medical menu

Not dehydrated: Cool, Dry Skin, Normal Skin Turgor, Moist Mucous Membranes, regular eyes
Light dehydration: Cool, Sweaty Skin, Normal Skin Turgor, Dry Mucous Membranes, regular eyes
Moderate dehydration: Hot, Sweaty Skin, Decreased Skin Turgor, Dry Mucous Membranes, sunken eyes
Severe dehydration: Hot, Dry Skin, Decreased Skin Turgor, Dry Mucous Membranes, sunken and halonized eyes

Author: Cookie
*/

params ["_medic", "_patient"];

private _output = "";
private _output_log = "";

private _skinTemp = "";
private _skinMoisture = "";
private _skinTurgor = "";
private _mucousMembranes = "";
private _eyes = "";

private _skinDisplayName = LLSTRING(Skin_DisplayName);
private _mucousMembranesDisplayName = LLSTRING(Mucous_Membranes_DisplayName);
private _eyesDisplayName = LLSTRING(Eyes_DisplayName);

if (!alive _patient) exitWith {
    [LLSTRING(patientDead), 1.5, _medic] call ACEFUNC(common,displayTextStructured);
};
private _dehydration = _patient getVariable [QACEXGVAR(field_rations,thirst),0];
switch (true) do {
    case (_dehydration < 20): {
        _skinTemp = LLSTRING(Skin_Cool);
        _skinMoisture =  LLSTRING(Skin_Dry);
        _skinTurgor = LLSTRING(Skin_Turgor_Normal);
        _mucousMembranes = LLSTRING(Mucous_Membranes_Moist);
        _eyes = LLSTRING(Eyes_Regular);
    };
    case ((_dehydration < 50) && (_dehydration > 20)): {
        _skinTemp = LLSTRING(Skin_Cool);
        _skinMoisture = LLSTRING(Skin_Sweaty);
        _skinTurgor = LLSTRING(Skin_Turgor_Normal);
        _mucousMembranes = LLSTRING(Mucous_Membranes_Dry);
        _eyes = LLSTRING(Eyes_Regular);
    };
    case ((_dehydration < 75) && (_dehydration > 50)): {
        _skinTemp = LLSTRING(Skin_Hot);
        _skinMoisture = LLSTRING(Skin_Sweaty);
        _skinTurgor = LLSTRING(Skin_Turgor_Decreased);
        _mucousMembranes = LLSTRING(Mucous_Membranes_Dry);
        _eyes = LLSTRING(Eyes_Sunken);
    };
    case (_dehydration >= 75): {
        _skinTemp = LLSTRING(Skin_Hot);
        _skinMoisture = LLSTRING(Skin_Dry);
        _skinTurgor = LLSTRING(Skin_Turgor_Decreased);
        _mucousMembranes = LLSTRING(Mucous_Membranes_Dry);
        _eyes = LLSTRING(Eyes_Sunken_Halonized);
    };
};

_output_log_skin = format ["%1 & %2, %3", _skinTemp, _skinMoisture, _skinTurgor];
_output_log_mucous = format ["%1", _mucousMembranes];
_output_log_eyes = format ["%1", _eyes];
_output = formatText ["%2: %3 & %4, %5%1 %6: %7%1 %8: %9", lineBreak, _skinDisplayName, _skinTemp, _skinMoisture, _skinTurgor, _mucousMembranesDisplayName, _mucousMembranes, _eyesDisplayName, _eyes];


[_output, 1.5, _medic] call ACEFUNC(common,displayTextStructured);


[_patient, "quick_view", LSTRING(CheckHydration_Log_Skin)] call KATFUNC(circulation,removeLog);
[_patient, "quick_view", LSTRING(CheckHydration_Log_Mucous)] call KATFUNC(circulation,removeLog);
[_patient, "quick_view", LSTRING(CheckHydration_Log_Eyes)] call KATFUNC(circulation,removeLog);
[_patient, "quick_view", LSTRING(CheckHydration_Log_Skin), [[_medic] call ACEFUNC(common,getName), _output_log_skin]] call ACEFUNC(medical_treatment,addToLog);
[_patient, "quick_view", LSTRING(CheckHydration_Log_Mucous), [[_medic] call ACEFUNC(common,getName), _output_log_mucous]] call ACEFUNC(medical_treatment,addToLog);
[_patient, "quick_view", LSTRING(CheckHydration_Log_Eyes), [[_medic] call ACEFUNC(common,getName), _output_log_eyes]] call ACEFUNC(medical_treatment,addToLog);