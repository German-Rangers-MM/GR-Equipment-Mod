#include "script_component.hpp" 
 
class CfgPatches 
{ 
    class ADDON
    { 
        name = COMPONENT_NAME;
        weapons[] = {}; 
        requiredVersion = REQUIRED_VERSION; 
        requiredAddons[] = {}; 
        author = ECSTRING(main,Team); 
        VERSION_CONFIG;
        authors[] = {""};
        units[] = {
            QGVAR(WG_13_Sea_Lynx),
            QGVAR(WG_13_Sea_Lynx_Armed),

            QGVAR(AW101_Merlin_TTH_01),
            QGVAR(AW101_Merlin_MTH_01),

            QGVAR(MSP_Cargo_F),
            QGVAR(Box_ammo_L_F),
            QGVAR(Box_ammo_M_F),
            QGVAR(Box_ammo_S_F),

            QGVAR(UAV_06_F),
            QGVAR(UAV_06_antimine_F),
            QGVAR(UAV_06_medical_F),

            QGVAR(Amarok_GER_Grn),
            QGVAR(Amarok_GER_FLK),
            QGVAR(Amarok_GER_TRP),
            QGVAR(Amarok_covered_GER_Grn),
            QGVAR(Amarok_covered_GER_FLK),
            QGVAR(Amarok_covered_GER_TRP),
            QGVAR(Amarok_covered_comms_GER_Grn),
            QGVAR(Amarok_covered_comms_GER_FLK),
            QGVAR(Amarok_covered_comms_GER_TRP),
            QGVAR(Amarok_covered_san_GER_Grn),
            QGVAR(Amarok_covered_san_GER_FLK),
            QGVAR(Amarok_covered_san_GER_TRP),
            QGVAR(Amarok_engineering_covered_GER_Grn),
            QGVAR(Amarok_engineering_covered_GER_FLK),
            QGVAR(Amarok_engineering_covered_GER_TRP),
            QGVAR(Amarok_engineering_GER_Grn),
            QGVAR(Amarok_engineering_GER_FLK),
            QGVAR(Amarok_engineering_GER_TRP),

            QGVAR(M1129_MC_MK19_Wdl),
            QGVAR(M270_HE_Wdl),
            QGVAR(MBT_01_arty_F),
            QGVAR(M119),
            QGVAR(M252),

            QGVAR(CH_47F_TTH_01),
            QGVAR(CH_47F_TTH_VIV_01),

            QGVAR(CH_53E_TTH_01),
            QGVAR(CH_53E_TTH_VIV_01),

            QGVAR(B_Dingo_GER_Wdl),
            QGVAR(B_Dingo_GL_GER_Wdl),
            QGVAR(B_Dingo_GL_GER_D),
            QGVAR(B_Dingo_GER_D),

            QGVAR(B_FENNEK_GER_Wdl),
            QGVAR(B_FENNEK_GER_D),
            QGVAR(B_FENNEK_GER_HMG_Wdl),
            QGVAR(B_FENNEK_GER_HMG_D),
            QGVAR(B_FENNEK_GER_GMG_Wdl),
            QGVAR(B_FENNEK_GER_GMG_D),
            QGVAR(B_FENNEK_GER_Recon_Wdl),
            QGVAR(B_FENNEK_GER_Recon_D),
            QGVAR(FENNEK_NEF_W),
            QGVAR(FENNEK_NEF_D),

            QGVAR(CH_146_Griffon_Radar_01),
            QGVAR(CH_146_Griffon_Transport_01),
            QGVAR(CH_146_Griffon_CAS_01),
            QGVAR(CH_146_Griffon_MedEvac_01),

            QGVAR(M1133_MEV_Wdl),
            QGVAR(Boxer_Empty_GER_WDL),
            QGVAR(Boxer_GMG_GER_WDL),
            QGVAR(Boxer_HMG_GER_WDL),
            QGVAR(Boxer_Empty_GER_DES),
            QGVAR(Boxer_GMG_GER_DES),
            QGVAR(Boxer_HMG_GER_DES),
            QGVAR(APC_Wheeled),
            QGVAR(APC_Wheeled_slat),
            QGVAR(AFV_Wheeled),
            QGVAR(AFV_Wheeled_slat),
            QGVAR(AFV_Wheeled_up),
            QGVAR(AFV_Wheeled_up_slat),
            QGVAR(APC_Tracked_CRV),

            QGVAR(MK10_GB),
            QGVAR(LCU1600_HIL),
            QGVAR(SDV_01_F),
            QGVAR(Boat_Transport_01_F),
            QGVAR(Boat_Armed_01_minigun_F),
            QGVAR(RHIB),
            QGVAR(RHIB_Mk19),

            QGVAR(UAV_01_F),
            QGVAR(UGV_02_Demining_F),
            QGVAR(UGV_02_Science_F),
            QGVAR(UAV_02_dynamicLoadout_F),

            QGVAR(LSV_01_unarmed_F),
            QGVAR(LSV_01_armed_F),
            QGVAR(LSV_01_AT_F),
            QGVAR(LR_Transport),
            QGVAR(LR_MG),
            QGVAR(LR_SF_HMG),
            QGVAR(LR_SF_GMG),
            QGVAR(Jackal2_L2A1),
            QGVAR(Jackal2_L2A1_GMG),
            QGVAR(Coyote_L2A1),
            QGVAR(Coyote_L2A1_GMG),
            QGVAR(Quadbike_01_F),

            QGVAR(C130J_USMC),
            QGVAR(C130J_USMC_Cargo),

            QGVAR(MBT_03_cannon_F),
            QGVAR(Leopard2A6),

            QGVAR(AAA_System_01_F),
            QGVAR(Radar_System_01_F),
            QGVAR(SAM_System_03_F),
            QGVAR(Ship_Gun_01_F),
            QGVAR(Ship_MRLS_01_F),
            QGVAR(TOW2_TriPod_USMC),

            QGVAR(IVECO_Transport_W),
            QGVAR(IVECO_Transport_D),
            QGVAR(IVECO_Transport_Covered_W),
            QGVAR(IVECO_Transport_Covered_D),
            QGVAR(IVECO_Medic_W),
            QGVAR(IVECO_Medic_D),
            QGVAR(IVECO_Fuel_W),
            QGVAR(IVECO_Fuel_D),
            QGVAR(IVECO_Ammo_W),
            QGVAR(IVECO_Ammo_D),
            QGVAR(IVECO_Repair_W),
            QGVAR(IVECO_Repair_D),
            QGVAR(IVECO_MLRS_W),
            QGVAR(IVECO_MLRS_D),

            QGVAR(MedTent_01),

            QGVAR(Lkw15t_Box_W),
            QGVAR(Lkw15t_Box_D),
            QGVAR(Lkw15t_Repair_W),
            QGVAR(Lkw15t_Repair_D),
            QGVAR(Lkw15t_Ammo_W),
            QGVAR(Lkw15t_Ammo_D),
            QGVAR(Lkw15t_Flatbed_W),
            QGVAR(Lkw15t_Flatbed_D),
            QGVAR(Lkw15t_transport_W),
            QGVAR(Lkw15t_transport_D),
            QGVAR(Lkw15t_covered_W),
            QGVAR(Lkw15t_covered_D),
            QGVAR(Lkw15t_medical_W),
            QGVAR(Lkw15t_medical_D),
            QGVAR(Lkw15t_fuel_W),
            QGVAR(Lkw15t_fuel_D),

            QGVAR(MH60S_MEV),

            QGVAR(Van_Transport_BW),
            QGVAR(Van_San_BW),
            QGVAR(Van_cargo_BW),
            QGVAR(Van_service_BW),
            QGVAR(T5_box_BW),
            QGVAR(T5_fuel_BW),
            QGVAR(T5_transport_BW),

            QGVAR(wiesel_AT),
            QGVAR(wiesel_AA),
            QGVAR(wiesel_SC),
            QGVAR(wiesel_CA),
            QGVAR(wiesel_AT_slat),
            QGVAR(wiesel_AA_slat),
            QGVAR(wiesel_SC_slat),
            QGVAR(wiesel_CA_slat)
        };
    };
};
class CfgFactionClasses {
    class GVAR(rangers_faction) {
        displayName = "German Rangers";
        side = 1;
        flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
        priority = 0;
    };
};

class CfgEditorCategories
{
    class GVAR(rangers_cat)
    {
        displayName = "German Rangers";
        side = 1;
    };
};

class CfgEditorSubcategories
{
    class GVAR(Pkw_L_Subcat)
    {
        displayName = CSTRING(subcat_pkw_light);
    };
    class GVAR(Pkw_A_Subcat)
    {
        displayName = CSTRING(subcat_pkw_armored);
    };
    class GVAR(Wiesel_Subcat)
    {
        displayName = CSTRING(subcat_wiesel);
    };
    class GVAR(Lkw_Subcat)
    {
        displayName = CSTRING(subcat_lkw);
    };
    
    class GVAR(Heli_L_Subcat)
    {
        displayName = CSTRING(subcat_heli_light);
    };
    
    class GVAR(Heli_M_Subcat)
    {
        displayName = CSTRING(subcat_heli_medium);
    };
    
    class GVAR(Heli_H_Subcat)
    {
        displayName = CSTRING(subcat_heli_heavy);
    };
};

class ace_medical_facilities {
    gerrng[] = { QGVAR(MedTent_01) };
};
#include "CfgVehicles.hpp"

#include "CfgMagazines.hpp"
