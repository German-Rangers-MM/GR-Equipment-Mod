class ACE_Medical_Treatment_Actions {
    class CheckPulse;
    class CheckHydration: CheckPulse {
        displayName = CSTRING(checkHydration);
        displayNameProgress = CSTRING(checkingHydrationProgress);
        treatmentTime = QGVAR(checkHydrationTime);
        allowedSelections[] = {"Head","Body","LeftArm","RightArm","LeftLeg","RightLeg"};
        allowSelfTreatment = 0;
        category = "examine";
        medicRequired = 0;
        consumeItem = 0;
        callbackStart = "";
        callbackSuccess = QUOTE([ARR_2(_medic,_patient)] call FUNC(checkHydration));
        callbackProgress = "";
        callbackFailure = "";
        condition = QUOTE(acex_field_rations_enabled);
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
    };
    class CheckBloodSugar: CheckPulse {
        displayName = CSTRING(checkBloodSugar);
        displayNameProgress = CSTRING(checkingBloodSugarProgress);
        treatmentTime = QGVAR(checkBloodSugarTime);
        allowedSelections[] = {"LeftArm","RightArm","LeftLeg","RightLeg"};
        allowSelfTreatment = 1;
        category = "examine";
        medicRequired = 0;
        consumeItem = 0;
        callbackStart = "";
        callbackSuccess = QUOTE([ARR_2(_medic,_patient)] call FUNC(checkBloodSugar));
        callbackProgress = "";
        callbackFailure = "";
        condition = QUOTE(acex_field_rations_enabled);
        animationPatient = "";
        items[] = {QGVAR(glucometerSet)};
        animationMedic = "AinvPknlMstpSlayWrflDnon_medicOther";
        animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
    };


    class Morphine;
    class GVAR(GSCI): Morphine {
        displayName = CSTRING(Give_GSCI);
        displayNameProgress = KATCSTRING(Pharma,Using);
        category = "medication";
        treatmentLocations = 0;
        allowSelfTreatment = 1;
        allowedSelections[] = {"Body", "LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        medicRequired = QGVAR(medLvl_GSCI);
        treatmentTime = QGVAR(treatmentTime_GSCI);
        items[] = {QGVAR(GSCI)};
        callbackSuccess = QFUNC(treatment_GSCI);
        condition = QUOTE(acex_field_rations_enabled);
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        litter[] = {};
    };
};
