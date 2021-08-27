
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

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetFromNormalizedValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          normalizedValue                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::SetFromNormalizedValue(float normalizedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetFromNormalizedValue");

	UUI_CC_ProgressBar_C_SetFromNormalizedValue_Params params;
	params.normalizedValue = normalizedValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.GetNormalizedValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          normalizedValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::GetNormalizedValue(float* normalizedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.GetNormalizedValue");

	UUI_CC_ProgressBar_C_GetNormalizedValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (normalizedValue != nullptr)
		*normalizedValue = params.normalizedValue;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateSliderFromMouseEvent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CC_ProgressBar_C::UpdateSliderFromMouseEvent(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateSliderFromMouseEvent");

	UUI_CC_ProgressBar_C_UpdateSliderFromMouseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetSliderFromPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           onlyWholeNumbers               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::SetSliderFromPercentage(float percent, bool onlyWholeNumbers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetSliderFromPercentage");

	UUI_CC_ProgressBar_C_SetSliderFromPercentage_Params params;
	params.percent = percent;
	params.onlyWholeNumbers = onlyWholeNumbers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          leftover                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::SetValue(int Index, float leftover)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetValue");

	UUI_CC_ProgressBar_C_SetValue_Params params;
	params.Index = Index;
	params.leftover = leftover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CC_ProgressBar_C::SetTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetTitle");

	UUI_CC_ProgressBar_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ProcessIndexChange
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CC_ProgressBar_C::ProcessIndexChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ProcessIndexChange");

	UUI_CC_ProgressBar_C_ProcessIndexChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CC_ProgressBar_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonUp");

	UUI_CC_ProgressBar_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetEnabledState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::SetEnabledState(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetEnabledState");

	UUI_CC_ProgressBar_C_SetEnabledState_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CC_ProgressBar_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonDown");

	UUI_CC_ProgressBar_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CC_ProgressBar_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseMove");

	UUI_CC_ProgressBar_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateBarFromIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CC_ProgressBar_C::UpdateBarFromIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateBarFromIndex");

	UUI_CC_ProgressBar_C_UpdateBarFromIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.InitFromData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CC_ProgressBar_C::InitFromData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.InitFromData");

	UUI_CC_ProgressBar_C_InitFromData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.CreateMarkers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CC_ProgressBar_C::CreateMarkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.CreateMarkers");

	UUI_CC_ProgressBar_C_CreateMarkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_CC_ProgressBar_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnSynchronizeProperties");

	UUI_CC_ProgressBar_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CC_ProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Construct");

	UUI_CC_ProgressBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Tick");

	UUI_CC_ProgressBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ExecuteUbergraph_UI_CC_ProgressBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::ExecuteUbergraph_UI_CC_ProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ExecuteUbergraph_UI_CC_ProgressBar");

	UUI_CC_ProgressBar_C_ExecuteUbergraph_UI_CC_ProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CC_ProgressBar_C::MouseDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseDown__DelegateSignature");

	UUI_CC_ProgressBar_C_MouseDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CC_ProgressBar_C::MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseUp__DelegateSignature");

	UUI_CC_ProgressBar_C_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnIndexChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LeftoverPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::OnIndexChanged__DelegateSignature(int Index, float LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnIndexChanged__DelegateSignature");

	UUI_CC_ProgressBar_C_OnIndexChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
