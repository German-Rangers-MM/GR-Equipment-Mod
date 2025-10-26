class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class ADDON {
                displayName = "Bandoliers";
                condition = QUOTE([_player] call FUNC(hasBandolier));
                exceptions[] = {"isNotSwimming","isNotInside","notOnMap","isNotSitting"};
                statement = "";
                insertChildren = QUOTE(_player call FUNC(getBandoChildren));
                icon = "";
				showDisabled = 1;
                runOnHover = 1;
            };
        };
    };
};
