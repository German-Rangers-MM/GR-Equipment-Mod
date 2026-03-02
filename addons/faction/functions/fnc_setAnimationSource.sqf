#include "..\script_component.hpp"
 
params ["_unit", "_target","_args"];
_args params ["_duration",["_animations",[]],["_phase",0],["_displayText",""],["_items",[]],["_addItem",false]];

if(typeName _duration != "NUMBER" || _animations isEqualTo [] || _displayText == "" || _items isEqualTo []) exitWith {false};

private _onFinish = {
    params ["_unit","_target","_animation","_phase","_items","_addItem"];

    if (_addItem) then {
        {_unit addItem _x;} forEach _items;
    } else {
        {_unit removeItem _x;} forEach _items;
    };

    _target animateSource [_animation, _phase];
    
};




[_duration, [_unit,_target,_animation],_onFinish,{},_displayText] call ACEFUNC(common,progressBar);
