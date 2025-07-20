#include "..\script_component.hpp"

params ["_unit"];
private _baseMarkerItems =
[
    "Chemlight_blue",
    "Chemlight_red",
    "Chemlight_green",
    "Chemlight_yellow",
    "B_IR_Grenade",
    "O_IR_Grenade",
    "I_IR_Grenade",
    "I_E_IR_Grenade",
    "O_R_IR_Grenade",
    "ACE_HandFlare_Base"
];
// Check if the unit can drop a marker
private _canDrop = false;
private _canDrop = items _unit findIf {_x in _baseMarkerItems} == -1;

_canDrop