#include "script_component.hpp"
class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = ECSTRING(main,Team);
        VERSION_CONFIG;
        authors[] = {"Cookie"};
    };
};

#include "CfgEventHandlers.hpp"
