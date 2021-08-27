
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

// Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.OnTextDataChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Value                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_TooltipOverviewTextElement_C::OnTextDataChanged(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.OnTextDataChanged");

	UUI_TooltipOverviewTextElement_C_OnTextDataChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TooltipOverviewTextElement_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.PreConstruct");

	UUI_TooltipOverviewTextElement_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.OnNumberDataChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TooltipOverviewTextElement_C::OnNumberDataChanged(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.OnNumberDataChanged");

	UUI_TooltipOverviewTextElement_C_OnNumberDataChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.ExecuteUbergraph_UI_TooltipOverviewTextElement
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TooltipOverviewTextElement_C::ExecuteUbergraph_UI_TooltipOverviewTextElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.ExecuteUbergraph_UI_TooltipOverviewTextElement");

	UUI_TooltipOverviewTextElement_C_ExecuteUbergraph_UI_TooltipOverviewTextElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
