#include "..\script_component.hpp"

params ["_medic", "_patient"];

if (ACE_Player != _patient) exitWith {};



private _hunger = _patient getVariable [QACEXGVAR(field_rations,hunger), 0];
private _thirst = _patient getVariable [QACEXGVAR(field_rations,thirst), 0];
private _countGSCI = ([_patient, QGVAR(GSCI)] call ACEFUNC(medical_status,getMedicationCount)) select 1;

// Check if hunger and thirst are above the thresholds, else give it diminishing returns
if ((_hunger >= GVAR(gsciHungerThreshold)) && (_countGSCI == 0)) then
{
    _coef = linearConversion [GVAR(gsciHungerThreshold), 85, _hunger, 1, 1.7, true];
    _patient setVariable [QACEXGVAR(field_rations,hunger), (_hunger - (GVAR(gsciHungerAmount) * ACEXGVAR(field_rations,hungerSatiated) * _coef) min 70) max 0.01];
} else
{
    _coef = linearConversion [20, GVAR(gsciHungerThreshold), _hunger, 0, 1, true];
    _patient setVariable [QACEXGVAR(field_rations,hunger), (_hunger - (GVAR(gsciHungerAmount) * ACEXGVAR(field_rations,hungerSatiated) * _coef) min 70) max 0.01];
};

if ((_thirst >= GVAR(gsciThirstThreshold)) && (_countGSCI == 0)) then
{
    _coef = linearConversion [GVAR(gsciThirstThreshold), 85, _thirst, 1, 1.7, true];
    _patient setVariable [QACEXGVAR(field_rations,thirst), (_thirst - (GVAR(gsciThirstAmount) * ACEXGVAR(field_rations,thirstQuenched) * _coef) min 70) max 0.01];
} else
{
    _coef = linearConversion [20, GVAR(gsciThirstThreshold), _thirst, 0, 1, true];
    _patient setVariable [QACEXGVAR(field_rations,thirst), (_thirst - (GVAR(gsciThirstAmount) * ACEXGVAR(field_rations,thirstQuenched) * _coef) min 70) max 0.01];
};
