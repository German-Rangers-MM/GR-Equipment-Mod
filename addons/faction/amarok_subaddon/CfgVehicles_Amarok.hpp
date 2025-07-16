//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Amarok (Offroad 01)
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
class Offroad_01_military_covered_base_F;
class I_E_Offroad_01_covered_F : Offroad_01_military_covered_base_F
{
	class TextureSources
	{
		class Green
		{
			displayName = CSTRING(camo_grn);
			author = "Cookie";
			faction[] = {QGVAR(rangers_faction)};
		};
		class Flk
		{
			displayName = CSTRING(camo_flk);
			author = "Cookie";
			textures[] = {QPATHTOF(amarok_subaddon\data\amarok_ext_FLK_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_ext_FLK_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_cover_FLK_CO.paa)};
			faction[] = {QGVAR(rangers_faction)};
		};
		class Trp
		{
			displayName = CSTRING(camo_trp);
			author = "Cookie";
			textures[] = {QPATHTOF(amarok_subaddon\data\amarok_ext_TRP_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_ext_TRP_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_cover_TRP_CO.paa)};
			faction[] = {QGVAR(rangers_faction)};
		};

		class FlkSan
		{
			displayName = CSTRING(camo_flk_san);
			author = "Cookie";
			textures[] = {QPATHTOF(amarok_subaddon\data\amarok_ext_san_FLK_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_ext_san_FLK_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_cover_san_FLK_CO.paa)};
			faction[] = {QGVAR(rangers_faction)};
		};
		class TrpSan
		{
			displayName = CSTRING(camo_trp_san);
			author = "Cookie";
			textures[] = {QPATHTOF(amarok_subaddon\data\amarok_ext_san_TRP_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_ext_san_TRP_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_cover_san_TRP_CO.paa)};
			faction[] = {QGVAR(rangers_faction)};
		};

		class FlkCSS
		{
			displayName = CSTRING(camo_flk_css);
			author = "Cookie";
			textures[] = {QPATHTOF(amarok_subaddon\data\amarok_ext_css_FLK_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_ext_css_FLK_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_cover_FLK_CO.paa)};
			faction[] = {QGVAR(rangers_faction)};
		};
		class TrpCSS
		{
			displayName = CSTRING(camo_trp_css);
			author = "Cookie";
			textures[] = {QPATHTOF(amarok_subaddon\data\amarok_ext_css_TRP_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_ext_css_TRP_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_cover_TRP_CO.paa)};
			faction[] = {QGVAR(rangers_faction)};
		};

		class FlkSig
		{
			displayName = CSTRING(camo_flk_C2);
			author = "Cookie";
			textures[] = {QPATHTOF(amarok_subaddon\data\amarok_ext_sig_FLK_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_ext_sig_FLK_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_cover_FLK_CO.paa)};
			faction[] = {QGVAR(rangers_faction)};
		};
		class TrpSig
		{
			displayName = CSTRING(camo_trp_C2);
			author = "Cookie";
			textures[] = {QPATHTOF(amarok_subaddon\data\amarok_ext_sig_TRP_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_ext_sig_TRP_CO.paa),QPATHTOF(amarok_subaddon\data\amarok_cover_TRP_CO.paa)};
			faction[] = {QGVAR(rangers_faction)};
		};
	};
};

class GVAR(Amarok_covered_GER_Grn) : I_E_Offroad_01_covered_F
{

    author = "cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(amarok_covered_green);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";
	
	armor = 80;

