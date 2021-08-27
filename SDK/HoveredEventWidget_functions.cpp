
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

// Function HoveredEventWidget.HoveredEventWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHoveredEventWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoveredEventWidget.HoveredEventWidget_C.OnMouseEnter");

	UHoveredEventWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoveredEventWidget.HoveredEventWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHoveredEventWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoveredEventWidget.HoveredEventWidget_C.OnMouseLeave");

	UHoveredEventWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoveredEventWidget.HoveredEventWidget_C.ExecuteUbergraph_HoveredEventWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHoveredEventWidget_C::ExecuteUbergraph_HoveredEventWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoveredEventWidget.HoveredEventWidget_C.ExecuteUbergraph_HoveredEventWidget");

	UHoveredEventWidget_C_ExecuteUbergraph_HoveredEventWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoveredEventWidget.HoveredEventWidget_C.MouseLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHoveredEventWidget_C::MouseLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoveredEventWidget.HoveredEventWidget_C.MouseLeft__DelegateSignature");

	UHoveredEventWidget_C_MouseLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoveredEventWidget.HoveredEventWidget_C.MouseEntered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHoveredEventWidget_C::MouseEntered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoveredEventWidget.HoveredEventWidget_C.MouseEntered__DelegateSignature");

	UHoveredEventWidget_C_MouseEntered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
