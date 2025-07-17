class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ADDON {
                displayName = "EPa Items";
                condition = QUOTE(acex_field_rations_enabled);
                exceptions[] = {"isNotInside"};
                statement = QUOTE(ACEGVAR(field_rations,hudInteractionHover) = true; [] call ACEFUNC(field_rations,handleHUD));
                runOnHover = 1;
                insertChildren = QUOTE(_player call FUNC(getEPAChildren));
                icon = QACEPATHTOF(field_rations,ui\icon_survival.paa);
            };
        };
    };
};
