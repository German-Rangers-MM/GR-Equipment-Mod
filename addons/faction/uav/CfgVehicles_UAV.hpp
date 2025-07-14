//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			UAV
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class B_UAV_01_F;
class GVAR(UAV_01_F): B_UAV_01_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	
};

class B_UAV_02_dynamicLoadout_F;
class GVAR(UAV_02_dynamicLoadout_F): B_UAV_02_dynamicLoadout_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	
};

class B_T_UAV_03_dynamicLoadout_F
{
	class HitPoints;
};
class GVAR(UAV_03_dynamicLoadout_F): B_T_UAV_03_dynamicLoadout_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	class HitPoints: HitPoints{};
	
};

class C_IDAP_UAV_06_antimine_F
{
	class HitPoints;
};
class GVAR(UAV_06_antimine_F): C_IDAP_UAV_06_antimine_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	class HitPoints: HitPoints{};
	
	class assembleInfo
	{
		assembleTo = "";
		base = "";
		displayName = "";
		dissasembleTo[] = {QGVAR(UAV_06_backpack_F)};
		primary = 1;
	};
};


class B_UAV_06_F
{
	class HitPoints;
};
class GVAR(UAV_06_F): B_UAV_06_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	class HitPoints: HitPoints{};
};

class B_UAV_06_medical_F
{
	class HitPoints;
};
class GVAR(UAV_06_medical_F): B_UAV_06_medical_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	class HitPoints: HitPoints{};
	
};


//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			UGV
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------

class B_UGV_01_F;
class GVAR(UGV_01_F): B_UGV_01_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
};

class B_UGV_01_rcws_F;
class GVAR(UGV_01_rcws_F): B_UGV_01_rcws_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	
};

class B_UGV_02_Demining_F;
class GVAR(UGV_02_Demining_F): B_UGV_02_Demining_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	
};

class B_UGV_02_Science_F;
class GVAR(UGV_02_Science_F): B_UGV_02_Science_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	
};
