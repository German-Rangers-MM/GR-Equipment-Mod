#include "script_component.hpp"

class CfgPatches
{
	class SUBADDON
	{
		name = COMPONENT_NAME;
		units[]={};
		weapons[]={};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[]={"CUP_Creatures_People_LoadOrder"};
        author = ECSTRING(common,GerRngTeam);
        VERSION_CONFIG;
        addonRootClass = QUOTE(ADDON);
	};
};

#include "CfgVehicles.hpp"
#include "Cfginsignias.hpp"
#include "CfgWeapons.hpp"