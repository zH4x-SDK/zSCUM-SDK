
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

// Function BracketedBackground.BracketedBackground_C.SetAlarmBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)

void UBracketedBackground_C::SetAlarmBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BracketedBackground.BracketedBackground_C.SetAlarmBackgroundColor");

	UBracketedBackground_C_SetAlarmBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BracketedBackground.BracketedBackground_C.SetNormalBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)

void UBracketedBackground_C::SetNormalBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BracketedBackground.BracketedBackground_C.SetNormalBackgroundColor");

	UBracketedBackground_C_SetNormalBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BracketedBackground.BracketedBackground_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            colorToSet                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBracketedBackground_C::SetBackgroundColor(const struct FLinearColor& colorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BracketedBackground.BracketedBackground_C.SetBackgroundColor");

	UBracketedBackground_C_SetBackgroundColor_Params params;
	params.colorToSet = colorToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
