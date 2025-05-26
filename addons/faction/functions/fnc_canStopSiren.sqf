#include "..\script_component.hpp"
params ["_target", "_player"];



if (typeOf vehicle _player == QGVAR(B_FENNEK_med_base)) exitWith {false};

if (driver _target == _player && {getCustomSoundController [_target,'CustomSoundController1'] > 0.5}) exitWith {true};

