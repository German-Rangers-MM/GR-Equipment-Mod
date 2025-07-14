class CfgSoundShaders {

    
	class Fennek_AmbulanceSiren_01_Ext_SoundShader
	{
		samples[] = {{QPATHTOF(fennek\Fennek_Ambulance_Siren_Ext_Loop),1}};
		frequency = 1;
		volume = "2  * 0.7 * CustomSoundController1";
		range = 550;
		rangeCurve[] = {{0,1},{550,0}};
	};
	class Fennek_AmbulanceSiren_01_Int_SoundShader
	{
		samples[] = {{QPATHTOF(fennek\Fennek_Ambulance_Siren_Int_Loop),1}};
		frequency = 1;
		volume = "2  * 1 * CustomSoundController1";
	};

	class Van_02_AmbulanceSiren_BW_01_Ext_SoundShader
	{
		frequency = 1;
		range = 550;
		rangeCurve[] = {{0,1},{550,0}};
		samples[] = {{QPATHTOF(fennek\Fennek_Ambulance_Siren_Ext_Loop),1}};
		volume = "1  * 0.7 * CustomSoundController1";
	};
	class Van_02_AmbulanceSiren_BW_01_Int_SoundShader
	{
		frequency = 1;
		samples[] = {{QPATHTOF(fennek\Fennek_Ambulance_Siren_Int_Loop),1}};
		volume = "1  * 1 * CustomSoundController1";
	};
};
