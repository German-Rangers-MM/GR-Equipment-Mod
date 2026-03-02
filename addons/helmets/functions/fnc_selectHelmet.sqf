#include "..\script_component.hpp"

params ["_patchType"];

private _helm = headgear player;
private _tarnung = "";
private _helmetClass = "";
private _helmetBaseClass = "";
private _attachmentType = "";
private _isOpsCore = ["OpsCore",_helm] call BIS_fnc_inString;
private _isCrew = ["crew",_helm,false] call BIS_fnc_inString;
private _isPilot = ["pilot",_helm,false] call BIS_fnc_inString;
TRACE_5("Called with Args: ",_helm,_isOpsCore,_isCrew,_isPilot,_patchType);

private _isTropen =  ["Tropen",_helm] call BIS_fnc_inString;
private _isFleck = ["Fleck",_helm] call BIS_fnc_inString;
private _isSprayed = ["Sprayed",_helm,false] call BIS_fnc_inString;
private _isTan = ["tan",_helm,false] call BIS_fnc_inString;
private _isGreen = ["green",_helm,false] call BIS_fnc_inString;
private _isGrey = ["grey",_helm,false] call BIS_fnc_inString;
private _isBlack = ["black",_helm,false] call BIS_fnc_inString;

private _isWdl = ["_w",_helm,false] call BIS_fnc_inString;
private _isBlk = ["_b",_helm,false] call BIS_fnc_inString;


private _isSF = ["SF",_helm] call BIS_fnc_inString;
private _isNoHS = ["NoHS",_helm] call BIS_fnc_inString;
TRACE_2("Helmet Flags:",_isSF,_isNoHS);

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
			_tarnung = "w";
		} else {
			_tarnung = "b";
		};
	};
};
TRACE_1("Selected Helmet Camo:",_tarnung);

switch (_tarnung) do {
	case "Fleck": {
		_helmetBaseClass = "gerrng_OpsCore_Covered_Fleck";
	};
	case "Tropen": {
		_helmetBaseClass = "gerrng_OpsCore_Covered_Tropen";
	};
	case "Sprayed": {
		_helmetBaseClass = "gerrng_OpsCore_sprayed";
	};
	case "Grey": {
		_helmetBaseClass = "gerrng_OpsCore_grey";
	};
	case "Green": {
		_helmetBaseClass = "gerrng_OpsCore_green";
	};
	case "Tan": {
		_helmetBaseClass = "gerrng_OpsCore_tan";
	};
	case "Black": {
		_helmetBaseClass = "gerrng_OpsCore_black";
	};
};


switch (true) do {
	case (!_isSF && !_isNoHS): {
		_attachmentType = "_";
	};

	case (_isSF && !_isNoHS): {
		_attachmentType = "_SF_";
	};

	case (!_isSF && _isNoHS): {
		_attachmentType = "_NoHS_";
	};
};
TRACE_2("Helmet-Classes: ",_helmetBaseClass,_resetClass);
if(_patchType == "reset") then {
	private _resetArray = _helm splitString "_";
	TRACE_1("Reset Helmet Class Array:",_resetArray);
	_resetArray deleteAt [-1];
	TRACE_1("Reset Helmet Class Array after delete:",_resetArray);
	private _resetClass = _resetArray joinString "_";
	TRACE_1("Final Reset Helmet Class:",_resetClass);
	removeHeadgear player;
	player addHeadgear _resetClass;
} else {
	removeHeadgear player;
	_helmetClass = format ["%1%2%3",_helmetBaseClass,_attachmentType,_patchType];
	player addHeadgear _helmetClass;
};
// show selected Helm & Patch
private _helmetPic = getText (configFile >> "CfgWeapons" >> (headgear player) >> "picture");
_patchType = parseText format ["<t align='center' size='1.4' shadow='2'>%1</t>", toUpperANSI _patchType];
private _helmetHint = composeText [parseText format ["<img size='4' align='center' color='%2' image='%1'/>", _helmetPic, [1,1,1] call BIS_fnc_colorRGBtoHTML], lineBreak, _patchType];
[_helmetHint, 3] call ace_common_fnc_displayTextStructured;
TRACE_2("Final Helmet Class:",_helmetClass,headgear player);
