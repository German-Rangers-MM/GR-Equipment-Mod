params ["_patchType"];

private _helm = headgear player;
private _tarnung = "";
private _helmetClass = "";
private _helmetBaseClass = "";
private _resetClass = "";
private _isOpsCore = ["OpsCore",_helm] call BIS_fnc_inString;
private _isCrew = ["crew",_helm,false] call BIS_fnc_inString;
private _isPilot = ["pilot",_helm,false] call BIS_fnc_inString;

private _isTropen =  ["Tropen",_helm] call BIS_fnc_inString;
private _isFleck = ["Fleck",_helm] call BIS_fnc_inString;
private _isSprayed = ["Sprayed",_helm,false] call BIS_fnc_inString;
private _isTan = ["tan",_helm,false] call BIS_fnc_inString;
private _isGreen = ["green",_helm,false] call BIS_fnc_inString;
private _isGrey = ["grey",_helm,false] call BIS_fnc_inString;
private _isBlack = ["black",_helm,false] call BIS_fnc_inString;

private _isWdl = ["_w",_helm,false] call BIS_fnc_inString;
private _isBlk = ["_b",_helm,false] call BIS_fnc_inString;


private _isSF = ["_SF",_helm] call BIS_fnc_inString;
private _isNoHS = ["_NoHS",_helm] call BIS_fnc_inString;

if( _isTropen || _isFleck) then {
	if(_isTropen) then {
		_tarnung = "Tropen";
	} else {
		_tarnung = "Fleck";
	};
};

switch (true) do {
	
	case (_isOpsCore): {
		
		switch (true) do {
			case _isTropen: { _tarnung = "Tropen"; };
			case _isFleck: { _tarnung = "Fleck"; };
			case _isSprayed: { _tarnung = "Sprayed"; };
			case _isTan: { _tarnung = "Tan"; };
			case _isGreen: { _tarnung = "Green"; };
			case _isGrey: { _tarnung = "Grey"; };
			case _isBlack: { _tarnung = "Black"; };
		};
	};
	case (_isHeliHelmet): {
		if (_isWdl) then {
			_tarnung = "wdl";
		} else {
			_tarnung = "blk";
		};
	};
};

switch (true) do {
	case (!_isSF && !_isNoHS): {
		switch (_tarnung) do {
			case "Felck": {
				_helmetBaseClass = "gerrng_OpsCore_Covered_Fleck_";
				_resetClass = "gerrng_OpsCore_Covered_Fleck";
			};
			case "Tropen": {
				_helmetBaseClass = "gerrng_OpsCore_Covered_Tropen_";
				_resetClass = "gerrng_OpsCore_Covered_Tropen";
			};
			case "Sprayed": {
				_helmetBaseClass = "gerrng_OpsCore_Sprayed_";
				_resetClass = "gerrng_OpsCore_Sprayed";
			};
			case "Grey": {
				_helmetBaseClass = "gerrng_OpsCore_grey_";
				_resetClass = "gerrng_OpsCore_grey";
			};
			case "Green": {
				_helmetBaseClass = "gerrng_OpsCore_green_";
				_resetClass = "gerrng_OpsCore_green";
			};
			case "Tan": {
				_helmetBaseClass = "gerrng_OpsCore_tan_";
				_resetClass = "gerrng_OpsCore_tan";
			};
			case "Black": {
				_helmetBaseClass = "gerrng_OpsCore_black_";
				_resetClass = "gerrng_OpsCore_black";
			};
		};
	};

	case (_isSF && !_isNoHS): {
		switch (_tarnung) do {
			case "Felck": {
				_helmetBaseClass = "gerrng_OpsCore_Covered_Fleck_SF_";
				_resetClass = "gerrng_OpsCore_Covered_Fleck_SF";
			};
			case "Tropen": {
				_helmetBaseClass = "gerrng_OpsCore_Covered_Tropen_SF_";
				_resetClass = "gerrng_OpsCore_Covered_Tropen_SF";
			};
			case "Sprayed": {
				_helmetBaseClass = "gerrng_OpsCore_Sprayed_SF_";
				_resetClass = "gerrng_OpsCore_Sprayed_SF";
			};
			case "Grey": {
				_helmetBaseClass = "gerrng_OpsCore_grey_SF_";
				_resetClass = "gerrng_OpsCore_grey_SF";
			};
			case "Green": {
				_helmetBaseClass = "gerrng_OpsCore_green_SF_";
				_resetClass = "gerrng_OpsCore_green_SF";
			};
			case "Tan": {
				_helmetBaseClass = "gerrng_OpsCore_tan_SF_";
				_resetClass = "gerrng_OpsCore_tan_SF";
			};
			case "Black": {
				_helmetBaseClass = "gerrng_OpsCore_black_SF_";
				_resetClass = "gerrng_OpsCore_black_SF";
			};
		};
	};

	case (!_isSF && _isNoHS): {
		switch (_tarnung) do {
			case "Felck": {
				_helmetBaseClass = "gerrng_OpsCore_Covered_Fleck_NoHS_";
				_resetClass = "gerrng_OpsCore_Covered_Fleck_NoHS";
			};
			case "Tropen": {
				_helmetBaseClass = "gerrng_OpsCore_Covered_Tropen_NoHS_";
				_resetClass = "gerrng_OpsCore_Covered_Tropen_NoHS";
			};
			case "Sprayed": {
				_helmetBaseClass = "gerrng_OpsCore_Sprayed_NoHS_";
				_resetClass = "gerrng_OpsCore_Sprayed_NoHS";
			};
			case "Grey": {
				_helmetBaseClass = "gerrng_OpsCore_grey_NoHS_";
				_resetClass = "gerrng_OpsCore_grey_NoHS";
			};
			case "Green": {
				_helmetBaseClass = "gerrng_OpsCore_green_NoHS_";
				_resetClass = "gerrng_OpsCore_green_NoHS";
			};
			case "Tan": {
				_helmetBaseClass = "gerrng_OpsCore_tan_NoHS_";
				_resetClass = "gerrng_OpsCore_tan_NoHS";
			};
			case "Black": {
				_helmetBaseClass = "gerrng_OpsCore_black_NoHS_";
				_resetClass = "gerrng_OpsCore_black_NoHS";
			};
		};
	};
};

if(_patchType == "reset") then {
	player addHeadgear _resetClass;
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
