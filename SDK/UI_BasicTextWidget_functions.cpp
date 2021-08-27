
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

// Function UI_BasicTextWidget.UI_BasicTextWidget_C.SetCurrentText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_BasicTextWidget_C::SetCurrentText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BasicTextWidget.UI_BasicTextWidget_C.SetCurrentText");

	UUI_BasicTextWidget_C_SetCurrentText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BasicTextWidget.UI_BasicTextWidget_C.ExecuteUbergraph_UI_BasicTextWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BasicTextWidget_C::ExecuteUbergraph_UI_BasicTextWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BasicTextWidget.UI_BasicTextWidget_C.ExecuteUbergraph_UI_BasicTextWidget");

	UUI_BasicTextWidget_C_ExecuteUbergraph_UI_BasicTextWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
