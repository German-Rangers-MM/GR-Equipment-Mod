#include "..\script_component.hpp"
/*
    Function: treatment_vaselineLocal
    
    Description:
        [Enter function description here]
    
    Parameters:
        _medic - ANY
        _patient - ANY
        _bodyPart - ANY
        _classname - ANY
    
    Returns:
        [TYPE] - [Return description]
*/

params ["_medic", "_patient", "_bodyPart", "_classname"];

private _partIndex = ALL_BODY_PARTS find _bodyPart;
private _bodyPartDamage = GET_BODYPART_DAMAGE(_patient);
private _partDamage = (_bodyPartDamage select _partIndex) * -1;

[_patient, _bodyPart, _partDamage] call ACEFUNC(medical_treatment,addTrauma);
[QKATGVAR(pharma,medicationLocal), [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;
