#include "cfgVehicles.hpp"
class CfgPatches
{
	class gerrng_gear
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={"CUP_Creatures_People_LoadOrder"};
	};
};
class cfgWeapons
{
    class CUP_H_OpsCore_Covered_Fleck;
	class CUP_H_OpsCore_Covered_Tropen;
//test	class CUP_H_OpsCore_black;

	class HeadgearItem;
	
	//Fleck
	//Alpha
	class GerRng_OpsCore_Covered_Fleck_agf: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-GF (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_Fleck_a1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_a2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_a3: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-3 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_a4: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-4 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_a5: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-5 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_a6: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-6 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	class GerRng_OpsCore_Covered_Fleck_a7: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-7 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_7.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	class GerRng_OpsCore_Covered_Fleck_a8: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-8 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_8.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	class GerRng_OpsCore_Covered_Fleck_a9: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-9 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_9.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	class GerRng_OpsCore_Covered_Fleck_a10: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-10 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_10.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	class GerRng_OpsCore_Covered_Fleck_a11: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-11 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_11.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	class GerRng_OpsCore_Covered_Fleck_a12: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-12 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\alpha_12.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };


//Bravo
	class GerRng_OpsCore_Covered_Fleck_bgf: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-GF (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_Fleck_b1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_b2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_b3: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-3 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_b4: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-4 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_b5: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-5 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_b6: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-6 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_b7: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-7 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_7.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_b8: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-8 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_8.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_b9: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-9 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_9.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_b10: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-10 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_10.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_b11: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-11 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_11.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_b12: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-12 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\bravo_12.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

//Charlie
	class GerRng_OpsCore_Covered_Fleck_cgf: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-GF (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_Fleck_c1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_c2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_c3: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-3 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_c4: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-4 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_c5: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-5 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_c6: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-6 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_c7: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-7 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_7.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_c8: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-8 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_8.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_c9: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-9 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_9.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_c10: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-10 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_10.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_c11: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-11 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_11.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_c12: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-12 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\charlie_12.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	//Zulu
	class GerRng_OpsCore_Covered_Fleck_zgf: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-GF (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_Fleck_z1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_z2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_z3: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-3 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_z4: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-4 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_z5: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-5 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_z6: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-6 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_z7: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-7 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_7.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_z8: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-8 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_8.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_z9: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-9 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_9.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_z10: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-10 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_10.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_z11: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-11 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_11.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_z12: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-12 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\zulu_12.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	//Yankee
	class GerRng_OpsCore_Covered_Fleck_ygf: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-GF (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_Fleck_y1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_y2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_y3: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-3 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_y4: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-4 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_y5: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-5 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_y6: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-6 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_y7: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-7 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_7.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_y8: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-8 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_8.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_y9: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-9 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_9.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_y10: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-10 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_10.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_y11: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-11 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_11.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_y12: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-12 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\yankee_12.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	//Y-Ray
	class GerRng_OpsCore_Covered_Fleck_xgf: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-GF (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_Fleck_x1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_x2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_x3: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-3 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_x4: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-4 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_x5: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-5 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_x6: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-6 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_x7: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-7 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_7.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_x8: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-8 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_8.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_x9: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-9 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_9.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_x10: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-10 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_10.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_x11: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-11 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_11.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_x12: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-12 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\x-ray_12.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	//Whiskey
	class GerRng_OpsCore_Covered_Fleck_wtf: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 W-TF (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\whiskey_tf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_Fleck_w1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 W-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\whiskey_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_w2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 W-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\whiskey_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_w3: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 W-3 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\whiskey_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_w4: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 W-4 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\whiskey_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	
	//FOX
	class GerRng_OpsCore_Covered_Fleck_fzf: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 F-ZF (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\fox_zf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_f1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 F-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\fox_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_f2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 F-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\fox_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_f3: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 F-3 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\fox_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_f4: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 F-4 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\fox_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	//Victor
	class GerRng_OpsCore_Covered_Fleck_vzf: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 V-ZF (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\victor_zf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_v1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 V-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\victor_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_v2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 V-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\victor_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_v3: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 V-3 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\victor_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_v4: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 V-4 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\victor_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	//Mike
	class GerRng_OpsCore_Covered_Fleck_mavd: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 M-AvD (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\mike_avd.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_m1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 M-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\mike_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_m2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 M-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\mike_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_m3: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 M-3 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\mike_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_m4: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 M-4 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\mike_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
		class GerRng_OpsCore_Covered_Fleck_m5: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 M-5 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\mike_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	//Lima
	class GerRng_OpsCore_Covered_Fleck_lgf: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-GF (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\lima_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_Fleck_l1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\lima_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_l2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\lima_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_l3: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-3 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\lima_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_l4: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-4 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\lima_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_l5: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-5 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\lima_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_l6: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-6 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\lima_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	
	//Sierra
	class GerRng_OpsCore_Covered_Fleck_stf: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 S-TF (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\sierra_tf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_Fleck_s1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 S-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\sierra_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_s2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 S-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\sierra_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_s3: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 S-3 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\sierra_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_s4: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 S-4 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\sierra_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	
	//Kilo
	class GerRng_OpsCore_Covered_Fleck_kk: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 K-K (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\kilo_k.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_Fleck_k1: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 K-1 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\kilo_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_Fleck_k2: CUP_H_OpsCore_Covered_Fleck {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 K-2 (Fleck)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
			"GerRng_equip\data\kilo_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	
	
	
	
	// ////////////////////////////Tropen \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
	
	
	
	
	
	//Alpha
	class GerRng_OpsCore_Covered_tropen_agf: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-GF (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_tropen_a1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_a2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_a3: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-3 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_a4: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-4 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_a5: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-5 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_a6: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-6 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	class GerRng_OpsCore_Covered_tropen_a7: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-7 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_7.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	class GerRng_OpsCore_Covered_tropen_a8: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-8 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_8.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	class GerRng_OpsCore_Covered_tropen_a9: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-9 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_9.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	class GerRng_OpsCore_Covered_tropen_a10: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-10 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_10.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	class GerRng_OpsCore_Covered_tropen_a11: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-11 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_11.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	class GerRng_OpsCore_Covered_tropen_a12: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 A-12 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\alpha_12.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };


//Bravo
	class GerRng_OpsCore_Covered_tropen_bgf: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-GF (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_tropen_b1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_b2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_b3: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-3 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_b4: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-4 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_b5: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-5 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_b6: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-6 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_b7: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-7 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_7.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_b8: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-8 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_8.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_b9: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-9 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_9.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_b10: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-10 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_10.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_b11: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-11 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_11.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_b12: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 B-12 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\bravo_12.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

//Charlie
	class GerRng_OpsCore_Covered_tropen_cgf: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-GF (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_tropen_c1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_c2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_c3: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-3 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_c4: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-4 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_c5: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-5 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_c6: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-6 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_c7: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-7 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_7.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_c8: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-8 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_8.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_c9: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-9 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_9.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_c10: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-10 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_10.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_c11: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-11 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_11.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_c12: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 C-12 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\charlie_12.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	//Zulu
	class GerRng_OpsCore_Covered_tropen_zgf: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-GF (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_tropen_z1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_z2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_z3: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-3 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_z4: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-4 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_z5: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-5 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_z6: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-6 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_z7: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-7 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_7.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_z8: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-8 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_8.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_z9: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-9 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_9.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_z10: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-10 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_10.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_z11: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-11 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_11.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_z12: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Z-12 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\zulu_12.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	//Yankee
	class GerRng_OpsCore_Covered_tropen_ygf: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-GF (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_tropen_y1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_y2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_y3: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-3 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_y4: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-4 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_y5: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-5 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_y6: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-6 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_y7: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-7 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_7.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_y8: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-8 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_8.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_y9: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-9 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_9.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_y10: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-10 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_10.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_y11: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-11 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_11.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_y12: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 Y-12 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\yankee_12.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	//Y-Ray
	class GerRng_OpsCore_Covered_tropen_xgf: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-GF (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_tropen_x1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_x2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_x3: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-3 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_x4: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-4 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_x5: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-5 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_x6: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-6 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_x7: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-7 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_7.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_x8: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-8 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_8.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_x9: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-9 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_9.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_x10: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-10 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_10.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_x11: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-11 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_11.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_x12: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 X-12 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\x-ray_12.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	//Whiskey
	class GerRng_OpsCore_Covered_tropen_wtf: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 W-TF (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\whiskey_tf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_tropen_w1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 W-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\whiskey_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_w2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 W-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\whiskey_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_w3: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 W-3 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\whiskey_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_w4: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 W-4 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\whiskey_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	
	//FOX
	class GerRng_OpsCore_Covered_tropen_fzf: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 F-ZF (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\fox_zf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_f1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 F-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\fox_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_f2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 F-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\fox_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_f3: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 F-3 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\fox_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_f4: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 F-4 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\fox_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	//Victor
	class GerRng_OpsCore_Covered_tropen_vzf: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 V-ZF (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\victor_zf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_v1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 V-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\victor_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_v2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 V-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\victor_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_v3: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 V-3 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\victor_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_v4: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 V-4 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\victor_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	//Mike
	class GerRng_OpsCore_Covered_tropen_mavd: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 M-AvD (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\mike_avd.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_m1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 M-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\mike_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_m2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 M-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\mike_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_m3: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 M-3 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\mike_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_m4: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 M-4 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\mike_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
		class GerRng_OpsCore_Covered_tropen_m5: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 M-5 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\mike_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

	//Lima
	class GerRng_OpsCore_Covered_tropen_lgf: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-GF (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\lima_gf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_tropen_l1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\lima_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_l2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\lima_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_l3: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-3 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\lima_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_l4: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-4 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\lima_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_l5: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-5 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\lima_5.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_l6: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 L-6 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\lima_6.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	
	//Sierra
	class GerRng_OpsCore_Covered_tropen_stf: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 S-TF (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\sierra_tf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_tropen_s1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 S-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\sierra_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_s2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 S-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\sierra_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_s3: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 S-3 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\sierra_3.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_s4: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 S-4 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\sierra_4.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	
	
	//Kilo
	class GerRng_OpsCore_Covered_tropen_kk: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 K-K (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\kilo_k.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
    class GerRng_OpsCore_Covered_tropen_k1: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 K-1 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\kilo_1.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
	class GerRng_OpsCore_Covered_tropen_k2: CUP_H_OpsCore_Covered_tropen {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 K-2 (tropen)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
			"GerRng_equip\data\kilo_2.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };


/*black
	class GerRng_OpsCore_black_vzf: CUP_H_OpsCore_black {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore 01 V-ZF (black)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_black_co.paa",
			"GerRng_equip\data\victor_zf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_black_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };

class GerRng_OpsCore_black_test: CUP_H_OpsCore_black {
        author="German Rangers";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore test";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
		ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
		hiddenSelections[] = {"camo1","camo2","camo3","flag"};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_black_co.paa",
			"GerRng_equip\data\victor_zf.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
            uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_hs.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","camo2","camo3","flag"};
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_black_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
    };
*/




};


#include "cfginsignias.hpp"