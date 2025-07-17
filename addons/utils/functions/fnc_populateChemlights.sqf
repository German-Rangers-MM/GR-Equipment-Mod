#include "..\script_component.hpp"

params ["_player"];
private _actions = [];
private _chemlightMap = createHashMap;
private _cfgMagazines = configFile >> "CfgMagazines";


// Define base chemlight classes for inheritance checks
private _baseChemlights =
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

// Count unique magazines
private _magCounts = createHashMap;
{ _magCounts set [_x, (_magCounts getOrDefault [_x, 0]) + 1] } forEach magazines _player;

// Identify chemlights
{
    private _magClass = _x;
    private _config = _cfgMagazines >> _magClass;
    
    // Check if magazine is any type of chemlight
    {
        private _isChemlight = false;
        _isChemlight = if (isClass (_cfgMagazines >> _x)) then
        {
            _magClass isKindOf [_x, _cfgMagazines]
        } else {
            false
        };
        
        if (_isChemlight) then {
            private _ammo = getText (_config >> "ammo");
            _chemlightMap set [_magClass, [_ammo, _magCounts get _magClass]];
        };
    } forEach _baseChemlights;
} forEach keys _magCounts;

// Create actions for each unique chemlight type
{
    private _chemlight = _x;
    private _data = _chemlightMap get _chemlight;
    private _item = _data#0;
    private _count = _data#1;
    private _displayName = getText (_cfgMagazines >> _chemlight >> "displayName");
    private _icon = getText (_cfgMagazines >> _chemlight >> "picture");
    _actions pushBack [
        [
            format ["CHEMLIGHT_%1", _chemlight],
            format ["%1 (%2)", _displayName, _count],
            _icon,
            {call FUNC(dropChemlight);},
            {true},
            {},
            [],
            {[0, 0, 0]},
            2,
            [false,false,false,false,false]
        ] call ACEFUNC(interact_menu,createAction),
        [],
        [_player, _item, _chemlight]
    ];
} forEach keys _chemlightMap;

_actions
