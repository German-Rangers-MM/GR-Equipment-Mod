#include "script_component.hpp"
#include "script_config_macros.hpp"

class CfgPatches
{
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QGVAR(helmet_pilot_w),
            QGVAR(helmet_pilot_b),
            QGVAR(helmet_crew_w),
            QGVAR(helmet_crew_b),

            "gerrng_opscore_covered_fleck",
            "gerrng_opscore_covered_Tropen",
            "gerrng_opscore_sprayed",
            "gerrng_opscore_grey",
            "gerrng_opscore_green",
            "gerrng_opscore_tan",
            "gerrng_opscore_black",
            "gerrng_opscore_covered_fleck_sf",
            "gerrng_opscore_covered_Tropen_sf",
            "gerrng_opscore_sprayed_sf",
            "gerrng_opscore_grey_sf",
            "gerrng_opscore_green_sf",
            "gerrng_opscore_tan_sf",
            "gerrng_opscore_black_sf",
            "gerrng_opscore_covered_fleck_NoHS",
            "gerrng_opscore_covered_Tropen_NoHS",
            "gerrng_opscore_sprayed_NoHS",
            "gerrng_opscore_grey_NoHS",
            "gerrng_opscore_green_NoHS",
            "gerrng_opscore_tan_NoHS",
            "gerrng_opscore_black_NoHS",

            PATCH_ENTRY(fzf),
            PATCH_ENTRY(f1),
            PATCH_ENTRY(f2),
            PATCH_ENTRY(f3),
            PATCH_ENTRY(f4),

            PATCH_ENTRY(agf),
            PATCH_ENTRY(a1),
            PATCH_ENTRY(a2),
            PATCH_ENTRY(a3),
            PATCH_ENTRY(a4),
            PATCH_ENTRY(a5),
            PATCH_ENTRY(a6),
            PATCH_ENTRY(a7),
            PATCH_ENTRY(a8),
            PATCH_ENTRY(a9),
            PATCH_ENTRY(a10),
            PATCH_ENTRY(a11),
            PATCH_ENTRY(a12),

            PATCH_ENTRY(bgf),
            PATCH_ENTRY(b1),
            PATCH_ENTRY(b2),
            PATCH_ENTRY(b3),
            PATCH_ENTRY(b4),
            PATCH_ENTRY(b5),
            PATCH_ENTRY(b6),
            PATCH_ENTRY(b7),
            PATCH_ENTRY(b8),
            PATCH_ENTRY(b9),
            PATCH_ENTRY(b10),
            PATCH_ENTRY(b11),
            PATCH_ENTRY(b12),

            PATCH_ENTRY(cgf),
            PATCH_ENTRY(c1),
            PATCH_ENTRY(c2),
            PATCH_ENTRY(c3),
            PATCH_ENTRY(c4),
            PATCH_ENTRY(c5),
            PATCH_ENTRY(c6),
            PATCH_ENTRY(c7),
            PATCH_ENTRY(c8),
            PATCH_ENTRY(c9),
            PATCH_ENTRY(c10),
            PATCH_ENTRY(c11),
            PATCH_ENTRY(c12),

            PATCH_ENTRY(vzf),
            PATCH_ENTRY(v1),
            PATCH_ENTRY(v2),
            PATCH_ENTRY(v3),
            PATCH_ENTRY(v4),

            PATCH_ENTRY(xgf),
            PATCH_ENTRY(x1),
            PATCH_ENTRY(x2),
            PATCH_ENTRY(x3),
            PATCH_ENTRY(x4),
            PATCH_ENTRY(x5),
            PATCH_ENTRY(x6),
            PATCH_ENTRY(x7),
            PATCH_ENTRY(x8),
            PATCH_ENTRY(x9),
            PATCH_ENTRY(x10),
            PATCH_ENTRY(x11),
            PATCH_ENTRY(x12),

            PATCH_ENTRY(ygf),
            PATCH_ENTRY(y1),
            PATCH_ENTRY(y2),
            PATCH_ENTRY(y3),
            PATCH_ENTRY(y4),
            PATCH_ENTRY(y5),
            PATCH_ENTRY(y6),
            PATCH_ENTRY(y7),
            PATCH_ENTRY(y8),
            PATCH_ENTRY(y9),
            PATCH_ENTRY(y10),
            PATCH_ENTRY(y11),
            PATCH_ENTRY(y12),

            PATCH_ENTRY(zgf),
            PATCH_ENTRY(z1),
            PATCH_ENTRY(z2),
            PATCH_ENTRY(z3),
            PATCH_ENTRY(z4),
            PATCH_ENTRY(z5),
            PATCH_ENTRY(z6),
            PATCH_ENTRY(z7),
            PATCH_ENTRY(z8),
            PATCH_ENTRY(z9),
            PATCH_ENTRY(z10),
            PATCH_ENTRY(z11),
            PATCH_ENTRY(z12),

            PATCH_ENTRY(lgf),
            PATCH_ENTRY(l1),
            PATCH_ENTRY(l2),
            PATCH_ENTRY(l3),
            PATCH_ENTRY(l4),
            PATCH_ENTRY(l5),
            PATCH_ENTRY(l6),
            PATCH_ENTRY(l7),

            PATCH_ENTRY(sgf),
            PATCH_ENTRY(stf),
            PATCH_ENTRY(s1),
            PATCH_ENTRY(s2),
            PATCH_ENTRY(s3),
            PATCH_ENTRY(s4),
            PATCH_ENTRY(s5),
            PATCH_ENTRY(s6),
            PATCH_ENTRY(s7),
            PATCH_ENTRY(s8),

            PATCH_ENTRY(mavd),
            PATCH_ENTRY(m1),
            PATCH_ENTRY(m2),
            PATCH_ENTRY(m3),
            PATCH_ENTRY(m4),
            PATCH_ENTRY(m5),
            PATCH_ENTRY(m6),
            PATCH_ENTRY(m7),
            PATCH_ENTRY(m8),

            PATCH_ENTRY(rgf),
            PATCH_ENTRY(r1),
            PATCH_ENTRY(r2),
            PATCH_ENTRY(r3),

            PATCH_ENTRY(kk),
            PATCH_ENTRY(k1),
            PATCH_ENTRY(k2)
        };
        requiredVersion = REQUIRED_VERSION;
		requiredAddons[]={"CUP_Creatures_People_LoadOrder"};
        author = ECSTRING(main,Team);
        VERSION_CONFIG;
        authors[] = {"Dalleburn", "Jan", "Cookie"};
    };
};

#include "CfgVehicles.hpp"
#include "Cfginsignias.hpp"
#include "CfgWeapons.hpp"

#include "CfgEventHandlers.hpp"
