#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CAT "GerRng - Vehicle Change"
#include "initSettings.inc.sqf"

ADDON = true;
