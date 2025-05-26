#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
		units[] = {};
        weapons[] = {};
        magazines[] = { };
        requiredAddons[] = {
            "kat_main",
            "kat_breathing",
            "ace_main",
            "cba_settings"
        };
        author = ECSTRING(main,Team);
        authors[] = {"Cookie", "Cesrap"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"