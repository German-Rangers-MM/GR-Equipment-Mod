class CUP_H_OpsCore_Covered_Fleck_NoHS;
class CUP_H_OpsCore_Covered_Tropen_NoHS;

class gerrng_OpsCore_Covered_NoHS_base: CUP_H_OpsCore_Covered_Fleck_NoHS {
	author="German Rangers, Cookie";
	scope=1;
	weaponPoolAvailable=1;
	displayName="OpsCore NoHS Base";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
	ace_hearing_protection = 0;  // Protection against deafening (0 to 1, higher means more protection)
	ace_hearing_lowerVolume = 0;  // Muffling of the sound (0 to 1, higher means more muffling)
	ace_hearing_hasEHP = 0; // If item has electronic hearing protection (0 or 1)
	model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_plain.p3d";
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
		uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_plain.p3d";
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
class gerrng_OpsCore_Covered_Fleck_NoHS_agf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS A-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_a1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS A-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_a2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS A-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_a3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS A-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_a4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS A-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_a5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS A-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_a6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_a7: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-7 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_a8: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-8 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_a9: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-9 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_a10: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-10 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_a11: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-11 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\alpha_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_a12: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-12 (Fleck)";
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
class gerrng_OpsCore_Covered_Fleck_NoHS_ygf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Y-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_y1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Y-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_y2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Y-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_y3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Y-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_y4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Y-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_y5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Y-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_y6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_y7: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-7 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_y8: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-8 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_y9: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-9 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_y10: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-10 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_y11: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-11 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\yankee_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_y12: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-12 (Fleck)";
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
class gerrng_OpsCore_Covered_Fleck_NoHS_cgf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS C-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_c1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS C-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_c2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS C-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_c3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS C-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_c4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS C-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_c5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS C-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_c6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_c7: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-7 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_c8: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-8 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_c9: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-9 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_c10: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-10 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_c11: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-11 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\charlie_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_c12: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-12 (Fleck)";
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
class gerrng_OpsCore_Covered_Fleck_NoHS_fzf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS F-ZF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\fox_zf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_f1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS F-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\fox_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_f2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS F-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\fox_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_f3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS F-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\fox_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_f4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS F-4 (Fleck)";
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
class gerrng_OpsCore_Covered_Fleck_NoHS_vzf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS V-ZF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\victor_zf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_v1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS V-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\victor_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_v2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS V-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\victor_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_v3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS V-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\victor_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_v4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS V-4 (Fleck)";
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
class gerrng_OpsCore_Covered_Fleck_NoHS_zgf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Z-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_z1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Z-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_z2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Z-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_z3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Z-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_z4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Z-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_z5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Z-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_z6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_z7: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-7 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_z8: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-8 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_z9: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-9 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_z10: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-10 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_z11: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-11 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\zulu_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_z12: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-12 (Fleck)";
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
class gerrng_OpsCore_Covered_Fleck_NoHS_bgf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS B-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_b1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS B-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_b2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS B-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_b3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS B-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_b4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS B-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_b5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS B-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_b6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_b7: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-7 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_b8: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-8 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_b9: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-9 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_b10: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-10 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_b11: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-11 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\bravo_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_b12: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-12 (Fleck)";
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
class gerrng_OpsCore_Covered_Fleck_NoHS_xgf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS X-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_x1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS X-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_x2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS X-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_x3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS X-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_x4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS X-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_x5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS X-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_x6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-6 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_x7: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-7 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_x8: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-8 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_x9: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-9 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_x10: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-10 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_x11: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-11 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\x-ray_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_x12: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-12 (Fleck)";
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
class gerrng_OpsCore_Covered_Fleck_NoHS_lgf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS L-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_l1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS L-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_l2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS L-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_l3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS L-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_l4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS L-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_l5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS L-5 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\lima_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_l6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS L-6 (Fleck)";
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
class gerrng_OpsCore_Covered_Fleck_NoHS_mavd: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS M-AvD (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\mike_avd.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_m1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS M-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\mike_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_m2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS M-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\mike_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_m3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS M-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\mike_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_m4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS M-4 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\mike_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_m5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS M-5 (Fleck)";
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
class gerrng_OpsCore_Covered_Fleck_NoHS_sgf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS S-GF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\sierra_tf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_s1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS S-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\sierra_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_s2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS S-2 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\sierra_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_s3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS S-3 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\sierra_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_s4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS S-4 (Fleck)";
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
class gerrng_OpsCore_Covered_Fleck_NoHS_kk: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS K-K (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\kilo_k.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_k1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS K-1 (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		QPATHTOF(data\kilo_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Fleck_NoHS_k2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS K-2 (Fleck)";
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
class gerrng_OpsCore_Covered_Tropen_NoHS_agf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS A-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_a1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS A-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_a2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS A-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_a3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS A-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_a4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS A-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_a5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS A-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_a6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_a7: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-7 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_a8: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-8 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_a9: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-9 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_a10: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-10 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_a11: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-11 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\alpha_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_a12: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS A-12 (Tropen)";
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
class gerrng_OpsCore_Covered_Tropen_NoHS_ygf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Y-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_y1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Y-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_y2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Y-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_y3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Y-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_y4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Y-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_y5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Y-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_y6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_y7: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-7 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_y8: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-8 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_y9: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-9 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_y10: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-10 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_y11: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-11 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\yankee_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_y12: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Y-12 (Tropen)";
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
class gerrng_OpsCore_Covered_Tropen_NoHS_cgf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS C-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_c1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS C-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_c2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS C-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_c3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS C-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_c4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS C-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_c5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS C-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_c6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_c7: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-7 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_c8: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-8 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_c9: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-9 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_c10: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-10 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_c11: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-11 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\charlie_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_c12: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS C-12 (Tropen)";
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
class gerrng_OpsCore_Covered_Tropen_NoHS_fzf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS F-ZF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\fox_zf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_f1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS F-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\fox_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_f2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS F-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\fox_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_f3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS F-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\fox_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_f4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS F-4 (Tropen)";
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
class gerrng_OpsCore_Covered_Tropen_NoHS_vzf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS V-ZF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\victor_zf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_v1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS V-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\victor_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_v2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS V-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\victor_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_v3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS V-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\victor_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_v4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS V-4 (Tropen)";
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
class gerrng_OpsCore_Covered_Tropen_NoHS_zgf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Z-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_z1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Z-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_z2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Z-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_z3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Z-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_z4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Z-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_z5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS Z-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_z6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_z7: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-7 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_z8: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-8 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_z9: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-9 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_z10: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-10 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_z11: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-11 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\zulu_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_z12: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS Z-12 (Tropen)";
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
class gerrng_OpsCore_Covered_Tropen_NoHS_bgf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS B-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_b1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS B-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_b2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS B-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_b3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS B-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_b4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS B-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_b5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS B-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_b6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_b7: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-7 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_b8: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-8 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_b9: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-9 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_b10: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-10 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_b11: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-11 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\bravo_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_b12: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS B-12 (Tropen)";
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
class gerrng_OpsCore_Covered_Tropen_NoHS_xgf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS X-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_x1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS X-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=	
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_x2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS X-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_x3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS X-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_x4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS X-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_x5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS X-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_x6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-6 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_6.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_x7: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-7 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_7.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_x8: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-8 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_8.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_x9: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-9 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_9.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_x10: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-10 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_10.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_x11: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-11 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\x-ray_11.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_x12: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS X-12 (Tropen)";
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
class gerrng_OpsCore_Covered_Tropen_NoHS_lgf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS L-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_gf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_l1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS L-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_l2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS L-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_l3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS L-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_l4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS L-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_l5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS L-5 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\lima_5.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_l6: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	weaponPoolAvailable=1;
	displayName="OpsCore MT NoHS L-6 (Tropen)";
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
class gerrng_OpsCore_Covered_Tropen_NoHS_mavd: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS M-AvD (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\mike_avd.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_m1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS M-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\mike_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_m2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS M-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\mike_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_m3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS M-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\mike_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_m4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS M-4 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\mike_4.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_m5: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS M-5 (Tropen)";
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
class gerrng_OpsCore_Covered_Tropen_NoHS_sgf: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS S-GF (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\sierra_tf.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_s1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS S-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\sierra_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_s2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS S-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\sierra_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_s3: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS S-3 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\sierra_3.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_s4: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS S-4 (Tropen)";
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
class gerrng_OpsCore_Covered_Tropen_NoHS_kk: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS K-K (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\kilo_k.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_k1: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS K-1 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\kilo_1.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_Covered_Tropen_NoHS_k2: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS K-2 (Tropen)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa",
		QPATHTOF(data\kilo_2.paa),
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};