#define COMPONENT csw
#define COMPONENT_BEAUTIFIED Crew Served Weapons
#include "\y\gerrng\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_CSW
  #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_CSW
  #define DEBUG_SETTINGS DEBUG_SETTINGS_CSW
#endif
#include "\y\gerrng\addons\main\script_macros.hpp"


#define AMMO(var1) DOUBLES(PREFIX,var1)
#define QAMMO(var1) QUOTE(AMMO(var1))
#define MAGAZINE(var1) DOUBLES(PREFIX,var1)
#define QMAGAZINE(var1) QUOTE(MAGAZINE(var1))
#define MAGWELL(var1) DOUBLES(PREFIX,var1)
#define QMAGWELL(var1) QUOTE(MAGWELL(var1))

#define MAGWELL_ENTRY_NAME DOUBLES(PREFIX,magazineWell)

#define CREATE_CSW_PROXY(weapon) class ##weapon; class GVAR(weapon): ##weapon { magazineReloadTime = 0.5; }