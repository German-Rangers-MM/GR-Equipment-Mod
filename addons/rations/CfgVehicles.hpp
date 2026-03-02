class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class ace_field_rations
            {
                class ADDON {
                    displayName = "EPa Items";
                    condition = QUOTE(acex_field_rations_enabled);
                    exceptions[] = {"isNotEscorting","isNotHandcuffed","isNotSurrendering","notOnMap","isNotUnconscious","isNotDragging","isNotDragging","isNotSwimming","isNotOnLadder"};
                    statement = QUOTE(ACEGVAR(field_rations,hudInteractionHover) = true; [] call ACEFUNC(field_rations,handleHUD));
                    runOnHover = 1;
                    insertChildren = QUOTE(_player call FUNC(getEPAChildren));
                    icon = QACEPATHTOF(field_rations,ui\icon_survival.paa);
                };
            };
        };
    };

    class Land_LiquidDispenser_01_F;
    class GVAR(waterCarrier) : Land_LiquidDispenser_01_F
    {
        author = "Cookie";
        scope = 2;
        displayName = "Water Carrier";
        ace_cargo_canLoad = 1;
        ace_cargo_size = 2;
        ace_cargo_space = 0;
        ace_dragging_canCarry = 1;
        ace_dragging_canDrag = 1;
        acex_field_rations_waterSupply = 80;
    };

    class Land_PaperBox_01_small_closed_brown_F;
    class GVAR(epaBox_1_5) : Land_PaperBox_01_small_closed_brown_F
    {
        author = "Cookie";
        scope = 2;
        displayName = "Box of EPAs (Typ 1-4)";
        ace_cargo_canLoad = 1;
        ace_cargo_size = 1;
        ace_cargo_space = 0;
        ace_dragging_canCarry = 1;
        ace_dragging_canDrag = 1;
        maximumLoad = 1200;

        class TransportItems
        {
            class _xx_epa_typ_i{name = QGVAR(EPa_typ_i); count = 4; };
            class _xx_epa_typ_iia{name = QGVAR(EPa_typ_iia); count = 4; };
            class _xx_epa_typ_iib{name = QGVAR(EPa_typ_iib); count = 4; };
            class _xx_epa_typ_iii{name = QGVAR(EPa_typ_iii); count = 4; };
            class _xx_epa_typ_iv{name = QGVAR(EPa_typ_iv); count = 4; };
        };
    };
    class GVAR(epaBox_5_9) : GVAR(epaBox_1_5)
    {
        displayName = "Box of EPAs (Typ 5-9)";
        class TransportItems
        {
            class _xx_epa_typ_v{name = QGVAR(EPa_typ_v); count = 4; };
            class _xx_epa_typ_vi{name = QGVAR(EPa_typ_vi); count = 4; };
            class _xx_epa_typ_vii{name = QGVAR(EPa_typ_vii); count = 4; };
            class _xx_epa_typ_viii{name = QGVAR(EPa_typ_viii); count = 4; };
            class _xx_epa_typ_ix{name = QGVAR(EPa_typ_ix); count = 4; };
        };
    };
    class GVAR(epaBox_10_14) : GVAR(epaBox_1_5)
    {
        displayName = "Box of EPAs (Typ 10-14)";
        class TransportItems
        {
            class _xx_epa_typ_x{name = QGVAR(EPa_typ_x); count = 4; };
            class _xx_epa_typ_xi{name = QGVAR(EPa_typ_xi); count = 4; };
            class _xx_epa_typ_xii{name = QGVAR(EPa_typ_xii); count = 4; };
            class _xx_epa_typ_xiii{name = QGVAR(EPa_typ_xiii); count = 4; };
            class _xx_epa_typ_xiv{name = QGVAR(EPa_typ_xiv); count = 4; };
        };
    };
    class GVAR(epaBox_16_19): GVAR(epaBox_1_5)
    {
        displayName = "Box of EPAs (Typ 15-19)";
        class TransportItems
        {
            class _xx_epa_typ_xv{name = QGVAR(EPa_typ_xv); count = 4; };
            class _xx_epa_typ_xvi{name = QGVAR(EPa_typ_xvi); count = 4; };
            class _xx_epa_typ_xvii{name = QGVAR(EPa_typ_xvii); count = 4; };
            class _xx_epa_typ_xviii{name = QGVAR(EPa_typ_xviii); count = 4; };
            class _xx_epa_typ_xix{name = QGVAR(EPa_typ_xix); count = 4; };
        };
    };

    class Item_Base_F;
    class GVAR(Keksies_Item): Item_Base_F {
        author = "Cookie, Mik";
        scope = 2;
        scopeCurator = 2;
        displayName = "Keksies Chips";
        vehicleClass = "Items";
        editorPreview = QPATHTOF(data\chips_icon.paa);
        class TransportItems {
            MACRO_ADDITEM(GVAR(Keksies),1);
        };
    };
};
