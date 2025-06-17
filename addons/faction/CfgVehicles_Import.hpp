

// APCS
class CUP_B_M1133_MEV_Woodland;
class GVAR(M1133_MEV_Wdl) : CUP_B_M1133_MEV_Woodland
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_APCs";
	crew = "CUP_B_GER_Fleck_Crew";
};

class CUP_B_Boxer_Empty_GER_WDL;
class GVAR(Boxer_Empty_GER_WDL): CUP_B_Boxer_Empty_GER_WDL
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_APCs";
};

class CUP_B_Boxer_GMG_GER_WDL;
class GVAR(Boxer_GMG_GER_WDL): CUP_B_Boxer_GMG_GER_WDL
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_APCs";
};

class CUP_B_Boxer_HMG_GER_WDL;
class GVAR(Boxer_HMG_GER_WDL): CUP_B_Boxer_HMG_GER_WDL
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_APCs";
};

class CUP_B_Boxer_Empty_GER_DES;
class GVAR(Boxer_Empty_GER_DES): CUP_B_Boxer_Empty_GER_DES
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_APCs";
};

class CUP_B_Boxer_GMG_GER_DES;
class GVAR(Boxer_GMG_GER_DES): CUP_B_Boxer_GMG_GER_DES
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_APCs";
};

class CUP_B_Boxer_HMG_GER_DES;
class GVAR(Boxer_HMG_GER_DES): CUP_B_Boxer_HMG_GER_DES
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_APCs";
};

