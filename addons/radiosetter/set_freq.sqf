#include "script_component.hpp"

_module = _this select 0;
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

private _groundFreq = _module getVariable ["frequencyGround", ""];
private _airFreq = _module getVariable ["frequencyAir", ""];



diag_log formatText ["Frequency-Setter (%1) initialized with:", _module];
diag_log formatText ["AirFreq.: %1, AirVeh.: %2", _airFreq,_syncedAirVehicles];
diag_log formatText ["GroundFreq.: %1, GroundVeh.: %2", _groundFreq,_syncedLandVehicles];


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
