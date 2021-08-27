
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

// Function UI_MissionResultWidget.UI_MissionResultWidget_C.PlayShowMissionResultAnimation
// (Event, Public, BlueprintEvent)

void UUI_MissionResultWidget_C::PlayShowMissionResultAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionResultWidget.UI_MissionResultWidget_C.PlayShowMissionResultAnimation");

	UUI_MissionResultWidget_C_PlayShowMissionResultAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionResultWidget.UI_MissionResultWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_MissionResultWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionResultWidget.UI_MissionResultWidget_C.OnAnimationFinished");

	UUI_MissionResultWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionResultWidget.UI_MissionResultWidget_C.ExecuteUbergraph_UI_MissionResultWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionResultWidget_C::ExecuteUbergraph_UI_MissionResultWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionResultWidget.UI_MissionResultWidget_C.ExecuteUbergraph_UI_MissionResultWidget");

	UUI_MissionResultWidget_C_ExecuteUbergraph_UI_MissionResultWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
