#include "..\script_component.hpp"

#include "..\m80_miclic\ui\m80_defines.hpp"

params ["_target"];

private _fuse = 0;
private _delay = 0;
private _distance = 0;
private _angle = 0;

// get values from dialog
private _display = m80_miclic_dialog;
_delay = [_display, m80_miclic_lcd_delay] call FUNC(getLCDValue);
_fuse = [_display, m80_miclic_lcd_fuse] call FUNC(getLCDValue);
_distance = [_display, m80_miclic_lcd_distance] call FUNC(getLCDValue);
_angle = [_display, m80_miclic_lcd_angle] call FUNC(getLCDValue);


[_target, _distance, _delay, _fuse, _angle] call FUNC(igniteMiclic);
// Close dialog
closeDialog 1;

hint formatText ["%1:%2%3s %4%2%5s %6%2%7m %8%2%9° %10", LLSTRING(igniteText), linebreak, _delay, LLSTRING(delay), _fuse, LLSTRING(fuse), _distance, LLSTRING(launchDistance), _angle, LLSTRING(angle)];
