class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			
			class Equipment {
				displayName = "GerRng Equipment";
				condition = "";
				exceptions[] = {};
				statement = "";
				icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\gr_neu.paa";
			
			
				class HelmpatchAction {
					displayName = "Helmpatch";
					condition = ["OpsCore",headgear player] call BIS_fnc_inString;
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\helm.paa";
					
						
						class HelmpatchAction_K {
						displayName = "Kilo";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\kilo.paa";
							class HelmpatchAction_1 {
							displayName = "K-Chef";
							condition = "";
							exceptions[] = {};
							statement = ["kk"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_2 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["k1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_3 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["k2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};
						
						class HelmpatchAction_F {
						displayName = "Fox";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\fox.paa";
							class HelmpatchAction_F1 {
							displayName = "Z-ZFhr";
							condition = "";
							exceptions[] = {};
							statement = ["fzf"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							
							class HelmpatchAction_1 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["f1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							
							class HelmpatchAction_2 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["f2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_3 {
							displayName = "3";
							condition = "";
							exceptions[] = {};
							statement = ["f3"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_4 {
							displayName = "4";
							condition = "";
							exceptions[] = {};
							statement = ["f4"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};
						
						class HelmpatchAction_V {
						displayName = "Victor";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\victor.paa";
							class HelmpatchAction_1 {
							displayName = "V-ZFhr";
							condition = "";
							exceptions[] = {};
							statement = ["vzf"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							
							class HelmpatchAction_2 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["v1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							
							class HelmpatchAction_3 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["v2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_4 {
							displayName = "3";
							condition = "";
							exceptions[] = {};
							statement = ["v3"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_5 {
							displayName = "4";
							condition = "";
							exceptions[] = {};
							statement = ["v4"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};
					
						class HelmpatchAction_A {
						displayName = "Alpha";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\alfa.paa";

							class HelmpatchAction_GrpFhr {
							displayName = "GrpFhr";
							condition = "";
							exceptions[] = {};
							statement = ["agf"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_1 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["a1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_2 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["a2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_3 {
							displayName = "3";
							condition = "";
							exceptions[] = {};
							statement = ["a3"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_4 {
							displayName = "4";
							condition = "";
							exceptions[] = {};
							statement = ["a4"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_5 {
							displayName = "5";
							condition = "";
							exceptions[] = {};
							statement = ["a5"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_6 {
							displayName = "6";
							condition = "";
							exceptions[] = {};
							statement = ["a6"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_7 {
							displayName = "7";
							condition = "";
							exceptions[] = {};
							statement = ["a7"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_8 {
							displayName = "8";
							condition = "";
							exceptions[] = {};
							statement = ["a8"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_9 {
							displayName = "9";
							condition = "";
							exceptions[] = {};
							statement = ["a9"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_10 {
							displayName = "10";
							condition = "";
							exceptions[] = {};
							statement = ["a10"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_11 {
							displayName = "11";
							condition = "";
							exceptions[] = {};
							statement = ["a11"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_12 {
							displayName = "12";
							condition = "";
							exceptions[] = {};
							statement = ["a12"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};
						
						class HelmpatchAction_B {
						displayName = "Bravo";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\bravo.paa";
							
							class HelmpatchAction_GrpFhr {
							displayName = "GrpFhr";
							condition = "";
							exceptions[] = {};
							statement = ["bgf"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							
							class HelmpatchAction_1 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["b1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_2 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["b2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_3 {
							displayName = "3";
							condition = "";
							exceptions[] = {};
							statement = ["b3"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_4 {
							displayName = "4";
							condition = "";
							exceptions[] = {};
							statement = ["b4"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_5 {
							displayName = "5";
							condition = "";
							exceptions[] = {};
							statement = ["b5"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_6 {
							displayName = "6";
							condition = "";
							exceptions[] = {};
							statement = ["b6"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_7 {
							displayName = "7";
							condition = "";
							exceptions[] = {};
							statement = ["b7"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_8 {
							displayName = "8";
							condition = "";
							exceptions[] = {};
							statement = ["b8"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_9 {
							displayName = "9";
							condition = "";
							exceptions[] = {};
							statement = ["b9"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_10 {
							displayName = "10";
							condition = "";
							exceptions[] = {};
							statement = ["b10"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_11 {
							displayName = "11";
							condition = "";
							exceptions[] = {};
							statement = ["b11"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_12 {
							displayName = "12";
							condition = "";
							exceptions[] = {};
							statement = ["b12"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};
						
						class HelmpatchAction_C {
						displayName = "Charlie";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\charlie.paa";
							
							class HelmpatchAction_GrpFhr {
							displayName = "GrpFhr";
							condition = "";
							exceptions[] = {};
							statement = ["cgf"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							
							class HelmpatchAction_1 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["c1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_2 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["c2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_3 {
							displayName = "3";
							condition = "";
							exceptions[] = {};
							statement = ["c3"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_4 {
							displayName = "4";
							condition = "";
							exceptions[] = {};
							statement = ["c4"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_5 {
							displayName = "5";
							condition = "";
							exceptions[] = {};
							statement = ["c5"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_6 {
							displayName = "6";
							condition = "";
							exceptions[] = {};
							statement = ["c6"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_7 {
							displayName = "7";
							condition = "";
							exceptions[] = {};
							statement = ["c7"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_8 {
							displayName = "8";
							condition = "";
							exceptions[] = {};
							statement = ["c8"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_9 {
							displayName = "9";
							condition = "";
							exceptions[] = {};
							statement = ["c9"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_10 {
							displayName = "10";
							condition = "";
							exceptions[] = {};
							statement = ["c10"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_11 {
							displayName = "11";
							condition = "";
							exceptions[] = {};
							statement = ["c11"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_12 {
							displayName = "12";
							condition = "";
							exceptions[] = {};
							statement = ["c12"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};
						
						class HelmpatchAction_Z {
						displayName = "Zulu";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\zulu.paa";

							class HelmpatchAction_GrpFhr {
							displayName = "GrpFhr";
							condition = "";
							exceptions[] = {};
							statement = ["zgf"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_1 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["z1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_2 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["z2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_3 {
							displayName = "3";
							condition = "";
							exceptions[] = {};
							statement = ["z3"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_4 {
							displayName = "4";
							condition = "";
							exceptions[] = {};
							statement = ["z4"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_5 {
							displayName = "5";
							condition = "";
							exceptions[] = {};
							statement = ["z5"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_6 {
							displayName = "6";
							condition = "";
							exceptions[] = {};
							statement = ["z6"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_7 {
							displayName = "7";
							condition = "";
							exceptions[] = {};
							statement = ["z7"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_8 {
							displayName = "8";
							condition = "";
							exceptions[] = {};
							statement = ["z8"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_9 {
							displayName = "9";
							condition = "";
							exceptions[] = {};
							statement = ["z9"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_10 {
							displayName = "10";
							condition = "";
							exceptions[] = {};
							statement = ["z10"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_11 {
							displayName = "11";
							condition = "";
							exceptions[] = {};
							statement = ["z11"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_12 {
							displayName = "12";
							condition = "";
							exceptions[] = {};
							statement = ["z12"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};
						
						class HelmpatchAction_Y {
						displayName = "Yankee";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\yankee.paa";

							class HelmpatchAction_GrpFhr {
							displayName = "GrpFhr";
							condition = "";
							exceptions[] = {};
							statement = ["ygf"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_1 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["y1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_2 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["y2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_3 {
							displayName = "3";
							condition = "";
							exceptions[] = {};
							statement = ["y3"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_4 {
							displayName = "4";
							condition = "";
							exceptions[] = {};
							statement = ["y4"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_5 {
							displayName = "5";
							condition = "";
							exceptions[] = {};
							statement = ["y5"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_6 {
							displayName = "6";
							condition = "";
							exceptions[] = {};
							statement = ["y6"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_7 {
							displayName = "7";
							condition = "";
							exceptions[] = {};
							statement = ["y7"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_8 {
							displayName = "8";
							condition = "";
							exceptions[] = {};
							statement = ["y8"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_9 {
							displayName = "9";
							condition = "";
							exceptions[] = {};
							statement = ["y9"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_10 {
							displayName = "10";
							condition = "";
							exceptions[] = {};
							statement = ["y10"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_11 {
							displayName = "11";
							condition = "";
							exceptions[] = {};
							statement = ["y11"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_12 {
							displayName = "12";
							condition = "";
							exceptions[] = {};
							statement = ["y12"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};
						
						class HelmpatchAction_X {
						displayName = "X-Ray";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\x-ray.paa";

							class HelmpatchAction_GrpFhr {
							displayName = "GrpFhr";
							condition = "";
							exceptions[] = {};
							statement = ["xgf"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_1 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["x1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_2 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["x2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_3 {
							displayName = "3";
							condition = "";
							exceptions[] = {};
							statement = ["x3"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_4 {
							displayName = "4";
							condition = "";
							exceptions[] = {};
							statement = ["x4"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_5 {
							displayName = "5";
							condition = "";
							exceptions[] = {};
							statement = ["x5"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_6 {
							displayName = "6";
							condition = "";
							exceptions[] = {};
							statement = ["x6"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_7 {
							displayName = "7";
							condition = "";
							exceptions[] = {};
							statement = ["x7"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_8 {
							displayName = "8";
							condition = "";
							exceptions[] = {};
							statement = ["x8"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_9 {
							displayName = "9";
							condition = "";
							exceptions[] = {};
							statement = ["x9"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_10 {
							displayName = "10";
							condition = "";
							exceptions[] = {};
							statement = ["x10"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_11 {
							displayName = "11";
							condition = "";
							exceptions[] = {};
							statement = ["x11"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_12 {
							displayName = "12";
							condition = "";
							exceptions[] = {};
							statement = ["x12"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};			
					
/*						class HelmpatchAction_W {
						displayName = "Whiskey";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\whiskey.paa";
							class HelmpatchAction_1 {
							displayName = "TrpFhr";
							condition = "";
							exceptions[] = {};
							statement = ["wtf"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_2 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["w1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_3 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["w2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_4 {
							displayName = "3";
							condition = "";
							exceptions[] = {};
							statement = ["w3"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_5 {
							displayName = "4";
							condition = "";
							exceptions[] = {};
							statement = ["w4"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};
						*/
						
						class HelmpatchAction_S {
						displayName = "Sierra";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\sierra.paa";
							class HelmpatchAction_1 {
							displayName = "TrpFhr";
							condition = "";
							exceptions[] = {};
							statement = ["stf"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_2 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["s1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_3 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["s2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_4 {
							displayName = "3";
							condition = "";
							exceptions[] = {};
							statement = ["s3"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_5 {
							displayName = "4";
							condition = "";
							exceptions[] = {};
							statement = ["s4"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};
						
						class HelmpatchAction_M {
						displayName = "Mike";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\mike.paa";
							class HelmpatchAction_1 {
							displayName = "M-AvD";
							condition = "";
							exceptions[] = {};
							statement = ["mavd"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							
							class HelmpatchAction_2 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["m1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							
							class HelmpatchAction_3 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["m2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_4 {
							displayName = "3";
							condition = "";
							exceptions[] = {};
							statement = ["m3"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_5 {
							displayName = "4";
							condition = "";
							exceptions[] = {};
							statement = ["m4"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_6 {
							displayName = "5";
							condition = "";
							exceptions[] = {};
							statement = ["m5"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};						
						
						class HelmpatchAction_L {
						displayName = "Lima";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\lima.paa";
							class HelmpatchAction_1 {
							displayName = "GrpFhr";
							condition = "";
							exceptions[] = {};
							statement = ["lgf"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							
							class HelmpatchAction_2 {
							displayName = "1";
							condition = "";
							exceptions[] = {};
							statement = ["l1"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_3 {
							displayName = "2";
							condition = "";
							exceptions[] = {};
							statement = ["l2"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};

							class HelmpatchAction_4 {
							displayName = "3";
							condition = "";
							exceptions[] = {};
							statement = ["l3"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_5 {
							displayName = "4";
							condition = "";
							exceptions[] = {};
							statement = ["l4"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_6 {
							displayName = "5";
							condition = "";
							exceptions[] = {};
							statement = ["l5"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
							class HelmpatchAction_7 {
							displayName = "6";
							condition = "";
							exceptions[] = {};
							statement = ["l6"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
							icon = "";
							};
						};

						
						class HelmpatchAction_Reset {
						displayName = "Ohne Nummer";
						condition = "";
						exceptions[] = {};
						statement = ["reset"] execVM "\y\GR_Equipment_Mod\addons\Equipment\functions\selectHelmet.sqf";
						icon = "";
						};

				};
			
		


//Insignia
			class InsigniaAction {
				displayName = "Insignia";
				condition = "";
				exceptions[] = {};
				statement = "";
				icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\helm2.paa";
													
					class InsigniaAction_K {
					displayName = "Kilo";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\kilo.paa";
			
						class InsigniaAction_Kilo {
						displayName = "Kilo";
						condition = "";
						exceptions[] = {};
						statement = [player,"Kilo"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Kilo_trop {
						displayName = "Kilo_Tropentarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Kilo_trop"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Kilo_ft {
						displayName = "Kilo_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Kilo_ft"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};
					
					class InsigniaAction_F {
					displayName = "Fox";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\fox.paa";
			
						class InsigniaAction_Fox {
						displayName = "Fox";
						condition = "";
						exceptions[] = {};
						statement = [player,"Fox"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Fox_trop {
						displayName = "Fox_Tropentarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Fox_trop"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Fox_blank {
						displayName = "Fox_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Fox_ft"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};	
					
					class InsigniaAction_V {
					displayName = "Victor";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\victor.paa";
			
						class InsigniaAction_Victor {
						displayName = "Victor";
						condition = "";
						exceptions[] = {};
						statement = [player,"Victor"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Victor_ft {
						displayName = "Victor Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Victor_ft"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Victor_trop {
						displayName = "Victor Tropentarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Victor_trop"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};
					
					class InsigniaAction_A {
					displayName = "Alpha";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\alfa.paa";
			
						class InsigniaAction_Alpha {
						displayName = "Alpha";
						condition = "";
						exceptions[] = {};
						statement = [player,"Alpha"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Alpha_trop {
						displayName = "Alpha_Tropentarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Alpha_trop"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Alpha_ft {
						displayName = "Alpha_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Alpha_ft"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};
					
					class InsigniaAction_B {
					displayName = "Bravo";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\bravo.paa";
			
						class InsigniaAction_Bravo {
						displayName = "Bravo";
						condition = "";
						exceptions[] = {};
						statement = [player,"Bravo"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Bravo_trop {
						displayName = "Bravo_Tropentarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Bravo_trop"] call BIS_fnc_setUnitInsignia ;
						icon = "";
						};
													
						class InsigniaAction_Bravo_ft {
						displayName = "Bravo_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Bravo_ft"] call BIS_fnc_setUnitInsignia ;
						icon = "";
						};
					};
								
					class InsigniaAction_C {
					displayName = "Charlie";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\charlie.paa";
			
						class InsigniaAction_Charlie {
						displayName = "Charlie";
						condition = "";
						exceptions[] = {};
						statement = [player,"Charlie"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Charlie_trop {
						displayName = "Charlie_Tropentarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Charlie_trop"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Charlie_ft {
						displayName = "Charlie_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Charlie_ft"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};
					
/*					class InsigniaAction_D {
					displayName = "Delta";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\delta.paa";
			
						class InsigniaAction_Delta {
						displayName = "Delta";
						condition = "";
						exceptions[] = {};
						statement = [player,"Delta"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Delta_trop {
						displayName = "Delta_Tropen";
						condition = "";
						exceptions[] = {};
						statement = [player,"Delta_trop"] call BIS_fnc_setUnitInsignia ;
						icon = "";
						};
						
						class InsigniaAction_Delta_trop_l {
						displayName = "Delta_Tropen_low";
						condition = "";
						exceptions[] = {};
						statement = [player,"Delta_trop_l"] call BIS_fnc_setUnitInsignia ;
						icon = "";
						};
						
						class InsigniaAction_Delta_ft {
						displayName = "Delta_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Delta_ft"] call BIS_fnc_setUnitInsignia ;
						icon = "";
						};
						
						class InsigniaAction_Delta_ft_l {
						displayName = "Delta_Flecktarn_low";
						condition = "";
						exceptions[] = {};
						statement = [player,"Delta_ft_l"] call BIS_fnc_setUnitInsignia ;
						icon = "";
						};
						
						class InsigniaAction_Delta_DM {
						displayName = "DM";
						condition = "";
						exceptions[] = {};
						statement = [player,"DM"] call BIS_fnc_setUnitInsignia ;
						icon = "";
						};
					};
					
					class InsigniaAction_E {
					displayName = "Echo";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\echo.paa";
			
						class InsigniaAction_Echo {
						displayName = "Echo";
						condition = "";
						exceptions[] = {};
						statement = [player,"Echo"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Echo_trop {
						displayName = "Echo_Tropen";
						condition = "";
						exceptions[] = {};
						statement = [player,"Echo_trop"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Echo_ft {
						displayName = "Echo_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Echo_ft"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};	
*/					
					class InsigniaAction_Z {
					displayName = "Zulu";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\zulu.paa";
			
						class InsigniaAction_Zulu {
						displayName = "Zulu";
						condition = "";
						exceptions[] = {};
						statement = [player,"Zulu"] call BIS_fnc_setUnitInsignia; //remoteExec ["call",0,true];						
						icon = "";
						};
						
						class InsigniaAction_Zulu_trop {
						displayName = "Zulu_Tropentarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Zulu_trop"] call BIS_fnc_setUnitInsignia; //;						
						icon = "";
						};
						
						class InsigniaAction_Zulu_ft {
						displayName = "Zulu_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Zulu_ft"] call BIS_fnc_setUnitInsignia; // ;						
						icon = "";
						};
						
						class InsigniaAction_Delta_DM {
						displayName = "DM";
						condition = "";
						exceptions[] = {};
						statement = [player,"DM"] call BIS_fnc_setUnitInsignia; // ;
						icon = "";
						};
					};
					
					class InsigniaAction_Y {
					displayName = "Yankee";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\yankee.paa";
			
						class InsigniaAction_Yankee {
						displayName = "Yankee";
						condition = "";
						exceptions[] = {};
						statement = [player,"Yankee"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Yankee_trop {
						displayName = "Yankee_Tropentarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Yankee_trop"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Yankee_ft {
						displayName = "Yankee_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Yankee_ft"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};
					
					class InsigniaAction_X {
					displayName = "X-Ray";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\x-ray.paa";
			
						class InsigniaAction_XRay {
						displayName = "X-Ray";
						condition = "";
						exceptions[] = {};
						statement = [player,"XRay"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_XRay_trop {
						displayName = "X-Ray_Tropentarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"XRay_trop"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_XRay_ft {
						displayName = "X-Ray_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"XRay_ft"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};
					
/*					class InsigniaAction_W {
					displayName = "Whiskey";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\whiskey.paa";
			
						class InsigniaAction_Whiskey {
						displayName = "Whiskey";
						condition = "";
						exceptions[] = {};
						statement = [player,"Whiskey"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};
*/
					
					class InsigniaAction_Sierra {
					displayName = "Sierra";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\sierra.paa";
			
						class InsigniaAction_S {
						displayName = "Sierra";
						condition = "";
						exceptions[] = {};
						statement = [player,"Sierra"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						class InsigniaAction_S_trop {
						displayName = "Sierra_Tropentarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Sierra_trop"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						class InsigniaAction_S_ft {
						displayName = "Sierra_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Sierra_ft"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};	
					
					class InsigniaAction_M {
					displayName = "Mike";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\mike.paa";
			
						class InsigniaAction_Mike {
						displayName = "Mike";
						condition = "";
						exceptions[] = {};
						statement = [player,"Mike"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Mike_trop {
						displayName = "Mike_Tropentarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Mike_trop"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Mike_ft {
						displayName = "Mike_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Mike_ft"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};	
					
					class InsigniaAction_L {
					displayName = "Lima";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\lima.paa";
			
						class InsigniaAction_Lima {
						displayName = "Lima";
						condition = "";
						exceptions[] = {};
						statement = [player,"Lima"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Lima_trop {
						displayName = "Lima_Tropentarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Lima_trop"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
						
						class InsigniaAction_Lima_ft {
						displayName = "Lima_Flecktarn";
						condition = "";
						exceptions[] = {};
						statement = [player,"Lima_ft"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};		
					
/*					class InsigniaAction_S {
					displayName = "Sanitäter";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = "\y\GR_Equipment_Mod\addons\Equipment\icon\sani.paa";
			
						class InsigniaAction_San {
						displayName = "Sanitäter";
						condition = "";
						exceptions[] = {};
						statement = [player,"Sani"] call BIS_fnc_setUnitInsignia ;						
						icon = "";
						};
					};	
*/					
					
					
					
					
				};
			}; //test	
		};
	};
};