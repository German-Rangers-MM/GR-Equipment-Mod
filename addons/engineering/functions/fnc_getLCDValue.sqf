#include "..\script_component.hpp"

/*
    File: fnc_getLCDValue.sqf
    Description: Returns the current value of a display control as an integer.
    Params:
        0: IDC (Number) - The IDC of the control.
    Returns:
        (Integer) - The value of the control, or -1 if not found or invalid.
*/

params ["_idd","_idc"];

private _display = findDisplay _idd; // Main display, change if needed
if (isNull _display) exitWith { -1 };

private _ctrl = _display displayCtrl _idc;
if (isNull _ctrl) exitWith { -1 };

private _value = ctrlText _ctrl;
private _intValue = parseNumber _value;

_intValue
