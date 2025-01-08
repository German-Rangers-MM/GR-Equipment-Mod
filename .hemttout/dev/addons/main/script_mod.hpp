// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX y
#define PREFIX GerRng

// TODO: Consider Mod-wide or Component-narrow versions  (or both, depending on wishes!)
// We will use the DATE for the BUILD# in the format YYMMDD - VM
#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

#define GERRNG_TAG GERRNG

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.0
#define REQUIRED_CBA_VERSION {3,18,0}


#ifndef COMPONENT_BEAUTIFIED
    #define COMPONENT_BEAUTIFIED COMPONENT
#endif
#ifdef SUBCOMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(GerRng - COMPONENT_BEAUTIFIED - SUBCOMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(GerRng - COMPONENT_BEAUTIFIED)
#endif