#include "..\script_component.hpp"

params ["_entries"];
_entries params ["_player", "_chemlight", "_item"];

private _config = configFile >> "CfgAmmo" >> _chemlight;

private _chempos = _player modelToWorld [0.5,0,0.5];
private _chem1 = createVehicle [_chemlight, _chempos, [], 0, "CAN_COLLIDE"];

_player removeItem _item;

if (getNumber (_config >> QACEGVAR(grenades,flare)) == 1) then {
    private _fuzeTime = getNumber (_config >> "explosionTime");
    private _timeToLive = getNumber (_config >> "timeToLive");
    private _color = getArray (_config >> QACEGVAR(grenades,color));
    private _intensity = _color deleteAt 3;

    [ACELINKFUNC(grenades,flare), [_chem1, _color, _intensity, _timeToLive], _fuzeTime] call CBA_fnc_waitAndExecute;
};