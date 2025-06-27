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

        addonRootClass = QUOTE(ADDON);  
        
	};
};

class Extended_Init_EventHandlers
{
	class B_APC_Tracked_01_CRV_F
	{
		class adv_bobcat_EVH_init
		{
			init = QUOTE(_this call FUNC(init));
		};
	};
	class B_T_APC_Tracked_01_CRV_F
	{
		class adv_bobcat_EVH_init
		{
			init = QUOTE(_this call FUNC(init));
		};
	};
};

#include "CfgEventHandlers.hpp"