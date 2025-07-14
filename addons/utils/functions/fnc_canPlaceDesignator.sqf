#include "..\script_component.hpp"

params ["_player"];

// Get the designator objects from player inventory


private _designators = [QGVAR(remote_designator_w), QGVAR(remote_designator_d)]; // Same classnames
if (secondaryWeapon _player == _designators select 0) then {_result_1 = true} else {_result_1 = false};
if (secondaryWeapon _player == _designators select 1) then {_result_2 = true} else {_result_2 = false};

if (_result_1 || _result_2) then {_result = true} else {_result = false};

_result
