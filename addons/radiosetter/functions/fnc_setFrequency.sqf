#include "..\script_component.hpp"
params["_vehicle","_newFreq"];


private _radios = [];
private _object = objNull;
private _radioId = "";
private _settings = [];
private _freqs = [];
if(_vehicle call TFAR_fnc_hasVehicleRadio) then {
    _radios = _vehicle call TFAR_fnc_getVehicleRadios;
    {
        _object = _x select 0;
        _radioId = _x select 1;
        _settings = [_object ,_radioId] call TFAR_fnc_getLrSettings;
        _freqs = _settings select 2;
        if (_vehicle isKindOf "Air") then {_newFreq = _airFreq} else {_newFreq = _groundFreq};
        _freqs set [0,_newFreq ];
        _settings set [2,_freqs];
        [[_object,_radioId],_settings] call TFAR_fnc_setLrSettings;
    } forEach _radios;
};
