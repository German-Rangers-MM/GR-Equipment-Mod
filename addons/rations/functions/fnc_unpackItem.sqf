#include "..\script_component.hpp"
/*
 * Author: mharis001, Glowbal, PabstMirror
 * Unpacks an item. Creates a progress bar.
 *
 * Arguments:
 * 0: Target (not used) <OBJECT>
 * 1: Player <OBJECT>
 * 2: Item data <ARRAY>
 *    0: Item classname <STRING>
 *    1: Item config <CONFIG>
 *    2: Is item magazine <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [objNull, ACE_player, "["ACE_WaterBottle_Empty", configFile >> "CfgWeapons" >> "ACE_WaterBottle_Empty", false]] call GerRng_rations_fnc_unpackItem
 *
 * Public: No
 */

params ["", "_player", "_unpackData"];
_unpackData params ["_unpackItem", "_config", "_isMagazine"];
TRACE_3("Unpacking item started",_player,_unpackItem,_config);

// Get unpack time for item
private _unpackTime = getNumber (_config >> QGVAR(unpackTime));
private _replacementItems = (_config >> QGVAR(epa_content)) call BIS_fnc_getCfgData;

// Create unpack text for item
private _displayName = getText (_config >> "displayName");


// Format displayName onto unpack text
// Allows for common strings to be used for multiple items
_unpackText = format [LLSTRING(unpackX), _displayName];


private _unpackSoundEnd = selectRandom ["OMIntelGrabBody_01","OMIntelGrabBody_02","OMIntelGrabBody_03","Orange_Leaflet_Investigate_01","Orange_Leaflet_Investigate_02","Orange_Leaflet_Investigate_03"];

private _unpackSoundBegin = selectRandom ["OMIntelGrabBody_01","OMIntelGrabBody_02","OMIntelGrabBody_03","Orange_Leaflet_Investigate_01","Orange_Leaflet_Investigate_02","Orange_Leaflet_Investigate_03"];

playSound _unpackSoundBegin;

private _fnc_onSuccess = {
    params ["_args"];
    _args params ["_player", "_unpackItem", "_replacementItems", "_unpackSound", "_isMagazine"];
    TRACE_1("Unpacking item successful",_args);

    // Remove unpacked item
    if (_isMagazine) then {
        _player removeMagazineGlobal _unpackItem;
    } else {
        _player removeItem _unpackItem;
    };
    
    playSound _unpackSoundEnd;

    // Add replacement item if needed
    {
        [_player, _x] call ACEFUNC(common,addToInventory);
    } forEach _replacementItems;
};

private _fnc_onFailure = {
    params ["_args"];
    _args params ["_player"];
    TRACE_1("Unpacking item failed",_args);
};

private _fnc_condition = {
    params ["_args"];
    _args params ["_player", "_unpackItem", "", "_unpackSound", "_isMagazine"];


    if (_isMagazine) exitWith {
        _unpackItem in ([_player, 2] call ACEFUNC(common,uniqueItems)) // return
    };
    _unpackItem in (_player call ACEFUNC(common,uniqueItems)) // return
};

[
    _unpackTime,
    [
        _player,
        _unpackItem,
        _replacementItems,
        _unpackSound,
        _isMagazine
    ],
    _fnc_onSuccess,
    _fnc_onFailure,
    _unpackText,
    _fnc_condition,
    ["isNotInside"]
] call ACEFUNC(common,progressBar);