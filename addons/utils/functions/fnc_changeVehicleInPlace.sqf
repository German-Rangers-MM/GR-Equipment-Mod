#include "..\script_component.hpp"
/*
Changes Vehicle function between VIV and Personel-Transport

Author: Cookie
Params: _vehicle = Vehicle to change function
        _targetClass = Target Class (VIV or Personel-Transport)

*/


params ["_vehicle", "_targetClass"];

if (isNull _vehicle) exitWith {false};

private _pos = getPosATL _vehicle;
private _dir = getDir _vehicle;
private _damage = damage _vehicle;
private _fuel = fuel _vehicle;
private _magazines = magazinesAmmo[_vehicle,true];
private _itemsCargo = getItemCargo _vehicle;
private _weaponsCargo = getWeaponCargo _vehicle;
private _backpacksCargo = getBackpackCargo _vehicle;
private _magazinesCargo = getMagazineCargo _vehicle;
//Determin ratio of empty Magazines to full magazines with a float between 0 and 1 as the result
//Hashmap with [classname, [sumOfCurrentRounds, sumOfMaxRounds, ratio]]
private _magStates = createHashMap;
{
	private _maxRounds = getNumber (configFile >> "CfgMagazines" >> _x#0 >> "count");
	private _currentState = _magStates getOrDefault [_x#0, [0,0,0]];
	private _currentRounds = _currentState#0;
	private _currentMax = _currentState#1;
	private _currentRatio = _currentState#2;

	private _newRounds = _currentRounds + _x#1;
	private _newMax = _currentMax + _maxRounds;
	private _newRatio = _newRounds / _newMax;
    _magStates set [_x#0, [_newRounds, _newMax, _newRatio]];

} forEach _magazines;


deleteVehicle _vehicle;

private _newVehicle = createVehicle [_targetClass, _pos, [], 0, "NONE"];
_newVehicle allowDamage false;
_newVehicle enableSimulation false;

_newVehicle setVariable [QACEGVAR(cargo,loaded), [], true];

if(count _magStates != 0) then {	
	private _ratio = [];
	{
		_ratio pushBack _y#2;

	} forEach _magStates;

	private _averageRatio = _ratio call BIS_fnc_arithmeticMean;
	_newVehicle setVehicleAmmoDef _averageRatio;
};


[
	{
		_this params ["_newVehicle","_dir","_pos","_damage","_fuel"];

		_newVehicle setDir _dir;
		_newVehicle setPosATL _pos;
		[_newVehicle,0.2,nil,"ATL"] call BIS_fnc_setHeight;
		[
			{
				_this params ["_newVehicle"];
				_newVehicle allowDamage true;
				_newVehicle enableSimulation true;
			},
			[
				_newVehicle
			],
			0.5
		] call CBA_fnc_waitAndExecute;
	},
	[
		_newVehicle,
		_dir,
		_pos,
		_damage,
		_fuel
	],
	0.01
] call CBA_fnc_waitAndExecute;

_newVehicle setDamage _damage; //Damage is inverted
_newVehicle setFuel _fuel;

clearWeaponCargoGlobal _newVehicle;
clearMagazineCargoGlobal _newVehicle;
clearItemCargoGlobal _newVehicle;
clearBackpackCargoGlobal _newVehicle;

// Iterate over items which are stored as [["className1",...],[amount1,...]]
private _weaponsClasses = _weaponsCargo select 0;
private _weaponsAmounts = _weaponsCargo select 1;

{
	_newVehicle addWeaponCargoGlobal [_x, _weaponsAmounts select _forEachIndex];
} forEach _weaponsClasses;

private _magazinesClasses = _magazinesCargo select 0;
private _magazinesAmounts = _magazinesCargo select 1;

{
	_newVehicle addMagazineCargoGlobal [_x, _magazinesAmounts select _forEachIndex];
} forEach _magazinesClasses;

private _cargoClasses = _itemsCargo select 0;
private _cargoAmounts = _itemsCargo select 1;

{
	_newVehicle addItemCargoGlobal [_x, _cargoAmounts select _forEachIndex];
} forEach _cargoClasses;

private _backpackClasses = _backpacksCargo select 0;
private _backpackAmounts = _backpacksCargo select 1;

{
	_newVehicle addBackpackCargoGlobal [_x, _backpackAmounts select _forEachIndex];
} forEach _backpackClasses;
