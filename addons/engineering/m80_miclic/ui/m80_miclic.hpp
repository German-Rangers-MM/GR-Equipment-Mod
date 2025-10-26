#include "m80_defines.hpp"

//class RscPicture;
//class RscEditLCD;
//class RscButton;

class GVAR(miclic_ui) {
	idd = m80_miclic_dialog;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['miclic_ui', _this#0]";

	class controlsBackground {
		class Background: RscBackPicture {
			idc = m80_miclic_background;
			text = QPATHTOF(m80_miclic\ui\m80_miclic.paa); // Your background image
			x = "0.2 * safezoneW + safezoneX";
			y = "0 * safezoneH + safezoneY";
			w = "0.6 * safezoneW";
			h = "1 * safezoneH";
		};
	};

	class controls {
		// DELAY LCD
		class DelayText: RscEditLCD {
			idc = m80_miclic_lcd_delay;
			x = "0.31 * safezoneW + safezoneX";
			y = "0.29 * safezoneH + safezoneY";
			w = "0.0575934 * safezoneW"; // 0,0585934
			h = "0.0672 * safezoneH";
			text = "30";
			maxChars = 3; // Limit to 3 digits
			tooltip = CSTRING(delayTooltip);
			shadow = 1;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
			onKeyUp = QUOTE( \
				if (_this select 1 in [ARR_2(28,156)]) then { \
					[ARR_2(_this select 0, 0)] call FUNC(onButtonClicked_Enter); \
				}; \
			);
		};

		// FUSE LCD
		class FuseText: DelayText {
			idc = m80_miclic_lcd_fuse;
			x = "0.57 * safezoneH + safezoneX";
			text = "5";
			tooltip = CSTRING(fuseTooltip);
			maxChars = 2; // Limit to 2 digits
			onKeyUp = QUOTE( \
				if (_this select 1 in [ARR_2(28,156)]) then { \
					[ARR_2(_this select 0,1)] call FUNC(onButtonClicked_Enter); \
				}; \
			);
		};

		// DISTANCE LCD
		class DistanceText: DelayText {
			idc = m80_miclic_lcd_distance;
			x = "0.715 * safezoneH + safezoneX";
			text = "70";
			tooltip = CSTRING(distanceTooltip);
			maxChars = 3; // Limit to 2 digits
			onKeyUp = QUOTE( \
				if (_this select 1 in [ARR_2(28,156)]) then { \
					[ARR_2(_this select 0,2)] call FUNC(onButtonClicked_Enter); \
				}; \
			);
		};

		// ANGLE LCD
		class AngleText: DelayText {
			idc = m80_miclic_lcd_angle;
			x = "0.855 * safezoneH + safezoneX";
			text = "60";
			tooltip = CSTRING(angleTooltip);
			maxChars = 2; // Limit to 2 digits
			onKeyUp = QUOTE( \
				if (_this select 1 in [ARR_2(28,156)]) then { \
					[ARR_2(_this select 0,3)] call FUNC(onButtonClicked_Enter); \
				}; \
			);
		};

		// ROTARY BUTTONS (Invisible over knobs)
		class DelayRotary: HiddenRotator {
			idc = m80_miclic_rotary_delay;
			x = "0.315 * safezoneW + safezoneX";
			y = "0.412 * safezoneH + safezoneY";
			w = "0.0340938 * safezoneW";
			h = "0.0528162 * safezoneH";
			text = "";
			tooltip = CSTRING(rotaryTooltip);
			onMouseButtonDown = QUOTE([ARR_2(_this select 1,0)] call FUNC(onRotatorClicked););
			onMouseButtonDblClick = QUOTE([ARR_2(_this select 1,0)] call FUNC(onRotatorClicked););
		};
		class FuseRotary: DelayRotary {
			idc = m80_miclic_rotary_fuse;
			x = "0.565 * safezoneH + safezoneX";
			onMouseButtonDown = QUOTE([ARR_2(_this select 1,1)] call FUNC(onRotatorClicked););
			onMouseButtonDblClick = QUOTE([ARR_2(_this select 1,1)] call FUNC(onRotatorClicked););
		};
		class DistanceRotary: DelayRotary {
			idc = m80_miclic_rotary_distance;
			x = "0.705 * safezoneH + safezoneX";
			onMouseButtonDown = QUOTE([ARR_2(_this select 1,2)] call FUNC(onRotatorClicked););
			onMouseButtonDblClick = QUOTE([ARR_2(_this select 1,2)] call FUNC(onRotatorClicked););
		};
		class AngleRotary: DelayRotary {
			idc = m80_miclic_rotary_angle;
			x = "0.851 * safezoneH + safezoneX";
			onMouseButtonDown = QUOTE([ARR_2(_this select 1,3)] call FUNC(onRotatorClicked););
			onMouseButtonDblClick = QUOTE([ARR_2(_this select 1,3)] call FUNC(onRotatorClicked););
		};

		// ARM BUTTON
		class ArmButton: HiddenButton {
			idc = m80_miclic_buttom_arm;
			x = "0.623 * safezoneW + safezoneX";
			y = "0.555 * safezoneH + safezoneY";
			w = "0.04 * safezoneW";
			h = "0.047 * safezoneH";
			text = "";
			tooltip = CSTRING(armTooltip);
			action = QUOTE(\
				private _target = uiNamespace getVariable 'target';\
				[_target] call FUNC(igniteViaDialog);\
			);
		};
	};
};
