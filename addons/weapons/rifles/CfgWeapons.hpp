class CfgWeapons{
	class Rifle_Base_F;
	class CUP_arifle_G36_Base: Rifle_Base_F
	{
		author = "jan";
		magazineWell[]= { "GerRng_G36_MagWell"};
	};

	class CUP_arifle_G36K_KSK;
	class GVAR(G36KA4) : CUP_arifle_G36K_KSK
	{
		author = "jan";
		displayName = "G36KA4";
	};

	class CUP_arifle_G36K_KSK_camo;
	class GVAR(G36KA4_camo) : CUP_arifle_G36K_KSK_camo
	{
		author = "jan";
		displayName = "G36KA4 Desert";
	};

	class CUP_arifle_G36K_KSK_VFG;
	class GVAR(G36KA4_VFG) : CUP_arifle_G36K_KSK_VFG
	{
		author = "jan";
		displayName = "G36KA4 VFG";
	};

	class GVAR(G36KA4_VFG_camo) : CUP_arifle_G36K_KSK
	{
		author = "jan";
		displayName = "G36KA4 VFG Desert";
	};

	class CUP_arifle_G36K_KSK_AFG;
	class GVAR(G36KA4_AFG) : CUP_arifle_G36K_KSK_AFG
	{
		author = "jan";
		displayName = "G36KA4 AFG";
	};

	class CUP_arifle_G36K_KSK_AFG_camo;
	class GVAR(G36KA4_AFG_camo) : CUP_arifle_G36K_KSK_AFG_camo
	{
		author = "jan";
		displayName = "G36KA4 AFG Desert";
	};
};
