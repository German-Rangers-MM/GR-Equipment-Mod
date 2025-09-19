#include "..\script_component.hpp"

TRACE_10("firedEH:",_unit,_weapon,_muzzle,_mode,_ammo,_magazine,_projectile,_vehicle,_gunner,_turret);

if (_weapon != "Throw") exitWith {};

// http://feedback.arma3.com/view.php?id=12340
if (isNull _projectile) then {
    _projectile = nearestObject [_unit, _ammo];
};

private _config = configFile >> "CfgAmmo" >> _ammo;

private _fuzeTime = getNumber (_config >> "explosionTime");
private _timeToLive = getNumber (_config >> "timeToLive");
private _color = getArray (_config >> QACEGVAR(grenades,color));
private _intensity = _color deleteAt 3;

[ACELINKFUNC(grenades,flare), [_chem1, _color, _intensity, _timeToLive], _fuzeTime] call CBA_fnc_waitAndExecute;