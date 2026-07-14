class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
    /*
    class gerrng_breaching_cba {
        init = "[] call compileScript ['\breaching\cba.sqf']";
    };
    */
    class gerrng_breaching_functions {
        init = "[] call compileScript ['y\gerrng\addons\breaching\functions.sqf']";
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
    };
    class gerrng_breaching_init {
        init = "['CBA_settingsInitialized', {[] spawn compileScript ['y\gerrng\addons\breaching\init.sqf']}] call CBA_fnc_addEventHandler;";
    };
};
