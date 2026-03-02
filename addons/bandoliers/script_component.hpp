#define COMPONENT bandoliers
#define COMPONENT_BEAUTIFIED Bandoliers
#include "\y\gerrng\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_BANDOLIERS
  #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_BANDOLIERS
  #define DEBUG_SETTINGS DEBUG_SETTINGS_BANDOLIERS
#endif
#include "\y\gerrng\addons\main\script_macros.hpp"

#define BANDOLIER_ITEMS (uiNamespace getVariable QGVAR(bandolierItems))
