
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

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetHideAvatarAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UUI_DialogueContainerWidget_C::GetHideAvatarAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetHideAvatarAnimation");

	UUI_DialogueContainerWidget_C_GetHideAvatarAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetShowAvatarAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UUI_DialogueContainerWidget_C::GetShowAvatarAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetShowAvatarAnimation");

	UUI_DialogueContainerWidget_C_GetShowAvatarAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_DialogueContainerWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Construct");

	UUI_DialogueContainerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DialogueContainerWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Tick");

	UUI_DialogueContainerWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ExecuteUbergraph_UI_DialogueContainerWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DialogueContainerWidget_C::ExecuteUbergraph_UI_DialogueContainerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ExecuteUbergraph_UI_DialogueContainerWidget");

	UUI_DialogueContainerWidget_C_ExecuteUbergraph_UI_DialogueContainerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
