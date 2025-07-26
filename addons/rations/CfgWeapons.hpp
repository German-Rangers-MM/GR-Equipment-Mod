class CfgWeapons {


	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;

	class GVAR(HydrationBladder_3L): ACE_ItemCore {
		author = "Boz";
		scope = 2;
		displayName = "3L Hydration Bladder (3L)";
		descriptionShort = "3 Litres of water to sustain you in the field.";
		model = "\a3\characters_f\common\equip_chestrig.p3d";
		picture = QPATHTOF(data\hbui.paa);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 15;
		};
		acex_field_rations_consumeTime = 10;
		acex_field_rations_thirstQuenched = 10;
		acex_field_rations_consumeText = "Drink from Hydration Bladder";
		acex_field_rations_replacementItem = QGVAR(HydrationBladder_3L_5_6);
		acex_field_rations_consumeAnims[] = {"ace_field_rations_drinkStand","ace_field_rations_drinkCrouch","ace_field_rations_drinkProne"};
		acex_field_rations_consumeSounds[] = {"ace_field_rations_drink1","ace_field_rations_drink1","ace_field_rations_drink2"};
		ACE_isFieldRationItem = 1;
	};
	class GVAR(HydrationBladder_3L_5_6): GVAR(HydrationBladder_3L) {
		displayName = "3L Hydration Bladder (2.5L)";
		descriptionShort = "3 Litres of water to sustain you in the field.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 13;
		};
		acex_field_rations_replacementItem = QGVAR(HydrationBladder_3L_4_6);
		acex_field_rations_refillItem = QGVAR(HydrationBladder_3L);
		acex_field_rations_refillAmount = 0.5;
		acex_field_rations_refillTime = 8;
	};
	class GVAR(HydrationBladder_3L_4_6): GVAR(HydrationBladder_3L_5_6) {
		displayName = "3L Hydration Bladder (2L)";
		descriptionShort = "3 Litres of water to sustain you in the field.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 11;
		};
		acex_field_rations_replacementItem = QGVAR(HydrationBladder_3L_3_6);
		acex_field_rations_refillItem = QGVAR(HydrationBladder_3L);
		acex_field_rations_refillAmount = 1;
		acex_field_rations_refillTime = 8;
	};
	class GVAR(HydrationBladder_3L_3_6): GVAR(HydrationBladder_3L_4_6) {
		displayName = "3L Hydration Bladder (1.5L)";
		descriptionShort = "3 Litres of water to sustain you in the field.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 9;
		};
		acex_field_rations_replacementItem = QGVAR(HydrationBladder_3L_2_6);
		acex_field_rations_refillItem = QGVAR(HydrationBladder_3L);
		acex_field_rations_refillAmount = 1.5;
		acex_field_rations_refillTime = 8;
	};
	class GVAR(HydrationBladder_3L_2_6): GVAR(HydrationBladder_3L_3_6) {
		displayName = "3L Hydration Bladder (1L)";
		descriptionShort = "3 Litres of water to sustain you in the field.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 7;
		};
		acex_field_rations_replacementItem = QGVAR(HydrationBladder_3L_1_6);
		acex_field_rations_refillItem = QGVAR(HydrationBladder_3L);
		acex_field_rations_refillAmount = 2;
		acex_field_rations_refillTime = 8;
	};
	class GVAR(HydrationBladder_3L_1_6): GVAR(HydrationBladder_3L_2_6) {
		displayName = "3L Hydration Bladder (0.5L)";
		descriptionShort = "3 Litres of water to sustain you in the field.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 5;
		};
		acex_field_rations_replacementItem = QGVAR(HydrationBladder_3L_Empty);
		acex_field_rations_refillItem = QGVAR(HydrationBladder_3L);
		acex_field_rations_refillAmount = 2.5;
		acex_field_rations_refillTime = 8;
	};
	class GVAR(HydrationBladder_3L_Empty): GVAR(HydrationBladder_3L) {
		displayName = "3L Hydration Bladder (Empty)";
		descriptionShort = "An empty hydration bladder.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
		acex_field_rations_thirstQuenched = 0;
		acex_field_rations_replacementItem = "";
		acex_field_rations_refillItem = QGVAR(HydrationBladder_3L);
		acex_field_rations_refillAmount = 3;
		acex_field_rations_refillTime = 8;
	};

	class GVAR(HydrationBladder_2L): ACE_ItemCore {
		author = "Boz";
		scope = 2;
		displayName = "2L Hydration Bladder (2L)";
		descriptionShort = "2 Litres of water to sustain you in the field.";
		model = "\a3\characters_f\common\equip_chestrig.p3d";
		picture = QPATHTOF(data\hbui.paa);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 11;
		};
		acex_field_rations_consumeTime = 10;
		acex_field_rations_thirstQuenched = 10;
		acex_field_rations_consumeText = "Drink from Hydration Bladder";
		acex_field_rations_replacementItem = QGVAR(HydrationBladder_2L_3_4);
		acex_field_rations_consumeAnims[] = {"ace_field_rations_drinkStand","ace_field_rations_drinkCrouch","ace_field_rations_drinkProne"};
		acex_field_rations_consumeSounds[] = {"ace_field_rations_drink1","ace_field_rations_drink1","ace_field_rations_drink2"};
		ACE_isFieldRationItem = 1;
	};

	class GVAR(HydrationBladder_2L_3_4): GVAR(HydrationBladder_2L) {
		displayName = "2L Hydration Bladder (1.5L)";
		descriptionShort = "2 Litres of water to sustain you in the field.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 9;
		};
		acex_field_rations_replacementItem = QGVAR(HydrationBladder_2L_2_4);
		acex_field_rations_refillItem = QGVAR(HydrationBladder_2L);
		acex_field_rations_refillAmount = 0.5;
		acex_field_rations_refillTime = 8;
	};

	class GVAR(HydrationBladder_2L_2_4): GVAR(HydrationBladder_2L_3_4) {
		displayName = "2L Hydration Bladder (1L)";
		descriptionShort = "2 Litres of water to sustain you in the field.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 7;
		};
		acex_field_rations_replacementItem = QGVAR(HydrationBladder_2L_1_4);
		acex_field_rations_refillItem = QGVAR(HydrationBladder_2L);
		acex_field_rations_refillAmount = 1;
		acex_field_rations_refillTime = 8;
	};

	class GVAR(HydrationBladder_2L_1_4): GVAR(HydrationBladder_2L_2_4) {
		displayName = "2L Hydration Bladder (0.5L)";
		descriptionShort = "2 Litres of water to sustain you in the field.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 5;
		};
		acex_field_rations_replacementItem = QGVAR(HydrationBladder_2L_Empty);
		acex_field_rations_refillItem = QGVAR(HydrationBladder_2L);
		acex_field_rations_refillAmount = 1.5;
		acex_field_rations_refillTime = 8;
	};

	class GVAR(HydrationBladder_2L_Empty): GVAR(HydrationBladder_2L) {
		displayName = "2L Hydration Bladder (Empty)";
		descriptionShort = "An empty hydration bladder.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
		acex_field_rations_thirstQuenched = 0;
		acex_field_rations_replacementItem = "";
		acex_field_rations_refillItem = QGVAR(HydrationBladder_2L);
		acex_field_rations_refillAmount = 2;
		acex_field_rations_refillTime = 8;
	};


    //Hauptgerichte
    class GVAR(Meal_Ravioli_Champignonsauce): ACE_ItemCore {
        author = "Cookie";
        scope = 2;
        displayName = "Ravioli in Champignonsauce";
		descriptionShort = "Eine Portion Ravioli in Champignonsauce.";
        picture = QACEPATHTOF(field_rations,ui\item_mre_type3_co.paa);
		model = QACEPATHTOF(field_rations,data\mre_type3.p3d);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 8;
        };
        acex_field_rations_hungerSatiated = 20;
        acex_field_rations_consumeTime = 10;
        acex_field_rations_consumeText = ACECSTRING(field_rations,EatingX);
        ACE_isFieldRationItem = 1;
    };
    class GVAR(Meal_Indische_Reispfanne): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Indische Reispfanne";
        descriptionShort = "Eine Portion Indische Reispfanne.";
    };
    class GVAR(Meal_Gulasch_Kartoffeln): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Gulasch mit Kartoffeln";
        descriptionShort = "Eine Portion Gulasch mit Kartoffeln.";
    };
    class GVAR(Meal_Cevapcici): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Ćevapčići mit Reis und Gemüse";
        descriptionShort = "Eine Portion Ćevapčići mit Reis und Gemüse.";
    };
    class GVAR(Meal_Gemuesechilli): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Südamerikanisches Gemüsechilli";
        descriptionShort = "Eine Portion Südamerikanisches Gemüsechilli.";
    };
    class GVAR(Meal_Linseneintopf): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Linseneintopf mit Mettwurst";
        descriptionShort = "Eine Portion Linseneintopf mit Mettwurst.";
    };
    class GVAR(Meal_Spiralnudeln_Hackfleischsosse): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Spiralnudeln in Hackfleischsoße";
        descriptionShort = "Eine Portion Spiralnudeln in Hackfleischsoße.";
    };
    class GVAR(Meal_Tortellini): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Tortellini mit Schweinefleischfüllung";
        descriptionShort = "Eine Portion Tortellini mit Schweinefleischfüllung in Tomatensauce.";
    }; 
    class GVAR(Meal_Reis_Putenfleisch): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Reis mit Putenfleisch";
        descriptionShort = "Eine Portion Reis mit Putenfleisch, Tintenfischringen und Garnelen.";
    };
    class GVAR(Meal_Schweinegulaschtopf): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Schweinegulaschtopf mit Nudeln";
        descriptionShort = "Eine Portion Schweinegulaschtopf mit Nudeln.";
    };
    class GVAR(Meal_Hacksteak_Kartoffeln): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Hacksteak mit Kartoffeln und Gemüse";
        descriptionShort = "Eine Portion Hacksteak mit Kartoffeln und Gemüse.";
    };
    class GVAR(Meal_Reis_Hackfleischsosse): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Reis mit Hackfleischsoße";
        descriptionShort = "Eine Portion Reis mit Hackfleischsoße.";
    };
    class GVAR(Meal_Schupfnudeln): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Schupfnudeln mit Fleischbällchen";
        descriptionShort = "Eine Portion Schupfnudeln mit Fleischbällchen.";
    };
    class GVAR(Meal_Erbseneintopf): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Erbseneintopf mit Mettwurst";
        descriptionShort = "Eine Portion Erbseneintopf mit Mettwurst.";
    };
    class GVAR(Meal_Currywurst): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Currywurst";
        descriptionShort = "Eine Portion Currywurst mit Pommes Frites.";
    };
    class GVAR(Meal_Hacksteak_Gemuese): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Griechisches Hacksteak mit Gemüse";
        descriptionShort = "Eine Portion Griechisches Hacksteak mit Gemüse und Nudeln.";
    };
    class GVAR(Meal_Elchfleisch_Gourmettopf): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Elchfleisch-Gourmettopf";
        descriptionShort = "Eine Portion Elchfleisch-Gourmettopf mit Pasta Primavera.";
    };
    class GVAR(Meal_Pasta_Primavera): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Pasta Primavera";
        descriptionShort = "Eine Portion Pasta Primavera mit Gemüse.";
    };
    class GVAR(Meal_Huehnchen_Sahnenudeln): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Hühnchen in Sahnenudeln";
        descriptionShort = "Eine Portion Hühnchen in Sahnenudeln.";
    };
    class GVAR(Meal_Reispfanne_Balkanart): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Reispfanne Balkanart";
        descriptionShort = "Eine Portion Reispfanne Balkanart mit Gemüse.";
    };
    class GVAR(Meal_Jaegertopf): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Jägertopf mit Rind und Nudeln";
        descriptionShort = "Eine Portion Jägertopf mit Rind und Nudeln.";
    };
    class GVAR(Meal_Kartoffeleintopf): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Kartoffeleintopf mit Röstzwiebeln";
        descriptionShort = "Eine Portion Kartoffeleintopf mit Röstzwiebeln.";
    };
    class GVAR(Meal_Waldpilze_SojaRagout): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Waldpilze-Soja-Ragout mit Nudeln";
        descriptionShort = "Eine Portion Waldpilze-Soja-Ragout mit Nudeln.";
    };
    class GVAR(Meal_Nudeln_SojaBolognese): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Nudeln in Soja-Bolognese";
        descriptionShort = "Eine Portion Nudeln in Soja-Bolognese.";
    };
    class GVAR(Meal_Sojarisotto): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Gartengemüse-Sojarisotto";
        descriptionShort = "Eine Portion Gartengemüse-Sojarisotto.";
    };
    class GVAR(Meal_Sojaragout): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Paprika-Sojaragout mit Nudeln";
        descriptionShort = "Eine Portion Paprika-Sojaragout mit Nudeln.";
    };
    class GVAR(Meal_Kartoffeltopf_Rind): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Kartoffeltopf mit Rind";
        descriptionShort = "Eine Portion Kartoffeltopf mit Rind.";
    };
    class GVAR(Meal_Nudeltopf_Bella): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Nudeltopf";
        descriptionShort = "Eine Portion Nudeltopf mit Gemüse.";
    };
    class GVAR(Meal_Curryhuhn): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Curryhuhn";
        descriptionShort = "Eine Portion Curryhuhn mit Gemüse.";
    };
    class GVAR(Meal_GemueseRisotto): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Gemüse-Risotto";
        descriptionShort = "Eine Portion Gemüse-Risotto.";
    };
    class GVAR(Meal_Beef_Stroganoff): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Beef Stroganoff";
        descriptionShort = "Eine Portion Beef Stroganoff mit Nudeln in Kräutercreme.";
    };
    class GVAR(Meal_Nudeln_Kraeutercreme): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Nudeln in Kräutercreme";
        descriptionShort = "Eine Portion Nudeln in Kräutercreme.";
    };
    class GVAR(Meal_Fischtopf_Ruegen): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Fischtopf Rügen";
        descriptionShort = "Eine Portion Fischtopf Rügen mit Couscous.";
    };
    class GVAR(Meal_Couscous): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Couscous";
        descriptionShort = "Eine Portion Couscous.";
    };
    class GVAR(Meal_KerbelKartoffeltopf): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Kerbel-Kartoffeltopf";
        descriptionShort = "Eine Portion Kerbel-Kartoffeltopf mit Rind.";
    };
    class GVAR(Meal_Pasta_Siciliana): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Pasta Siciliana";
        descriptionShort = "Eine Portion Pasta Siciliana mit Gemüse.";
    };
    class GVAR(Meal_Nudeln_Fleischkloesschen): GVAR(Meal_Ravioli_Champignonsauce) {
        displayName = "Nudeln mit Fleischklößchen";
        descriptionShort = "Eine Portion Nudeln mit Fleischklößchen.";
    };
    
    //Zwischengerichte
    class GVAR(Snack_Griessspeise_Fruechte): ACE_ItemCore {
        author = "Cookie";
        scope = 2;
        displayName = "Grießspeise mit Früchten";
        descriptionShort = "Eine Portion Grießspeise mit Früchten.";
        picture = QACEPATHTOF(field_rations,ui\item_mre_type6_co.paa);
        model = QACEPATHTOF(field_rations,data\mre_type6.p3d);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 4;
        };
        acex_field_rations_hungerSatiated = 15;
        acex_field_rations_consumeTime = 5;
        acex_field_rations_consumeText = ACECSTRING(field_rations,EatingX);
        ACE_isFieldRationItem = 1;
    };

    class GVAR(Snack_Obstsalat): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Obstsalat";
        descriptionShort = "Eine Portion Obstsalat.";
    };
    class GVAR(Snack_Griessbrei_Obst): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Grießbrei mit Obst";
        descriptionShort = "Eine Portion Grießbrei mit Obst.";
    };
    class GVAR(Snack_Muesliriegel): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Müsliriegel";
        descriptionShort = "Ein Müsliriegel.";
    };
    class GVAR(Snack_Schokomuesli): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Schokomüsli";
        descriptionShort = "Eine Portion Schokomüsli.";
    };
    class GVAR(Snack_Milchreis): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Milchreis";
        descriptionShort = "Eine Portion Milchreis.";
    };
    class GVAR(Snack_Muesli_Rosinen): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Müsli mit Rosinen";
        descriptionShort = "Eine Portion Müsli mit Rosinen.";
    };
    class GVAR(Snack_Mousse_Stracciatella): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Mousse Stracciatella";
        descriptionShort = "Eine Portion Mousse Stracciatella.";
    };
    class GVAR(Snack_Fruechtemuesli): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Früchtemüsli";
        descriptionShort = "Eine Portion Früchtemüsli.";
    };
    class GVAR(Snack_Orangencreme): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Orangencreme";
        descriptionShort = "Eine Portion Orangencreme.";
    };
    class GVAR(Snack_Nussmuesli): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Nussmüsli";
        descriptionShort = "Eine Portion Nussmüsli.";
    };
    class GVAR(Snack_Haselnusspudding): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Haselnusspudding";
        descriptionShort = "Eine Portion Haselnusspudding.";
    };
    class GVAR(Snack_Joghurtmuesli): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Joghurtmüsli";
        descriptionShort = "Eine Portion Joghurtmüsli.";
    };
    class GVAR(Snack_Mousse_Chocolat): GVAR(Snack_Griessspeise_Fruechte) {
        displayName = "Mousse au Chocolat";
        descriptionShort = "Eine Portion Mousse au Chocolat.";
    };


    class GVAR(Misc_Dosenbrot_2_2): ACE_ItemCore {
        author = "Cookie";
        scope = 2;
        displayName = "Dosenbrot (2/2)";
        descriptionShort = "Ein Dosenbrot.";
        picture = QACEPATHTOF(field_rations,ui\item_mre_type4_co.paa);
        model = QACEPATHTOF(field_rations,data\mre_type4.p3d);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 4;
        };
        acex_field_rations_hungerSatiated = 10;
        acex_field_rations_consumeTime = 3;
        acex_field_rations_consumeText = ACECSTRING(field_rations,EatingX);
        acex_field_rations_replacementItem = QGVAR(Misc_Dosenbrot_1_2);
        ACE_isFieldRationItem = 1;
    };
    class GVAR(Misc_Dosenbrot_1_2): GVAR(Misc_Dosenbrot_2_2) {
        displayName = "Dosenbrot (1/2)";
        descriptionShort = "Ein Dosenbrot.";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 2;
        };
        acex_field_rations_replacementItem = "";
    };

    class GVAR(Misc_Hartkekse_4_4): GVAR(Misc_Dosenbrot_2_2) {
        author = "Cookie";
        scope = 2;
        displayName = "Hartkekse (4/4)";
        descriptionShort = "Eine Packung Hartkekse.";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 4;
        };
        acex_field_rations_hungerSatiated = 5;
        acex_field_rations_consumeTime = 2;
        acex_field_rations_replacementItem = QGVAR(Misc_Hartkekse_3_4);
    };
    class GVAR(Misc_Hartkekse_3_4): GVAR(Misc_Hartkekse_4_4) {
        displayName = "Hartkekse (3/4)";
        descriptionShort = "Eine Packung Hartkekse.";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 3;
        };
        acex_field_rations_replacementItem = QGVAR(Misc_Hartkekse_2_4);
    };
    class GVAR(Misc_Hartkekse_2_4): GVAR(Misc_Hartkekse_4_4) {
        displayName = "Hartkekse (2/4)";
        descriptionShort = "Eine Packung Hartkekse.";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 2;
        };
        acex_field_rations_replacementItem = QGVAR(Misc_Hartkekse_1_4);
    };
    class GVAR(Misc_Hartkekse_1_4): GVAR(Misc_Hartkekse_4_4) {
        displayName = "Hartkekse (1/4)";
        descriptionShort = "Eine Packung Hartkekse.";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 1;
        };
        acex_field_rations_replacementItem = "";
    };
    
    //EPa
	class GVAR(EPa_typ_i): ACE_ItemCore {
		author = "Cookie";
		scope = 2;
		displayName = "EPa Typ 1";
		picture = QACEPATHTOF(field_rations,ui\item_mre_type3_co.paa);
		descriptionShort = "EPa Typ 1 Ravioli in Champignonsauce u. Indische Reispfanne";
		model = "\A3\Props_F_Orange\Humanitarian\Supplies\PaperBox_01_small_closed_F.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 28;
		};
	
		GVAR(epa_content)[] = {QGVAR(Meal_Ravioli_Champignonsauce), QGVAR(Meal_Indische_Reispfanne), QGVAR(Snack_Griessspeise_Fruechte), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
		GVAR(unpackTime) = 5;
        GVAR(isEPA) = 1;

		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3\Props_F_Orange\Humanitarian\Supplies\Data\PaperBox_01_small_brown_CO.paa"};
	};

    class GVAR(EPa_typ_iia): GVAR(EPa_typ_i) {
        displayName = "EPa Typ 2a";
        descriptionShort = "EPa Typ 2a Gulasch mit Kartoffeln u. Ćevapčići mit Reis und Gemüse";
        GVAR(epa_content)[] = {QGVAR(Meal_Gulasch_Kartoffeln), QGVAR(Meal_Cevapcici), QGVAR(Snack_Obstsalat), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_iib): GVAR(EPa_typ_i) {
        displayName = "EPa Typ 2b";
        descriptionShort = "EPa Typ 2b Gulasch mit Kartoffeln u. Ravioli in Champignonsoße";
        GVAR(epa_content)[] = {QGVAR(Meal_Gulasch_Kartoffeln), QGVAR(Meal_Ravioli_Champignonsauce), QGVAR(Snack_Obstsalat), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_iii): GVAR(EPa_typ_i) {
        displayName = "EPa Typ 3";
        descriptionShort = "EPa Typ 3 Ravioli in Champignonsoße u. Südamerikanisches Gemüsechilli";
        GVAR(epa_content)[] = {QGVAR(Meal_Ravioli_Champignonsauce), QGVAR(Meal_Gemuesechilli), QGVAR(Snack_Griessbrei_Obst), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_iv): GVAR(EPa_typ_i) {
        displayName = "EPa Typ 4";
        descriptionShort = "EPa Typ 4 Linseneintopf mit Mettwurst u. Spiralnudeln in Hackfleischsoße";
        GVAR(epa_content)[] = {QGVAR(Meal_Linseneintopf), QGVAR(Meal_Spiralnudeln_Hackfleischsosse), QGVAR(Snack_Muesliriegel), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_v): GVAR(EPa_typ_i) {
        displayName = "EPa Typ 5";
        descriptionShort = "EPa Typ 5 Tortellini mit Schweinefleischfüllung u. Reis mit Putenfleisch";
        GVAR(epa_content)[] = {QGVAR(Meal_Tortellini), QGVAR(Meal_Reis_Putenfleisch), QGVAR(Snack_Obstsalat), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_vi): GVAR(EPa_typ_i) {
        displayName = "EPa-Leicht Typ 6";
        descriptionShort = "EPa Typ 6 Schweinegulaschtopf mit Nudeln u. Hacksteak mit Kartoffeln und Gemüse";
        GVAR(epa_content)[] = {QGVAR(Meal_Schweinegulaschtopf), QGVAR(Meal_Hacksteak_Kartoffeln), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
        model = "\z\ace\addons\field_rations\data\mre_type2.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 26;
        };
    };

    class GVAR(EPa_typ_vii): GVAR(EPa_typ_vi) {
        displayName = "EPa-Leicht Typ 7";
        descriptionShort = "EPa Typ 7 Reis mit Hackfleischsoße u. Schupfnudeln mit Fleischbällchen";
        GVAR(epa_content)[] = {QGVAR(Meal_Reis_Hackfleischsosse), QGVAR(Meal_Schupfnudeln), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_viii): GVAR(EPa_typ_vi) {
        displayName = "EPa-Leicht Typ 8";
        descriptionShort = "EPa Typ 8 Erbseneintopf mit Mettwurst u. Currywurst";
        GVAR(epa_content)[] = {QGVAR(Meal_Erbseneintopf), QGVAR(Meal_Currywurst), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_ix): GVAR(EPa_typ_vi) {
        displayName = "EPa-Leicht Typ 9";
        descriptionShort = "EPa Typ 9 Griechisches Hacksteak mit Gemüse u. Nudeln mit Fleischklößchen";
        GVAR(epa_content)[] = {QGVAR(Meal_Hacksteak_Gemuese), QGVAR(Meal_Nudeln_Fleischkloesschen), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_x): GVAR(EPa_typ_vi) {
        displayName = "EPa-Leicht Typ 10";
        descriptionShort = "EPa Typ 10 Elchfleisch-Gourmettopf u. Pasta Primavera";
        GVAR(epa_content)[] = {QGVAR(Meal_Elchfleisch_Gourmettopf), QGVAR(Meal_Pasta_Primavera), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_xi): GVAR(EPa_typ_vi) {
        displayName = "EPa-Leicht Typ 11";
        descriptionShort = "EPa Typ 11 Hühnchen in Sahnenudeln u. Reispfanne Balkanart";
        GVAR(epa_content)[] = {QGVAR(Meal_Huehnchen_Sahnenudeln), QGVAR(Meal_Reispfanne_Balkanart), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_xii): GVAR(EPa_typ_vi) {
        displayName = "EPa-Leicht Typ 12";
        descriptionShort = "EPa Typ 12 Jägertopf mit Rind und Nudeln u. Kartoffeleintopf mit Röstzwiebeln";
        GVAR(epa_content)[] = {QGVAR(Meal_Jaegertopf), QGVAR(Meal_Kartoffeleintopf), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_xiii): GVAR(EPa_typ_vi) {
        displayName = "EPa-Leicht Typ 13 veg.";
        descriptionShort = "EPa Typ 13 vegetarisch Waldpilze-Soja-Ragout mit Nudeln u. Nudeln in Soja-Bolognese";
        GVAR(epa_content)[] = {QGVAR(Meal_Waldpilze_SojaRagout), QGVAR(Meal_Nudeln_SojaBolognese), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_xiv): GVAR(EPa_typ_vi) {
        displayName = "EPa-Leicht Typ 14 veg.";
        descriptionShort = "EPa Typ 14 vegetarisch Gartengemüse-Sojarisotto u. Paprika-Sojaragout mit Nudeln";
        GVAR(epa_content)[] = {QGVAR(Meal_Sojarisotto), QGVAR(Meal_Sojaragout), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_xv): GVAR(EPa_typ_i) {
        displayName = "EPa Tagespaket Typ 15";
        descriptionShort = "EPa Typ 15 Kartoffeltopf mit Rind u. Nudeltopf";
        GVAR(epa_content)[] = {QGVAR(Meal_Kartoffeltopf_Rind), QGVAR(Meal_Nudeltopf_Bella), QGVAR(Snack_Schokomuesli), QGVAR(Snack_Milchreis), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 33;
        };
    };

    class GVAR(EPa_typ_xvi): GVAR(EPa_typ_xv) {
        displayName = "EPa Tagespaket Typ 16";
        descriptionShort = "EPa Typ 16 Curryhuhn u. Gemüse-Risotto";
        GVAR(epa_content)[] = {QGVAR(Meal_Curryhuhn), QGVAR(Meal_GemueseRisotto), QGVAR(Snack_Muesli_Rosinen), QGVAR(Snack_Mousse_Stracciatella), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_xvii): GVAR(EPa_typ_xv) {
        displayName = "EPa Tagespaket Typ 17";
        descriptionShort = "EPa Typ 17 Beef Stroganoff u. Nudeln in Kräutercreme";
        GVAR(epa_content)[] = {QGVAR(Meal_Beef_Stroganoff), QGVAR(Meal_Nudeln_Kraeutercreme), QGVAR(Snack_Fruechtemuesli), QGVAR(Snack_Orangencreme), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_xviii): GVAR(EPa_typ_xv) {
        displayName = "EPa Tagespaket Typ 18";
        descriptionShort = "EPa Typ 18 Fischtopf Rügen u. Couscous";
        GVAR(epa_content)[] = {QGVAR(Meal_Fischtopf_Ruegen), QGVAR(Meal_Couscous), QGVAR(Snack_Nussmuesli), QGVAR(Snack_Haselnusspudding), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };

    class GVAR(EPa_typ_xix): GVAR(EPa_typ_xv) {
        displayName = "EPa Tagespaket Typ 19";
        descriptionShort = "EPa Typ 19 Kerbel-Kartoffeltopf u. Pasta Siciliana";
        GVAR(epa_content)[] = {QGVAR(Meal_KerbelKartoffeltopf), QGVAR(Meal_Pasta_Siciliana), QGVAR(Snack_Joghurtmuesli), QGVAR(Snack_Mousse_Chocolat), QGVAR(Misc_Dosenbrot_2_2), QGVAR(Misc_Hartkekse_4_4)};
    };
};
