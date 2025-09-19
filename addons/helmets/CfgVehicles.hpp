class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class Equipment {
				displayName = "GerRng Equipment";
				condition = "";
				exceptions[] = {"isNotEscorting", "isNotHandcuffed", "isNotSurrendering", "notOnMap", "isNotUnconscious", "isNotDragging", "isNotDragging", "isNotSwimming", "isNotOnLadder"};
				statement = "";
				icon = QPATHTOF(icon\gr_neu.paa);
				class HelmpatchAction {
					displayName = "Helmpatch";
					condition = QUOTE([ARR_2('OpsCore',headgear player)] call BIS_fnc_inString);
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\helm.paa);

					class HelmpatchAction_K {
						displayName = "Kilo";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\kilo.paa);
						MAKE_HELMET_ACTION_WDASH(K,Chef,kk);
						MAKE_HELMET_ACTION(1,k1);
						MAKE_HELMET_ACTION(2,k2);
					};
					
					class HelmpatchAction_F {
						displayName = "Fox";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\fox.paa);
						MAKE_HELMET_ACTION_WDASH(F,ZFhr,fzf);
						MAKE_HELMET_ACTION(1,f1);
						MAKE_HELMET_ACTION(2,f2);
						MAKE_HELMET_ACTION(3,f3);
						MAKE_HELMET_ACTION(4,f4);
					};
					
					class HelmpatchAction_V {
						displayName = "Victor";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\victor.paa);
						MAKE_HELMET_ACTION_WDASH(V,ZFhr,vzf);
						MAKE_HELMET_ACTION(1,v1);
						MAKE_HELMET_ACTION(2,v2);
						MAKE_HELMET_ACTION(3,v3);
						MAKE_HELMET_ACTION(4,v4);
					};
				
					class HelmpatchAction_A {
						displayName = "Alpha";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\alfa.paa);
						MAKE_HELMET_ACTION(GrpFhr,agf);
						MAKE_HELMET_ACTION(01,a1);
						MAKE_HELMET_ACTION(02,a2);
						MAKE_HELMET_ACTION(03,a3);
						MAKE_HELMET_ACTION(04,a4);
						MAKE_HELMET_ACTION(05,a5);
						MAKE_HELMET_ACTION(06,a6);
						MAKE_HELMET_ACTION(07,a7);
						MAKE_HELMET_ACTION(08,a8);
						MAKE_HELMET_ACTION(09,a9);
						MAKE_HELMET_ACTION(10,a10);
						MAKE_HELMET_ACTION(11,a11);
						MAKE_HELMET_ACTION(12,a12);
					};
					
					class HelmpatchAction_B {
						displayName = "Bravo";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\bravo.paa);
						MAKE_HELMET_ACTION(GrpFhr,bgf);
						MAKE_HELMET_ACTION(1,b1);
						MAKE_HELMET_ACTION(2,b2);
						MAKE_HELMET_ACTION(3,b3);
						MAKE_HELMET_ACTION(4,b4);
						MAKE_HELMET_ACTION(5,b5);
						MAKE_HELMET_ACTION(6,b6);
						MAKE_HELMET_ACTION(7,b7);
						MAKE_HELMET_ACTION(8,b8);
						MAKE_HELMET_ACTION(9,b9);
						MAKE_HELMET_ACTION(10,b10);
						MAKE_HELMET_ACTION(11,b11);
						MAKE_HELMET_ACTION(12,b12);
					};
					
					class HelmpatchAction_C {
						displayName = "Charlie";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\charlie.paa);
						MAKE_HELMET_ACTION(GrpFhr,cgf);
						MAKE_HELMET_ACTION(1,c1);
						MAKE_HELMET_ACTION(2,c2);
						MAKE_HELMET_ACTION(3,c3);
						MAKE_HELMET_ACTION(4,c4);
						MAKE_HELMET_ACTION(5,c5);
						MAKE_HELMET_ACTION(6,c6);
						MAKE_HELMET_ACTION(7,c7);
						MAKE_HELMET_ACTION(8,c8);
						MAKE_HELMET_ACTION(9,c9);
						MAKE_HELMET_ACTION(10,c10);
						MAKE_HELMET_ACTION(11,c11);
						MAKE_HELMET_ACTION(12,c12);
					};
					
					class HelmpatchAction_Z {
						displayName = "Zulu";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\zulu.paa);
						MAKE_HELMET_ACTION(GrpFhr,zgf);
						MAKE_HELMET_ACTION(1,z1);
						MAKE_HELMET_ACTION(2,z2);
						MAKE_HELMET_ACTION(3,z3);
						MAKE_HELMET_ACTION(4,z4);
						MAKE_HELMET_ACTION(5,z5);
						MAKE_HELMET_ACTION(6,z6);
						MAKE_HELMET_ACTION(7,z7);
						MAKE_HELMET_ACTION(8,z8);
						MAKE_HELMET_ACTION(9,z9);
						MAKE_HELMET_ACTION(10,z10);
						MAKE_HELMET_ACTION(11,z11);
						MAKE_HELMET_ACTION(12,z12);
					};
					
					class HelmpatchAction_Y {
						displayName = "Yankee";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\yankee.paa);
						MAKE_HELMET_ACTION(GrpFhr,ygf);
						MAKE_HELMET_ACTION(1,y1);
						MAKE_HELMET_ACTION(2,y2);
						MAKE_HELMET_ACTION(3,y3);
						MAKE_HELMET_ACTION(4,y4);
						MAKE_HELMET_ACTION(5,y5);
						MAKE_HELMET_ACTION(6,y6);
						MAKE_HELMET_ACTION(7,y7);
						MAKE_HELMET_ACTION(8,y8);
						MAKE_HELMET_ACTION(9,y9);
						MAKE_HELMET_ACTION(10,y10);
						MAKE_HELMET_ACTION(11,y11);
						MAKE_HELMET_ACTION(12,y12);
					};
					
					class HelmpatchAction_X {
						displayName = "X-Ray";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\x-ray.paa);
						MAKE_HELMET_ACTION(GrpFhr,xgf);
						MAKE_HELMET_ACTION(1,x1);
						MAKE_HELMET_ACTION(2,x2);
						MAKE_HELMET_ACTION(3,x3);
						MAKE_HELMET_ACTION(4,x4);
						MAKE_HELMET_ACTION(5,x5);
						MAKE_HELMET_ACTION(6,x6);
						MAKE_HELMET_ACTION(7,x7);
						MAKE_HELMET_ACTION(8,x8);
						MAKE_HELMET_ACTION(9,x9);
						MAKE_HELMET_ACTION(10,x10);
						MAKE_HELMET_ACTION(11,x11);
						MAKE_HELMET_ACTION(12,x12);
					};
					
					class HelmpatchAction_S {
						displayName = "Sierra";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\sierra.paa);
						MAKE_HELMET_ACTION(GrpFhr,sgf);
						MAKE_HELMET_ACTION(TrpFhr,stf);
						MAKE_HELMET_ACTION(1,s1);
						MAKE_HELMET_ACTION(2,s2);
						MAKE_HELMET_ACTION(3,s3);
						MAKE_HELMET_ACTION(4,s4);
						MAKE_HELMET_ACTION(5,s5);
						MAKE_HELMET_ACTION(6,s6);
						MAKE_HELMET_ACTION(7,s7);
						MAKE_HELMET_ACTION(8,s8);
					};
					class HelmpatchAction_M {
						displayName = "Mike";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\mike.paa);
						MAKE_HELMET_ACTION(AvD,mavd);
						MAKE_HELMET_ACTION(1,m1);
						MAKE_HELMET_ACTION(2,m2);
						MAKE_HELMET_ACTION(3,m3);
						MAKE_HELMET_ACTION(4,m4);
						MAKE_HELMET_ACTION(5,m5);
						MAKE_HELMET_ACTION(6,m6);
						MAKE_HELMET_ACTION(7,m7);
						MAKE_HELMET_ACTION(8,m8);
					};						
					
					class HelmpatchAction_L {
						displayName = "Lima";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\lima.paa);
						MAKE_HELMET_ACTION(GrpFhr,lgf);
						MAKE_HELMET_ACTION(1,l1);
						MAKE_HELMET_ACTION(2,l2);
						MAKE_HELMET_ACTION(3,l3);
						MAKE_HELMET_ACTION(4,l4);
						MAKE_HELMET_ACTION(5,l5);
						MAKE_HELMET_ACTION(6,l6);
						MAKE_HELMET_ACTION(7,l7);
					};

					class HelmpatchAction_R {
						displayName = "Romeo";
						condition = "";
						exceptions[] = {};
						statement = "";
						icon = QPATHTOF(icon\romeo.paa);
						MAKE_HELMET_ACTION(GrpFhr,rgf);
						MAKE_HELMET_ACTION(1,r1);
						MAKE_HELMET_ACTION(2,r2);
						MAKE_HELMET_ACTION(3,r3);
					};

					class HelmpatchAction_Reset {
						displayName = "Ohne Nummer";
						condition = "";
						exceptions[] = {};
						statement = QUOTE(['reset'] call FUNC(selectHelmet));
						icon = "";
					};

				};
			
			//Insignia
			class InsigniaAction {
				displayName = "Insignia";
				condition = "";
				exceptions[] = {};
				statement = "";
				icon = QPATHTOF(icon\helm2.paa);							
				class InsigniaAction_K {
					displayName = "Kilo";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\kilo.paa);
					MAKE_INSIGNIA_ACTION(Kilo,Kilo);
					MAKE_INSIGNIA_ACTION(Kilo_trop,Kilo Tropentarn);
					MAKE_INSIGNIA_ACTION(Kilo_ft,Kilo Flecktarn);
				};

				class InsigniaAction_F {
					displayName = "Fox";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\fox.paa);
					MAKE_INSIGNIA_ACTION(Fox,Fox);
					MAKE_INSIGNIA_ACTION(Fox_trop,Fox Tropentarn);
					MAKE_INSIGNIA_ACTION(Fox_ft,Fox Flecktarn);
				};	
				
				class InsigniaAction_V {
					displayName = "Victor";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\victor.paa);
					MAKE_INSIGNIA_ACTION(Victor,Victor);
					MAKE_INSIGNIA_ACTION(Victor_ft,Victor Flecktarn);
					MAKE_INSIGNIA_ACTION(Victor_trop,Victor Tropentarn);
				};
				
				class InsigniaAction_A {
					displayName = "Alpha";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\alfa.paa);
					MAKE_INSIGNIA_ACTION(Alpha,Alpha);
					MAKE_INSIGNIA_ACTION(Alpha_trop,Alpha Tropentarn);
					MAKE_INSIGNIA_ACTION(Alpha_ft,Alpha Flecktarn);
				};
				
				class InsigniaAction_B {
					displayName = "Bravo";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\bravo.paa);
					MAKE_INSIGNIA_ACTION(Bravo,Bravo);
					MAKE_INSIGNIA_ACTION(Bravo_trop,Bravo Tropentarn);
					MAKE_INSIGNIA_ACTION(Bravo_ft,Bravo Flecktarn);
				};
							
				class InsigniaAction_C {
					displayName = "Charlie";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\charlie.paa);
					MAKE_INSIGNIA_ACTION(Charlie,Charlie);
					MAKE_INSIGNIA_ACTION(Charlie_trop,Charlie Tropentarn);
					MAKE_INSIGNIA_ACTION(Charlie_ft,Charlie Flecktarn);
				};

				class InsigniaAction_Z {
					displayName = "Zulu";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\zulu.paa);
					MAKE_INSIGNIA_ACTION(Zulu,Zulu);
					MAKE_INSIGNIA_ACTION(Zulu_trop,Zulu Tropentarn);
					MAKE_INSIGNIA_ACTION(Zulu_ft,Zulu Flecktarn);
					MAKE_INSIGNIA_ACTION(DM,DM);
				};
				
				class InsigniaAction_Y {
					displayName = "Yankee";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\yankee.paa);
					MAKE_INSIGNIA_ACTION(Yankee,Yankee);
					MAKE_INSIGNIA_ACTION(Yankee_trop,Yankee Tropentarn);
					MAKE_INSIGNIA_ACTION(Yankee_ft,Yankee Flecktarn);
				};
				
				class InsigniaAction_X {
					displayName = "X-Ray";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\x-ray.paa);
					MAKE_INSIGNIA_ACTION(XRay,XRay);
					MAKE_INSIGNIA_ACTION(XRay_trop,XRay Tropentarn);
					MAKE_INSIGNIA_ACTION(XRay_ft,XRay Flecktarn);
				};
				
				class InsigniaAction_S {
					displayName = "Sierra";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\sierra.paa);
					MAKE_INSIGNIA_ACTION(Sierra,Sierra);
					MAKE_INSIGNIA_ACTION(Sierra_trop,Sierra Tropentarn);
					MAKE_INSIGNIA_ACTION(Sierra_ft,Sierra Flecktarn);
				};	
				
				class InsigniaAction_M {
					displayName = "Mike";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\mike.paa);
					MAKE_INSIGNIA_ACTION(Mike,Mike);
					MAKE_INSIGNIA_ACTION(Mike_trop,Mike Tropentarn);
					MAKE_INSIGNIA_ACTION(Mike_ft,Mike Flecktarn);
				};	
				
				class InsigniaAction_L {
					displayName = "Lima";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\lima.paa);
					MAKE_INSIGNIA_ACTION(Lima,Lima);
					MAKE_INSIGNIA_ACTION(Lima_trop,Lima Tropentarn);
					MAKE_INSIGNIA_ACTION(Lima_ft,Lima Flecktarn);
				};
				
				class InsigniaAction_R {
					displayName = "Romeo";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\romeo.paa);
					MAKE_INSIGNIA_ACTION(Romeo,Romeo);	
				};
					/*
					class InsigniaAction_S {
					displayName = "Sanitäter";
					condition = "";
					exceptions[] = {};
					statement = "";
					icon = QPATHTOF(icon\sani.paa);
			
						class InsigniaAction_San {
						displayName = "Sanitäter";
						condition = "";
						exceptions[] = {};
						statement = QUOTE([ARR_2(player,'Sani')] call BIS_fnc_setUnitInsignia);						
						icon = "";
						};
					};
					*/
				};
			};
		};
	};
};
