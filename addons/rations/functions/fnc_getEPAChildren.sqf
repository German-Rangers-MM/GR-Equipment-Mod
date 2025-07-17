#include "..\script_component.hpp"
/*
 * Author: mharis001, Glowbal, PabstMirror, modified by ItsGiantCookie
 * Returns children actions for consumable items in player's inventory.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * Actions <ARRAY>
 *
 * Example:
 * [_player] call GerRng_rations_fnc_getEPAChildren
 *
 * Public: No
 */

params ["_player"];

private _fnc_getActions = {
    TRACE_1("Creating unpackable item actions",_player);

    private _actions = [];
    private _cfgWeapons = configFile >> "CfgWeapons";
    private _cfgMagazines = configFile >> "CfgMagazines";

    {
        _x params ["_config", "_items"];
        private _isMagazine = _config == _cfgMagazines;
        {
            private _itemConfig = _config >> _x;
            if (getNumber (_itemConfig >> QGVAR(unpackTime)) != 0) then {
                private _displayName = getText (_itemConfig >> "displayName");
                private _picture = getText (_itemConfig >> "picture");

                // Exec next frame so closing interaction menu doesn't block progressBar
                private _action = [_x, _displayName, _picture, {[FUNC(unpackItem), _this] call CBA_fnc_execNextFrame}, {true}, {}, [_x, _itemConfig, _isMagazine]] call ACEFUNC(interact_menu,createAction);
                _actions pushBack [_action, [], _player];
            };
        } forEach _items;
    } forEach [
        [_cfgWeapons, _player call ACEFUNC(common,uniqueItems)],
        [_cfgMagazines, [_player, 2] call ACEFUNC(common,uniqueItems)]
    ];

    _actions
}; // Fixed: Added semicolon here

[[], _fnc_getActions, _player, QGVAR(epaActionsCache), 9999, "cba_events_loadoutEvent"] call ACEFUNC(common,cachedCall);