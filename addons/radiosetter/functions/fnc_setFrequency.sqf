#include "..\script_component.hpp"
params["_vehicle","_newFreq"];


private _radios = [];
private _object = objNull;
private _radioId = "";
private _settings = [];
private _freqs = [];
if(_vehicle call TFAR_fnc_hasVehicleRadio) then {
    _radios = _vehicle call TFAR_fnc_getVehicleRadios;
    diag_log format ["Target Vehicle radios: %1", _radios];
    {
        _object = _x select 0;
        diag_log format ["Target Vehicle (Nested): %1", _object];
        _radioId = _x select 1;
        diag_log format ["Target RadioId (Nested): %1", _radioId];
        _settings = [_object ,_radioId] call TFAR_fnc_getLrSettings;
        diag_log format ["Target Settings (Nested): %1", _settings];
        _freqs = _settings select 2;
        diag_log format ["Target Settings Frequency-Block (Nested): %1", _freqs];
        if (_vehicle isKindOf "Air") then {_newFreq = _airFreq} else {_newFreq = _groundFreq};
        diag_log format ["New Frequency (Nested): %1", _newFreq];
        _freqs set [0,_newFreq ];
        diag_log format ["New Frequency-Block (Nested): %1", _freqs];
        _settings set [2,_freqs];
        diag_log format ["New Settings (Nested): %1", _settings];
        [[_object,_radioId],_settings] call TFAR_fnc_setLrSettings;
        diag_log "----------------------------------------------------------";
    } forEach _radios;
};