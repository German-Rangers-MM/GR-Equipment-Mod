#define COMPONENT kat_changes
#define COMPONENT_BEAUTIFIED KAT Changes
#include "\y\gerrng\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_KAT_CHANGES
  #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_KAT_CHANGES
  #define DEBUG_SETTINGS DEBUG_SETTINGS_KAT_CHANGES
#endif

#include "\y\gerrng\addons\main\script_macros.hpp"


// KAT Macros
#define KAT_PREFIX kat

#define KAT_ADDON(component)        DOUBLES(KAT_PREFIX,component)

#define KATGVAR(module,var)         TRIPLES(KAT_PREFIX,module,var)
#define QKATGVAR(module,var)        QUOTE(KATGVAR(module,var))
#define QQKATGVAR(module,var)       QUOTE(QKATGVAR(module,var))

#define KATFUNC(module,function)    TRIPLES(DOUBLES(KAT_PREFIX,module),fnc,function)
#define QKATFUNC(module,function)   QUOTE(KATFUNC(module,function))
#define KATLINKFUNC(module,function) {call KATFUNC(module,function);}

#define KATLSTRING(module,string)   QUOTE(TRIPLES(STR,DOUBLES(KAT_PREFIX,module),string))
#define KATLLSTRING(module,string)  localize KATLSTRING(module,string)
#define KATCSTRING(module,string)   QUOTE(TRIPLES($STR,DOUBLES(KAT_PREFIX,module),string))

#define KATPATHTOF(component,path) \x\kat\addons\component\path
#define QKATPATHTOF(component,path) QUOTE(KATPATHTOF(component,path))

#define DEFAULT_BODY_FLUID [2700, 3300, 500, 10000, 6000]
#define VAR_BODY_FLUID                 QKATGVAR(circulation,bodyFluid)
#define GET_BODY_FLUID(unit)           (unit getVariable [VAR_BODY_FLUID, DEFAULT_BODY_FLUID])

#define GET_BLOOD_VOLUME_LITERS(unit)  ((GET_BODY_FLUID(unit) select 4) / 1000)

#define REDUCE_TOTAL_BLOOD_VOLUME(unit,volume) (unit setVariable [VAR_BODY_FLUID, [(GET_BODY_FLUID(unit) select 0) - (volume / 2), (GET_BODY_FLUID(unit) select 1) - (volume / 2), (GET_BODY_FLUID(unit) select 2), (GET_BODY_FLUID(unit) select 3), (GET_BODY_FLUID(unit) select 4) - volume], true])

#define DEFAULT_BODYPART_DAMAGE_VALUES [0,0,0,0,0,0]
#define VAR_BODYPART_DAMAGE   QACEGVAR(medical,bodyPartDamage)

#define ALL_BODY_PARTS ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"]
#define ALL_SELECTIONS ["head", "body", "hand_l", "hand_r", "leg_l", "leg_r"]
#define ALL_HITPOINTS ["HitHead", "HitChest", "HitLeftArm", "HitRightArm", "HitLeftLeg", "HitRightLeg"]

#define GET_BODYPART_DAMAGE(unit)   (unit getVariable [VAR_BODYPART_DAMAGE, DEFAULT_BODYPART_DAMAGE_VALUES])
