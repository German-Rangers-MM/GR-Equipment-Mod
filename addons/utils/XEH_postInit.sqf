#include "script_component.hpp"

//Temp disabled due to CTD issues
["ace_firedPlayer", LINKFUNC(handleFlare)] call CBA_fnc_addEventHandler;
["ace_firedPlayerNonLocal", LINKFUNC(handleFlare)] call CBA_fnc_addEventHandler;
["ace_firedNonPlayer", LINKFUNC(handleFlare)] call CBA_fnc_addEventHandler;
