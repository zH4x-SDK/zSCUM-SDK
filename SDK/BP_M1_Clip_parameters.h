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

// Function BP_M1_Clip.BP_M1_Clip_C.GetInteractionsWithItem
struct ABP_M1_Clip_C_GetInteractionsWithItem_Params
{
	class UObject*                                     User;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInteractionStruct>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_M1_Clip.BP_M1_Clip_C.GetStateForInteractionWithItem
struct ABP_M1_Clip_C_GetStateForInteractionWithItem_Params
{
	class AItem*                                       Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EInteractionState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_M1_Clip.BP_M1_Clip_C.GetDefaultInteractionForPrisoner
struct ABP_M1_Clip_C_GetDefaultInteractionForPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractionQueryParameters                 Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInteractionStruct                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_M1_Clip.BP_M1_Clip_C.UserConstructionScript
struct ABP_M1_Clip_C_UserConstructionScript_Params
{
};

// Function BP_M1_Clip.BP_M1_Clip_C.ReceiveBeginPlay
struct ABP_M1_Clip_C_ReceiveBeginPlay_Params
{
};

// Function BP_M1_Clip.BP_M1_Clip_C.OnAmmoChangedEvent
struct ABP_M1_Clip_C_OnAmmoChangedEvent_Params
{
};

// Function BP_M1_Clip.BP_M1_Clip_C.OnDetachedFromItem
struct ABP_M1_Clip_C_OnDetachedFromItem_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_M1_Clip.BP_M1_Clip_C.ExecuteUbergraph_BP_M1_Clip
struct ABP_M1_Clip_C_ExecuteUbergraph_BP_M1_Clip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
