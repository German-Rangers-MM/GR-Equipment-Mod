#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\z\ace\addons\main\script_macros.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"


#define ACE_PREFIX ace

#define ACE_ADDON(component)        DOUBLES(ACE_PREFIX,component)

#define ACEGVAR(module,var)         TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var)        QUOTE(ACEGVAR(module,var))
#define QQACEGVAR(module,var)       QUOTE(QACEGVAR(module,var))

#define ACEFUNC(module,function)    TRIPLES(DOUBLES(ACE_PREFIX,module),fnc,function)
#define QACEFUNC(module,function)   QUOTE(ACEFUNC(module,function))
#define ACELINKFUNC(module,function) {call ACEFUNC(module,function);}

#define ACELSTRING(module,string)   QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,module),string))
#define ACELLSTRING(module,string)  localize ACELSTRING(module,string)
#define ACECSTRING(module,string)   QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),string))

#define ACEPATHTOF(component,path) \z\ace\addons\component\path
#define QACEPATHTOF(component,path) QUOTE(ACEPATHTOF(component,path))


#define ACEXGVAR(module,var)         TRIPLES(ACEX_PREFIX,module,var)
#define QACEXGVAR(module,var)        QUOTE(ACEXGVAR(module,var))
#define QQACEXGVAR(module,var)       QUOTE(QACEXGVAR(module,var))

#define ACEXFUNC(module,function)    TRIPLES(DOUBLES(ACEX_PREFIX,module),fnc,function)
#define QACEXFUNC(module,function)   QUOTE(ACEXFUNC(module,function))
#define ACEXLINKFUNC(module,function) {call ACEXFUNC(module,function);}


// Check
#define CHECK(CONDITION) if (CONDITION) exitWith {}
#define CHECKRET(CONDITION,RETURN) if (CONDITION) exitWith {RETURN;}

#ifdef SUBPREP
    #undef SUBPREP
#endif

#ifdef DISABLE_COMPILE_CACHE
    #define SUBPREP(sub,fncName) DFUNC(fncName) = compileScript [QPATHTOF(functions\sub\DOUBLES(fnc,fncName).sqf)]
#else
    #define SUBPREP(sub,fncName) [QPATHTOF(functions\sub\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#ifdef PREPSUB
    #undef PREPSUB
#endif

#ifdef DISABLE_COMPILE_CACHE
    #define PREPSUB(sub,fncName) DFUNC(fncName) = compileScript [QPATHTOF(sub\functions\DOUBLES(fnc,fncName).sqf)]
#else
    #define PREPSUB(sub,fncName) [QPATHTOF(sub\functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif


// AEGIS/ATLAS MACROS
#define WEAPON_HOLDER(classname,magazine,displayName,editorSubcategory,author) \
	class Weapon_##classname##: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##displayName##; \
		author = ##author##; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = ##editorSubcategory##; \
		vehicleClass = WeaponsPrimary; \
		class TransportWeapons \
		{ \
			class ##classname## \
			{ \
				weapon = ##classname##; \
				count = 1; \
			}; \
		}; \
		class TransportMagazines \
		{ \
			class ##magazine## \
			{ \
				magazine = ##magazine##; \
				count = 1; \
			}; \
		}; \
	}

// Primary weapons w/ grenades
#define WEAPON_HOLDER_WITH_GRENADE(classname,magazine,grenade,displayName,editorSubcategory,author) \
	class Weapon_##classname##: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##displayName##; \
		author = ##author##; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = ##editorSubcategory##; \
		vehicleClass = WeaponsPrimary; \
		class TransportWeapons \
		{ \
			class ##classname## \
			{ \
				weapon = ##classname##; \
				count = 1; \
			}; \
		}; \
		class TransportMagazines \
		{ \
			class ##magazine## \
			{ \
				magazine = ##magazine##; \
				count = 1; \
			}; \
			class ##grenade## \
			{ \
				magazine = ##grenade##; \
				count = 1; \
			}; \
		}; \
	}

