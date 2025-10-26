#include "..\script_component.hpp"


params["_target","_player","_newClass"];

if(!alive _target || isNull _target) exitWith {false};

private _isEngineer = [_player,1] call ace_repair_fnc_isEngineer;

private _isAdvancedEngineer = [_player,2] call ace_repair_fnc_isEngineer;

private _isInRepairFacility = _player call ace_repair_fnc_isInRepairFacility;

private _isNearRepairVehicle = _player call ace_repair_fnc_isNearRepairVehicle;

private _changeTime = 0;

if(_isAdvancedEngineer || (_isEngineer && (_isInRepairFacility || _isNearRepairVehicle))) then {
    _changeTime = GVAR(advancedEngineerChangeTime);
} else {
    if(_isEngineer || (_isInRepairFacility || _isNearRepairVehicle)) then {
        _changeTime = GVAR(engineerChangeTime);
    } else {
        _changeTime = GVAR(basicChangeTime);
    };
};

[_changeTime, [_target,_newClass], {param [0] params ["_target","_newClass"];[_target,_newClass] call FUNC(changeVehicleInPlace);}, {}, "Changing Vehicle function..."] call ace_common_fnc_progressBar;