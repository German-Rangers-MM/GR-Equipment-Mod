// GerRng_Faction\config.cpp 2024-04-23, 17:15

class CfgPatches {
    class GerRng_ {
        units[] = {
            "GerRng_AW101_Merlin_TTH_01",
            "GerRng_CH_146_Griffon_Radar_01",
            "GerRng_CH_146_Griffon_Transport_01",
            "GerRng_Ch_146_Griffon_MedEvac_01",
            "GerRng_Iveco_Medical_W",
            "GerRng_Iveco_Transport_W",
			"GerRng_Iveco_Transport_Covered_W",
            "GerRng_Iveco_Fuel_W",
            "GerRng_Iveco_Repair_W",
            "GerRng_Iveco_Ammo_W",
            "GerRng_Iveco_Medical_D",
            "GerRng_Iveco_Transport_D",
			"GerRng_Iveco_Transport_Covered_D",
            "GerRng_Iveco_Fuel_D",
            "GerRng_Iveco_Repair_D",
            "GerRng_Iveco_Ammo_D",
            "GerRng_CH_47F_TTH_01",
			"GerRng_CH_47F_TTH_VIV_01",
			"GerRng_Lkw15t_Box_W",
			"GerRng_Lkw15t_Repair_W",
			"GerRng_Lkw15t_Ammo_W",
			"GerRng_Lkw15t_Flatbed_W",
			"GerRng_Lkw15t_Box_D",
			"GerRng_Lkw15t_Repair_D",
			"GerRng_Lkw15t_Ammo_D",
			"GerRng_Lkw15t_Flatbed_D",
			"GerRng_CH_146_Griffon_CAS",
			"GerRng_B_FENNEK_GER_Wdl",
			"GerRng_B_FENNEK_GER_D",
			"GerRng_B_FENNEK_GER_HMG_Wdl",
			"GerRng_B_FENNEK_GER_HMG_D",
			"GerRng_B_FENNEK_GER_GMG_Wdl",
			"GerRng_B_FENNEK_GER_GMG_D",
			"GerRng_FENNEK_NEF_W",
			"GerRng_FENNEK_NEF_D",
			"GerRng_Amarok_covered_GER_Grn",
			"GerRng_Amarok_covered_comms_GER_Grn",
			"GerRng_Amarok_covered_engineering_GER_Grn",
			"GerRng_Amarok_engineering_GER_Grn",
			"GerRng_Amarok_covered_san_GER_Grn",

			"GerRng_Amarok_covered_GER_FLK",
			"GerRng_Amarok_covered_comms_GER_FLK",
			"GerRng_Amarok_covered_engineering_GER_FLK",
			"GerRng_Amarok_engineering_GER_FLK",
			"GerRng_Amarok_covered_san_GER_FLK",

			"GerRng_Amarok_covered_GER_TRP",
			"GerRng_Amarok_covered_comms_GER_TRP",
			"GerRng_Amarok_covered_engineering_GER_TRP",
			"GerRng_Amarok_engineering_GER_TRP",
			"GerRng_Amarok_covered_san_GER_TRP",

			"GerRng_Wiesel_AT",
			"GerRng_Wiesel_AA",
			"GerRng_Wiesel_CA",
			"GerRng_Wiesel_SC",
            "GerRng_WG_13_Sea_Lynx",
            "GerRng_CH_53E_TTH_01",
            "GerRng_CH_53E_TTH_VIV_01"
        };
        weapons[] = {};
        requiredVersion = 1.62;
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
        author = "dalleburn, jan";
        authors[] = {"Dalleburn, jan"};
    };
};

class CfgFactionClasses {
    class GerRng_ {
        displayName = "German Rangers";
        side = 1;
        flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
        priority = 0;
    };
};

class CfgEditorCategories
{
    class GerRng_
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
    class FennekSubcat
    {
        displayName = "Fennek";
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
    GerRng_Helme[] = { "GerRng_MedTent_01" };
};
//class CBA_Extended_EventHandlers_base;

#include "CfgVehicles.hpp"