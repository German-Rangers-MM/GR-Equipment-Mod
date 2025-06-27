class H_PilotHelmetHeli_B;
class H_PilotHelmetHeli_I_E;
class H_CrewHelmetHeli_B;
class H_CrewHelmetHeli_I_E;

class GVAR(helmet_pilot_b): H_PilotHelmetHeli_I_E {
	scope = 2;
	scopeCurator = 2;
	displayName = "Pilot Helmet";	
	author = "Cookie";
	ace_hearing_protection = 0.85;  // Protection against deafening (0 to 1, higher means more protection)
	ace_hearing_lowerVolume = 0.4;  // Muffling of the sound (0 to 1, higher means more muffling)
	ace_hearing_hasEHP = 1; // If item has electronic hearing protection (0 or 1)
};

class GVAR(helmet_pilot_w): H_PilotHelmetHeli_B {
	scope = 2;
	scopeCurator = 2;
	displayName = "Pilot Helmet (WDL)";	
	author = "Cookie";
	ace_hearing_protection = 0.85;  // Protection against deafening (0 to 1, higher means more protection)
	ace_hearing_lowerVolume = 0.4;  // Muffling of the sound (0 to 1, higher means more muffling)
	ace_hearing_hasEHP = 1; // If item has electronic hearing protection (0 or 1)
};

class GVAR(crew_pilot_b): H_CrewHelmetHeli_B {
	scope = 2;
	scopeCurator = 2;
	displayName = "Crew Helmet";	
	author = "Cookie";
	ace_hearing_protection = 0.85;  // Protection against deafening (0 to 1, higher means more protection)
	ace_hearing_lowerVolume = 0.4;  // Muffling of the sound (0 to 1, higher means more muffling)
	ace_hearing_hasEHP = 1; // If item has electronic hearing protection (0 or 1)
};

class GVAR(crew_pilot_w): H_CrewHelmetHeli_I_E {
	scope = 2;
	scopeCurator = 2;
	displayName = "Crew Helmet (WDL)";	
	author = "Cookie";
	ace_hearing_protection = 0.85;  // Protection against deafening (0 to 1, higher means more protection)
	ace_hearing_lowerVolume = 0.4;  // Muffling of the sound (0 to 1, higher means more muffling)
	ace_hearing_hasEHP = 1; // If item has electronic hearing protection (0 or 1)
};