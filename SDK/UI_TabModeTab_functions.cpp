
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

// Function UI_TabModeTab.UI_TabModeTab_C.GetIsActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTab_C::GetIsActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.GetIsActive");

	UUI_TabModeTab_C_GetIsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function UI_TabModeTab.UI_TabModeTab_C.OnClick
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_TabModeTab_C::OnClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.OnClick");

	UUI_TabModeTab_C_OnClick_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TabModeTab.UI_TabModeTab_C.SetIsActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTab_C::SetIsActive(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.SetIsActive");

	UUI_TabModeTab_C_SetIsActive_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTab.UI_TabModeTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TabModeTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.Construct");

	UUI_TabModeTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTab.UI_TabModeTab_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_TabModeTab_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.OnSynchronizeProperties");

	UUI_TabModeTab_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTab.UI_TabModeTab_C.ExecuteUbergraph_UI_TabModeTab
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTab_C::ExecuteUbergraph_UI_TabModeTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.ExecuteUbergraph_UI_TabModeTab");

	UUI_TabModeTab_C_ExecuteUbergraph_UI_TabModeTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTab.UI_TabModeTab_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TabModeTab_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.Clicked__DelegateSignature");

	UUI_TabModeTab_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
