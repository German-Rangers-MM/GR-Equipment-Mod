class Mode_SemiAuto;

class CfgWeapons {
    class Launcher_Base_F;
    class GVAR(carryWeapon): Launcher_Base_F {
        author = "PabstMirror";
        scope = 2;
        displayName = "VZ99 60mm Mortar";
        model = "y\GR_Equipment_Mod\addons\GerRng_vz99\data\vz99_carry";
        picture = "\y\GR_Equipment_Mod\addons\GerRng_vz99\ui\weaponSide_ca.paa";
        modes[] = {};
        ace_overpressure_angle = 0;    // Cone in which the damage is applied (in degrees from the back end of the launcher)
        ace_overpressure_range = 0;    // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.0;  // Damage multiplier
        ace_overpressure_offset = 0;    // Offset from the projectile, where the backblast originates
        class WeaponSlotsInfo {
            mass = 169; // 16,9 lb / 7,7 kg
        };
    };

    class CannonCore;
    class GVAR(mortar60mm): CannonCore {
        class StandardSound {
            SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
            begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
            begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
        };

        modes[] = {"Trigger"};
        class Trigger: Mode_SemiAuto {
            class StandardSound {
                SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
                begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
                begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
            sounds[] = {"StandardSound"};
            reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
            soundServo[] = {"",0.0001,1};
            reloadTime = 1.8;
            minRange = 0;
            midRange = 0;
            maxRange = 0;
            // artilleryDispersion = 0;
            // artilleryCharge = 1;

            displayName = "Trigger";
            textureType = "semi";
        };
        // class Gravity: Trigger {
        // textureType = "fullAuto";
        // displayName = "Gravity";
        // };

        scope = 1;
        displayname = "60 mm Mortar";
        nameSound = "CannonCore";
        cursor = "mortar";
        cursorAim = "EmptyCursor";
        sounds[] = {"StandardSound"};
        reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",1,1,20};
        soundServo[] = {"",0.0001,1};
        minRange = 80;
        minRangeProbab = 0.7;
        midRange = 2000;
        midRangeProbab = 0.7;
        maxRange = 4000;
        maxRangeProbab = 0.1;
        reloadTime = 1.8;
        magazineReloadTime = 3.3; ///xxxxxxxxxxxxxxx
        maxLeadSpeed = 100;
        autoReload = 1;
        canLock = 0;
        magazines[] = {QGVAR(HE), QGVAR(HE_charge0), QGVAR(HE_multi), QGVAR(HE_multi_charge0), QGVAR(HE_PRX), QGVAR(HE_PRX_charge0), QGVAR(smokeWhite), QGVAR(smokeWhite_charge0), QGVAR(smokeWhiteVT), QGVAR(smokeWhiteVT_charge0), GVAR(smokeRed), GVAR(smokeRed_charge0), QGVAR(flare), QGVAR(flare_charge0), QGVAR(flare_IR), QGVAR(flare_IR_charge0)};
        ballisticsComputer = 0;
        ace_overpressure_angle = 70;    // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 1;    // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.5; // Damage multiplier
        class GunParticles {
            class FirstEffect {
                effectName = "MortarFired";
                positionName = "Usti Hlavne";
                directionName = "Konec Hlavne";
            };
        };
    };
};
