#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = COMPONENT_NAME;
		units[]={};
		weapons[]={
            "gerrng_PlateCarrier1_Tropentarn",
            "gerrng_PlateCarrier1_Flecktarn",
            "gerrng_PlateCarrier1_Flecktarn_B",
            "gerrng_PlateCarrier1_Wintertarn"
        };
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"ace_main"};
        author = ECSTRING(main,Team);
        VERSION_CONFIG;
        authors[] = {"Dalleburn", "Jan", "Cookie"};

        addonRootClass = QUOTE(ADDON);  
        
	};
};

#include "CfgWeapons.hpp"
