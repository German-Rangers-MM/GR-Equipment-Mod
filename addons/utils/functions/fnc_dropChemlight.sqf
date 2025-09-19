#include "..\script_component.hpp"

params ["_entries"];
_entries params ["_player", "_chemlight", "_item"];

private _config = configFile >> "CfgAmmo" >> _chemlight;

private _chempos = _player modelToWorld [0.5,0,0.5];
private _chem1 = createVehicle [_chemlight, _chempos, [], 0, "CAN_COLLIDE"];

_player removeItem _item;

if (getNumber (_config >> QACEGVAR(grenades,flare)) == 1) then {
    [_player, "Throw", "", "", _chemlight, _item, _chem1] call ace_common_fnc_firedEH;
};