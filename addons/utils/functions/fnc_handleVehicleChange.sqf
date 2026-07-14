#include "..\script_component.hpp"


params["_target","_player","_newClass"];

if(!alive _target || isNull _target) exitWith {[LLSTRING(invalidTarget),true,5,1] call ACEFUNC(common,displayText); false};

private _displayNameVehicle = getText (configOf _target >> "displayName");

private _displayNameNewClass = getText (configOf _target >> _newClass >> "displayName");


private _aceCargo = _target getVariable [QACEGVAR(cargo,loaded), []];

    
if(count _aceCargo > 0) exitWith {
    [format[LLSTRING(changeVehicleInPlace_failure),_displayNameVehicle,LLSTRING(changeVehicleInPlace_AceCargoNotEmpty)],true,5,1] call ACEFUNC(common,displayText);
    
    false
};


if(count getVehicleCargo _target > 0) exitWith {
    [format[LLSTRING(changeVehicleInPlace_failure),_displayNameVehicle,LLSTRING(changeVehicleInPlace_VivCargoNotEmpty)],true,5,1] call ACEFUNC(common,displayText);
    
    false
};


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
