#include "..\script_component.hpp"
/*
 * Author: mharis001, Glowbal, PabstMirror
 * Consumes an item. Creates a progress bar and handles relevant magazine values.
 *
 * Arguments:
 * 0: Target (not used) <OBJECT>
 * 1: Player <OBJECT>
 * 2: Item data <ARRAY>
 *    0: Item classname <STRING>
 *    1: Parent Item <STRING>
 *    2: Item config <CONFIG>
 *    3: Is item magazine <BOOL>
 *
 * Return Value:
 * None
*/

params ["", "_player", "_unpackData"];
_unpackData params ["_unpackItem", "_parentItem", "_config", "_isMagazine"];
TRACE_3("Consume item started",_player,_unpackItem,_config);

// Create unpack text for item


// Format displayName onto unpack text
// Allows for common strings to be used for multiple items


private _unpackSoundEnd = selectRandom ["OMIntelGrabBody_01","OMIntelGrabBody_02","OMIntelGrabBody_03","Orange_Leaflet_Investigate_01","Orange_Leaflet_Investigate_02","Orange_Leaflet_Investigate_03"];

private _unpackSoundBegin = selectRandom ["OMIntelGrabBody_01","OMIntelGrabBody_02","OMIntelGrabBody_03","Orange_Leaflet_Investigate_01","Orange_Leaflet_Investigate_02","Orange_Leaflet_Investigate_03"];

private _replacementItem = getText (_config >> QGVAR(replacementItem));



private _unpackItemDisplayname = getText (configFile >> "CfgMagazines" >> _unpackItem >> "displayName");


private _parentDisplayName = getText (_config >> "displayName");
private _unpackText = format [LLSTRING(takingXfromY), _unpackItemDisplayname, _parentDisplayName];


playSound _unpackSoundBegin;

private _fnc_onSuccess = {
    params ["_args"];
    _args params ["_player", "_unpackItem", "_parentItem", "_replacementItem", "_unpackSound", "_isMagazine","_unpackItemDisplayname"];
    TRACE_1("Unpacking item successful",_args);

    // Remove unpacked item
    if (_isMagazine) then {
        _player removeMagazineGlobal _parentItem;
    } else {
        _player removeItem _parentItem;
    };
    
    playSound _unpackSoundEnd;

    // Add replacement item if needed
    if (_replacementItem != "") then {
        [_player, _replacementItem] call ACEFUNC(common,addToInventory);
    };
    
    if ([_player, _unpackItem, 1, false, true, false] call CBA_fnc_canAddItem) then {
        _player addItemToVest _unpackItem;
    } else {
        _player addMagazines [_unpackItem, 1];
    };
    [[LLSTRING(magTaken), _unpackItemDisplayname], 3, _player] call ace_common_fnc_displayTextStructured;
};

private _fnc_onFailure = {
    params ["_args"];
    _args params ["_player","_unpackItem"];
    TRACE_1("Unpacking item failed",_args);
    [[LLSTRING(cannotTakeMag), _unpackItemDisplayname], 3.5, _player] call ace_common_fnc_displayTextStructured;
};

private _fnc_condition = {
    params ["_args"];
    _args params ["_player", "_unpackItem", "_parentItem", "", "_unpackSound", "_isMagazine"];

    
    if (_isMagazine) exitWith {
        (_parentItem in ([_player, 2] call ACEFUNC(common,uniqueItems)) && [_player, _unpackItem] call CBA_fnc_canAddItem) // return
    };
    (_parentItem in (_player call ACEFUNC(common,uniqueItems)) && [_player, _unpackItem] call CBA_fnc_canAddItem) // return
};

[
    2,
    [
        _player,
        _unpackItem,
        _parentItem,
        _replacementItem,
        _unpackSound,
        _isMagazine,
        _unpackItemDisplayname
    ],
    _fnc_onSuccess,
    _fnc_onFailure,
    _unpackText,
    _fnc_condition,
    ["isNotInside"]
] call ACEFUNC(common,progressBar);