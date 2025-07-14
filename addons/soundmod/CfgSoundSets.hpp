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

	class Van_02_AmbulanceSiren_BW_01_Ext_SoundSet
	{
		soundShaders[] = {"Van_02_AmbulanceSiren_BW_01_Ext_SoundShader"};
		volumeFactor = 1.5;
		spatial = 1;
		loop = 1;
		sound3DProcessingType = "Van_Ext_3DProcessingType";
		volumeCurve = "InverseSquare1Curve";
	};
	class Van_02_AmbulanceSiren_BW_01_Int_SoundSet
	{
		soundShaders[] = {"Van_02_AmbulanceSiren_BW_01_Int_SoundShader"};
		volumeFactor = 1;
		spatial = 0;
		loop = 1;
	};
};
