//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//
//			UAV
//
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
class UAV_06_base_F;
class C_IDAP_UAV_06_antimine_F: UAV_06_base_F{};
class GVAR(UAV_06_antimine_F): C_IDAP_UAV_06_antimine_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	
	class assembleInfo
	{
		assembleTo = "";
		base = "";
		displayName = "";
		dissasembleTo[] = {QGVAR(UAV_06_backpack_F)};
		primary = 1;
	};
};


class B_UAV_06_F: UAV_06_base_F{};
class GVAR(UAV_06_F): B_UAV_06_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	
};

class B_UAV_06_medical_F;
class GVAR(UAV_06_medical_F): B_UAV_06_medical_F
{
	side = 1;
	faction = QGVAR(rangers_faction);
	
};