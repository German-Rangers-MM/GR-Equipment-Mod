class Kimi_UserAction_0_ON
{
	displayName = "<t color='#26ff00'>HMCS ON</t>";
	//shortcut = "user10";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [0,1]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -1;
};
class Kimi_UserAction_0_OFF
{
	displayName = "<t color='#ffff00'>HMCS OFF</t>";
	//shortcut = "user11";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [0,0]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -2;
};
class Kimi_UserAction_1_IMPERIAL
{
	//displayName = "<t color='#26ff00'>HUD IMPERIAL</t>";
	displayName = "HUD IMPERIAL";
	//shortcut = "user12";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [1,1]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -3;
};
class Kimi_UserAction_1_METRIC
{
	//displayName = "<t color='#ffff00'>HUD METRIC</t>";
	displayName = "HUD METRIC";
	//shortcut = "user13";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [1,0]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -4;
};
class Kimi_UserAction_2_FULL
{
	//displayName = "<t color='#26ff00'>HMCS FULL</t>";
	displayName = "HMCS FULL";
	//shortcut = "user14";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [2,0]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -5;
};
class Kimi_UserAction_2_DECLUTTER
{
	//displayName = "<t color='#ffff00'>HMCS DECLUTTER</t>";
	displayName = "HMCS DECLUTTER";
	//shortcut = "user15";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [2,1]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -6;
};
class Kimi_UserAction_345_COLOR_GREEN
{
	displayName = "<t color='#00ff00'>HUD DAY</t>";
	//shortcut = "user16";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [3,0];this SetUserMFDvalue [4,1];this SetUserMFDvalue [5,0];";
	//3 RED - 4 GREEN - 5 BLUE
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -7;
};
class Kimi_UserAction_345_COLOR_AMBER
{
	displayName = "<t color='#ffff00'>HUD NIGHT</t>";
	//shortcut = "user17";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [3,1];this SetUserMFDvalue [4,0.65];this SetUserMFDvalue [5,0];";
	//3 RED - 4 GREEN - 5 BLUE
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -8;
};
class Kimi_UserAction_6_ALPHA_HIGH
{
	displayName = "HUD BRT HIGH";
	//shortcut = "user18";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [6,0.5]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -9;
};
class Kimi_UserAction_6_ALPHA_MED
{
	displayName = "HUD BRT MED";
	//shortcut = "user19";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [6,0.2]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -10;
};
class Kimi_UserAction_6_ALPHA_LOW
{
	displayName = "HUD BRT LOW";
	//shortcut = "user20";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [6,0.05]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -11;
};
/*class Kimi_UserAction_7_NOT_PILOT
{
	displayName = "HMD BRT LOW";
	//shortcut = "";
	condition = "(player in [this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [7,1]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = 0.001;
};
class Kimi_UserAction_7_NOT_PILOT
{
	displayName = "HMD BRT LOW";
	//shortcut = "";
	condition = "(player in [this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [7,1]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = 0.001;
};*/