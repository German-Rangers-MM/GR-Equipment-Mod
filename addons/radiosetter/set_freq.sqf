#include "script_component.hpp"

_module = _this select 0;
diag_log format ["Module: %1", _module];
// Auf Serer warten
if (!isServer) then {sleep 2};

// Auf TFAR warten (Serverseitig)
if (missionNamespace getVariable ["tfar_core_instanciationIsReady", false]) then {sleep 2};

// buffer weil tfar weird ist
sleep 5;

private _syncedLandVehicles = synchronizedObjects _module select {
	_x isKindOf "Car" ||
	_x isKindOf "Ship"
};

private _syncedAirVehicles = synchronizedObjects _module select {
	_x isKindOf "Air"
};
diag_log format ["Synced Objects (Land): %1", _syncedLandVehicles];
diag_log format ["Synced Objects (Air): %1", _syncedAirVehicles];

private _groundFreq = _module getVariable ["frequencyGround", ""];
private _airFreq = _module getVariable ["frequencyAir", ""];


diag_log format ["Ground Frequency: %1", _groundFreq];
diag_log format ["Air Frequency: %1", _groundFreq];


{
	[_x,_groundFreq] call FUNC(setFrequency);
} forEach _syncedLandVehicles;

{
	[_x,_airFreq] call FUNC(setFrequency);
} forEach _syncedAirVehicles;
//commander_radio_settings
//driver_radio_settings
//gunner_radio_settings
//copilot_radio_setting
