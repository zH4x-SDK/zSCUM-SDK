
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

// Function UI_GenericTooltip.UI_GenericTooltip_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_GenericTooltip_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericTooltip.UI_GenericTooltip_C.SetText");

	UUI_GenericTooltip_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericTooltip.UI_GenericTooltip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericTooltip_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericTooltip.UI_GenericTooltip_C.PreConstruct");

	UUI_GenericTooltip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GenericTooltip.UI_GenericTooltip_C.ExecuteUbergraph_UI_GenericTooltip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericTooltip_C::ExecuteUbergraph_UI_GenericTooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericTooltip.UI_GenericTooltip_C.ExecuteUbergraph_UI_GenericTooltip");

	UUI_GenericTooltip_C_ExecuteUbergraph_UI_GenericTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
