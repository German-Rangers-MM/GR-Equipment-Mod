#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Adds an ACE action for igniting the given MICLIC. This function has local effect.
 *
 *  Parameter(s):
 *      0: OBJECT - The MICLIC to add the action to.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this] call mts_engineer_fnc_addIgniteMiclicAction
 *
 */

// Range in Meters
#define ACTION_RANGE 4

params ["_miclic"];

CHECK(!hasInterface);

private _iconPath = "\a3\ui_f_oldman\data\IGUI\Cfg\holdactions\destroy_ca.paa";

// Create ACE action
private _action = [
    "gerrng_igniteMiclicAction", 
    LLSTRING(igniteMiclic), 
    _iconPath, 
    {
        params ["_target"];
        [_target] remoteExecCall [QFUNC(igniteMiclic), 2];
    }, 
    {
        params ["_target", "_player"];
        _player distance _target < ACTION_RANGE
    }
] call ace_interact_menu_fnc_createAction;

// Add action to the MICLIC object
[_miclic, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;


// Create ACE action
private _ui = [
    "gerrng_openUIAction", 
    LLSTRING(openMiclicUI), 
    _iconPath, 
    {
        params ["_target"];
        createDialog QGVAR(miclic_ui);
        uiNamespace setVariable ["target", _target];
    }, 
    {
        params ["_target", "_player"];
        _player distance _target < ACTION_RANGE
    }
] call ace_interact_menu_fnc_createAction;

// Add action to the MICLIC object
[_miclic, 0, ["ACE_MainActions"], _ui] call ace_interact_menu_fnc_addActionToObject;
