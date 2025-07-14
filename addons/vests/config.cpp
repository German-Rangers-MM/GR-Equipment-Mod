#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = COMPONENT_NAME;
		units[]={};
		weapons[]={};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"ace_main"};
        author = ECSTRING(main,Team);
        VERSION_CONFIG;
        authors[] = {"Dalleburn", "Jan", "Cookie"};

        addonRootClass = QUOTE(ADDON);  
        
	};
};

#include "CfgWeapons.hpp"
