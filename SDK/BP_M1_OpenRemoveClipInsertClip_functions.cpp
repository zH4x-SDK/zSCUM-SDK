
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

// Function BP_M1_OpenRemoveClipInsertClip.BP_M1_OpenRemoveClipInsertClip_C.CanExecuteUsingData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FWeaponReloadData       Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_M1_OpenRemoveClipInsertClip_C::CanExecuteUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_OpenRemoveClipInsertClip.BP_M1_OpenRemoveClipInsertClip_C.CanExecuteUsingData");

	UBP_M1_OpenRemoveClipInsertClip_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_OpenRemoveClipInsertClip.BP_M1_OpenRemoveClipInsertClip_C.OnActionAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// ECharacterActionNotifyType     notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_M1_OpenRemoveClipInsertClip_C::OnActionAnimNotify(ECharacterActionNotifyType notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_OpenRemoveClipInsertClip.BP_M1_OpenRemoveClipInsertClip_C.OnActionAnimNotify");

	UBP_M1_OpenRemoveClipInsertClip_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_M1_OpenRemoveClipInsertClip.BP_M1_OpenRemoveClipInsertClip_C.ExecuteUbergraph_BP_M1_OpenRemoveClipInsertClip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_M1_OpenRemoveClipInsertClip_C::ExecuteUbergraph_BP_M1_OpenRemoveClipInsertClip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_OpenRemoveClipInsertClip.BP_M1_OpenRemoveClipInsertClip_C.ExecuteUbergraph_BP_M1_OpenRemoveClipInsertClip");

	UBP_M1_OpenRemoveClipInsertClip_C_ExecuteUbergraph_BP_M1_OpenRemoveClipInsertClip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
