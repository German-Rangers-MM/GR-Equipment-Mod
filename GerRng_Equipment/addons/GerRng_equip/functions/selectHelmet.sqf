params ["_patchType"];

private _helm = headgear player;
private _tarnung = "";
private _helmetClass = "";
//private _isOpsCore = ["OpsCore",_helm] call BIS_fnc_inString;
private _isTropen =  ["Tropen",_helm] call BIS_fnc_inString;
private _isFleck = ["Fleck",_helm] call BIS_fnc_inString;

if( _isTropen || _isFleck) then {
	if(_isTropen) then {
		_tarnung = "Tropen";
	} else {
		_tarnung = "Fleck";
	};
} else {
	private _uniform = uniform player;
	_isTropen =  ["Tropen",_uniform] call BIS_fnc_inString;
	_isFleck = ["Fleck",_uniform] call BIS_fnc_inString;
	if(_isTropen) then {
		_tarnung = "Tropen";
	} else {
		if(_isFleck) then {
			_tarnung = "Fleck";
		};
	};
};

if(_patchType == "reset") then {
	if(_tarnung == "Fleck") exitWith {
		removeHeadgear player; 
		player addHeadgear "CUP_H_OpsCore_Covered_Fleck";
	};
	if(_tarnung == "Tropen") exitWith {
		removeHeadgear player; 
		player addHeadgear "CUP_H_OpsCore_Covered_Tropen";
	};
} else {
	if (_tarnung == "Fleck") exitWith {
		removeHeadgear player;
		_helmetClass = ["GerRng_OpsCore_Covered_Fleck_",_patchType] joinString "";
		player addHeadgear _helmetClass;
	};
	if (_tarnung == "Tropen") exitWith {
		removeHeadgear player;
		_helmetClass = ["GerRng_OpsCore_Covered_Tropen_",_patchType] joinString "";
		player addHeadgear _helmetClass;
	};
};

// show selected Helm & Patch
private _helmetPic = getText (configFile >> "CfgWeapons" >> (headgear player) >> "picture");
_patchType = parseText format ["<t align='center' size='1.4' shadow='2'>%1</t>", toUpperANSI _patchType];
private _helmetHint = composeText [parseText format ["<img size='4' align='center' color='%2' image='%1'/>", _helmetPic, [1,1,1] call BIS_fnc_colorRGBtoHTML], lineBreak, _patchType];
[_helmetHint, 3] call ace_common_fnc_displayTextStructured;