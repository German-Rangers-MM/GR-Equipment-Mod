class CfgSoundSets {
    
	class Fennek_AmbulanceSiren_01_Ext_SoundSet
	{
		soundShaders[] = {"Fennek_AmbulanceSiren_01_Ext_SoundShader"};
		volumeFactor = 1.5;
		spatial = 1;
		loop = 1;
		sound3DProcessingType = "Fennek_Ext_3DProcessingType";
		volumeCurve = "InverseSquare1Curve";
	};
	class Fennek_AmbulanceSiren_01_Int_SoundSet
	{
		soundShaders[] = {"Fennek_AmbulanceSiren_01_Int_SoundShader"};
		volumeFactor = 1;
		spatial = 0;
		loop = 1;
	};
};
