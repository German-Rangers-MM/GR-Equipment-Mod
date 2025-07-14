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
#include "CfgSounds.hpp"

#include "CfgSoundSets.hpp"

#include "CfgSoundShaders.hpp"

#include "CfgSound3DProcessors.hpp"