	editorSubcategory = QGVAR(Pkw_L_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
    tf_encryptionCode = "tf_west_radio_code";

	ace_cargo_space = 12;
	
	textureList[]={"Green",1};
	hiddenSelections[] = {"Camo","Camo2","Camo3"};
	hiddenSelectionsTextures[]=
	{
		"a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
		"a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
		"a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_grn_co.paa"
	};

	animationList[] = {
		"hidePolice",1,
		"HideServices",1,
		"HideCover",0,
		"StartBeaconLight",0,
		"HideRoofRack",0,
		"HideLoudSpeakers",1,
		"HideAntennas",1,
		"HideBeacon",1,
		"HideSpotlight",1,
		"HideDoor3",0,
		"OpenDoor3",0,
		"HideDoor1",0,
		"HideDoor2",0,
		"HideBackpacks",1,
		"HideBumper1",1,
		"HideBumper2",0,
		"HideConstruction",0,
		"BeaconsStart",0
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
	
    class PlateInfos
    {
        // name of section where plate number should generated
        name = "spz";
        // color used for plate number in (r,g,b,a) format
        color[] = {0,0,0,1};
        plateFont		= "RobotoCondensedLight";
        // "#" represent number & "$" represents letter
        plateFormat		= "Y-### ###";
        // Required even if you don't use any letters in plateFormat
        plateLetters	= "ABCDEFHIKLMOPRSTVXYZ";
    };
};

class GVAR(Amarok_covered_mp_GER_Grn) : GVAR(Amarok_covered_GER_Grn)
{
	displayName = CSTRING(amarok_mp_grn);
	textureList[] = {"Green",1};
	hiddenSelections[] = {"Camo","Camo2","Camo3"};
	hiddenSelectionsTextures[]=
	{
		"a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
		"a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
		"a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_grn_co.paa"
	};

	animationList[] = {
		"hidePolice",0,
		"HideServices",1,
		"HideCover",0,
		"StartBeaconLight",0,
		"HideRoofRack",1,
		"HideLoudSpeakers",1,
		"HideAntennas",1,
		"HideBeacon",1,
		"HideSpotlight",1,
		"HideDoor3",0,
		"OpenDoor3",0,
		"HideDoor1",0,
		"HideDoor2",0,
		"HideBackpacks",1,
		"HideBumper1",1,
		"HideBumper2",0,
		"HideConstruction",0,
		"BeaconsStart",0
	};

	class Sounds
	{
		soundSetsExt[] = {"Offroad_01_Engine_RPM0_EXT_SoundSet","Offroad_01_Engine_RPM1_EXT_SoundSet","Offroad_01_Engine_RPM2_EXT_SoundSet","Offroad_01_Engine_RPM3_EXT_SoundSet","Offroad_01_Engine_RPM4_EXT_SoundSet","Offroad_01_Rattling_EXT_SoundSet","Offroad_01_Stress_EXT_SoundSet","Offroad_01_Rain_EXT_SoundSet","Offroad_01_Tires_Rock_Fast_EXT_SoundSet","Offroad_01_Tires_Grass_Fast_EXT_SoundSet","Offroad_01_Tires_Sand_Fast_EXT_SoundSet","Offroad_01_Tires_Gravel_Fast_EXT_SoundSet","Offroad_01_Tires_Mud_Fast_EXT_SoundSet","Offroad_01_Tires_Asphalt_Fast_EXT_SoundSet","Offroad_01_Tires_Water_Fast_EXT_SoundSet","Offroad_01_Tires_Rock_Slow_EXT_SoundSet","Offroad_01_Tires_Grass_Slow_EXT_SoundSet","Offroad_01_Tires_Sand_Slow_EXT_SoundSet","Offroad_01_Tires_Gravel_Slow_EXT_SoundSet","Offroad_01_Tires_Mud_Slow_EXT_SoundSet","Offroad_01_Tires_Asphalt_Slow_EXT_SoundSet","Offroad_01_Tires_Water_Slow_EXT_SoundSet","Offroad_01_Tires_Turn_Hard_EXT_SoundSet","Offroad_01_Tires_Turn_Soft_EXT_SoundSet","Offroad_01_Tires_Brake_Hard_EXT_SoundSet","Offroad_01_Tires_Brake_Soft_EXT_SoundSet","","Tires_Movement_Dirt_Ext_01_SoundSet","Van_02_AmbulanceSiren_BW_01_Ext_SoundSet"};
		soundSetsInt[] = {"Offroad_01_Engine_RPM0_INT_SoundSet","Offroad_01_Engine_RPM1_INT_SoundSet","Offroad_01_Engine_RPM2_INT_SoundSet","Offroad_01_Engine_RPM3_INT_SoundSet","Offroad_01_Engine_RPM4_INT_SoundSet","Offroad_01_Rattling_INT_SoundSet","Offroad_01_Stress_INT_SoundSet","Offroad_01_Rain_INT_SoundSet","Offroad_01_Tires_Rock_Fast_OPEN_SoundSet","Offroad_01_Tires_Grass_Fast_OPEN_SoundSet","Offroad_01_Tires_Sand_Fast_OPEN_SoundSet","Offroad_01_Tires_Gravel_Fast_OPEN_SoundSet","Offroad_01_Tires_Mud_Fast_OPEN_SoundSet","Offroad_01_Tires_Asphalt_Fast_OPEN_SoundSet","Offroad_01_Tires_Water_Fast_OPEN_SoundSet","Offroad_01_Tires_Rock_Slow_OPEN_SoundSet","Offroad_01_Tires_Grass_Slow_OPEN_SoundSet","Offroad_01_Tires_Sand_Slow_OPEN_SoundSet","Offroad_01_Tires_Gravel_Slow_OPEN_SoundSet","Offroad_01_Tires_Mud_Slow_OPEN_SoundSet","Offroad_01_Tires_Asphalt_Slow_OPEN_SoundSet","Offroad_01_Tires_Water_Slow_OPEN_SoundSet","Offroad_01_Tires_Turn_Hard_OPEN_SoundSet","Offroad_01_Tires_Turn_Soft_OPEN_SoundSet","Offroad_01_Tires_Brake_Hard_OPEN_SoundSet","Offroad_01_Tires_Brake_Soft_OPEN_SoundSet","","Tires_Movement_Dirt_Int_01_SoundSet","Van_02_AmbulanceSiren_BW_01_Int_SoundSet"};
	};
};

class GVAR(Amarok_GER_Grn) : GVAR(Amarok_covered_GER_Grn)
{

    author = "cookie";
    scope = 2;
    scopeCurator = 2;
    displayName = CSTRING(amarok_green);
    side = 1;
    faction = QGVAR(rangers_faction);
    crew = "CUP_B_GER_BW_Fleck_Soldier";
	
	armor = 80;

	
	editorSubcategory = QGVAR(Pkw_L_Subcat);

	tf_hasLRradio = 1;
	tf_RadioType = "tf_rt1523g";
	tf_range = 30000;
    tf_encryptionCode = "tf_west_radio_code";

	ace_cargo_space = 12;
	
	textureList[]={"Green",1};
	hiddenSelections[] = {"Camo","Camo2","Camo3"};
	hiddenSelectionsTextures[]=
	{
		"a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
		"a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
		"a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_grn_co.paa"
	};

	animationList[] = {
		"hidePolice",1,
		"HideServices",1,
		"HideCover",1,
		"StartBeaconLight",0,
		"HideRoofRack",0,
		"HideLoudSpeakers",1,
		"HideAntennas",1,
		"HideBeacon",1,
		"HideSpotlight",1,
		"HideDoor3",0,
		"OpenDoor3",0,
		"HideDoor1",0,
		"HideDoor2",0,
		"HideBackpacks",1,
		"HideBumper1",1,
		"HideBumper2",0,
		"HideConstruction",0,
		"BeaconsStart",0
	};
};

class GVAR(Amarok_GER_FLK) : GVAR(Amarok_GER_Grn)
{
    displayName = CSTRING(amarok_flk);
	textureList[]={"Flk",1};
};

class GVAR(Amarok_GER_TRP) : GVAR(Amarok_GER_Grn)
{
    displayName = CSTRING(amarok_trp);
	textureList[]={"Trp",1};
};

class GVAR(Amarok_covered_comms_GER_Grn) : GVAR(Amarok_covered_GER_Grn)
{
    displayName = CSTRING(amarok_iuk_green);
	tf_range = 45000;
	animationList[] = {
		"hidePolice",1,
		"HideServices",1,
		"HideCover",0,
		"StartBeaconLight",0,
		"HideRoofRack",0,
		"HideLoudSpeakers",1,
		"HideAntennas",0,
		"HideBeacon",1,
		"HideSpotlight",1,
		"HideDoor3",0,
		"OpenDoor3",0,
		"HideDoor1",0,
		"HideDoor2",0,
		"HideBackpacks",1,
		"HideBumper1",1,
		"HideBumper2",0,
		"HideConstruction",0,
		"BeaconsStart",0
	};

};

class GVAR(Amarok_covered_engineering_GER_Grn) : GVAR(Amarok_covered_GER_Grn)
{
    displayName = CSTRING(amarok_css_green);
	ace_repair_canRepair = 1;
	animationList[] = {
		"hidePolice",1,
		"HideServices",1,
		"HideCover",0,
		"StartBeaconLight",0,
		"HideRoofRack",0,
		"HideLoudSpeakers",1,
		"HideAntennas",1,
		"HideBeacon",0,
		"HideSpotlight",0,
		"HideDoor3",0,
		"OpenDoor3",0,
		"HideDoor1",0,
		"HideDoor2",0,
		"HideBackpacks",1,
		"HideBumper1",1,
		"HideBumper2",0,
		"HideConstruction",0,
		"BeaconsStart",0
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=5;};
		class _xx_SmokeShell {magazine="SmokeShell";count=4;};
		class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
		class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
		class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
		class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
	};
	class TransportWeapons
	{
		class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=1;};
	};
	class TransportItems
	{
		class _xx_Toolkit {name="Toolkit";count=4;};
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
		class _xx_ACE_rope12 {name="ACE_rope12";count=4;};
		class _xx_ACE_rope6 {name="ACE_rope6";count=4;};
		class _xx_ACE_Wheel {name="ACE_Wheel";count=20;};
	};	

};

