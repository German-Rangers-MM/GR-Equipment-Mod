class CUP_H_OpsCore_Covered_Fleck;

class gerrng_OpsCore_Covered_base: CUP_H_OpsCore_Covered_Fleck {
	author="German Rangers, Cookie, KlasNi";
	scope=1;
	weaponPoolAvailable=1;
	displayName="OpsCore Base";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
	ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	ace_hearing_lowerVolume = 0.15;  // Muffling of the sound (0 to 1, higher means more muffling)
	ace_hearing_hasEHP = 1; // If item has electronic hearing protection (0 or 1)
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	ctab_camera=1;
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

class gerrng_OpsCore_Covered_Fleck: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore MT (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_sprayed: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore MT (Sprayed)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_spray_1_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_grey: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore MT (Grey)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_grey_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_green: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore MT (Green)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_green_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_tan: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore MT (Tan)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_black: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore MT (Black)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_black_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};


class CUP_H_OpsCore_Covered_Fleck_SF;

class gerrng_OpsCore_Covered_SF_base: CUP_H_OpsCore_Covered_Fleck_SF {
	author="German Rangers, Cookie, KlasNi";
	scope=1;
	weaponPoolAvailable=1;
	displayName="OpsCore SF Base";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
	ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	ace_hearing_lowerVolume = 0.15;  // Muffling of the sound (0 to 1, higher means more muffling)
	ace_hearing_hasEHP = 1; // If item has electronic hearing protection (0 or 1)
	model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_all.p3d";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	ctab_camera=1;
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		""
	};
	class ItemInfo: HeadgearItem
	{
		mass=10;
		uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_all.p3d";
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

class gerrng_OpsCore_Covered_Fleck_SF: gerrng_OpsCore_Covered_SF_base {
	scope=2;
	displayName="OpsCore MT SF (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_sprayed_SF: gerrng_OpsCore_Covered_SF_base {
	scope=2;
	displayName="OpsCore MT SF (Sprayed)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_spray_1_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_grey_SF: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore MT SF (Grey)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_grey_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_green_SF: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore MT SF (Green)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_green_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_tan_SF: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore MT SF (Tan)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_black_SF: gerrng_OpsCore_Covered_base {
	scope=2;
	displayName="OpsCore MT SF (Black)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_black_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};


class CUP_H_OpsCore_Covered_Fleck_NoHS;

class gerrng_OpsCore_Covered_NoHS_base: CUP_H_OpsCore_Covered_Fleck_NoHS {
	author="German Rangers, Cookie, KlasNi";
	scope=1;
	weaponPoolAvailable=1;
	displayName="OpsCore NoHS Base";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\icon_acr_helmet01.paa";
	ace_hearing_protection = 0;  // Protection against deafening (0 to 1, higher means more protection)
	ace_hearing_lowerVolume = 0;  // Muffling of the sound (0 to 1, higher means more muffling)
	ace_hearing_hasEHP = 0; // If item has electronic hearing protection (0 or 1)
	model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_covered_plain.p3d";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	ctab_camera=1;
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

class gerrng_OpsCore_Covered_Fleck_NoHS: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS (Fleck)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_sprayed_NoHS: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS (Sprayed)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_spray_1_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_grey_NoHS: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS (Grey)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_grey_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_green_NoHS: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS (Green)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_green_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_tan_NoHS: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS (Tan)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
class gerrng_OpsCore_black_NoHS: gerrng_OpsCore_Covered_NoHS_base {
	scope=2;
	displayName="OpsCore MT NoHS (Black)";
	hiddenSelections[] = {"camo1","camo2","camo3","flag"};
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_black_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_part_1_tan_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa"
	};
};
