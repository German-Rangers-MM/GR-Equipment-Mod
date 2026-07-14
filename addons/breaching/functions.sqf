#include "script_component.hpp"

gerrng_fnc_breaching_fatigue = {
    params ["_unit"];
    if(!ACEGVAR(advanced_fatigue,enabled) && GVAR(fatigue_modifier_enabled)) exitWith {0};
    if(!alive _unit || isNull _unit) exitWith {0};
    if(_item isEqualTo "") exitWith {0};
    // Straight up abusing ACE3 Code in this bitch.
    private _fatigue = _unit getVariable [QACEGVAR(advanced_fatigue,aimFatigue), 0];
    private _curve = [[0, 0, 0],[0,10, 0],[90,0, 0],[140,15, 0]];
    private _increase = _fatigue bezierInterpolation _curve;
    _increase = linearConversion [0, 10, _increase#1, 0, 8, true];
    _increase
};

gerrng_fnc_breaching_actions = {
    params ["_unit"];
    uiSleep 0.01;  //Wait for the menu to open
    {
        _helper = _x;
        _data = _helper getVariable "data";
        _data params ["_id","_house","_door","_pos","_animName","_animPhase","_locked","_triggerName","_triggerPos","_handleName","_handlePos","_hingeName","_hingePos"];
        
        _params = "_data = (_this#0) getVariable 'data'; _data params ['_id','_house','_door','_pos','_animName','_animPhase','_locked','_triggerName','_triggerPos','_handleName','_handlePos','_hingeName','_hingePos'];";
        
        {
            _x params ["_name", "_image", "_code", "_condition"]; 
            [(str _code) trim ["{}",0], (str _condition) trim ["{}", 0]] params ["_code", "_condition"];
            
            [_helper, 0, ["door"], [_id, _name, _image, compile (_params + _code), compile (_params + _condition), {}, _helper, [0,0,0], 2.5] call ace_interact_menu_fnc_createAction] call ace_interact_menu_fnc_addActionToObject;
        } forEach [
            ["Use Crowbar","\tsp_breach\gui\unlock.paa",{[playa,_data,QGVAR(crowbar),gerrng_cba_breaching_crowbar] spawn gerrng_fnc_breaching_tool},{_locked == 1 && _animPhase == 0 && QGVAR(crowbar) in (items playa) && !(_house getVariable ["breach_blacklist_pick", false])}],
            ["Use Halligan","\tsp_breach\gui\unlock.paa",{[playa,_data,QGVAR(halligan),gerrng_cba_breaching_halligan] spawn gerrng_fnc_breaching_tool},{_locked == 1 && _animPhase == 0 && QGVAR(halligan) in (items playa) && !(_house getVariable ["breach_blacklist_pick", false])}],
            ["Use Sledgehammer","\tsp_breach\gui\unlock.paa",{[playa,_data,QGVAR(sledgehammer),gerrng_cba_breaching_sledgehammer] spawn gerrng_fnc_breaching_tool},{_locked == 1 && _animPhase == 0 && QGVAR(sledgehammer) in (items playa) && !(_house getVariable ["breach_blacklist_pick", false])}],
            ["Use Lockpick-Gun","\tsp_breach\gui\unlock.paa",{[playa,_data,QGVAR(pickgun),gerrng_cba_breaching_pickgun] spawn gerrng_fnc_breaching_tool},{_locked == 1 && _animPhase == 0 && QGVAR(pickgun) in (items playa) && !(_house getVariable ["breach_blacklist_pick", false])}],
            ["Use Speed Square","\tsp_breach\gui\unlock.paa",{[playa,_data,QGVAR(speedsquare),gerrng_cba_breaching_speedsquare] spawn gerrng_fnc_breaching_tool},{_locked == 1 && _animPhase == 0 && QGVAR(speedsquare) in (items playa) && !(_house getVariable ["breach_blacklist_pick", false])}],
            ["Use Screwdriver","\tsp_breach\gui\unlock.paa",{[playa,_data,QGVAR(screwdriver),gerrng_cba_breaching_screwdriver] spawn gerrng_fnc_breaching_tool},{_locked == 1 && _animPhase == 0 && QGVAR(screwdriver) in (items playa) && !(_house getVariable ["breach_blacklist_pick", false])}]
        
        ];
    } forEach (missionNamespace getVariable ["tsp_breach_allActionsHelpers", []]);
};

gerrng_fnc_breaching_alertAI = {
    params ["_sourceUnit", "_item"];
    if (!GVAR(enableAiAwareness)) exitWith {};
    private _pos = getPosASL _sourceUnit;
    
    private _radius = switch (_item) do {
        case QGVAR(crowbar): {GVAR(crowbarAwarenessRadius)};
        case QGVAR(halligan): {GVAR(halliganAwarenessRadius)};
        case QGVAR(sledgehammer): {GVAR(sledgehammerAwarenessRadius)};
        case QGVAR(pickgun): {GVAR(pickgunAwarenessRadius)};
        case QGVAR(speedsquare): {GVAR(speedsquareAwarenessRadius)};
        case QGVAR(screwdriver): {GVAR(screwdriverAwarenessRadius)};
        default {0}
    };
    if (_radius <= 0) exitWith {};

    private _units = nearestObjects [_pos, ["CAManBase"], _radius];
    if(_units isEqualTo nil || _units isEqualTo []) exitWith {};

    //Get only the group leaders from the units, and filter out players and friendly units
    private _leaders = _units;
    {
        if(!alive _x) then {_leaders = _leaders - [_x]; continue;};
        if(isPlayer _x) then {_leaders = _leaders - [_x]; continue;};
        if(side _x getFriend side _sourceUnit > 0.6) then {_leaders = _leaders - [_x]; continue;};
        private _leader = leader _x;
        private _group = units group _x;
        _group = _group - [_leader];
        //Remove the followers of the group, we only want to alert the leader for performance reasons
        _leaders = _leaders - _group;
    } forEach _units;

    {
        if(selectRandomWeighted [true, 0.2, false, 0.8]) then {continue;}; //Random chance to ignore the breach ouright for immersion, cause people irl are notoriously bad at reacting to things that don't directly affect them
        private _grp = group _x;
        private _wpPos = _pos findEmptyPosition[3, 10, "CAManBase"];
        private _wp = _grp addWaypoint [_wpPos, random [3,8,12]];
        _wp setWaypointType "MOVE";
        _wp setWaypointSpeed "LIMITED";
        switch(combatBehaviour _grp) do {
            case "SAFE": {_grp setBehaviourStrong selectRandomWeighted ["AWARE",0.8,"SAFE",0.25] ;};
            case "AWARE": {_grp setBehaviourStrong selectRandomWeighted ["COMBAT",0.4,"AWARE",0.5] ;};
            default {};
        };
    } forEach _leaders;
};

gerrng_fnc_breaching_tool = {
	params ["_unit", "_data", "_item", "_damage"];
    _data params ["_id","_house","_door","_pos","_animName","_animPhase","_locked","_triggerName","_triggerPos","_handleName","_handlePos","_hingeName","_hingePos"];
	_effectiveness = [_house, _damage] call tsp_fnc_breach_effectiveness;    //-- Get effectiveness
	if (_unit getUnitTrait "Engineer") then {_effectiveness = _effectiveness + 0.75};  //-- This is the lock McNally and today I got a sledgehammer
    private _useTime = switch (_item) do {
        case QGVAR(crowbar): {GVAR(crowbarUseTime)};
        case QGVAR(halligan): {GVAR(halliganUseTime)};
        case QGVAR(sledgehammer): {GVAR(sledgeUseTime)};
        case QGVAR(pickgun): {GVAR(pickgunUseTime)};
        case QGVAR(speedsquare): {GVAR(speedsquareUseTime)};
        case QGVAR(screwdriver): {GVAR(screwdriverUseTime)};
        default {10}
    };
	[
        _useTime,
        [_unit, _data, _effectiveness, _item],
        {  //-- ACE progress bar
		    (_this#0) params ["_unit", "_data", "_effectiveness", "_item"]; 
            _unit switchMove "AmovPknlMstpSnonWnonDnon";
            private _swing = [[(random 1 max 0.2) min 0.49,1,2] call CBA_fnc_formatNumber, -1] select (_item isEqualTo QGVAR(pickgun) || _item isEqualTo QGVAR(speedsquare) || _item isEqualTo QGVAR(screwdriver));
            if(typeName _swing isEqualTo "STRING") then {_swing = parseNumber _swing};
            
		    if (random 1 <= _effectiveness) then {
                [_data, _swing, 0] call tsp_fnc_breach_adjust;
                ["Breaching", "Success"] spawn tsp_fnc_hint;
            } else {
                ["Breaching", "Failed"] spawn tsp_fnc_hint
            };
            
            [_unit, _item] call gerrng_fnc_breaching_alertAI;  //-- Alert AI of breach attempt
	    },
        {
            player switchMove "AmovPknlMstpSnonWnonDnon";
        },
        "Breaching...",
        {
            if !("fixing" in animationState player) then {player disableAI "ANIM"; player playMoveNow "Acts_CarFixingWheel"}; true
        }
    ] call ace_common_fnc_progressBar;
};

