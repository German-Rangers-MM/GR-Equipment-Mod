#define CONCAT_tag(a,b) a##-##b
#define QHELMET_DISPLAYNAME_FLK(groupTag,groupFunc) QUOTE(OpsCore MT CONCAT_tag(groupTag,groupFunc) (Fleck))
#define QHELMET_DISPLAYNAME_TRP(groupTag,groupFunc) QUOTE(OpsCore MT CONCAT_tag(groupTag,groupFunc) (Tropen))

#define QHELMET_DISPLAYNAME_NoHs_FLK(groupTag,groupFunc) QUOTE(OpsCore MT NoHS CONCAT_tag(groupTag,groupFunc) (Fleck))
#define QHELMET_DISPLAYNAME_NoHs_TRP(groupTag,groupFunc) QUOTE(OpsCore MT NoHS CONCAT_tag(groupTag,groupFunc) (Tropen))

#define QHELMET_DISPLAYNAME_SF_FLK(groupTag,groupFunc) QUOTE(OpsCore MT SF CONCAT_tag(groupTag,groupFunc) (Fleck))
#define QHELMET_DISPLAYNAME_SF_TRP(groupTag,groupFunc) QUOTE(OpsCore MT SF CONCAT_tag(groupTag,groupFunc) (Tropen))

