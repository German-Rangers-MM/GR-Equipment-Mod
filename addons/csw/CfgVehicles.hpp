class CfgVehicles {
    class HMG_02_base_F {
        class Turrets;
        class AnimationSources {
            class Hide_Rail;
            class Hide_Shield;
            class muzzle_source;
            class muzzle_source_rot;
            class ReloadAnim;
            class ReloadMagazine;
            class Revolving;
        };
    };

    class B_HMG_02_F: HMG_02_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
        class AnimationSources: AnimationSources {
            class Hide_Rail: Hide_Rail {};
            class Hide_Shield: Hide_Shield {};
            class muzzle_source: muzzle_source {};
            class muzzle_source_rot: muzzle_source_rot {};
            class ReloadAnim: ReloadAnim {};
            class ReloadMagazine: ReloadMagazine {};
            class Revolving: Revolving {};
        };
    };

    class B_HMG_02_high_F: HMG_02_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
        class AnimationSources: AnimationSources {
            class Hide_Rail: Hide_Rail {};
            class Hide_Shield: Hide_Shield {};
            class muzzle_source: muzzle_source {};
            class muzzle_source_rot: muzzle_source_rot {};
            class ReloadAnim: ReloadAnim {};
            class ReloadMagazine: ReloadMagazine {};
            class Revolving: Revolving {};
        };
    };

    class GVAR(HMG_M3M_high): B_HMG_02_high_F {
        scope = 2;
        scopeCurator = 2;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QGVAR(HMG_M3M_Mounted)};
            };
        };
        class AnimationSources: AnimationSources {
            class Hide_Rail: Hide_Rail {
                initPhase = 1;
            };
            class Hide_Shield: Hide_Shield {
                initPhase = 1;
            };
            class muzzle_source: muzzle_source
            {
                source = "reload";
                weapon = QGVAR(HMG_M3M_Mounted);
            };
            class muzzle_source_rot: muzzle_source_rot
            {
                source = "ammorandom";
                weapon = QGVAR(HMG_M3M_Mounted);
            };
            class ReloadAnim: ReloadAnim
            {
                source = "reload";
                weapon = QGVAR(HMG_M3M_Mounted);
            };
            class ReloadMagazine: ReloadMagazine
            {
                source = "reloadmagazine";
                weapon = QGVAR(HMG_M3M_Mounted);
            };
            class Revolving: Revolving
            {
                source = "revolving";
                weapon = QGVAR(HMG_M3M_Mounted);
            };
        };
        displayName = CSTRING(m3m_veh_high);
        faction = QEGVAR(faction,rangers_faction);
        side = 1;
        crew = "CUP_B_GER_BW_Fleck_Soldier";

        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ace_csw_HMG_M2";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(M3M_carry);
            disassembleTurret = QACEGVAR(csw,m3Tripod);
            desiredAmmo = 100;
            ammoLoadTime = 7;
            ammoUnloadTime = 5;
        };
    };

    class GVAR(HMG_M3M): B_HMG_02_F {
        scope = 2;
        scopeCurator = 2;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QGVAR(HMG_M3M_Mounted)};
            };
        };
        class AnimationSources: AnimationSources {
            class Hide_Rail: Hide_Rail {
                initPhase = 1;
            };
            class Hide_Shield: Hide_Shield {
                initPhase = 1;
            };
            class muzzle_source: muzzle_source
            {
                source = "reload";
                weapon = QGVAR(HMG_M3M_Mounted);
            };
            class muzzle_source_rot: muzzle_source_rot
            {
                source = "ammorandom";
                weapon = QGVAR(HMG_M3M_Mounted);
            };
            class ReloadAnim: ReloadAnim
            {
                source = "reload";
                weapon = QGVAR(HMG_M3M_Mounted);
            };
            class ReloadMagazine: ReloadMagazine
            {
                source = "reloadmagazine";
                weapon = QGVAR(HMG_M3M_Mounted);
            };
            class Revolving: Revolving
            {
                source = "revolving";
                weapon = QGVAR(HMG_M3M_Mounted);
            };
        };
        displayName = CSTRING(m3m_veh_low);
        faction = QEGVAR(faction,rangers_faction);
        side = 1;
        crew = "CUP_B_GER_BW_Fleck_Soldier";

        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ace_csw_HMG_M2";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(M3M_carry);
            disassembleTurret = QACEGVAR(csw,m3TripodLow);
            desiredAmmo = 100;
            ammoLoadTime = 7;
            ammoUnloadTime = 5;
        };
    };

    class GVAR(HMG_M3M_high_ScopeShield): GVAR(HMG_M3M_high) {
        class AnimationSources: AnimationSources {
            class Hide_Rail: Hide_Rail {
                initPhase = 0;
            };
            class Hide_Shield: Hide_Shield {
                initPhase = 0;
            };
            class muzzle_source: muzzle_source {};
            class muzzle_source_rot: muzzle_source_rot {};
            class ReloadAnim: ReloadAnim {};
            class ReloadMagazine: ReloadMagazine {};
            class Revolving: Revolving {};
        };
        displayName = CSTRING(m3m_veh_high_ScopeShield);
        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ace_csw_HMG_M2";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(M3M_carry_ScopeShield);
            disassembleTurret = QACEGVAR(csw,m3Tripod);
            desiredAmmo = 100;
            ammoLoadTime = 7;
            ammoUnloadTime = 5;
        };
    };

    class GVAR(HMG_M3M_ScopeShield): GVAR(HMG_M3M) {
        class AnimationSources: AnimationSources {
            class Hide_Rail: Hide_Rail {
                initPhase = 0;
            };
            class Hide_Shield: Hide_Shield {
                initPhase = 0;
            };
            class muzzle_source: muzzle_source {};
            class muzzle_source_rot: muzzle_source_rot {};
            class ReloadAnim: ReloadAnim {};
            class ReloadMagazine: ReloadMagazine {};
            class Revolving: Revolving {};
        };
        displayName = CSTRING(m3m_veh_low_ScopeShield);
        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ace_csw_HMG_M2";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(M3M_carry_ScopeShield);
            disassembleTurret = QACEGVAR(csw,m3TripodLow);
            desiredAmmo = 100;
            ammoLoadTime = 7;
            ammoUnloadTime = 5;
        };
    };

    class GVAR(HMG_M3M_high_Scope): GVAR(HMG_M3M_high) {
        class AnimationSources: AnimationSources {
            class Hide_Rail: Hide_Rail {
                initPhase = 0;
            };
            class Hide_Shield: Hide_Shield {
                initPhase = 1;
            };
            class muzzle_source: muzzle_source {};
            class muzzle_source_rot: muzzle_source_rot {};
            class ReloadAnim: ReloadAnim {};
            class ReloadMagazine: ReloadMagazine {};
            class Revolving: Revolving {};
        };
        displayName = CSTRING(m3m_veh_high_Scope);
        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ace_csw_HMG_M2";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(M3M_carry_Scope);
            disassembleTurret = QACEGVAR(csw,m3Tripod);
            desiredAmmo = 100;
            ammoLoadTime = 7;
            ammoUnloadTime = 5;
        };
    };

    class GVAR(HMG_M3M_Scope): GVAR(HMG_M3M) {
        class AnimationSources: AnimationSources {
            class Hide_Rail: Hide_Rail {
                initPhase = 0;
            };
            class Hide_Shield: Hide_Shield {
                initPhase = 1;
            };
            class muzzle_source: muzzle_source {};
            class muzzle_source_rot: muzzle_source_rot {};
            class ReloadAnim: ReloadAnim {};
            class ReloadMagazine: ReloadMagazine {};
            class Revolving: Revolving {};
        };
        displayName = CSTRING(m3m_veh_low_Scope);
        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ace_csw_HMG_M2";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(M3M_carry_Scope);
            disassembleTurret = QACEGVAR(csw,m3TripodLow);
            desiredAmmo = 100;
            ammoLoadTime = 7;
            ammoUnloadTime = 5;
        };
    };

    class GVAR(HMG_M3M_high_Shield): GVAR(HMG_M3M_high) {
        class AnimationSources: AnimationSources {
            class Hide_Rail: Hide_Rail {
                initPhase = 1;
            };
            class Hide_Shield: Hide_Shield {
                initPhase = 0;
            };
            class muzzle_source: muzzle_source {};
            class muzzle_source_rot: muzzle_source_rot {};
            class ReloadAnim: ReloadAnim {};
            class ReloadMagazine: ReloadMagazine {};
            class Revolving: Revolving {};
        };
        displayName = CSTRING(m3m_veh_high_Shield);
        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ace_csw_HMG_M2";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(M3M_carry_Shield);
            disassembleTurret = QACEGVAR(csw,m3Tripod);
            desiredAmmo = 100;
            ammoLoadTime = 7;
            ammoUnloadTime = 5;
        };
    };

    class GVAR(HMG_M3M_Shield): GVAR(HMG_M3M) {
        class AnimationSources: AnimationSources {
            class Hide_Rail: Hide_Rail {
                initPhase = 1;
            };
            class Hide_Shield: Hide_Shield {
                initPhase = 0;
            };
            class muzzle_source: muzzle_source {};
            class muzzle_source_rot: muzzle_source_rot {};
            class ReloadAnim: ReloadAnim {};
            class ReloadMagazine: ReloadMagazine {};
            class Revolving: Revolving {};
        };
        displayName = CSTRING(m3m_veh_low_Shield);
        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ace_csw_HMG_M2";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(M3M_carry_Shield);
            disassembleTurret = QACEGVAR(csw,m3TripodLow);
            desiredAmmo = 100;
            ammoLoadTime = 7;
            ammoUnloadTime = 5;
        };
    };

    class CUP_MK19_TriPod_base
	{
		class Turrets
		{
			class MainTurret;
		};
        class AnimationSources {
            class belt_rotation;
            class muzzle_hide;
            class muzzle_rot;
            class ReloadMagazine;
            class Revolving;
        };
	};
	class CUP_B_MK19_TriPod_US: CUP_MK19_TriPod_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{}; // Forward declaration (no changes here)
		};
        class AnimationSources: AnimationSources {
            class belt_rotation: belt_rotation {};
            class muzzle_hide: muzzle_hide {};
            class muzzle_rot: muzzle_rot {};
            class ReloadMagazine: ReloadMagazine {};
            class Revolving: Revolving {};                
        };
	};

    class GVAR(GMG_GraMaWa): CUP_B_MK19_TriPod_US {
        scope = 2;
        scopeCurator = 2;
        displayName = "GraMaWa";
        faction = QEGVAR(faction,rangers_faction);
        side = 1;
        crew = "CUP_B_GER_BW_Fleck_Soldier";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
				primaryGunner = 1;
                weapons[] = {QGVAR(Vgmg_GraMaWa_veh)};
            };
        };

        class AnimationSources: AnimationSources {
            class belt_rotation: belt_rotation
            {
                source = "reload";
                weapon = QGVAR(Vgmg_GraMaWa_veh);
            };
            class muzzle_hide: muzzle_hide
            {
                source = "reload";
                weapon = QGVAR(Vgmg_GraMaWa_veh);
            };
            class muzzle_rot: muzzle_rot
            {
                source = "ammorandom";
                weapon = QGVAR(Vgmg_GraMaWa_veh);
            };
            class ReloadMagazine: ReloadMagazine
            {
                source = "reloadmagazine";
                weapon = QGVAR(Vgmg_GraMaWa_veh);
            };
            class Revolving: Revolving
            {
                source = "revolving";
                weapon = QGVAR(Vgmg_GraMaWa_veh);
            };                
        };

        class assembleInfo
        {
            displayName = "";
            assembleTo = "";
            base = "";
            dissasembleTo[] = {QGVAR(GMG_GraMaWa_Gun_Bag),QGVAR(GMG_GraMaWa)};
            primary = 0;
        };

        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "CUP_proxy_MK19";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(GraMaWa_carry);
            disassembleTurret = QACEGVAR(csw,m3Tripod);
            desiredAmmo = 100;
            ammoLoadTime = 7;
            ammoUnloadTime = 5;
        };
    };

    class CUP_B_Mk19_Tripod_Bag;
    class GVAR(GMG_GraMaWa_Tripod_bag): CUP_B_Mk19_Tripod_Bag 
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GraMaWa Tripod Bag";
        class assembleInfo
        {
            displayName = "Assemble GraMaWa";
            assembleTo = QGVAR(GMG_GraMaWa);
            base[] = {QGVAR(GMG_GraMaWa_Gun_Bag)};
            dissasembleTo[] = {};
            primary = 1;
        };
    };

    class CUP_B_Mk19_Gun_Bag;
    class GVAR(GMG_GraMaWa_Gun_Bag): CUP_B_Mk19_Gun_Bag
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GraMaWa Gun Bag";
        
    };
};
