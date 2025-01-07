//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			Medic Tent
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
class Land_MedicalTent_01_NATO_generic_open_F;

class GerRng_MedTent_01 : Land_MedicalTent_01_NATO_generic_open_F {
    author = "dalleburn, jan";
    displayName = "Ger Rng Medical Tent";

    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[]=
    {
        "\a3\structures_f_orange\humanitarian\camps\data\medicaltent_01_mtp_f_co.paa",
    };
    animationList[] = {
		"MedSign_Hide",0,
        "SolarPanel1_Hide",0,
        "SolarPanel2_Hide",0
	};
};

class B_supplyCrate_F;

class GerRng_supplyCrate_F : B_supplyCrate_F {
    author = "dalleburn, jan";
    displayName = "Supply Box [GerRng]";

    ace_cargo_space = 10;
    ace_cargo_hasCargo = 1;
    ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
    ace_cargo_noRename = 0;  // Blocks renaming object (1-blocked, 0-allowed)
    ace_cargo_blockUnloadCarry = 0; // Blocks object from being automatically picked up by player on unload

};