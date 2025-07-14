class CUP_H_OpsCore_Covered_Fleck;

class gerrng_OpsCore_Covered_base: CUP_H_OpsCore_Covered_Fleck {
	author="German Rangers, Cookie";
	scope=1;
	weaponPoolAvailable=1;
	displayName="OpsCore Base";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
	ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	ace_hearing_lowerVolume = 0.05;  // Muffling of the sound (0 to 1, higher means more muffling)
	ace_hearing_hasEHP = 1; // If item has electronic hearing protection (0 or 1)
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
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

//Alpha
class gerrng_OpsCore_Covered_Fleck_agf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 A-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_a1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 A-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_a2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 A-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_a3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 A-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_a4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 A-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_a5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 A-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_a6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_a7: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-7 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_a8: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-8 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_a9: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-9 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_a10: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-10 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_a11: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-11 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_a12: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-12 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_12.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Yankee
class gerrng_OpsCore_Covered_Fleck_ygf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Y-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_y1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Y-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_y2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Y-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_y3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Y-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_y4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Y-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_y5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Y-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_y6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_y7: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-7 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_y8: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-8 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_y9: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-9 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_y10: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-10 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_y11: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-11 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_y12: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-12 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_12.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Charlie
class gerrng_OpsCore_Covered_Fleck_cgf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 C-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_c1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 C-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_c2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 C-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_c3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 C-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_c4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 C-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_c5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 C-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_c6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_c7: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-7 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_c8: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-8 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_c9: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-9 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_c10: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-10 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_c11: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-11 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_c12: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-12 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_12.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Fox
class gerrng_OpsCore_Covered_Fleck_fzf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 F-ZF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\fox_zf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_f1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 F-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\fox_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_f2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 F-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\fox_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_f3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 F-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\fox_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_f4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 F-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\fox_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Victor
class gerrng_OpsCore_Covered_Fleck_vzf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 V-ZF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\victor_zf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_v1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 V-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\victor_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_v2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 V-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\victor_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_v3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 V-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\victor_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_v4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 V-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\victor_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Zulu
class gerrng_OpsCore_Covered_Fleck_zgf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Z-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_z1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Z-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_z2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Z-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_z3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Z-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_z4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Z-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_z5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Z-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_z6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_z7: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-7 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_z8: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-8 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_z9: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-9 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_z10: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-10 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_z11: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-11 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_z12: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-12 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_12.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Bravo
class gerrng_OpsCore_Covered_Fleck_bgf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 B-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_b1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 B-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_b2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 B-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_b3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 B-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_b4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 B-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_b5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 B-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_b6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_b7: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-7 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_b8: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-8 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_b9: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-9 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_b10: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-10 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_b11: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-11 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_b12: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-12 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_12.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//X-Ray
class gerrng_OpsCore_Covered_Fleck_xgf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 X-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_x1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 X-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_x2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 X-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_x3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 X-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_x4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 X-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_x5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 X-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_x6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_x7: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-7 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_x8: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-8 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_x9: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-9 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_x10: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-10 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_x11: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-11 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_x12: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-12 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_12.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Lima
class gerrng_OpsCore_Covered_Fleck_lgf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 L-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_l1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 L-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_l2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 L-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_l3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 L-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_l4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 L-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_l5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 L-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_l6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 L-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Mike
class gerrng_OpsCore_Covered_Fleck_mavd: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 M-AvD (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\mike_avd.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_m1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 M-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\mike_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_m2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 M-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\mike_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_m3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 M-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\mike_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_m4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 M-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\mike_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_m5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 M-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\mike_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Sierra
class gerrng_OpsCore_Covered_Fleck_sgf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 S-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\sierra_tf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_s1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 S-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\sierra_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_s2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 S-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\sierra_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_s3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 S-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\sierra_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_s4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 S-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\sierra_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Kilo
class gerrng_OpsCore_Covered_Fleck_kk: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 K-K (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\kilo_k.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_k1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 K-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\kilo_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_k2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 K-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\kilo_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};



/*------------------------------------------------------*/
/*----------------------Tropentarn----------------------*/
/*------------------------------------------------------*/



//Alpha
class gerrng_OpsCore_Covered_Tropen_agf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 A-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_a1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 A-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_a2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 A-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_a3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 A-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_a4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 A-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_a5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 A-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_a6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_a7: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-7 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_a8: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-8 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_a9: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-9 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_a10: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-10 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_a11: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-11 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_a12: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 A-12 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_12.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Yankee
class gerrng_OpsCore_Covered_Tropen_ygf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Y-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_y1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Y-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_y2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Y-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_y3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Y-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_y4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Y-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_y5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Y-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_y6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_y7: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-7 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_y8: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-8 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_y9: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-9 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_y10: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-10 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_y11: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-11 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_y12: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Y-12 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_12.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Charlie
class gerrng_OpsCore_Covered_Tropen_cgf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 C-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_c1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 C-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_c2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 C-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_c3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 C-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_c4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 C-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_c5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 C-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_c6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_c7: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-7 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_c8: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-8 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_c9: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-9 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_c10: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-10 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_c11: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-11 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_c12: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 C-12 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_12.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Fox
class gerrng_OpsCore_Covered_Tropen_fzf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 F-ZF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\fox_zf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_f1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 F-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\fox_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_f2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 F-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\fox_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_f3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 F-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\fox_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_f4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 F-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\fox_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Victor
class gerrng_OpsCore_Covered_Tropen_vzf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 V-ZF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\victor_zf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_v1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 V-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\victor_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_v2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 V-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\victor_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_v3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 V-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\victor_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_v4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 V-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\victor_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Zulu
class gerrng_OpsCore_Covered_Tropen_zgf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Z-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_z1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Z-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_z2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Z-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_z3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Z-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_z4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Z-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_z5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 Z-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_z6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_z7: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-7 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_z8: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-8 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_z9: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-9 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_z10: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-10 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_z11: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-11 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_z12: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 Z-12 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_12.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Bravo
class gerrng_OpsCore_Covered_Tropen_bgf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 B-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_b1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 B-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_b2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 B-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_b3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 B-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_b4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 B-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_b5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 B-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_b6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_b7: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-7 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_b8: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-8 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_b9: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-9 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_b10: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-10 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_b11: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-11 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_b12: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 B-12 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_12.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//X-Ray
class gerrng_OpsCore_Covered_Tropen_xgf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 X-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_x1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 X-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_x2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 X-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_x3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 X-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_x4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 X-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_x5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 X-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_x6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_x7: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-7 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_x8: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-8 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_x9: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-9 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_x10: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-10 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_x11: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-11 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_x12: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 X-12 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_12.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Lima
class gerrng_OpsCore_Covered_Tropen_lgf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 L-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_l1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 L-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_l2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 L-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_l3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 L-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_l4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 L-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_l5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 L-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_l6: gerrng_OpsCore_Covered_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore 01 L-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Mike
class gerrng_OpsCore_Covered_Tropen_mavd: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 M-AvD (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\mike_avd.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_m1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 M-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\mike_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_m2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 M-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\mike_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_m3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 M-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\mike_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_m4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 M-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\mike_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_m5: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 M-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\mike_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Sierra
class gerrng_OpsCore_Covered_Tropen_sgf: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 S-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\sierra_tf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_s1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 S-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\sierra_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_s2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 S-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\sierra_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_s3: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 S-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\sierra_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_s4: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 S-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\sierra_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};

//Kilo
class gerrng_OpsCore_Covered_Tropen_kk: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 K-K (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\kilo_k.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_k1: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 K-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\kilo_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_k2: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore 01 K-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\kilo_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
