#include "..\script_component.hpp"


//params ["_entries"]; _entries
params ["_target","_unit"];


private  _designatorVehicleClass = typeOf _target;

_designatorItemClass = switch (_designatorVehicleClass) do {
	case "B_W_Static_Designator_01_F": {QGVAR(remote_designator_w)};
	case "B_Static_Designator_01_F": {QGVAR(remote_designator_d)};
};

_designatorFallbackClass = switch (_designatorVehicleClass) do {
	case "B_W_Static_Designator_01_F": {QGVAR(item_remote_designator_w)};
	case "B_Static_Designator_01_F": {QGVAR(item_remote_designator_d)};
};


if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
	_unit playMove "AmovPercMstpSrasWrflDnon_diary";
};

[{
	params ["_unit", "_target","_designatorItemClass","_designatorFallbackClass"];
	

	private _tempPos = getPosASL _target;
	private _tempDir = getDir _target;
	
	{_target deleteVehicleCrew _x} forEach crew _target;
	deleteVehicle _target;

	_designatorFallback = _designatorFallbackClass createVehicle [0, 0, 0];
	_designatorFallback setPosASL _tempPos;
	_designatorFallback setDir _tempDir;
	if ((getPosATL _designatorFallback select 2) - (getPos _designatorFallback select 2) < 1E-5) then {
		_designatorFallback setVectorUp (surfaceNormal (position _designatorFallback));
	};
	_unit reveal _designatorFallback;

}, [_unit, _target, _designatorItemClass, _designatorFallbackClass], 1] call cba_fnc_waitAndExecute;

true;
