#include "..\script_component.hpp"

if(!isClass(configFile >> "CfgPatches" >> "tfar_core")) exitWith {
    diag_log format ["[GerRng: Radio] Radiosetter module called without TFAR, skipping."];
};
_logic = _this param [0,objNull,[objNull]];

_this execVM QPATHTOF(set_freq.sqf);
