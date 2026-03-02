#include "..\script_component.hpp"

params ["_logic"];

private _attachedTo = attachedTo _logic;
if (isNull _attachedTo || !alive _attachedTo) exitWith {
    [objNull, "Target Invalid"] call BIS_fnc_showCuratorFeedbackMessage;
};

private _group = group attachedTo _logic;
deleteVehicle _logic;

if(_group isEqualTo grpNull) exitWith {
    [objNull, "Invalid Group"] call BIS_fnc_showCuratorFeedbackMessage;
};

private _forbiddenItems = 
[
    "ItemGPS",
    "B_UavTerminal",
    "ItemMicroDAGR",
    "ItemcTab",
    "ItemAndroid",
    "ItemMicroDAGRMisc",
    "ItemcTabMisc",
    "ItemAndroidMisc",
    "ItemcTabHCam",
    "ACE_DAGR",
    "ACE_microDAGR"
];

private _bodyPart = 
[
    "Head",0.2,
    "Body",0.5,
    "LeftArm",0.8,
    "RightArm",0.8,
    "LeftLeg",0.8,
    "RightLeg",0.8
];

private _bodyPartsToNum = createHashMapFromArray
[
    ["Head",0],
    ["Body",1],
    ["LeftArm",2],
    ["RightArm",3],
    ["LeftLeg",4],
    ["RightLeg",5]
];

{
    private _maxWounds = 2 max floor(random 15);
    private _minWounds = 3 max ceil(random 5);
    private _damageValue = 0.4 max (random 1.2);
    private _wounds = [];
    private _fractures = [];
    for "_i" from _minWounds to _maxWounds do {
        private _wound = [_x,random 1,selectRandomWeighted _bodyPart];
        _wounds pushBack _wound;
    };
    if (selectRandom [true,false]) then {
        for "_i" from 0 to random[1,1,4] do {
            private _fractureableParts = ["LeftArm","RightArm","LeftLeg","RightLeg"];
            _fractures pushBackUnique [_x,_bodyPartsToNum get selectRandom _fractureableParts];
        };
    };
    [_x,_wounds,_forbiddenItems,_fractures] spawn {
        params ["_unit","_wounds","_forbiddenItems","_fractures"];
        [_unit] call ACEFUNC(medical,fullHeal);
        [_unit,true,random [5,10,15],true] call ACEFUNC(medical,setUnconscious);
        private _itemsToRemove = items _unit arrayIntersect _forbiddenItems;
        private _assignedToRemove = assignedItems _unit arrayIntersect _forbiddenItems;
        {
            _unit removeItem _x;
        } forEach _itemsToRemove;
        {
            _unit unlinkItem _x;
        } forEach _assignedToRemove;
        private _hasLR = _unit call TFAR_fnc_backpackLr; //function returns nil if Backpack doesn't have LR
        if (!isNil "_hasLR") then {
            private _backpackItems = backpackItems _unit;
            removeBackpackGlobal _unit;
            _unit addBackpack "B_Kitbag_rgr";
            {
                _unit addItemToBackpack _x;
            } forEach _backpackItems;
        };
        {
            _x params ["_unit","_damage","_bodypart"];
            private _cause = selectRandom ["bullet","explosive","vehiclecrash","collision"];
            [_unit,_damage,_bodypart,_cause] call ACEFUNC(medical,addDamageToUnit);
        } forEach _wounds;

        if !(_fractures isEqualTo [] || isNil "_fractures") then {
            {
                _x params ["_unit","_bodyPartIndex"];
                private _fracturesArray = _unit getVariable ["ace_medical_fractures", [0,0,0,0,0,0]];

                // Set fracture (1 = fractured, 0 = no fracture, -1 = splinted)
                _fracturesArray set [_bodyPartIndex, 1];

                // Update the unit's fracture state
                _unit setVariable ["ace_medical_fractures", _fracturesArray, true];

                // Fire the fracture event (triggers sounds, pain, etc.)
                ["ace_medical_fracture", [_unit, _bodyPartIndex]] call CBA_fnc_localEvent;
            } forEach _fractures;
            // Update damage effects (limping, aim sway, etc.)
            [_unit] call ace_medical_engine_fnc_updateDamageEffects;
        };
    };
    
} forEach units _group;
