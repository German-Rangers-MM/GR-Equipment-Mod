#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
		name = COMPONENT_NAME;
        units[] = {
            "gerrng_AW101_Merlin_TTH_01",
            "gerrng_CH_146_Griffon_Radar_01",
            "gerrng_CH_146_Griffon_Transport_01",
            "gerrng_Ch_146_Griffon_MedEvac_01",
            "gerrng_Iveco_Medical_W",
            "gerrng_Iveco_Transport_W",
			"gerrng_Iveco_Transport_Covered_W",
            "gerrng_Iveco_Fuel_W",
            "gerrng_Iveco_Repair_W",
            "gerrng_Iveco_Ammo_W",
            "gerrng_Iveco_Medical_D",
            "gerrng_Iveco_Transport_D",
			"gerrng_Iveco_Transport_Covered_D",
            "gerrng_Iveco_Fuel_D",
            "gerrng_Iveco_Repair_D",
            "gerrng_Iveco_Ammo_D",
            "gerrng_CH_47F_TTH_01",
			"gerrng_CH_47F_TTH_VIV_01",
			"gerrng_Lkw15t_Box_W",
			"gerrng_Lkw15t_Repair_W",
			"gerrng_Lkw15t_Ammo_W",
			"gerrng_Lkw15t_Flatbed_W",
			"gerrng_Lkw15t_Box_D",
			"gerrng_Lkw15t_Repair_D",
			"gerrng_Lkw15t_Ammo_D",
			"gerrng_Lkw15t_Flatbed_D",
			"gerrng_CH_146_Griffon_CAS",
			"gerrng_B_FENNEK_GER_Wdl",
			"gerrng_B_FENNEK_GER_D",
			"gerrng_B_FENNEK_GER_HMG_Wdl",
			"gerrng_B_FENNEK_GER_HMG_D",
			"gerrng_B_FENNEK_GER_GMG_Wdl",
			"gerrng_B_FENNEK_GER_GMG_D",
			"gerrng_FENNEK_NEF_W",
			"gerrng_FENNEK_NEF_D",
			"gerrng_Amarok_covered_GER_Grn",
			"gerrng_Amarok_covered_comms_GER_Grn",
			"gerrng_Amarok_covered_engineering_GER_Grn",
			"gerrng_Amarok_engineering_GER_Grn",
			"gerrng_Amarok_covered_san_GER_Grn",

			"gerrng_Amarok_covered_GER_FLK",
			"gerrng_Amarok_covered_comms_GER_FLK",
			"gerrng_Amarok_covered_engineering_GER_FLK",
			"gerrng_Amarok_engineering_GER_FLK",
			"gerrng_Amarok_covered_san_GER_FLK",

			"gerrng_Amarok_covered_GER_TRP",
			"gerrng_Amarok_covered_comms_GER_TRP",
			"gerrng_Amarok_covered_engineering_GER_TRP",
			"gerrng_Amarok_engineering_GER_TRP",
			"gerrng_Amarok_covered_san_GER_TRP",

			"gerrng_Wiesel_AT",
			"gerrng_Wiesel_AA",
			"gerrng_Wiesel_CA",
			"gerrng_Wiesel_SC",
            "gerrng_WG_13_Sea_Lynx",
            "gerrng_CH_53E_TTH_01",
            "gerrng_CH_53E_TTH_VIV_01"
        };
        weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Air_F_Beta_Heli_Transport_02",
            "A3_Air_F",
            "A3_Air_F_Heli_Light_01",
            "A3_Air_F_Heli_Light_02",
            "A3_Air_F_Beta_Heli_Transport_01",
            "CUP_AirVehicles_412",
            "CUP_AirVehicles_AH6",
            "A3_Air_F_Heli",
            "A3_Data_F",
            "A3_Data_F_Curator",
            "cba_xeh",
            "A3_Soft_F_Gamma_Truck_02",
            "A3_Sounds_F",
            "A3_Soft_F_Beta_Truck_02",
            "A3_Soft_F_Enoch_Truck_02",
            "A3_Soft_F",
            "A3_Soft_F_Beta_Truck_01",
            "A3_Soft_F_Gamma_Truck_01",
            "A3_Soft_F_Gamma_Van_01",
            "A3_Soft_F_EPC_Truck_03",
            "A3_Soft_F_Orange_Van_02",
            "CUP_WheeledVehicles_Ural",
            "CUP_WheeledVehicles_RM70",
            "A3_Soft_F_Gamma_Hatchback_01",
            "A3_Soft_F_Exp_Offroad_02",
            "A3_Data_F_ParticleEffects",
            "A3_Armor_F_Beta",
            "CUP_AirVehicles_CH47",
			"A3_Soft_F_Enoch_Truck_01",
			"A3_Soft_F_Beta_MRAP_03",
			"A3_Armor_F_Tank_LT_01",
			"A3_soft_f_enoch_Offroad_01",
            "CUP_AirVehicles_CH53E",
            "CUP_AirVehciles_AW159"
        };
        author = ECSTRING(main,Team);
        VERSION_CONFIG;
        authors[] = {"Dalleburn, jan"};
    };
};

class CfgFactionClasses {
    class gerrng {
        displayName = "German Rangers";
        side = 1;
        flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
        priority = 0;
    };
};

class CfgEditorCategories
{
    class gerrng
    {
        displayName = "German Rangers";
        side = 1;
    };
};

class CfgEditorSubcategories
{
    class AmarokSubcat
    {
        displayName = "Amarok (BW)";
    };
    class AllschutzSubcat
    {
        displayName = "Pkw (Allschutz)";
    };
    class WieselSubcat
    {
        displayName = "Wiesel";
    };
    class LkwSubcat
    {
        displayName = "Lkw (Iveco 7t/Multi 15t GL)";
    };
};

class ace_medical_facilities {
    gerrng[] = { "gerrng_MedTent_01" };
};
//class CBA_Extended_EventHandlers_base;

#include "CfgVehicles.hpp"