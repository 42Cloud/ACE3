#define COMPONENT tilting
#include "\z\ace\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_TILTING
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_TILTING
    #define DEBUG_SETTINGS DEBUG_SETTINGS_TILTING
#endif

#include "\z\ace\addons\main\script_macros.hpp"


#define PLACE_WAITING -1
#define PLACE_CANCEL 0
#define PLACE_APPROVE 1

#define ACTION_DISTANCE 7
