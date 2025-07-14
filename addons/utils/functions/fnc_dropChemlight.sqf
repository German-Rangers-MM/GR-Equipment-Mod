
params ["_entries"];
_entries params ["_player", "_chemlight", "_item"];

private _chempos = _player modelToWorld [0.5,0,0.5];
private _chem1 = createVehicle [_chemlight, _chempos, [], 0, "CAN_COLLIDE"];

_player removeItem _item;
