#include "..\script_component.hpp"
/*
    Function: treatment_vaseline
    
    Description:
        [Enter function description here]
    
    Parameters:
        _medic - unit
        _patient - unit
        _bodyPart - string
        _classname - string
        dropped
        _usedItem - string
    
    Returns:
        [TYPE] - [Return description]
*/

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];


[_patient, _classname] call ACEFUNC(medical_treatment,addToTriageCard);
private _itemName = getText(configFile >> "CfgMagazines" >> _classname >> "displayName");
[_patient, "activity", ACELSTRING(medical_treatment,Activity_usedItem), [[_medic] call ACEFUNC(common,getName), _itemName]] call ACEFUNC(medical_treatment,addToLog);

[QKATGVAR(Pharma,medicationLocal), [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;
[QGVAR(vaselineLocal), [_medic, _patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;