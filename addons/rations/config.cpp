#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class ADDON
    { 
        name = COMPONENT_NAME; 
        units[] = {
            QGVAR(waterCarrier),
            QGVAR(epaBox_1_5),
            QGVAR(epaBox_5_9),
            QGVAR(epaBox_10_14),
            QGVAR(epaBox_15_19)
        }; 
        weapons[] = {
            QGVAR(EPa_typ_i_2_2),
            QGVAR(EPa_typ_i_1_2),
            QGVAR(EPa_typ_iia_2_2),
            QGVAR(EPa_typ_iia_1_2),
            QGVAR(EPa_typ_iib_2_2),
            QGVAR(EPa_typ_iib_1_2),
            QGVAR(EPa_typ_iii_2_2),
            QGVAR(EPa_typ_iii_1_2),
            QGVAR(EPa_typ_iv_2_2),
            QGVAR(EPa_typ_iv_1_2),
            QGVAR(EPa_typ_v_2_2),
            QGVAR(EPa_typ_v_1_2),
            QGVAR(EPa_typ_vi_2_2),
            QGVAR(EPa_typ_vi_1_2),
            QGVAR(EPa_typ_vii_2_2),
            QGVAR(EPa_typ_vii_1_2),
            QGVAR(EPa_typ_viii_2_2),
            QGVAR(EPa_typ_viii_1_2),
            QGVAR(EPa_typ_ix_2_2),
            QGVAR(EPa_typ_ix_1_2),
            QGVAR(EPa_typ_x_2_2),
            QGVAR(EPa_typ_x_1_2),
            QGVAR(EPa_typ_xi_2_2),
            QGVAR(EPa_typ_xi_1_2),
            QGVAR(EPa_typ_xii_2_2),
            QGVAR(EPa_typ_xii_1_2),
            QGVAR(EPa_typ_xiii_2_2),
            QGVAR(EPa_typ_xiii_1_2),
            QGVAR(EPa_typ_xiv_2_2),
            QGVAR(EPa_typ_xiv_1_2),
            QGVAR(EPa_typ_xv_2_2),
            QGVAR(EPa_typ_xv_1_2),
            QGVAR(EPa_typ_xvi_2_2),
            QGVAR(EPa_typ_xvi_1_2),
            QGVAR(EPa_typ_xvii_2_2),
            QGVAR(EPa_typ_xvii_1_2),
            QGVAR(EPa_typ_xviii_2_2),
            QGVAR(EPa_typ_xviii_1_2),
            QGVAR(EPa_typ_xix_2_2),
            QGVAR(EPa_typ_xix_1_2),

            QGVAR(HydrationBladder_3L),
            QGVAR(HydrationBladder_3L_5_6),
            QGVAR(HydrationBladder_3L_4_6),
            QGVAR(HydrationBladder_3L_3_6),
            QGVAR(HydrationBladder_3L_2_6),
            QGVAR(HydrationBladder_3L_1_6),
            QGVAR(HydrationBladder_3L_Empty),
            QGVAR(HydrationBladder_2L),
            QGVAR(HydrationBladder_2L_3_4),
            QGVAR(HydrationBladder_2L_2_4),
            QGVAR(HydrationBladder_2L_1_4),
            QGVAR(HydrationBladder_2L_Empty)
        }; 
        requiredVersion = REQUIRED_VERSION; 
        requiredAddons[] = {}; 
        author = ECSTRING(main,Team); 
        VERSION_CONFIG;
        authors[] = {"Cookie"};
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgVehicles.hpp"

#include "CfgWeapons.hpp"
