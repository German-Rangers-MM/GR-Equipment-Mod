//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Multiple Support Platform
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
class B_Slingload_01_Repair_F;

class GVAR(MSP_Cargo_F): B_Slingload_01_Repair_F
{
	author = "cookie";
	faction = QGVAR(rangers_faction);
	editorCategory = "EdCat_Supplies";
	side = 3;
	scopeCurator = 2;
	scope = 2;
	supplyRadius = 10;
	displayName = "Wartungs-Container";
	ace_cargo_hasCargo = 1;
	ace_cargo_space = 30;
	ace_rearm_defaultSupply = 600;
	ace_refuel_fuelCargo = 2000;
	transportRepair = 1e+12;
	ace_repair_canRepair = 1;
	class ACE_Cargo
	{
            class Cargo
			{
                class ACE_Wheel
				{
                    type = "ACE_Wheel";
                    amount = 10;
                };
                class ACE_Track
				{
                    type = "ACE_Track";
                    amount = 4;
                };
            };
        };
	class TransportItems
	{
		class _xx_Toolkit {name="Toolkit";count=5;};
	};
	class TransportBackpacks{};
	class TransportMagazines{};
	class TransportWeapons{};
};

//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Small Supply Box
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class Land_PlasticCase_01_large_olive_F;
class Land_PlasticCase_01_medium_olive_F;
class Land_PlasticCase_01_small_olive_F;

class GVAR(Box_ammo_L_F): Land_PlasticCase_01_large_olive_F
{
	author = "cookie";
	editorCategory = "EdCat_Supplies";
	side = 3;
	scopeCurator = 2;
	scope = 2;
	displayName = "Munitionskiste (Groß)";
	ace_dragging_canCarry = 0;
	ace_dragging_canDrag = 0;
	ace_rearm_defaultSupply = 400;
	explosionEffect = "BasicAmmoExplosion";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(data\PlasticCase_01_Ammo_Logo_01_CA)
	};
};

class GVAR(Box_ammo_M_F): Land_PlasticCase_01_medium_olive_F
{
	author = "cookie";
	editorCategory = "EdCat_Supplies";
	side = 3;
	scopeCurator = 2;
	scope = 2;
	displayName = "Munitionskiste (Mittel)";
	ace_dragging_canCarry = 0;
	ace_dragging_canDrag = 0;
	ace_rearm_defaultSupply = 200;
	explosionEffect = "BasicAmmoExplosion";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(data\PlasticCase_01_Ammo_Logo_01_CA)
	};
};

class GVAR(Box_ammo_S_F): Land_PlasticCase_01_small_olive_F
{
	author = "cookie";
	editorCategory = "EdCat_Supplies";
	side = 3;
	scopeCurator = 2;
	scope = 2;
	displayName = "Munitionskiste (Klein)";
	ace_dragging_canCarry = 0;
	ace_dragging_canDrag = 0;
	ace_rearm_defaultSupply = 100;
	explosionEffect = "BasicAmmoExplosion";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {
		"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
		QPATHTOF(data\PlasticCase_01_Ammo_Logo_01_CA)
	};
};