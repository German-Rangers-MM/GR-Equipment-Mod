#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
		units[] = {};
        weapons[] = {
            QGVAR(glucometerSet),
            QGVAR(GSCI),
            "kat_aatKit"
        };
        magazines[] = {};
        requiredAddons[] = {
            "kat_main",
            "kat_breathing",
            "ace_main",
            "cba_settings"
        };
        author = ECSTRING(main,Team);
        authors[] = {"Cookie", "Cesrap"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgEventHandlers.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
#include "ACE_Medical_Treatment.hpp"
