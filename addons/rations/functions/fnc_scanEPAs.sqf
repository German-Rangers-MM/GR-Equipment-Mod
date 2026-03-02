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

private _fnc_isEPAItem = toString {
    (getNumber (_x >> QGVAR(isEPA)) isEqualTo 1) || {(getArray (_x >> QGVAR(epa_content))) isNotEqualTo []} || {(getNumber (_x >> QGVAR(unpackTime)) != 0)}
};

{
    _list set [configName _x, ""];
} forEach (_fnc_isEPAItem configClasses _cfgWeapons);

private _magsMissingItemProperty = [];
{
    _list set [configName _x, ""];
    if (getNumber (_x >> "ACE_asItem") == 0 && {getNumber (_x >> "ACE_isUnique") == 0}) then {
        _magsMissingItemProperty pushBack configName _x;
    };
} forEach (_fnc_isEPAItem configClasses _cfgMagazines);

if (_magsMissingItemProperty isNotEqualTo []) then {
    WARNING_1("[GerRng] rations - the following magazines are valid EPAs but do not have item property - %1",_magsMissingItemProperty joinString ", ");
};
TRACE_1("GerRng rations - scanned EPA Items:",keys _list);
uiNamespace setVariable [QGVAR(epaItems), compileFinal _list];
