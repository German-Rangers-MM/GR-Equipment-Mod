class ACE_Medical_Treatment {
    class Medication {
        class GVAR(GSCI) {
			painReduce = 0;
			hrIncreaseLow[] = {0, 0};
			hrIncreaseNormal[] = {0, 0};
			hrIncreaseHigh[] = {0, 0};
			timeInSystem = 60;
			timeTillMaxEffect = 5;
			maxDose = 0;
			dose = 1;
			incompatibleMedication[] = {};
			viscosityChange = 0;
			onOverDose = "";
        };

        class GVAR(vaseline) {
			painReduce = 0.1;
			hrIncreaseLow[] = {0, 0};
			hrIncreaseNormal[] = {0, 0};
			hrIncreaseHigh[] = {0, 0};
			timeInSystem = 60;
			timeTillMaxEffect = 15;
			maxDose = 0;
			dose = 1;
			incompatibleMedication[] = {};
			viscosityChange = 0;
			onOverDose = "";
        };
    };
};
