#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\z\ace\addons\main\script_macros.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"


#define ACE_PREFIX ace

#define ACE_ADDON(component)        DOUBLES(ACE_PREFIX,component)

#define ACEGVAR(module,var)         TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var)        QUOTE(ACEGVAR(module,var))
#define QQACEGVAR(module,var)       QUOTE(QACEGVAR(module,var))

#define ACEFUNC(module,function)    TRIPLES(DOUBLES(ACE_PREFIX,module),fnc,function)
#define QACEFUNC(module,function)   QUOTE(ACEFUNC(module,function))

#define ACELSTRING(module,string)   QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,module),string))
#define ACELLSTRING(module,string)  localize ACELSTRING(module,string)
#define ACECSTRING(module,string)   QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),string))

#define ACEPATHTOF(component,path) \z\ace\addons\component\path
#define QACEPATHTOF(component,path) QUOTE(ACEPATHTOF(component,path))

// Check
#define CHECK(CONDITION) if (CONDITION) exitWith {}
#define CHECKRET(CONDITION,RETURN) if (CONDITION) exitWith {RETURN;}

#ifdef SUBPREP
    #undef SUBPREP
#endif

#ifdef DISABLE_COMPILE_CACHE
    #define SUBPREP(sub,fncName) DFUNC(fncName) = compileScript [QPATHTOF(functions\sub\DOUBLES(fnc,fncName).sqf)]
#else
    #define SUBPREP(sub,fncName) [QPATHTOF(functions\sub\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#ifdef PREPSUB
    #undef PREPSUB
#endif

#ifdef DISABLE_COMPILE_CACHE
    #define PREPSUB(sub,fncName) DFUNC(fncName) = compileScript [QPATHTOF(sub\functions\DOUBLES(fnc,fncName).sqf)]
#else
    #define PREPSUB(sub,fncName) [QPATHTOF(sub\functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif