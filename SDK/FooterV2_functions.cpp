
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

// Function FooterV2.FooterV2_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   textToSet                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            textColorToSet                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UFooterV2_C::SetText(const struct FText& textToSet, const struct FLinearColor& textColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function FooterV2.FooterV2_C.SetText");

	UFooterV2_C_SetText_Params params;
	params.textToSet = textToSet;
	params.textColorToSet = textColorToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FooterV2.FooterV2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFooterV2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FooterV2.FooterV2_C.Construct");

	UFooterV2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FooterV2.FooterV2_C.ExecuteUbergraph_FooterV2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFooterV2_C::ExecuteUbergraph_FooterV2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FooterV2.FooterV2_C.ExecuteUbergraph_FooterV2");

	UFooterV2_C_ExecuteUbergraph_FooterV2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
