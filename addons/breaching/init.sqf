["ace_interactMenuOpened",{
        params ["_type"];
        [
            {
                params ["_type"];
                if (tsp_cba_breach_ace && _type == 0) then {[playa] spawn gerrng_fnc_breaching_actions}
            },
            [_type]
        ] call CBA_fnc_execNextFrame;  //-- Wait for the menu to open
    }
] call CBA_fnc_addEventHandler;