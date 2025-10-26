#define COMPONENT rations
#define COMPONENT_BEAUTIFIED Rations
#include "\y\gerrng\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_RATIONS
  #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_RATIONS
  #define DEBUG_SETTINGS DEBUG_SETTINGS_RATIONS
#endif
#include "\y\gerrng\addons\main\script_macros.hpp"

#define EPA_ITEMS (uiNamespace getVariable QGVAR(epaItems))
