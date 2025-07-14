#include "..\script_component.hpp"

#include "..\m80_miclic\ui\m80_defines.hpp"

private _idd = m80_miclic_dialog;
private _idc = 0;

params ["_btn", "_type"];

private _maxDelay = MAX_MICLIC_DELAY;
private _maxFuse = MAX_MICLIC_FUSE;
private _maxDistance = MAX_MICLIC_DISTANCE;
private _maxAngle = MAX_MICLIC_ANGLE;

switch (_type) do {
    case 0: { // Delay
        _idc = m80_miclic_lcd_delay;
        private _change = if(_btn == 0) then {1} else {-1 + _maxDelay};
        _change = (([_idd, _idc] call FUNC(getLCDValue)) + _change) mod _maxDelay;
        [_idd, _idc, _change, _type] call FUNC(setLCDValue);
    };
    case 1: { // Fuse
        _idc = m80_miclic_lcd_fuse;
        private _change = if(_btn == 0) then {1} else {-1 + _maxFuse};
        _change = (([_idd, _idc] call FUNC(getLCDValue)) + _change) mod _maxFuse;
        [_idd, _idc, _change, _type] call FUNC(setLCDValue);
    };
    case 2: { // Distance
        _idc = m80_miclic_lcd_distance;
        private _change = if(_btn == 0) then {1} else {-1 + _maxDistance};
        _change = (([_idd, _idc] call FUNC(getLCDValue)) + _change) mod _maxDistance;
        [_idd, _idc, _change, _type] call FUNC(setLCDValue);
    };
    case 3: { // Angle
        _idc = m80_miclic_lcd_angle;
        private _change = if(_btn == 0) then {1} else {-1 + _maxAngle};
        _change = (([_idd, _idc] call FUNC(getLCDValue)) + _change) mod _maxAngle;
        [_idd, _idc, _change, _type] call FUNC(setLCDValue);
    };
};
