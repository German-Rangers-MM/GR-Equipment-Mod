#include "..\script_component.hpp"

params ["_unit"];
private _bandolierItems = [

    QGVAR(pistol_6_6_M17_21Rnd),
    QGVAR(pistol_5_6_M17_21Rnd),
    QGVAR(pistol_4_6_M17_21Rnd),
    QGVAR(pistol_3_6_M17_21Rnd),
    QGVAR(pistol_2_6_M17_21Rnd),
    QGVAR(pistol_1_6_M17_21Rnd),
    QGVAR(pistol_6_6_G17_17Rnd),
    QGVAR(pistol_5_6_G17_17Rnd),
    QGVAR(pistol_4_6_G17_17Rnd),
    QGVAR(pistol_3_6_G17_17Rnd),
    QGVAR(pistol_2_6_G17_17Rnd),
    QGVAR(pistol_1_6_G17_17Rnd),

    QGVAR(rifle_5_5_G36_30Rnd),
    QGVAR(rifle_4_5_G36_30Rnd),
    QGVAR(rifle_3_5_G36_30Rnd),
    QGVAR(rifle_2_5_G36_30Rnd),
    QGVAR(rifle_1_5_G36_30Rnd),
    QGVAR(rifle_5_5_416_30Rnd),
    QGVAR(rifle_4_5_416_30Rnd),
    QGVAR(rifle_3_5_416_30Rnd),
    QGVAR(rifle_2_5_416_30Rnd),
    QGVAR(rifle_1_5_416_30Rnd),
    QGVAR(rifle_5_5_417_30Rnd),
    QGVAR(rifle_4_5_417_30Rnd),
    QGVAR(rifle_3_5_417_30Rnd),
    QGVAR(rifle_2_5_417_30Rnd),
    QGVAR(rifle_1_5_417_30Rnd),

    QGVAR(mg_4_4_MG3_120Rnd),
    QGVAR(mg_3_4_MG3_120Rnd),
    QGVAR(mg_2_4_MG3_120Rnd),
    QGVAR(mg_1_4_MG3_120Rnd),
    QGVAR(mg_4_4_mk48_100Rnd),
    QGVAR(mg_3_4_mk48_100Rnd),
    QGVAR(mg_2_4_mk48_100Rnd),
    QGVAR(mg_1_4_mk48_100Rnd),
    QGVAR(mg_4_4_m249_200Rnd),
    QGVAR(mg_3_4_m249_200Rnd),
    QGVAR(mg_2_4_m249_200Rnd),
    QGVAR(mg_1_4_m249_200Rnd),

    QGVAR(grenade_5_5_smoke_hand),
    QGVAR(grenade_4_5_smoke_hand),
    QGVAR(grenade_3_5_smoke_hand),
    QGVAR(grenade_2_5_smoke_hand),
    QGVAR(grenade_1_5_smoke_hand),
    QGVAR(grenade_8_8_smoke_40mm),
    QGVAR(grenade_7_8_smoke_40mm),
    QGVAR(grenade_6_8_smoke_40mm),
    QGVAR(grenade_5_8_smoke_40mm),
    QGVAR(grenade_4_8_smoke_40mm),
    QGVAR(grenade_3_8_smoke_40mm),
    QGVAR(grenade_2_8_smoke_40mm),
    QGVAR(grenade_1_8_smoke_40mm),

    QGVAR(grenade_3_3_exp_hand),
    QGVAR(grenade_2_3_exp_hand),
    QGVAR(grenade_1_3_exp_hand),
    QGVAR(grenade_8_8_exp_40mm),
    QGVAR(grenade_7_8_exp_40mm),
    QGVAR(grenade_6_8_exp_40mm),
    QGVAR(grenade_5_8_exp_40mm),
    QGVAR(grenade_4_8_exp_40mm),
    QGVAR(grenade_3_8_exp_40mm),
    QGVAR(grenade_2_8_exp_40mm),
    QGVAR(grenade_1_8_exp_40mm),

    QGVAR(grenade_3_3_flare_hand),
    QGVAR(grenade_2_3_flare_hand),
    QGVAR(grenade_1_3_flare_hand),
    QGVAR(grenade_8_8_flare_40mm),
    QGVAR(grenade_7_8_flare_40mm),
    QGVAR(grenade_6_8_flare_40mm),
    QGVAR(grenade_5_8_flare_40mm),
    QGVAR(grenade_4_8_flare_40mm),
    QGVAR(grenade_3_8_flare_40mm),
    QGVAR(grenade_2_8_flare_40mm),
    QGVAR(grenade_1_8_flare_40mm)
];

// Check if the unit can drop a marker
private _hasBandolier = false;
private _hasBandolier = {_x in items _unit} count _bandolierItems > 0;

_hasBandolier