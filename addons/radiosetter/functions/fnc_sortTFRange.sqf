params ["_config"];

private _radioRange = 0;

if ((isNumber (_config >> "tf_hasLRradio") || isNumber (_config >> "tf_radio")) && {getNumber (_config >> "tf_hasLRradio") != 0}) then {_radioRange = getNumber (_config >> "tf_range")};

100000 - _radioRange
