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
            class Hide_Rail: Hide_Rail {
                initPhase = 1;
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
    };

    class B_HMG_02_high_F: HMG_02_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
        class AnimationSources: AnimationSources {
            class Hide_Rail: Hide_Rail {
                initPhase = 1;
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
        };
        displayName = "M3M (High)";
        faction = QEGVAR(faction,rangers_faction);
        editorCategory = QEGVAR(faction,rangers_cat);
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
        };
        displayName = "M3M (Low)";
        faction = QEGVAR(faction,rangers_faction);
        editorCategory = QEGVAR(faction,rangers_cat);
        side = 1;
        crew = "CUP_B_GER_BW_Fleck_Soldier";

        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ace_csw_HMG_M2";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(M3M_carry);
            disassembleTurret = QGVAR(m3mCarryTripodLow);
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
        };
        displayName = "M3M (High (Scope + Shield))";
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
        };
        displayName = "M3M (Low (Scope + Shield))";
        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ace_csw_HMG_M2";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(M3M_carry_ScopeShield);
            disassembleTurret = QGVAR(m3mCarryTripodLow);
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
        };
        displayName = "M3M (High (Scope))";
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
        };
        displayName = "M3M (Low (Scope))";
        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ace_csw_HMG_M2";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(M3M_carry_Scope);
            disassembleTurret = QGVAR(m3mCarryTripodLow);
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
        };
        displayName = "M3M (High (Shield))";
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
        };
        displayName = "M3M (Low (Shield))";
        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ace_csw_HMG_M2";
            magazineLocation = "_target selectionPosition 'magazine'";
            disassembleWeapon = QGVAR(M3M_carry_Shield);
            disassembleTurret = QGVAR(m3mCarryTripodLow);
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
	};
	class CUP_B_MK19_TriPod_US: CUP_MK19_TriPod_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{}; // Forward declaration (no changes here)
		};
	};

    class GVAR(GMG_GraMaWa): CUP_B_MK19_TriPod_US {
        scope = 2;
        scopeCurator = 2;
        displayName = "GraMaWa";
        faction = QEGVAR(faction,rangers_faction);
        editorCategory = QEGVAR(faction,rangers_cat);
        side = 1;
        crew = "CUP_B_GER_BW_Fleck_Soldier";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
				primaryGunner = 1;
                weapons[] = {QGVAR(Vgmg_GraMaWa_veh)};
            };
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
};