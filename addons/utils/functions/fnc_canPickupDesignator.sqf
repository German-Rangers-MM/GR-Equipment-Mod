#include "..\script_component.hpp"

params ["_target","_unit"];

if (alive _target && _target isKindOf "Static_Designator_01_base_F") then {_result = true} else {_result = false};

_result;