class GVAR(Amarok_engineering_GER_Grn) : GVAR(Amarok_covered_engineering_GER_Grn)
{
    displayName = CSTRING(amarok_css_nc_green);
	animationList[] = {
		"hidePolice",1,
		"HideServices",1,
		"HideCover",1,
		"StartBeaconLight",0,
		"HideRoofRack",0,
		"HideLoudSpeakers",1,
		"HideAntennas",1,
		"HideBeacon",0,
		"HideSpotlight",0,
		"HideDoor3",0,
		"OpenDoor3",0,
		"HideDoor1",0,
		"HideDoor2",0,
		"HideBackpacks",1,
		"HideBumper1",1,
		"HideBumper2",0,
		"HideConstruction",0,
		"BeaconsStart",0
	};

};

class GVAR(Amarok_covered_san_GER_Grn) : GVAR(Amarok_covered_GER_Grn)
{
    displayName = CSTRING(amarok_san_green);
	attendant = 1;
    animationList[]={
        "hidePolice",0,
        "HideServices",1,
        "HideCover",0,
        "StartBeaconLight",0,
        "HideRoofRack",1,
        "HideLoudSpeakers",1,
        "HideAntennas",1,
        "HideBeacon",1,
        "HideSpotlight",1,
        "HideDoor3",0,
        "OpenDoor3",0,
        "HideDoor1",0,
        "HideDoor2",0,
        "HideBackpacks",1,
        "HideBumper1",1,
        "HideBumper2",0,
        "HideConstruction",0,
        "BeaconsStart",0
	};