class B_APC_Wheeled_01_cannon_F;
class GVAR(APC_Wheeled): B_APC_Wheeled_01_cannon_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_APCs";
	crew = "CUP_B_GER_Fleck_Crew";
	animationList[] = {"showBags",0,"showCamonetHull",1,"showCamonetTurret",1,"showSLATHull",0,"showSLATTurret",0};
	class EventHandlers : EventHandlers
	{
		postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
	textureList[] = {"Sand",1};
	class TextureSources
	{
		class Sand
		{
			displayName = "Sand";
			author = "Bohemia Interactive";
			textures[] = {"a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_base_co.paa","a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_adds_co.paa","a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_tows_co.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		
		class Sand_alt
		{
			displayName = "Sand (Woodland Camonet)";
			author = "Bohemia Interactive";
			textures[] = {"a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_base_co.paa","a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_adds_co.paa","a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_tows_co.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class Green
		{
			displayName = "Green";
			author = "Bohemia Interactive";
			textures[] = {"A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_base_olive_CO.paa","A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_adds_olive_co.paa","A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_tows_olive_co.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_olive_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class GVAR(APC_Wheeled_slat): GVAR(APC_Wheeled)
{
	displayName = "Badger IFV (Slat)";
	animationList[] = {"showBags",0,"showCamonetHull",1,"showCamonetTurret",1,"showSLATHull",1,"showSLATTurret",1};
};

class B_AFV_Wheeled_01_cannon_F;
class GVAR(AFV_Wheeled): B_AFV_Wheeled_01_cannon_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_APCs";
	crew = "CUP_B_GER_Fleck_Crew";
	animationList[] = {"showCamonetHull",1,"showCamonetTurret",1,"showSLATHull",0};
	class EventHandlers : EventHandlers
	{
		postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
	textureList[] = {"Sand",1};
	class TextureSources
	{
		class Sand
		{
			displayName = "Sand";
			author = "Bohemia Interactive";
			textures[] = {"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		
		class Sand_alt
		{
			displayName = "Sand (Woodland Camonet)";
			author = "Bohemia Interactive";
			textures[] = {"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class Green
		{
			displayName = "Green";
			author = "Bohemia Interactive";
			textures[] = {"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class GVAR(AFV_Wheeled_slat): GVAR(AFV_Wheeled)
{
	displayName = "Rooikat 120 (Slat)";
	textureList[] = {"Sand",1};
	animationList[] = {"showCamonetHull",1,"showCamonetTurret",1,"showSLATHull",1};
};
class B_AFV_Wheeled_01_up_cannon_F;
class GVAR(AFV_Wheeled_up): B_AFV_Wheeled_01_up_cannon_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_APCs";
	crew = "CUP_B_GER_Fleck_Crew";
	animationList[] = {"showCamonetHull",1,"showCamonetTurret",1,"showSLATHull",0};
	class EventHandlers : EventHandlers
	{
		postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
	textureList[] = {"Sand",1};
	class TextureSources
	{
		class Sand
		{
			displayName = "Sand";
			author = "Bohemia Interactive";
			textures[] = {"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		
		class Sand_alt
		{
			displayName = "Sand (Woodland Camonet)";
			author = "Bohemia Interactive";
			textures[] = {"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class Green
		{
			displayName = "Green";
			author = "Bohemia Interactive";
			textures[] = {"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class GVAR(AFV_Wheeled_up_slat): GVAR(AFV_Wheeled_up)
{
	displayName = "Rooikat 120 UP (Slat)";
	textureList[] = {"Sand",1};
	animationList[] = {"showCamonetHull",1,"showCamonetTurret",1,"showSLATHull",1};
};

class B_APC_Tracked_01_CRV_F;
class GVAR(APC_Tracked_CRV): B_APC_Tracked_01_CRV_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_APCs";
	crew = "CUP_B_GER_Fleck_Crew";
	animationList[] = {"showCamonetHull",1};
	class EventHandlers : EventHandlers
	{
		postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
	textureList[] = {"Sand",1};
	class TextureSources
	{
		class Sand
		{
			displayName = "Sand";
			author = "Bohemia Interactive";
			textures[] = {"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_body_crv_co.paa","A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa","a3\data_f\vehicles\turret_co.paa","A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_crv_co.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		
		class Sand_alt
		{
			displayName = "Sand (Woodland Camonet)";
			author = "Bohemia Interactive";
			textures[] = {"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_body_crv_co.paa","A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa","a3\data_f\vehicles\turret_co.paa","A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_crv_co.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};

		class Green
		{
			displayName = "Green";
			author = "Bohemia Interactive";
			textures[] = {"A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_body_crv_olive_co.paa","A3\Armor_F_exp\APC_Tracked_01\Data\mbt_01_body_olive_co.paa","A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa","A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_crv_olive_co.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

// Boats
class CUP_B_MK10_GB;
class GVAR(MK10_GB): CUP_B_MK10_GB
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
};

class CUP_B_LCU1600_HIL;
class GVAR(LCU1600_HIL): CUP_B_LCU1600_HIL
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
};

class B_SDV_01_F;
class GVAR(SDV_01_F): B_SDV_01_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
};

class B_Boat_Transport_01_F;
class GVAR(Boat_Transport_01_F): B_Boat_Transport_01_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
};

class B_Boat_Armed_01_minigun_F;
class GVAR(Boat_Armed_01_minigun_F): B_Boat_Armed_01_minigun_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
};


class CUP_B_RHIB_USMC;
class GVAR(RHIB): CUP_B_RHIB_USMC
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
};

class CUP_B_RHIB2Turret_USMC;
class GVAR(RHIB_Mk19): CUP_B_RHIB2Turret_USMC
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
};

// Drones



class B_UAV_01_F;
class GVAR(UAV_01_F): B_UAV_01_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
};

class B_UGV_02_Demining_F;
class GVAR(UGV_02_Demining_F): B_UGV_02_Demining_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
};

class B_UGV_02_Science_F;
class GVAR(UGV_02_Science_F): B_UGV_02_Science_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
};

class B_UAV_02_dynamicLoadout_F;
class GVAR(UAV_02_dynamicLoadout_F): B_UAV_02_dynamicLoadout_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
};

// Cars (Light)
class B_LSV_01_unarmed_F;
class GVAR(LSV_01_unarmed_F): B_LSV_01_unarmed_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = QGVAR(Pkw_L_Subcat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class B_LSV_01_armed_F;
class GVAR(LSV_01_armed_F): B_LSV_01_armed_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = QGVAR(Pkw_L_Subcat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class B_LSV_01_AT_F;
class GVAR(LSV_01_AT_F): B_LSV_01_AT_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = QGVAR(Pkw_L_Subcat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class CUP_I_LR_Transport_AAF;
class GVAR(LR_Transport): CUP_I_LR_Transport_AAF
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = QGVAR(Pkw_L_Subcat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
	
	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
	tf_encryptionCode = "tf_west_radio_code";

	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	hiddenSelectionsTextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_woodlnd_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_woodlnd_co.paa"};

	textureList[] = {"GBW", 1};
	class TextureSources
	{
		class GBD
		{
			displayName = "Desert";
			author = "Community Upgrade Project";
			textures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class GBW
		{
			displayName = "Woodland";
			author = "Community Upgrade Project";
			textures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_woodlnd_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_woodlnd_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};
class CUP_I_LR_MG_AAF;
class GVAR(LR_MG): CUP_I_LR_MG_AAF
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = QGVAR(Pkw_L_Subcat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
	
	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
	tf_encryptionCode = "tf_west_radio_code";

	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	hiddenSelectionsTextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_woodlnd_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_woodlnd_co.paa"};
			
	textureList[] = {"GBW", 1};
	class TextureSources
	{
		class GBD
		{
			displayName = "Desert";
			author = "Community Upgrade Project";
			textures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class GBW
		{
			displayName = "Woodland";
			author = "Community Upgrade Project";
			textures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_woodlnd_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_woodlnd_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class CUP_I_LR_SF_HMG_AAF;
class GVAR(LR_SF_HMG): CUP_I_LR_SF_HMG_AAF
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = QGVAR(Pkw_L_Subcat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
	
	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
	tf_encryptionCode = "tf_west_radio_code";

	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	hiddenSelectionsTextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_woodlnd_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_woodlnd_co.paa"};
			
	textureList[] = {"GBW", 1};
	class TextureSources
	{
		class GBD
		{
			displayName = "Desert";
			author = "Community Upgrade Project";
			textures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class GBW
		{
			displayName = "Woodland";
			author = "Community Upgrade Project";
			textures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_woodlnd_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_woodlnd_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class CUP_I_LR_SF_GMG_AAF;
class GVAR(LR_SF_GMG): CUP_I_LR_SF_GMG_AAF
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = QGVAR(Pkw_L_Subcat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
	
	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
	tf_encryptionCode = "tf_west_radio_code";

	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	hiddenSelectionsTextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_woodlnd_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_woodlnd_co.paa"};
			
	textureList[] = {"GBW", 1};
	class TextureSources
	{
		class GBD
		{
			displayName = "Desert";
			author = "Community Upgrade Project";
			textures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class GBW
		{
			displayName = "Woodland";
			author = "Community Upgrade Project";
			textures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_woodlnd_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_woodlnd_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class CUP_B_Jackal2_L2A1_GB_W;
class GVAR(Jackal2_L2A1): CUP_B_Jackal2_L2A1_GB_W
{
	side = 1;
	displayName = "Jackal 2 L2A1";
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = QGVAR(Pkw_L_Subcat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
	
	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
	tf_encryptionCode = "tf_west_radio_code";

	textureList[] = {"GBW", 1};
	class TextureSources
	{
		class GBD
		{
			displayName = "Desert";
			author = "Community Upgrade Project";
			textures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_base_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_adds_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class GBW
		{
			displayName = "Woodland";
			author = "Community Upgrade Project";
			textures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_base_woodlnd_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_woodlnd_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_adds_woodlnd_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class CUP_B_Jackal2_GMG_GB_W;
class GVAR(Jackal2_GMG): CUP_B_Jackal2_GMG_GB_W
{
	side = 1;
	displayName = "Jackal 2 GMG";
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = QGVAR(Pkw_L_Subcat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
	
	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
	tf_encryptionCode = "tf_west_radio_code";

	textureList[] = {"GBW", 1};
	class TextureSources
	{
		class GBD
		{
			displayName = "Desert";
			author = "Community Upgrade Project";
			textures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_base_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_adds_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class GBW
		{
			displayName = "Woodland";
			author = "Community Upgrade Project";
			textures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_base_woodlnd_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_woodlnd_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_adds_woodlnd_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class CUP_B_BAF_Coyote_L2A1_W;
class GVAR(Coyote_L2A1): CUP_B_BAF_Coyote_L2A1_W
{
	side = 1;
	displayName = "Coyote L2A1";
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = QGVAR(Pkw_L_Subcat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
	
	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
	tf_encryptionCode = "tf_west_radio_code";

	textureList[] = {"GBW", 1};
	class TextureSources
	{
		class GBD
		{
			displayName = "Desert";
			author = "Community Upgrade Project";
			textures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_base_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_adds_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class GBW
		{
			displayName = "Woodland";
			author = "Community Upgrade Project";
			textures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_base_woodlnd_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_woodlnd_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_adds_woodlnd_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class CUP_B_BAF_Coyote_GMG_W;
class GVAR(Coyote_GMG): CUP_B_BAF_Coyote_GMG_W
{
	side = 1;
	displayName = "Coyote GMG";
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = QGVAR(Pkw_L_Subcat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
	
	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
	tf_encryptionCode = "tf_west_radio_code";

	textureList[] = {"GBW", 1};
	class TextureSources
	{
		class GBD
		{
			displayName = "Desert";
			author = "Community Upgrade Project";
			textures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_base_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_adds_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class GBW
		{
			displayName = "Woodland";
			author = "Community Upgrade Project";
			textures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_base_woodlnd_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_woodlnd_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_adds_woodlnd_co.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class B_Quadbike_01_F;
class GVAR(Quadbike_01_F): B_Quadbike_01_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = QGVAR(Pkw_L_Subcat);
	crew = "CUP_B_GER_BW_Fleck_Soldier";
};

// Planes

class CUP_B_C130J_USMC;
class GVAR(C130J_USMC): CUP_B_C130J_USMC
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	crew = "CUP_B_GER_Fleck_HPilot";
};

class CUP_B_C130J_Cargo_USMC;
class GVAR(C130J_USMC_Cargo): CUP_B_C130J_Cargo_USMC
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	crew = "CUP_B_GER_Fleck_HPilot";
};

// Tanks
class I_MBT_03_cannon_F;
class GVAR(MBT_03_cannon_F): I_MBT_03_cannon_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_Tanks";
	crew = "CUP_B_GER_Fleck_Crew";
	
	hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
	hiddenSelectionsTextures[] = {QPATHTOF(data\leopard_ext01_e.paa),QPATHTOF(data\leopard_ext02_e.paa),QPATHTOF(data\leopard_rcws_e),"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};

	animationList[] = {"showCamonetTurret", 1, "showCamonetHull", 1, "HideHull", 1, "HideTurret", 1};
	textureList[] = {"Green_WDL", 1};
	class TextureSources
	{
		class Green_WDL
		{
			displayName = "Green (Woodland)";
			author = "Cookie";
			textures[] = {QPATHTOF(data\leopard_ext01_e.paa),QPATHTOF(data\leopard_ext02_e.paa),QPATHTOF(data\leopard_rcws_e),"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class Green_ARD
		{
			displayName = "Green (Arid)";
			author = "Cookie";
			textures[] = {QPATHTOF(data\leopard_ext01_e.paa),QPATHTOF(data\leopard_ext02_e.paa),QPATHTOF(data\leopard_rcws_e),"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class Green_JGL
		{
			displayName = "Green (Jungle)";
			author = "Cookie";
			textures[] = {QPATHTOF(data\leopard_ext01_e.paa),QPATHTOF(data\leopard_ext02_e.paa),QPATHTOF(data\leopard_rcws_e),"A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class Green_SND
		{
			displayName = "Green (Sand)";
			author = "Cookie";
			textures[] = {QPATHTOF(data\leopard_ext01_e.paa),QPATHTOF(data\leopard_ext02_e.paa),QPATHTOF(data\leopard_rcws_e),"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};

		class Desert_ARD
		{
			displayName = "Desert (Arid)";
			author = "Cookie";
			textures[] = {QPATHTOF(data\leopard_ext01_d.paa),QPATHTOF(data\leopard_ext02_d.paa),QPATHTOF(data\leopard_rcws_d),"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class Desert_JGL
		{
			displayName = "Desert (Jungle)";
			author = "Cookie";
			textures[] = {QPATHTOF(data\leopard_ext01_d.paa),QPATHTOF(data\leopard_ext02_d.paa),QPATHTOF(data\leopard_rcws_d),"A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
		class Desert_SND
		{
			displayName = "Desert (Sand)";
			author = "Cookie";
			textures[] = {QPATHTOF(data\leopard_ext01_d.paa),QPATHTOF(data\leopard_ext02_d.paa),QPATHTOF(data\leopard_rcws_d),"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"};
			factions[] = {QGVAR(rangers_faction)};
		};
	};
	
	class EventHandlers : EventHandlers
	{
		postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
	};
    
    class TransportBackpacks
    {
        class _xx_B_Parachute {backpack="B_Parachute";count=0;};
    };
    class TransportMagazines
    {
        class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=10;};
        class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=10;};
        class _xx_CUP_20Rnd_762x51_HK417 {magazine="CUP_20Rnd_762x51_HK417";count=10;};
        class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch {magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";count=2;};
        class _xx_HandGrenade {magazine="HandGrenade";count=5;};
        class _xx_SmokeShell {magazine="SmokeShell";count=4;};
        class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
        class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
        class _xx_1Rnd_HE_Grenade_shell	{magazine="1Rnd_HE_Grenade_shell";count=4;};
        class _xx_ACE_40mm_Flare_ir	{magazine="ACE_40mm_Flare_ir";count=4;};
        class _xx_1Rnd_Smoke_Grenade_shell	{magazine="1Rnd_Smoke_Grenade_shell";count=4;};
        class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
        class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
    };
    class TransportWeapons
    {
        class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=2;};
        class _xx_CUP_launch_M72A6 {weapon="CUP_launch_M72A6";count=2;};
    };
    class TransportItems
    {
        class _xx_Toolkit {name="Toolkit";count=1;};
        class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=5;};
        class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=5;};
        class _xx_ACE_packingBandage {name="ACE_packingBandage";count=5;};
        class _xx_ACE_quikclot {name="ACE_quikclot";count=5;};
        class _xx_kat_chestSeal {name="kat_chestSeal";count=2;};
        class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
        class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
        class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
        class _xx_ACE_morphine {name="ACE_morphine";count=2;};
        class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=5;};
        class _xx_ACE_splint {name="ACE_splint";count=2;};
        class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
        class _xx_ACE_tourniquet {name="ACE_tourniquet";count=2;};
        class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
    };
};

class CUP_B_Leopard2A6_GER;
class GVAR(Leopard2A6): CUP_B_Leopard2A6_GER
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	editorSubcategory = "EdSubcat_Tanks";
};

// Turrets

class B_AAA_System_01_F;
class GVAR(AAA_System_01_F): B_AAA_System_01_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
};

class B_Radar_System_01_F;
class GVAR(Radar_System_01_F): B_Radar_System_01_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
};

class B_SAM_System_03_F;
class GVAR(SAM_System_03_F): B_SAM_System_03_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
};

class B_Ship_Gun_01_F;
class GVAR(Ship_Gun_01_F): B_Ship_Gun_01_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
};

class B_Ship_MRLS_01_F;
class GVAR(Ship_MRLS_01_F): B_Ship_MRLS_01_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
};

class CUP_B_TOW2_TriPod_USMC;
class GVAR(TOW2_TriPod_USMC): CUP_B_TOW2_TriPod_USMC
{
	side = 1;
	faction = QGVAR(rangers_faction);
	editorCategory = QGVAR(rangers_cat);
	crew = "CUP_B_GER_Fleck_Crew";
};