class CfgWeapons {
	class Launcher;
	class Launcher_Base_F: Launcher 
	{
		class WeaponSlotsInfo;
	};
	class GVAR(remote_designator_w): Launcher_Base_F {
        scope = 2;
		author = "Cookie";
		model = QACEPATHTOF(apl,ACE_CSW_Bag.p3d);
		modes[] = {};
		displayname = "Remote Designator WDL [NATO]";
		descriptionShort = "Remote Designator WDL [NATO]";
		ACE_isTool = 1;
		picture = "\A3\Static_F_Mark\Designator_01\Data\UI\Designator_01_CA.paa";
		// editorPreview = "\y\tfw_radios\addons\rf3080\data\editorui\rf3080.jpg";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot 
			{
				iconScale = 0.1;
			};
		};
	};


	class GVAR(remote_designator_d): GVAR(remote_designator_w) {
		displayname = "Remote Designator DES [NATO]";
		descriptionShort = "Remote Designator DES [NATO]";
		// editorPreview = "\y\tfw_radios\addons\rf3080\data\editorui\rf3080.jpg";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot 
			{
				iconScale = 0.1;
			};
		};
	};


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
};