	class Sounds
	{
		soundSetsExt[] = {"Offroad_01_Engine_RPM0_EXT_SoundSet","Offroad_01_Engine_RPM1_EXT_SoundSet","Offroad_01_Engine_RPM2_EXT_SoundSet","Offroad_01_Engine_RPM3_EXT_SoundSet","Offroad_01_Engine_RPM4_EXT_SoundSet","Offroad_01_Rattling_EXT_SoundSet","Offroad_01_Stress_EXT_SoundSet","Offroad_01_Rain_EXT_SoundSet","Offroad_01_Tires_Rock_Fast_EXT_SoundSet","Offroad_01_Tires_Grass_Fast_EXT_SoundSet","Offroad_01_Tires_Sand_Fast_EXT_SoundSet","Offroad_01_Tires_Gravel_Fast_EXT_SoundSet","Offroad_01_Tires_Mud_Fast_EXT_SoundSet","Offroad_01_Tires_Asphalt_Fast_EXT_SoundSet","Offroad_01_Tires_Water_Fast_EXT_SoundSet","Offroad_01_Tires_Rock_Slow_EXT_SoundSet","Offroad_01_Tires_Grass_Slow_EXT_SoundSet","Offroad_01_Tires_Sand_Slow_EXT_SoundSet","Offroad_01_Tires_Gravel_Slow_EXT_SoundSet","Offroad_01_Tires_Mud_Slow_EXT_SoundSet","Offroad_01_Tires_Asphalt_Slow_EXT_SoundSet","Offroad_01_Tires_Water_Slow_EXT_SoundSet","Offroad_01_Tires_Turn_Hard_EXT_SoundSet","Offroad_01_Tires_Turn_Soft_EXT_SoundSet","Offroad_01_Tires_Brake_Hard_EXT_SoundSet","Offroad_01_Tires_Brake_Soft_EXT_SoundSet","","Tires_Movement_Dirt_Ext_01_SoundSet","Van_02_AmbulanceSiren_BW_01_Ext_SoundSet"};
		soundSetsInt[] = {"Offroad_01_Engine_RPM0_INT_SoundSet","Offroad_01_Engine_RPM1_INT_SoundSet","Offroad_01_Engine_RPM2_INT_SoundSet","Offroad_01_Engine_RPM3_INT_SoundSet","Offroad_01_Engine_RPM4_INT_SoundSet","Offroad_01_Rattling_INT_SoundSet","Offroad_01_Stress_INT_SoundSet","Offroad_01_Rain_INT_SoundSet","Offroad_01_Tires_Rock_Fast_OPEN_SoundSet","Offroad_01_Tires_Grass_Fast_OPEN_SoundSet","Offroad_01_Tires_Sand_Fast_OPEN_SoundSet","Offroad_01_Tires_Gravel_Fast_OPEN_SoundSet","Offroad_01_Tires_Mud_Fast_OPEN_SoundSet","Offroad_01_Tires_Asphalt_Fast_OPEN_SoundSet","Offroad_01_Tires_Water_Fast_OPEN_SoundSet","Offroad_01_Tires_Rock_Slow_OPEN_SoundSet","Offroad_01_Tires_Grass_Slow_OPEN_SoundSet","Offroad_01_Tires_Sand_Slow_OPEN_SoundSet","Offroad_01_Tires_Gravel_Slow_OPEN_SoundSet","Offroad_01_Tires_Mud_Slow_OPEN_SoundSet","Offroad_01_Tires_Asphalt_Slow_OPEN_SoundSet","Offroad_01_Tires_Water_Slow_OPEN_SoundSet","Offroad_01_Tires_Turn_Hard_OPEN_SoundSet","Offroad_01_Tires_Turn_Soft_OPEN_SoundSet","Offroad_01_Tires_Brake_Hard_OPEN_SoundSet","Offroad_01_Tires_Brake_Soft_OPEN_SoundSet","","Tires_Movement_Dirt_Int_01_SoundSet","Van_02_AmbulanceSiren_BW_01_Int_SoundSet"};
	};

