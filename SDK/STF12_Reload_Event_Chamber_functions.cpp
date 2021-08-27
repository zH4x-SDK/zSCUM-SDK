
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

// Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.ExecuteUsingData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponReloadData       Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTF12_Reload_Event_Chamber_C::ExecuteUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.ExecuteUsingData");

	USTF12_Reload_Event_Chamber_C_ExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.CanExecuteUsingData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FWeaponReloadData       Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTF12_Reload_Event_Chamber_C::CanExecuteUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.CanExecuteUsingData");

	USTF12_Reload_Event_Chamber_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.OnActionAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// ECharacterActionNotifyType     notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USTF12_Reload_Event_Chamber_C::OnActionAnimNotify(ECharacterActionNotifyType notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.OnActionAnimNotify");

	USTF12_Reload_Event_Chamber_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.ExecuteUbergraph_STF12_Reload_Event_Chamber
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USTF12_Reload_Event_Chamber_C::ExecuteUbergraph_STF12_Reload_Event_Chamber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.ExecuteUbergraph_STF12_Reload_Event_Chamber");

	USTF12_Reload_Event_Chamber_C_ExecuteUbergraph_STF12_Reload_Event_Chamber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
