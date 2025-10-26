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
 * [_player] call GerRng_rations_fnc_getBandoChildren
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
            if (getNumber (_itemConfig >> QGVAR(isBandolier)) != 0) then {
                private _isBelt = getNumber (_itemConfig >> QGVAR(isBelt)) != 0;

                private _itemConfig = _config >> _x;
                private _displayName = getText (_itemConfig >> "displayName");
                private _picture = getText (_itemConfig >> "picture");
                private _bandolierCount = getNumber (_itemConfig >> "count");
                private _bandolierAmount = [_player, _x] call FUNC(getMagazineAmmoCounts) select 0;

                private _bandolierOptions = getArray (_itemConfig >> QGVAR(bandolierItems));
                private _bandolierItem = _x;

                {
                    private _magDisplayName = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
                    private _takeOneMag = format ["Take 1 %1", _magDisplayName];

                    // Exec next frame so closing interaction menu doesn't block progressBar
                    INFO(format[ARR_2("Creating unpack action for bandolier item: %1",_x)]);
                    private _actionOne = [_x, _takeOneMag, _picture, {[FUNC(takeMag), _this] call CBA_fnc_execNextFrame}, {true}, {}, [_x, _bandolierItem, _itemConfig, _isMagazine]] call ACEFUNC(interact_menu,createAction);
                    _actions pushBack [_actionOne, [], _player];
                } forEach _bandolierOptions;
            };
        } forEach _items;
    } forEach [
        [_cfgWeapons, _player call ACEFUNC(common,uniqueItems)],
        [_cfgMagazines, [_player, 2] call ACEFUNC(common,uniqueItems)]
    ];

    _actions
}; // Fixed: Added semicolon here

[[], _fnc_getActions, _player, QGVAR(bandolierActionsCache), 9999, "cba_events_loadoutEvent"] call ACEFUNC(common,cachedCall);