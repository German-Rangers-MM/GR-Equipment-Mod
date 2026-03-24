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
            QGVAR(epaBox_15_19),
            QGVAR(Keksies_Item)
        }; 
        weapons[] = {
            QGVAR(EPa_typ_i),
            QGVAR(EPa_typ_iia),
            QGVAR(EPa_typ_iib),
            QGVAR(EPa_typ_iii),
            QGVAR(EPa_typ_iv),
            QGVAR(EPa_typ_v),
            QGVAR(EPa_typ_vi),
            QGVAR(EPa_typ_vii),
            QGVAR(EPa_typ_viii),
            QGVAR(EPa_typ_ix),
            QGVAR(EPa_typ_x),
            QGVAR(EPa_typ_xi),
            QGVAR(EPa_typ_xii),
            QGVAR(EPa_typ_xiii),
            QGVAR(EPa_typ_xiv),
            QGVAR(EPa_typ_xv),
            QGVAR(EPa_typ_xvi),
            QGVAR(EPa_typ_xvii),
            QGVAR(EPa_typ_xviii),
            QGVAR(EPa_typ_xix),

            QGVAR(Meal_Ravioli_Champignonsauce),
            QGVAR(Meal_Indische_Reispfanne),
            QGVAR(Meal_Gulasch_Kartoffeln),
            QGVAR(Meal_Cevapcici),
            QGVAR(Meal_Gemuesechilli),
            QGVAR(Meal_Linseneintopf),
            QGVAR(Meal_Spiralnudeln_Hackfleischsosse),
            QGVAR(Meal_Tortellini),
            QGVAR(Meal_Reis_Putenfleisch),
            QGVAR(Meal_Schweinegulaschtopf),
            QGVAR(Meal_Hacksteak_Kartoffeln),
            QGVAR(Meal_Reis_Hackfleischsosse),
            QGVAR(Meal_Schupfnudeln),
            QGVAR(Meal_Erbseneintopf),
            QGVAR(Meal_Currywurst),
            QGVAR(Meal_Hacksteak_Gemuese),
            QGVAR(Meal_Elchfleisch_Gourmettopf),
            QGVAR(Meal_Pasta_Primavera),
            QGVAR(Meal_Huehnchen_Sahnenudeln),
            QGVAR(Meal_Reispfanne_Balkanart),
            QGVAR(Meal_Kartoffeleintopf),
            QGVAR(Meal_Waldpilze_SojaRagout),
            QGVAR(Meal_Nudeln_SojaBolognese),
            QGVAR(Meal_Sojarisotto),
            QGVAR(Meal_Sojaragout),
            QGVAR(Meal_Kartoffeltopf_Rind),
            QGVAR(Meal_Nudeltopf_Bella),
            QGVAR(Meal_Curryhuhn),
            QGVAR(Meal_GemueseRisotto),
            QGVAR(Meal_Beef_Stroganoff),
            QGVAR(Meal_Nudeln_Kraeutercreme),
            QGVAR(Meal_Fischtopf_Ruegen),
            QGVAR(Meal_Couscous),
            QGVAR(Meal_KerbelKartoffeltopf),
            QGVAR(Meal_Pasta_Siciliana),
            QGVAR(Meal_Nudeln_Fleischkloesschen),
            QGVAR(Meal_Jaegertopf),

            QGVAR(Snack_Griessspeise_Fruechte),
            QGVAR(Snack_Obstsalat),
            QGVAR(Snack_Griessbrei_Obst),
            QGVAR(Snack_Muesliriegel),
            QGVAR(Snack_Schokomuesli),
            QGVAR(Snack_Milchreis),
            QGVAR(Snack_Muesli_Rosinen),
            QGVAR(Snack_Mousse_Stracciatella),
            QGVAR(Snack_Fruechtemuesli),
            QGVAR(Snack_Orangencreme),
            QGVAR(Snack_Nussmuesli),
            QGVAR(Snack_Haselnusspudding),
            QGVAR(Snack_Joghurtmuesli),
            QGVAR(Snack_Mousse_Chocolat),

            QGVAR(Misc_Dosenbrot_2_2),
            QGVAR(Misc_Dosenbrot_1_2),
            QGVAR(Misc_Hartkekse_4_4),
            QGVAR(Misc_Hartkekse_3_4),
            QGVAR(Misc_Hartkekse_2_4),
            QGVAR(Misc_Hartkekse_1_4),

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
            QGVAR(HydrationBladder_2L_Empty),
            QGVAR(HydrationBladder_1_5L),
            QGVAR(HydrationBladder_1_5L_2_3),
            QGVAR(HydrationBladder_1_5L_1_3),
            QGVAR(HydrationBladder_1_5L_Empty),

            QGVAR(Keksies)
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
