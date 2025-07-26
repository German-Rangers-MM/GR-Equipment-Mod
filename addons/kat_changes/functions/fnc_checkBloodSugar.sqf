#include "..\script_component.hpp"

/*
Checking for patient blood sugar using ace medical menu, to asses hypoglycemia and malnutrition

*/

params ["_medic", "_patient"];

private _output = "";
private _output_log = "";

if (!alive _patient) exitWith {
    [LLSTRING(patientDead), 1.5, _medic] call ACEFUNC(common,displayTextStructured);
};

private _hunger = _patient getVariable [QACEXGVAR(field_rations,hunger), 0];

/*
// Get time of measurement in format HH:MM:SS
private _daytime = dayTime;
private _hour = floor _daytime;
private _minute = floor ((_daytime - _hour) * 60);
private _seconds = floor ((((_daytime - _hour) * 60) - _minute) * 60);
private _measurementTime = format ["%1:%2:%3", [_hour, 2] call CBA_fnc_formatNumber, [_minute, 2] call CBA_fnc_formatNumber, [_seconds, 2] call CBA_fnc_formatNumber];
*/
// Calculate blood sugar level based on hunger level
private _bloodSugar = linearConversion [0, 100, _hunger, 90, 40, true] toFixed 2;


_output = format ["%1: %2 mg/dl", LLSTRING(BloodSugar_DisplayName), _bloodSugar];
_output_log = format ["%1 mg/dl", _bloodSugar];

[_output, 1.5, _medic] call ACEFUNC(common,displayTextStructured);

[_patient, "quick_view", LSTRING(CheckBloodSugar_Log)] call KATFUNC(circulation,removeLog);
[_patient, "quick_view", LSTRING(CheckBloodSugar_Log), [[_medic] call ACEFUNC(common,getName), _output_log]] call ACEFUNC(medical_treatment,addToLog);