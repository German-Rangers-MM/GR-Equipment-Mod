#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
		units[] = {};
        weapons[] = {
        };
        magazines[] = {
            
        };
        requiredAddons[] = {
        };
        author = ECSTRING(main,Team);
        authors[] = {"Cookie", "Cesrap"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
