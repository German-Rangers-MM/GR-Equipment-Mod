params ["_patchType"];

private _helm = headgear player;
private _tarnung = "";
private _helmetClass = "";
private _helmetBaseClass = "";
private _CupClass = "";
//private _isOpsCore = ["OpsCore",_helm] call BIS_fnc_inString;
private _isTropen =  ["Tropen",_helm] call BIS_fnc_inString;
private _isFleck = ["Fleck",_helm] call BIS_fnc_inString;
private _isSF = ["_SF",_helm] call BIS_fnc_inString;
private _isNoHS = ["_NoHS",_helm] call BIS_fnc_inString;

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

switch (true) do {
	case (!_isSF && !_isNoHS): {
		if (_tarnung == "Fleck") then {
			_helmetBaseClass = "gerrng_OpsCore_Covered_Fleck_";
			_CupClass = "CUP_H_OpsCore_Covered_Fleck";
		};
		if (_tarnung == "Tropen") then {
			_helmetBaseClass = "gerrng_OpsCore_Covered_Tropen_";
			_CupClass = "CUP_H_OpsCore_Covered_Tropen";
		}; 
	};

	case (_isSF && !_isNoHS): {
		if (_tarnung == "Fleck") then {
			_helmetBaseClass = "gerrng_OpsCore_Covered_Fleck_SF_";
			_CupClass = "CUP_H_OpsCore_Covered_Fleck_SF";
		};
		if (_tarnung == "Tropen") then {
			_helmetBaseClass = "gerrng_OpsCore_Covered_Tropen_SF_";
			_CupClass = "CUP_H_OpsCore_Covered_Tropen_SF";
		}; 
	};

	case (!_isSF && _isNoHS): {
		if (_tarnung == "Fleck") then {
			_helmetBaseClass = "gerrng_OpsCore_Covered_Fleck_NoHS_";
			_CupClass = "CUP_H_OpsCore_Covered_Fleck_NoHS";
		};
		if (_tarnung == "Tropen") then {
			_helmetBaseClass = "gerrng_OpsCore_Covered_Tropen_NoHS_";
			_CupClass = "CUP_H_OpsCore_Covered_Tropen_NoHS";
		}; 
	};
};

if(_patchType == "reset") then {
	player addHeadgear _CupClass;
} else {
	removeHeadgear player;
	_helmetClass = [_helmetBaseClass,_patchType] joinString "";
	player addHeadgear _helmetClass;
};
// show selected Helm & Patch
private _helmetPic = getText (configFile >> "CfgWeapons" >> (headgear player) >> "picture");
_patchType = parseText format ["<t align='center' size='1.4' shadow='2'>%1</t>", toUpperANSI _patchType];
private _helmetHint = composeText [parseText format ["<img size='4' align='center' color='%2' image='%1'/>", _helmetPic, [1,1,1] call BIS_fnc_colorRGBtoHTML], lineBreak, _patchType];
[_helmetHint, 3] call ace_common_fnc_displayTextStructured;
