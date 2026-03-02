#include "script_component.hpp"

_module = _this select 0;
// Auf Serer warten
if (!isServer) then {waitUntil {sleep 2;  isServer;}};

// Auf TFAR warten (Serverseitig)
if (missionNamespace getVariable ["tfar_core_instanciationIsReady", false]) then {{sleep 2; waitUntil {missionNamespace getVariable ["tfar_core_instanciationIsReady", false]}}};

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

private _logic = synchronizedObjects _module select {
	_x isKindOf "EmptyDetector"
};



{
	[_x,_groundFreq] call FUNC(setFrequency);
} forEach _syncedLandVehicles;

{
	[_x,_airFreq] call FUNC(setFrequency);
} forEach _syncedAirVehicles;

{
	private _triggerList = vehicles inAreaArray _x;
	{
		if (_x isKindOf "Car" || _x isKindOf "Ship") then {
			[_x,_groundFreq] call FUNC(setFrequency);
		} else {
			if (_x isKindOf "Air") then {
				[_x,_airFreq] call FUNC(setFrequency);
			} else {
				diag_log format ["[GerRng: Radio] bad vehicle type: %1",_x];
			};	
		};
	} forEach _triggerList;
} forEach _logic;
//commander_radio_settings
//driver_radio_settings
//gunner_radio_settings
//copilot_radio_setting
