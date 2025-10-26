class CfgWeapons {


	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;

    class GVAR(pistol_6_6_M17_21Rnd): ACE_ItemCore {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        author = "Cookie, Apache";
        displayName = CSTRING(pistol_M17_6_6_display);
        descriptionShort = CSTRING(pistol_desc);
        picture = QPATHTOF(data\bandolier_pistol_mag.paa);
        
        GVAR(isBandolier) = 1;
        GVAR(bandolierItems)[] = {"CUP_21Rnd_9x19_M17_Black"};
        GVAR(replacementItem) = QGVAR(pistol_5_6_M17_21Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
    };
    class GVAR(pistol_5_6_M17_21Rnd): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(pistol_M17_5_6_display);
        GVAR(replacementItem) = QGVAR(pistol_4_6_M17_21Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 25;
		};
    };
    class GVAR(pistol_4_6_M17_21Rnd): GVAR(pistol_5_6_M17_21Rnd) {
        displayName = CSTRING(pistol_M17_4_6_display);
        GVAR(replacementItem) = QGVAR(pistol_3_6_M17_21Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 20;
		};
    };
    class GVAR(pistol_3_6_M17_21Rnd): GVAR(pistol_5_6_M17_21Rnd) {
        displayName = CSTRING(pistol_M17_3_6_display);
        GVAR(replacementItem) = QGVAR(pistol_2_6_M17_21Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 15;
		};
    };
    class GVAR(pistol_2_6_M17_21Rnd): GVAR(pistol_5_6_M17_21Rnd) {
        displayName = CSTRING(pistol_M17_2_6_display);
        GVAR(replacementItem) = QGVAR(pistol_1_6_M17_21Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
    };
    class GVAR(pistol_1_6_M17_21Rnd): GVAR(pistol_5_6_M17_21Rnd) {
        displayName = CSTRING(pistol_M17_1_6_display);
        GVAR(replacementItem) = "";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 5;
		};
    };


    class GVAR(pistol_6_6_G17_17Rnd): GVAR(pistol_6_6_M17_21Rnd) {
        displayName = CSTRING(pistol_G17_6_6_display);
        picture = QPATHTOF(data\bandolier_pistol_mag.paa);
        
        GVAR(bandolierItems)[] = {"CUP_17Rnd_9x19_glock17"};
        GVAR(replacementItem) = QGVAR(pistol_5_6_G17_17Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
    };
    class GVAR(pistol_5_6_G17_17Rnd): GVAR(pistol_6_6_G17_17Rnd) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(pistol_G17_5_6_display);
        GVAR(replacementItem) = QGVAR(pistol_4_6_G17_17Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 25;
		};
    };
    class GVAR(pistol_4_6_G17_17Rnd): GVAR(pistol_5_6_G17_17Rnd) {
        displayName = CSTRING(pistol_G17_4_6_display);
        GVAR(replacementItem) = QGVAR(pistol_3_6_G17_17Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 20;
		};
    };
    class GVAR(pistol_3_6_G17_17Rnd): GVAR(pistol_5_6_G17_17Rnd) {
        displayName = CSTRING(pistol_G17_3_6_display);
        GVAR(replacementItem) = QGVAR(pistol_2_6_G17_17Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 15;
		};
    };
    class GVAR(pistol_2_6_G17_17Rnd): GVAR(pistol_5_6_G17_17Rnd) {
        displayName = CSTRING(pistol_G17_2_6_display);
        GVAR(replacementItem) = QGVAR(pistol_1_6_G17_17Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
    };
    class GVAR(pistol_1_6_G17_17Rnd): GVAR(pistol_5_6_G17_17Rnd) {
        displayName = CSTRING(pistol_G17_1_6_display);
        GVAR(replacementItem) = "";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 5;
		};
    };
    


    class GVAR(rifle_5_5_G36_30Rnd): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = CSTRING(rifle_G36_5_5_display);
        descriptionShort = CSTRING(rifle_desc);
        
        GVAR(bandolierItems)[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36"};
        GVAR(replacementItem) = QGVAR(rifle_4_5_G36_30Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
    };
    class GVAR(rifle_4_5_G36_30Rnd): GVAR(rifle_5_5_G36_30Rnd) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(rifle_G36_4_5_display);
        
        GVAR(replacementItem) = QGVAR(rifle_3_5_G36_30Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 24;
		};
    };
    class GVAR(rifle_3_5_G36_30Rnd): GVAR(rifle_4_5_G36_30Rnd) {
        displayName = CSTRING(rifle_G36_3_5_display);
        
        GVAR(replacementItem) = QGVAR(rifle_2_5_G36_30Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 18;
		};
    };
    class GVAR(rifle_2_5_G36_30Rnd): GVAR(rifle_4_5_G36_30Rnd) {
        displayName = CSTRING(rifle_G36_2_5_display);
        
        GVAR(replacementItem) = QGVAR(rifle_1_5_G36_30Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 12;
		};
    };
    class GVAR(rifle_1_5_G36_30Rnd): GVAR(rifle_4_5_G36_30Rnd) {
        displayName = CSTRING(rifle_G36_1_5_display);
        
        GVAR(replacementItem) = "";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 6;
		};
    };
    


    class GVAR(rifle_5_5_416_30Rnd): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = CSTRING(rifle_416_5_5_display);
        descriptionShort = CSTRING(rifle_desc);
        
        GVAR(replacementItem) = QGVAR(rifle_4_5_416_30Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
        GVAR(bandolierItems)[] = {"CUP_30Rnd_556x45_PMAG_BLACK","CUP_30Rnd_556x45_PMAG_BLACK_Tracer_Red","SPS_HKG3PMAG_30Rnd_556x45_B","SPS_HKG3PMAG_30Rnd_556x45_B_Red","SPS_HKG3PMAG_30Rnd_556x45_B_M995","SPS_HKG3PMAG_30Rnd_556x45_B_Mk318"};
    };
    class GVAR(rifle_4_5_416_30Rnd): GVAR(rifle_5_5_416_30Rnd) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(rifle_416_4_5_display);
        
        GVAR(replacementItem) = QGVAR(rifle_3_5_416_30Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 24;
		};
    };
    class GVAR(rifle_3_5_416_30Rnd): GVAR(rifle_4_5_416_30Rnd) {
        displayName = CSTRING(rifle_416_3_5_display);
        
        GVAR(replacementItem) = QGVAR(rifle_2_5_416_30Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 18;
		};
    };
    class GVAR(rifle_2_5_416_30Rnd): GVAR(rifle_4_5_416_30Rnd) {
        displayName = CSTRING(rifle_416_2_5_display);
        
        GVAR(replacementItem) = QGVAR(rifle_1_5_416_30Rnd);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 12;
		};
    };
    class GVAR(rifle_1_5_416_30Rnd): GVAR(rifle_4_5_416_30Rnd) {
        displayName = CSTRING(rifle_416_1_5_display);
        
        GVAR(replacementItem) = "";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 6;
		};
    };
    
    class GVAR(rifle_5_5_417_30Rnd): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = CSTRING(rifle_417_5_5_display);
        descriptionShort = CSTRING(rifle_desc);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 50;
		};
        GVAR(replacementItem) = QGVAR(rifle_4_5_417_30Rnd);
        GVAR(bandolierItems)[] = {"CUP_20Rnd_TE1_Red_Tracer_762x51_HK417","SPS_20Rnd_762x51mm_M80A1_EPR","SPS_20Rnd_762x51mm_M80A1_EPR_IR","SPS_20Rnd_762x51mm_M80A1_EPR_Tracer","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_M993_AP_Mag","CUP_20Rnd_762x51_DMR","CUP_20Rnd_TE1_Red_Tracer_762x51_DMR"};
    };
    class GVAR(rifle_4_5_417_30Rnd): GVAR(rifle_5_5_417_30Rnd) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(rifle_417_4_5_display);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 40;
		};
        GVAR(replacementItem) = QGVAR(rifle_3_5_417_30Rnd);
    };
    class GVAR(rifle_3_5_417_30Rnd): GVAR(rifle_4_5_417_30Rnd) {
        displayName = CSTRING(rifle_417_3_5_display);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
        GVAR(replacementItem) = QGVAR(rifle_2_5_417_30Rnd);
    };
    class GVAR(rifle_2_5_417_30Rnd): GVAR(rifle_4_5_417_30Rnd) {
        displayName = CSTRING(rifle_417_2_5_display);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 20;
		};
        GVAR(replacementItem) = QGVAR(rifle_1_5_417_30Rnd);
    };
    class GVAR(rifle_1_5_417_30Rnd): GVAR(rifle_4_5_417_30Rnd) {
        displayName = CSTRING(rifle_417_1_5_display);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
        GVAR(replacementItem) = "";
    };
    
    class GVAR(mg_4_4_MG3_120Rnd): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = CSTRING(mg_mg3_4_4_display);
        descriptionShort = CSTRING(mg_desc);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 160;
		};
        GVAR(replacementItem) = QGVAR(mg_3_4_MG3_120Rnd);
        GVAR(bandolierItems)[] = {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
    };
    class GVAR(mg_3_4_MG3_120Rnd): GVAR(mg_4_4_MG3_120Rnd) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(mg_mg3_3_4_display);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 120;
		};
        GVAR(replacementItem) = QGVAR(mg_2_4_MG3_120Rnd);
    };
    class GVAR(mg_2_4_MG3_120Rnd): GVAR(mg_3_4_MG3_120Rnd) {
        displayName = CSTRING(mg_mg3_2_4_display);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 80;
		};
        GVAR(replacementItem) = QGVAR(mg_1_4_MG3_120Rnd);
    };
    class GVAR(mg_1_4_MG3_120Rnd): GVAR(mg_3_4_MG3_120Rnd) {
        displayName = CSTRING(mg_mg3_1_4_display);

        class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 40;
		};
        GVAR(replacementItem) = "";
    };
    
    class GVAR(mg_4_4_mk48_100Rnd): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = CSTRING(mg_mk48_4_4_display);
        descriptionShort = CSTRING(mg_desc);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 148;
		};
        GVAR(replacementItem) = QGVAR(mg_3_4_mk48_100Rnd);
        GVAR(bandolierItems)[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
    };
    class GVAR(mg_3_4_mk48_100Rnd): GVAR(mg_4_4_mk48_100Rnd) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(mg_mk48_3_4_display);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 111;
		};
        GVAR(replacementItem) = QGVAR(mg_2_4_mk48_100Rnd);
    };
    class GVAR(mg_2_4_mk48_100Rnd): GVAR(mg_3_4_mk48_100Rnd) {
        displayName = CSTRING(mg_mk48_2_4_display);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 74;
		};
        GVAR(replacementItem) = QGVAR(mg_1_4_mk48_100Rnd);
    };
    class GVAR(mg_1_4_mk48_100Rnd): GVAR(mg_3_4_mk48_100Rnd) {
        displayName = CSTRING(mg_mk48_1_4_display);

        class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 37;
		};
        GVAR(replacementItem) = "";
    };


    class GVAR(mg_4_4_m249_200Rnd): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = CSTRING(mg_m249_4_4_display);
        descriptionShort = CSTRING(mg_desc);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 128;
		};
        GVAR(replacementItem) = QGVAR(mg_3_4_m249_200Rnd);
        GVAR(bandolierItems)[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
    };
    class GVAR(mg_3_4_m249_200Rnd): GVAR(mg_4_4_m249_200Rnd) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(mg_m249_3_4_display);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 96;
		};
        GVAR(replacementItem) = QGVAR(mg_2_4_m249_200Rnd);
    };
    class GVAR(mg_2_4_m249_200Rnd): GVAR(mg_3_4_m249_200Rnd) {
        displayName = CSTRING(mg_m249_2_4_display);
        
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 64;
		};
        GVAR(replacementItem) = QGVAR(mg_1_4_m249_200Rnd);
    };
    class GVAR(mg_1_4_m249_200Rnd): GVAR(mg_3_4_m249_200Rnd) {
        displayName = CSTRING(mg_m249_1_4_display);

        class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 32;
		};
        GVAR(replacementItem) = "";
    };


    //Nades
    class GVAR(grenade_5_5_smoke_hand): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = CSTRING(grenade_smoke_hand_5_5_display);
        descriptionShort = CSTRING(grenade_5_desc);
        
        GVAR(bandolierItems)[] = {"SmokeShell","SmokeShellYellow","SmokeShellRed","SmokeShellPurple","SmokeShellOrange","SmokeShellGreen","SmokeShellBlue"};
        GVAR(replacementItem) = QGVAR(grenade_4_5_smoke_hand);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
    };
    class GVAR(grenade_4_5_smoke_hand): GVAR(grenade_5_5_smoke_hand) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(grenade_smoke_hand_4_5_display);
        
        GVAR(replacementItem) = QGVAR(grenade_3_5_smoke_hand);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 24;
		};
    };
    class GVAR(grenade_3_5_smoke_hand): GVAR(grenade_4_5_smoke_hand) {
        displayName = CSTRING(grenade_smoke_hand_3_5_display);
        
        GVAR(replacementItem) = QGVAR(grenade_2_5_smoke_hand);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_2_5_smoke_hand): GVAR(grenade_4_5_smoke_hand) {
        displayName = CSTRING(grenade_smoke_hand_2_5_display);
        
        GVAR(replacementItem) = QGVAR(grenade_1_5_smoke_hand);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_1_5_smoke_hand): GVAR(grenade_4_5_smoke_hand) {
        displayName = CSTRING(grenade_smoke_hand_1_5_display);
        
        GVAR(replacementItem) = "";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };

    class GVAR(grenade_8_8_smoke_40mm): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = CSTRING(grenade_8_8_smoke_40mm_display);
        descriptionShort = CSTRING(grenade_8_desc);
        
        GVAR(bandolierItems)[] = {"1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
        GVAR(replacementItem) = QGVAR(grenade_7_8_smoke_40mm);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
    };
    class GVAR(grenade_7_8_smoke_40mm): GVAR(grenade_8_8_smoke_40mm) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(grenade_7_8_smoke_40mm_display);
        
        GVAR(replacementItem) = QGVAR(grenade_6_8_smoke_40mm);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 24;
		};
    };
    class GVAR(grenade_6_8_smoke_40mm): GVAR(grenade_7_8_smoke_40mm) {
        displayName = CSTRING(grenade_6_8_smoke_40mm_display);
        
        GVAR(replacementItem) = QGVAR(grenade_5_8_smoke_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_5_8_smoke_40mm): GVAR(grenade_7_8_smoke_40mm) {
        displayName = CSTRING(grenade_5_8_smoke_40mm_display);
        
        GVAR(replacementItem) = QGVAR(grenade_4_8_smoke_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_4_8_smoke_40mm): GVAR(grenade_7_8_smoke_40mm) {
        displayName = CSTRING(grenade_4_8_smoke_40mm_display);
        
        GVAR(replacementItem) = QGVAR(grenade_3_8_smoke_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_3_8_smoke_40mm): GVAR(grenade_7_8_smoke_40mm) {
        displayName = CSTRING(grenade_3_8_smoke_40mm_display);
        
        GVAR(replacementItem) = QGVAR(grenade_2_8_smoke_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_2_8_smoke_40mm): GVAR(grenade_7_8_smoke_40mm) {
        displayName = CSTRING(grenade_2_8_smoke_40mm_display);
        
        GVAR(replacementItem) = QGVAR(grenade_1_8_smoke_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_1_8_smoke_40mm): GVAR(grenade_7_8_smoke_40mm) {
        displayName = CSTRING(grenade_1_8_smoke_40mm_display);
        
        GVAR(replacementItem) = "";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };

    
    class GVAR(grenade_3_3_exp_hand): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = CSTRING(grenade_exp_hand_3_3_display);
        descriptionShort = CSTRING(grenade_3_desc);
        
        GVAR(bandolierItems)[] = {"CUP_HandGrenade_M67"};
        GVAR(replacementItem) = QGVAR(grenade_2_3_exp_hand);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
    };
    class GVAR(grenade_2_3_exp_hand): GVAR(grenade_3_3_exp_hand) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(grenade_exp_hand_2_3_display);
        
        GVAR(replacementItem) = QGVAR(grenade_2_3_exp_hand);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 24;
		};
    };
    class GVAR(grenade_1_3_exp_hand): GVAR(grenade_2_3_exp_hand) {
        displayName = CSTRING(grenade_exp_hand_1_3_display);
        
        GVAR(replacementItem) = "";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };

    class GVAR(grenade_8_8_exp_40mm): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = CSTRING(grenade_exp_40mm_8_8_display);
        descriptionShort = CSTRING(grenade_8_desc);
        
        GVAR(bandolierItems)[] = {"CUP_1Rnd_HE_M203","CUP_1Rnd_HEDP_M203"};
        GVAR(replacementItem) = QGVAR(grenade_7_8_exp_40mm);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
    };
    class GVAR(grenade_7_8_exp_40mm): GVAR(grenade_8_8_exp_40mm) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(grenade_exp_40mm_7_8_display);
        
        GVAR(replacementItem) = QGVAR(grenade_6_8_exp_40mm);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 24;
		};
    };
    class GVAR(grenade_6_8_exp_40mm): GVAR(grenade_7_8_exp_40mm) {
        displayName = CSTRING(grenade_exp_40mm_6_8_display);
        
        GVAR(replacementItem) = QGVAR(grenade_5_8_exp_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_5_8_exp_40mm): GVAR(grenade_7_8_exp_40mm) {
        displayName = CSTRING(grenade_exp_40mm_5_8_display);
        
        GVAR(replacementItem) = QGVAR(grenade_4_8_exp_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_4_8_exp_40mm): GVAR(grenade_7_8_exp_40mm) {
        displayName = CSTRING(grenade_exp_40mm_4_8_display);
        
        GVAR(replacementItem) = QGVAR(grenade_3_8_exp_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_3_8_exp_40mm): GVAR(grenade_7_8_exp_40mm) {
        displayName = CSTRING(grenade_exp_40mm_3_8_display);
        
        GVAR(replacementItem) = QGVAR(grenade_2_8_exp_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_2_8_exp_40mm): GVAR(grenade_7_8_exp_40mm) {
        displayName = CSTRING(grenade_exp_40mm_2_8_display);
        
        GVAR(replacementItem) = QGVAR(grenade_1_8_exp_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_1_8_exp_40mm): GVAR(grenade_7_8_exp_40mm) {
        displayName = CSTRING(grenade_exp_40mm_1_8_display);
        
        GVAR(replacementItem) = "";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };

    class GVAR(grenade_8_8_flare_40mm): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = CSTRING(grenade_flare_40mm_8_8_display);
        descriptionShort = CSTRING(grenade_8_desc);
        
        GVAR(bandolierItems)[] = {"UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareCIR_F","CUP_1Rnd_StarCluster_Red_M203"};
        GVAR(replacementItem) = QGVAR(grenade_7_8_flare_40mm);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
    };
    class GVAR(grenade_7_8_flare_40mm): GVAR(grenade_8_8_flare_40mm) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(grenade_flare_40mm_7_8_display);
        
        GVAR(replacementItem) = QGVAR(grenade_6_8_flare_40mm);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 24;
		};
    };
    class GVAR(grenade_6_8_flare_40mm): GVAR(grenade_7_8_flare_40mm) {
        displayName = CSTRING(grenade_flare_40mm_6_8_display);
        
        GVAR(replacementItem) = QGVAR(grenade_5_8_flare_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_5_8_flare_40mm): GVAR(grenade_7_8_flare_40mm) {
        displayName = CSTRING(grenade_flare_40mm_5_8_display);
        
        GVAR(replacementItem) = QGVAR(grenade_4_8_flare_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_4_8_flare_40mm): GVAR(grenade_7_8_flare_40mm) {
        displayName = CSTRING(grenade_flare_40mm_4_8_display);
        
        GVAR(replacementItem) = QGVAR(grenade_3_8_flare_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_3_8_flare_40mm): GVAR(grenade_7_8_flare_40mm) {
        displayName = CSTRING(grenade_flare_40mm_3_8_display);
        
        GVAR(replacementItem) = QGVAR(grenade_2_8_flare_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_2_8_flare_40mm): GVAR(grenade_7_8_flare_40mm) {
        displayName = CSTRING(grenade_flare_40mm_2_8_display);
        
        GVAR(replacementItem) = QGVAR(grenade_1_8_flare_40mm);
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    class GVAR(grenade_1_8_flare_40mm): GVAR(grenade_7_8_flare_40mm) {
        displayName = CSTRING(grenade_flare_40mm_1_8_display);
        
        GVAR(replacementItem) = "";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
    
    
    class GVAR(grenade_3_3_flare_hand): GVAR(pistol_6_6_M17_21Rnd) {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = CSTRING(grenade_flare_hand_3_3_display);
        descriptionShort = CSTRING(grenade_3_desc);
        
        GVAR(bandolierItems)[] = {"ACE_HandFlare_Red","ACE_HandFlare_Green"};
        GVAR(replacementItem) = QGVAR(grenade_2_3_flare_hand);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
    };
    class GVAR(grenade_2_3_flare_hand): GVAR(grenade_3_3_flare_hand) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        displayName = CSTRING(grenade_flare_hand_2_3_display);
        
        GVAR(replacementItem) = QGVAR(grenade_1_3_smoke_hand);
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 24;
		};
    };
    class GVAR(grenade_1_3_flare_hand): GVAR(grenade_2_3_flare_hand) {
        displayName = CSTRING(grenade_flare_hand_1_3_display);
        
        GVAR(replacementItem) = "";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 18;
        };
    };
};
