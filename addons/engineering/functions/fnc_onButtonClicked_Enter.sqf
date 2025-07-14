#include "..\script_component.hpp"

#include "..\m80_miclic\ui\m80_defines.hpp"

params [["_ctrlEdit", controlNull, [controlNull]], "_typeIndex"];


private _maxDelay = MAX_MICLIC_DELAY;
private _maxFuse = MAX_MICLIC_FUSE;
private _maxDistance = MAX_MICLIC_DISTANCE;
private _maxAngle = MAX_MICLIC_ANGLE;



if (isNull _ctrlEdit) exitWith {};

private _limits = [
    [MIN_MICLIC_DELAY, MAX_MICLIC_DELAY],    // index 0: delay
    [MIN_MICLIC_FUSE, MAX_MICLIC_FUSE],      // index 1: fuse
    [MIN_MICLIC_DISTANCE, MAX_MICLIC_DISTANCE], // index 2: distance
    [MIN_MICLIC_ANGLE, MAX_MICLIC_ANGLE]     // index 3
];

// Validate type index
if (_typeIndex < 0 || {_typeIndex >= count _limits}) exitWith {};

private _min = (_limits select _typeIndex) select 0;
private _max = (_limits select _typeIndex) select 1;

private _value = parseNumber (ctrlText _ctrlEdit);
_value = _value max _min min _max; // Clamp value

_ctrlEdit ctrlSetText str _value;
