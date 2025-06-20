#include "..\script_component.hpp"

params ["_player"];

// Get the designator objects from player inventory


private _actions = [];
private _designators = [QGVAR(remote_designator_w), QGVAR(remote_designator_d)]; // Same classnames

private _uuid = "";
private _chars = ["0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"];

for "_i" from 0 to 2 do {
    _uuid = _uuid + (_chars select floor random 16);
};

{
	_item = _x;
	if (_item in _designators) then {
		private _displayName = getText (configFile >> "CfgWeapons" >> _item >> "displayName");

		_vehicleClass = switch (_item) do {
			case QGVAR(remote_designator_w): {"B_W_Static_Designator_01_F"};
			case QGVAR(remote_designator_d): {"B_Static_Designator_01_F"};
		};
		_actions pushBack [
			[
				format ["place_%1_%2", _item,_uuid], // Unique action ID
				_displayName,
				"", // Optional icon
				{call FUNC(placeDesignator)},
				{true}, // Condition (can add item check here if needed)
				{},
				[],
				{[0, 0, 0]},
				2,
				[false,false,false,false,false] // Parameters passed to the statement
			] call ACEFUNC(interact_menu,createAction),
			[],
			[_item, _player, _vehicleClass]
		];
	};
} forEach weapons _player;

_actions