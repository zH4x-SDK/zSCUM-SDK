#pragma once

#include "../SDK.h"

// Name: SCUM, Version: 4.20.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.GetPrisoner
struct ABP_Survival_Blueprints_PlaceShelter_Objective_C_GetPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.AddToDialogueQueue
struct ABP_Survival_Blueprints_PlaceShelter_Objective_C_AddToDialogueQueue_Params
{
	EDialogEvent                                       DialogueEvent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.UserConstructionScript
struct ABP_Survival_Blueprints_PlaceShelter_Objective_C_UserConstructionScript_Params
{
};

// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnObjectiveStarted
struct ABP_Survival_Blueprints_PlaceShelter_Objective_C_OnObjectiveStarted_Params
{
};

// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnTabModeOpened
struct ABP_Survival_Blueprints_PlaceShelter_Objective_C_OnTabModeOpened_Params
{
	ETabMode                                           tabMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective
struct ABP_Survival_Blueprints_PlaceShelter_Objective_C_ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
