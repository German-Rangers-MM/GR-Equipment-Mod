class CfgPatches
{
	class gerrng_vest
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class cfgWeapons
{


	class V_PlateCarrier1_rgr;
	class VestItem;
	
	class GRE_PlateCarrier1_Tropentarn: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "GerRng Plate Carrier (Tropentarn)";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelectionsTextures[] = {"GerRng_Vests\data\Tropentarn.paa"};
		hiddenSelections[] = {"Camo"};
		author = "JAN";



		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply220";
			hiddenSelections[] = {"camo"};
			mass = 90;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;

				};
			};
		};
	};

	class GRE_PlateCarrier1_Flecktarn: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "GerRng Plate Carrier (Flecktarn)";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelectionsTextures[] = {"GerRng_Vests\data\Flecktarn.paa"};
		hiddenSelections[] = {"Camo"};
		author = "JAN";



		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply220";
			hiddenSelections[] = {"camo"};
			mass = 90;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;

				};
			};
		};
	};

	class GRE_PlateCarrier1_Flecktarn_B: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "GerRng Plate Carrier (Flecktarn B)";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelectionsTextures[] = {"GerRng_Vests\data\Flecktarn_B.paa"};
		hiddenSelections[] = {"Camo"};
		author = "JAN";



		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply220";
			hiddenSelections[] = {"camo"};
			mass = 90;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;

				};
			};
		};
	};
	
	class GRE_PlateCarrier1_Wintertarn: V_PlateCarrier1_rgr
	{
    	scope = 2;
		displayName = "GerRng Plate Carrier (Wintertarn)";
		// picture = "\x\cfp\addons\vests\PlateCarrier1\ui\Grey.jpg";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelectionsTextures[] = {"GerRng_Vests\data\Wintertarn.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply220";
			hiddenSelections[] = {"camo"};
			mass = 90;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};

		};
	};


};