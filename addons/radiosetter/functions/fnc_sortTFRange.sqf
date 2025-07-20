params ["_config"];

private _radioRange = 0;

if ((isNumber (_config >> "tf_hasLRradio") || isNumber (_config >> "tf_radio")) && {getNumber (_config >> "tf_hasLRradio") != 0}) then {_radioRange = getNumber (_config >> "tf_range")};

diag_log format ["[GerRng: Radio] Sorted %1 with Range %2", _config, _radioRange];

100000 - _radioRange