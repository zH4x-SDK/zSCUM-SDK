
#include "../SDK.h"

// Name: SCUM, Version: 4.20.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_M1_Clip.BP_M1_Clip_C.GetInteractionsWithItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 User                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AItem*                   Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInteractionStruct> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FInteractionStruct> ABP_M1_Clip_C::GetInteractionsWithItem(class UObject* User, class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.GetInteractionsWithItem");

	ABP_M1_Clip_C_GetInteractionsWithItem_Params params;
	params.User = User;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_Clip.BP_M1_Clip_C.GetStateForInteractionWithItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AItem*                   Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInteractionState              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractionState ABP_M1_Clip_C::GetStateForInteractionWithItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.GetStateForInteractionWithItem");

	ABP_M1_Clip_C_GetStateForInteractionWithItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_Clip.BP_M1_Clip_C.GetDefaultInteractionForPrisoner
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APrisoner*               Prisoner                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInteractionQueryParameters Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInteractionStruct      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInteractionStruct ABP_M1_Clip_C::GetDefaultInteractionForPrisoner(class APrisoner* Prisoner, const struct FInteractionQueryParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.GetDefaultInteractionForPrisoner");

	ABP_M1_Clip_C_GetDefaultInteractionForPrisoner_Params params;
	params.Prisoner = Prisoner;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_Clip.BP_M1_Clip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_M1_Clip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.UserConstructionScript");

	ABP_M1_Clip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_M1_Clip.BP_M1_Clip_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_M1_Clip_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.ReceiveBeginPlay");

	ABP_M1_Clip_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_M1_Clip.BP_M1_Clip_C.OnAmmoChangedEvent
// (Event, Public, BlueprintEvent)

void ABP_M1_Clip_C::OnAmmoChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.OnAmmoChangedEvent");

	ABP_M1_Clip_C_OnAmmoChangedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_M1_Clip.BP_M1_Clip_C.OnDetachedFromItem
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_M1_Clip_C::OnDetachedFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.OnDetachedFromItem");

	ABP_M1_Clip_C_OnDetachedFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_M1_Clip.BP_M1_Clip_C.ExecuteUbergraph_BP_M1_Clip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_M1_Clip_C::ExecuteUbergraph_BP_M1_Clip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.ExecuteUbergraph_BP_M1_Clip");

	ABP_M1_Clip_C_ExecuteUbergraph_BP_M1_Clip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
