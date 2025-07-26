#include "..\script_component.hpp"

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];


[_patient, _classname] call ACEFUNC(medical_treatment,addToTriageCard);
private _itemName = getText(configFile >> "CfgWeapons" >> _classname >> "displayName");
[_patient, "activity", ACELSTRING(medical_treatment,Activity_usedItem), [[_medic] call ACEFUNC(common,getName), _itemName]] call ACEFUNC(medical_treatment,addToLog);

[QKATGVAR(Pharma,medicationLocal), [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;
[QGVAR(gsciLocal), [_medic, _patient], _patient] call CBA_fnc_targetEvent;