	class TransportBackpacks
	{
		class _xx_B_Parachute {backpack="B_Parachute";count=0;};
	};
	class TransportMagazines
	{
		class _xx_CUP_30Rnd_556x45_G36 {magazine="CUP_30Rnd_556x45_G36";count=2;};
		class _xx_CUP_30Rnd_556x45_PMAG_BLACK {magazine="CUP_30Rnd_556x45_PMAG_BLACK";count=2;};
		class _xx_SmokeShell {magazine="SmokeShell";count=4;};
		class _xx_SmokeShellGreen {magazine="SmokeShellGreen";count=4;};
		class _xx_SmokeShellRed	{magazine="SmokeShellRed";count=4;};
		class _xx_ACE_Chemlight_HiGreen	{magazine="ACE_Chemlight_HiGreen";count=10;};
		class _xx_ACE_Chemlight_HiRed {magazine="ACE_Chemlight_HiRed";count=10;};
	};
	class TransportWeapons
	{
		class _xx_CUP_arifle_G36A {weapon="CUP_arifle_G36A";count=1;};
	};
	class TransportItems
	{
		class _xx_Toolkit {name="Toolkit";count=1;};
		class _xx_ACE_fieldDressing {name="ACE_fieldDressing";count=10;};
		class _xx_ACE_elasticBandage {name="ACE_elasticBandage";count=10;};
		class _xx_ACE_packingBandage {name="ACE_packingBandage";count=10;};
		class _xx_ACE_quikclot {name="ACE_quikclot";count=10;};
		class _xx_kat_chestSeal {name="kat_chestSeal";count=5;};
		class _xx_ACE_EarPlugs {name="ACE_EarPlugs";count=10;};
		class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool";count=1;};
		class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item";count=10;};
		class _xx_ACE_morphine {name="ACE_morphine";count=5;};
		class _xx_ACE_salineIV_500 {name="ACE_salineIV_500";count=10;};
		class _xx_ACE_splint {name="ACE_splint";count=5;};
		class _xx_ACE_wirecutter {name="ACE_wirecutter";count=1;};
		class _xx_kat_IV_16 {name="kat_IV_16";count=10;};
		class _xx_kat_CarbonateItem {name="kat_CarbonateItem";count=5;};
		class _xx_kat_atropine {name="kat_atropine";count=5;};
		class _xx_kat_AED {name="kat_AED";count=1;};
		class _xx_kat_BVM {name="kat_BVM";count=5;};
		class _xx_kat_EACA {name="kat_EACA";count=5;};
		class _xx_ACE_epinephrine {name="ACE_epinephrine";count=5;};
		class _xx_kat_IO_FAST {name="kat_IO_FAST";count=5;};
		class _xx_kat_fentanyl {name="kat_fentanyl";count=5;};
		class _xx_kat_ketamine {name="kat_ketamine";count=5;};
		class _xx_kat_larynx {name="kat_larynx";count=5;};
		class _xx_kat_lorazepam {name="kat_lorazepam";count=5;};
		class _xx_kat_nalbuphine {name="kat_nalbuphine";count=5;};
		class _xx_kat_naloxone {name="kat_naloxone";count=5;};
		class _xx_kat_nitroglycerin {name="kat_nitroglycerin";count=5;};
		class _xx_kat_norepinephrine {name="kat_norepinephrine";count=5;};
		class _xx_ACE_personalAidKit {name="ACE_personalAidKit";count=1;};
		class _xx_kat_phenylephrine {name="kat_phenylephrine";count=5;};
		class _xx_kat_oxygenTank_300_Item {name="kat_oxygenTank_300_Item";count=2;};
		class _xx_kat_Pulseoximeter {name="kat_Pulseoximeter";count=3;};
		class _xx_ACE_surgicalKit {name="ACE_surgicalKit";count=1;};
		class _xx_kat_TXA {name="kat_TXA";count=5;};
		class _xx_Attachable_Helistretcher {name="Attachable_Helistretcher";count=1;};
		class _xx_ACE_tourniquet {name="ACE_tourniquet";count=5;};
		class _xx_ACE_rope12 {name="ACE_rope12";count=1;};
	};	
};

