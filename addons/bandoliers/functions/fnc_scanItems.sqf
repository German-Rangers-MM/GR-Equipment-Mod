#include "..\script_component.hpp"
/*
 * Author: LinkIsGrim
 * Caches all item classnames used as field rations
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ace_field_rations_fnc_scanFieldRations
 *
 * Public: No
 */

private _list = createHashMap;
private _cfgWeapons = configFile >> "CfgWeapons";
private _cfgMagazines = configFile >> "CfgMagazines";

private _fnc_isBandolierItem = toString {
    (getNumber (_x >> QGVAR(isBandolier)) isEqualTo 1)
};

{
    _list set [configName _x, ""];
} forEach (_fnc_isBandolierItem configClasses _cfgWeapons);

private _magsMissingItemProperty = [];
{
    _list set [configName _x, ""];
    if (getNumber (_x >> "ACE_asItem") == 0 && {getNumber (_x >> "ACE_isUnique") == 0}) then {
        _magsMissingItemProperty pushBack configName _x;
    };
} forEach (_fnc_isBandolierItem configClasses _cfgMagazines);

if (_magsMissingItemProperty isNotEqualTo []) then {
    WARNING_1("[GerRng] bandoliers - the following magazines are valid Bandoliers but do not have item property - %1",_magsMissingItemProperty joinString ", ");
};

uiNamespace setVariable [QGVAR(bandolierItems), compileFinal _list];
