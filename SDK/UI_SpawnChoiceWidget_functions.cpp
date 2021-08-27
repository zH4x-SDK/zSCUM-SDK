
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

// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.GetVisibilityProgressBar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SpawnChoiceWidget_C::GetVisibilityProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.GetVisibilityProgressBar");

	UUI_SpawnChoiceWidget_C_GetVisibilityProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SpawnChoiceWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Update");

	UUI_SpawnChoiceWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Get_PriceText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnChoiceWidget_C::Get_PriceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Get_PriceText");

	UUI_SpawnChoiceWidget_C_Get_PriceText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.GetVisibilityDisabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SpawnChoiceWidget_C::GetVisibilityDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.GetVisibilityDisabled");

	UUI_SpawnChoiceWidget_C_GetVisibilityDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.GetVisibilitySelectArrow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SpawnChoiceWidget_C::GetVisibilitySelectArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.GetVisibilitySelectArrow");

	UUI_SpawnChoiceWidget_C_GetVisibilitySelectArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_SpawnChoiceWidget_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnSynchronizeProperties");

	UUI_SpawnChoiceWidget_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnChoiceWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnChoiceWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SpawnChoiceWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Construct");

	UUI_SpawnChoiceWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnChoiceWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Tick");

	UUI_SpawnChoiceWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.ExecuteUbergraph_UI_SpawnChoiceWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnChoiceWidget_C::ExecuteUbergraph_UI_SpawnChoiceWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.ExecuteUbergraph_UI_SpawnChoiceWidget");

	UUI_SpawnChoiceWidget_C_ExecuteUbergraph_UI_SpawnChoiceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C* this                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnChoiceWidget_C::OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C* this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnClicked__DelegateSignature");

	UUI_SpawnChoiceWidget_C_OnClicked__DelegateSignature_Params params;
	params.this = this;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