#define PATCH_ENTRY(nameShort) \
QUOTE(gerrng_OpsCore_Covered_Fleck_NoHS_##nameShort), \
QUOTE(gerrng_OpsCore_Covered_Tropen_NoHS_##nameShort), \
QUOTE(gerrng_OpsCore_Covered_Fleck_##nameShort), \
QUOTE(gerrng_OpsCore_Covered_Tropen_##nameShort), \
QUOTE(gerrng_OpsCore_Covered_Fleck_SF_##nameShort), \
QUOTE(gerrng_OpsCore_Covered_Tropen_SF_##nameShort), \
QUOTE(gerrng_OpsCore_sprayed_##nameShort), \
QUOTE(gerrng_OpsCore_sprayed_NoHS_##nameShort), \
QUOTE(gerrng_OpsCore_sprayed_SF_##nameShort), \
QUOTE(gerrng_OpsCore_grey_##nameShort), \
QUOTE(gerrng_OpsCore_grey_NoHS_##nameShort), \
QUOTE(gerrng_OpsCore_grey_SF_##nameShort), \
QUOTE(gerrng_OpsCore_green_##nameShort), \
QUOTE(gerrng_OpsCore_green_NoHS_##nameShort), \
QUOTE(gerrng_OpsCore_green_SF_##nameShort), \
QUOTE(gerrng_OpsCore_tan_##nameShort), \
QUOTE(gerrng_OpsCore_tan_NoHS_##nameShort), \
QUOTE(gerrng_OpsCore_tan_SF_##nameShort), \
QUOTE(gerrng_OpsCore_black_##nameShort), \
QUOTE(gerrng_OpsCore_black_NoHS_##nameShort), \
QUOTE(gerrng_OpsCore_black_SF_##nameShort)


#define MAKE_HELMET(nameShort,groupTag,groupFunc,path) class gerrng_OpsCore_Covered_Fleck_NoHS_##nameShort: gerrng_OpsCore_Covered_NoHS_base { \
	scope=2; \
	displayName=QHELMET_DISPLAYNAME_NoHs_FLK(groupTag,groupFunc); \
	hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
	hiddenSelectionsTextures[]= \
	{ \
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa", \
		QPATHTOF(path), \
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
	}; \
}; \
class gerrng_OpsCore_Covered_Tropen_NoHS_##nameShort: gerrng_OpsCore_Covered_NoHS_base { \
    scope=2; \
    displayName=QHELMET_DISPLAYNAME_NoHs_TRP(groupTag,groupFunc); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_Covered_Fleck_##nameShort: gerrng_OpsCore_Covered_base { \
    scope=2; \
    displayName=QHELMET_DISPLAYNAME_FLK(groupTag,groupFunc); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_Covered_Tropen_##nameShort: gerrng_OpsCore_Covered_base { \
    scope=2; \
    displayName=QHELMET_DISPLAYNAME_TRP(groupTag,groupFunc); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_Covered_Fleck_SF_##nameShort: gerrng_OpsCore_Covered_SF_base { \
    scope=2; \
    displayName=QHELMET_DISPLAYNAME_SF_FLK(groupTag,groupFunc); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_flecktarn_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "" \
    }; \
}; \
class gerrng_OpsCore_Covered_Tropen_SF_##nameShort: gerrng_OpsCore_Covered_SF_base { \
    scope=2; \
    displayName=QHELMET_DISPLAYNAME_SF_TRP(groupTag,groupFunc); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_covered_tropentarn_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "" \
    }; \
}; \
class gerrng_OpsCore_sprayed_##nameShort: gerrng_OpsCore_Covered_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT CONCAT_tag(groupTag,groupFunc) (Sprayed)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_spray_1_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_sprayed_NoHS_##nameShort: gerrng_OpsCore_Covered_NoHS_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT NoHS CONCAT_tag(groupTag,groupFunc) (Sprayed)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_spray_1_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_sprayed_SF_##nameShort: gerrng_OpsCore_Covered_SF_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT SF CONCAT_tag(groupTag,groupFunc) (Sprayed)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_spray_1_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "" \
    }; \
}; \
class gerrng_OpsCore_grey_##nameShort: gerrng_OpsCore_Covered_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT CONCAT_tag(groupTag,groupFunc) (Grey)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_grey_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_grey_NoHS_##nameShort: gerrng_OpsCore_Covered_NoHS_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT NoHS CONCAT_tag(groupTag,groupFunc) (Grey)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_grey_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_grey_SF_##nameShort: gerrng_OpsCore_Covered_SF_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT SF CONCAT_tag(groupTag,groupFunc) (Grey)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_grey_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "" \
    }; \
}; \
class gerrng_OpsCore_green_##nameShort: gerrng_OpsCore_Covered_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT CONCAT_tag(groupTag,groupFunc) (Green)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_green_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_green_NoHS_##nameShort: gerrng_OpsCore_Covered_NoHS_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT NoHS CONCAT_tag(groupTag,groupFunc) (Green)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_green_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_green_SF_##nameShort: gerrng_OpsCore_Covered_SF_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT SF CONCAT_tag(groupTag,groupFunc) (Green)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_green_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "" \
    }; \
}; \
class gerrng_OpsCore_tan_##nameShort: gerrng_OpsCore_Covered_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT CONCAT_tag(groupTag,groupFunc) (Tan)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_tan_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_tan_NoHS_##nameShort: gerrng_OpsCore_Covered_NoHS_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT NoHS CONCAT_tag(groupTag,groupFunc) (Tan)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_tan_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_tan_SF_##nameShort: gerrng_OpsCore_Covered_SF_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT SF CONCAT_tag(groupTag,groupFunc) (Tan)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_tan_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "" \
    }; \
}; \
class gerrng_OpsCore_black_##nameShort: gerrng_OpsCore_Covered_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT CONCAT_tag(groupTag,groupFunc) (Black)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_black_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_black_NoHS_##nameShort: gerrng_OpsCore_Covered_NoHS_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT NoHS CONCAT_tag(groupTag,groupFunc) (Black)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_black_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\german_flag_co.paa" \
    }; \
}; \
class gerrng_OpsCore_black_SF_##nameShort: gerrng_OpsCore_Covered_SF_base { \
    scope=2; \
    displayName=QUOTE(OpsCore MT SF CONCAT_tag(groupTag,groupFunc) (Black)); \
    hiddenSelections[] = {"camo1","camo2","camo3","flag"}; \
    hiddenSelectionsTextures[]= \
    { \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_black_co.paa", \
        QPATHTOF(path), \
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa", \
        "" \
    }; \
}


#define MAKE_HELMET_ACTION(name,nameShort) class HelmpatchAction_##name { \
    displayName = QUOTE(name); \
    condition = ""; \
    exceptions[] = {}; \
    statement = QUOTE(['nameShort'] call FUNC(selectHelmet)); \
    icon = ""; \
}

#define MAKE_HELMET_ACTION_WDASH(name1,name2,nameShort) class HelmpatchAction_##name { \
    displayName = QUOTE(CONCAT_tag(name1,name2)); \
    condition = ""; \
    exceptions[] = {}; \
    statement = QUOTE(['nameShort'] call FUNC(selectHelmet)); \
    icon = ""; \
}

#define MAKE_INSIGNIA_ACTION(name,nameDisplay) class InsigniaAction_##name { \
    displayName = QUOTE(nameDisplay); \
    condition = ""; \
    exceptions[] = {}; \
    statement = QUOTE([ARR_2(player,'name')] call BIS_fnc_setUnitInsignia); \
    icon = ""; \
}
