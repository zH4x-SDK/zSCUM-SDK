
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

// Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.UpdatePercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CaloriesTooltip_C::UpdatePercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.UpdatePercentage");

	UUI_CaloriesTooltip_C_UpdatePercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CaloriesTooltip_C::SetTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetTitle");

	UUI_CaloriesTooltip_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetMaxValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayMaxValue                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CaloriesTooltip_C::SetMaxValue(float MaxValue, float DisplayMaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetMaxValue");

	UUI_CaloriesTooltip_C_SetMaxValue_Params params;
	params.MaxValue = MaxValue;
	params.DisplayMaxValue = DisplayMaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CaloriesTooltip_C::SetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetValue");

	UUI_CaloriesTooltip_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
