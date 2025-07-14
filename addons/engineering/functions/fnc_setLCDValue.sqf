#include "..\script_component.hpp"

/*
    * Sets the value of an LCD control in a dialog.
    * Params:
    * 0: IDD (Number) - Dialog ID
    * 1: IDC (Number) - LCD Control ID
    * 2: Value (String or Number) - Value to set
    * 3: Type (Number) - Type of value (0: Delay, 1: Fuse, 2: Distance, 3: Angle)
 */
params ["_idd", "_idc", "_value", "_type"];

private _minDelay = MIN_MICLIC_DELAY;
private _minFuse = MIN_MICLIC_FUSE;
private _minDistance = MIN_MICLIC_DISTANCE;
private _minAngle = MIN_MICLIC_ANGLE;

private _display = findDisplay _idd;
if (isNull _display) exitWith {};

private _ctrl = _display displayCtrl _idc;
if (isNull _ctrl) exitWith {};

switch (_type) do {
    case 0: { // Delay
        if (_value < _minDelay) then {
            _value = _minDelay;
        };
    };
    case 1: { // Fuse
        if (_value < _minFuse) then {
            _value = _minFuse;
        };
    };
    case 2: { // Distance
        if (_value < _minDistance) then {
            _value = _minDistance;
        };
    };
    case 3: { // Angle
        if (_value < _minAngle) then {
            _value = _minAngle;
        };
    };
};


_ctrl ctrlSetText str _value;

true
