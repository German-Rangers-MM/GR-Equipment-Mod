class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyVehicle;
		};
	};

	class GVAR(frequency_module): Module_F
	{
		scope = 2;
		scopeCurator = 1;
		displayName = "Radio-Setter";
		category = "gerrng_modules";
		function = QFUNC(moduleInit);
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		
		class Arguments
		{
			class frequencyGround
			{
				displayName = "Frequency Ground/Sea";
				tooltip = "Enter frequency as do-separated value (e.g., 30.5)";
				typeName = "STRING";
				defaultValue = "68";
			};
			class frequencyAir {
				displayName = "Frequency Air";
				tooltip = "Enter frequency as do-separated value (e.g., 30.5)";
				typeName = "STRING";
				defaultValue = "64";
			};
		};

		// Module description (synced entities and behavior)
		class ModuleDescription: ModuleDescription
		{
			description = "Sets radio frequencies for synced vehicles";
			sync[] = {"AnyVehicle"};
			class AnyVehicle: AnyVehicle
			{
				description = "Vehicles for which to set their LR Frequencies";
				duplicate = 1;
			};
		};
	};
};