// Handguns
#define PISTOL_HOLDER(classname,magazine,displayName,author) \
	class Weapon_##classname##: Pistol_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##displayName##; \
		author = ##author##; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = EdSubcat_Pistols; \
		vehicleClass = WeaponsHandguns; \
		class TransportWeapons \
		{ \
			class ##classname## \
			{ \
				weapon = ##classname##; \
				count = 1; \
			}; \
		}; \
		class TransportMagazines \
		{ \
			class ##magazine## \
			{ \
				magazine = ##magazine##; \
				count = 1; \
			}; \
		}; \
	}

// Secondary weapons
#define LAUNCHER_HOLDER(classname,magazine,displayName,author) \
	class Weapon_##classname##: Launcher_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##displayName##; \
		author = ##author##; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = EdSubcat_Launchers; \
		vehicleClass = WeaponsSecondary; \
		class TransportWeapons \
		{ \
			class ##classname## \
			{ \
				weapon = ##classname##; \
				count = 1; \
			}; \
		}; \
		class TransportMagazines \
		{ \
			class ##magazine## \
			{ \
				magazine = ##magazine##; \
				count = 1; \
			}; \
		}; \
	}

// Attachments
#define ACC_HOLDER(classname,displayName,editorCategory,editorSubcategory,vehicleClass,author) \
	class Item_##classname##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##displayName##; \
		author = ##author##; \
		editorCategory = ##editorCategory##; \
		editorSubcategory = ##editorSubcategory##; \
		vehicleClass = ##vehicleClass##; \
		class TransportItems \
		{ \
			class ##classname## \
			{ \
				name = ##classname##; \
				count = 1; \
			}; \
		}; \
	}

// Inventory items
#define ITEM_HOLDER(classname,displayName,author) \
	class Item_##classname##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##displayName##; \
		author = ##author##; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_InventoryItems; \
		vehicleClass = Items; \
		model = "\A3\Weapons_F\DummyItem.p3d"; \
		class TransportItems \
		{ \
			class ##classname## \
			{ \
				name = ##classname##; \
				count = 1; \
			}; \
		}; \
	}

// Binoculars
#define BINOC_HOLDER(classname,displayName,author) \
	class Item_##classname##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##displayName##; \
		author = ##author##; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_InventoryItems; \
		vehicleClass = Items; \
		model = "\A3\Weapons_F\DummyBinoc.p3d"; \
		class TransportItems \
		{ \
			class ##classname## \
			{ \
				name = ##classname##; \
				count = 1; \
			}; \
		}; \
	}

// NVGs
#define NVG_HOLDER(classname,displayName,author) \
	class Item_##classname##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##displayName##; \
		author = ##author##; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_InventoryItems; \
		vehicleClass = Items; \
		model = "\A3\Weapons_F\DummyNVG.p3d"; \
		class TransportItems \
		{ \
			class ##classname## \
			{ \
				name = ##classname##; \
				count = 1; \
			}; \
		}; \
	}

// Headgear
#define HEADGEAR_HOLDER(classname,displayName,editorSubcategory,author) \
	class Headgear_##classname##: Headgear_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##displayName##; \
		author = ##author##; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = ##editorSubcategory##; \
		vehicleClass = ItemsHeadgear; \
		model = "\A3\Weapons_F\DummyCap.p3d"; \
		class TransportItems \
		{ \
			class ##classname## \
			{ \
				name = ##classname##; \
				count = 1; \
			}; \
		}; \
	}

// Uniforms
#define UNIFORM_HOLDER(classname,displayName,author) \
	class Item_##classname##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##displayName##; \
		author = ##author##; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_Uniforms; \
		vehicleClass = ItemsUniforms; \
		model = "\A3\Weapons_F\DummyWeapon.p3d"; \
		class TransportItems \
		{ \
			class ##classname## \
			{ \
				name = ##classname##; \
				count = 1; \
			}; \
		}; \
	}

// Vests
#define VEST_HOLDER(classname,displayName,author) \
	class Vest_##classname##: Vest_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##displayName##; \
		author = ##author##; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_Vests; \
		vehicleClass = ItemsVests; \
		class TransportItems \
		{ \
			class ##classname## \
			{ \
				name = ##classname##; \
				count = 1; \
			}; \
		}; \
	}