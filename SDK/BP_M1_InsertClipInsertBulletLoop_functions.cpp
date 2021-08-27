
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

// Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.ExecuteUsingData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponReloadData       Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_M1_InsertClipInsertBulletLoop_C::ExecuteUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.ExecuteUsingData");

	UBP_M1_InsertClipInsertBulletLoop_C_ExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.CanExecuteUsingData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FWeaponReloadData       Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_M1_InsertClipInsertBulletLoop_C::CanExecuteUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.CanExecuteUsingData");

	UBP_M1_InsertClipInsertBulletLoop_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.OnActionAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// ECharacterActionNotifyType     notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_M1_InsertClipInsertBulletLoop_C::OnActionAnimNotify(ECharacterActionNotifyType notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.OnActionAnimNotify");

	UBP_M1_InsertClipInsertBulletLoop_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.ExecuteUbergraph_BP_M1_InsertClipInsertBulletLoop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_M1_InsertClipInsertBulletLoop_C::ExecuteUbergraph_BP_M1_InsertClipInsertBulletLoop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.ExecuteUbergraph_BP_M1_InsertClipInsertBulletLoop");

	UBP_M1_InsertClipInsertBulletLoop_C_ExecuteUbergraph_BP_M1_InsertClipInsertBulletLoop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