class GVAR(Amarok_covered_GER_FLK) : GVAR(Amarok_covered_GER_Grn)
{
    displayName = CSTRING(amarok_covered_flk);
	textureList[]={"Flk",1};
};

class GVAR(Amarok_covered_GER_TRP) : GVAR(Amarok_covered_GER_Grn)
{
    displayName = CSTRING(amarok_covered_trp);
	textureList[]={"Trp",1};
};

class GVAR(Amarok_covered_mp_GER_FLK) : GVAR(Amarok_covered_mp_GER_Grn)
{
	displayName = CSTRING(amarok_mp_flk);
	textureList[]={"Flk",1};
};
class GVAR(Amarok_covered_mp_GER_TRP) : GVAR(Amarok_covered_mp_GER_Grn)
{
	displayName = CSTRING(amarok_mp_trp);
	textureList[]={"Trp",1};
};

class GVAR(Amarok_covered_comms_GER_FLK) : GVAR(Amarok_covered_comms_GER_Grn)
{
    displayName = CSTRING(amarok_iuk_flk);
	textureList[]={"FlkSig",1};
};

class GVAR(Amarok_covered_comms_GER_TRP) : GVAR(Amarok_covered_comms_GER_Grn)
{
    displayName = CSTRING(amarok_iuk_trp);
	textureList[]={"TrpSig",1};
};

class GVAR(Amarok_covered_san_GER_FLK) : GVAR(Amarok_covered_san_GER_Grn)
{
    displayName = CSTRING(amarok_san_flk);
	textureList[]={"FlkSan",1};
};

class GVAR(Amarok_san_covered_GER_TRP) : GVAR(Amarok_covered_san_GER_Grn)
{
    displayName = CSTRING(amarok_san_trp);
	textureList[]={"TrpSan",1};
};

class GVAR(Amarok_engineering_covered_GER_FLK) : GVAR(Amarok_covered_engineering_GER_Grn)
{
    displayName = CSTRING(amarok_css_flk);
	textureList[]={"FlkCSS",1};
};

class GVAR(Amarok_engineering_covered_GER_TRP) : GVAR(Amarok_covered_engineering_GER_Grn)
{
    displayName = CSTRING(amarok_css_trp);
	textureList[]={"TrpCSS",1};
};

class GVAR(Amarok_engineering_GER_FLK) : GVAR(Amarok_engineering_GER_Grn)
{
    displayName = CSTRING(amarok_css_nc_flk);
	textureList[]={"FlkCSS",1};
};

class GVAR(Amarok_engineering_GER_TRP) : GVAR(Amarok_engineering_GER_Grn)
{
    displayName = CSTRING(amarok_css_nc_trp);
	textureList[]={"TrpCSS",1};
};
