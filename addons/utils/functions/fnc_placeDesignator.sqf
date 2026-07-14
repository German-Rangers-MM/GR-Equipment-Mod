#include "..\script_component.hpp"

params ["_entries"];
_entries params ["_item","_unit","_vehicleClass"];



_unit removeWeaponGlobal _item;


if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    _unit playMove "AmovPercMstpSrasWrflDnon_diary";
};

[{
    params ["_unit","_vehicleClass"];

    private ["_direction", "_position", "_designator","_trg"];
    _direction = getDir _unit;
    _position = (getPosASL _unit) vectorAdd [0.8 * sin(_direction), 0.8 * cos(_direction), 0.02];

	//how to handle if object moved?
    private _designatorArray = [[0,0,0], 0, _vehicleClass, west] call BIS_fnc_spawnVehicle;
    _designator = _designatorArray select 0;
    private _designatorAi = createVehicleCrew (_designator select 0);
    _designator setDir _direction;
    _designator setPosASL _position;
    if ((getPosATL _designator select 2) - (getPos _designator select 2) < 1E-5) then {
        _designator setVectorUp (surfaceNormal (position _designator));
    };
    _unit reveal _designator;

    private _action = 
    [
        "disassembleDesignator",
        "Disassemb Remote Designator",
        "",
        {[_target, _player] call FUNC(pickupDesignator);},
        {true}
    ] call ace_interact_menu_fnc_createAction;
    [_designator, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
    
}, [_unit,_vehicleClass], 1, 0] call cba_fnc_waitAndExecute;
