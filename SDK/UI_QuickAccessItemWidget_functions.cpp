
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

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               itemSize                       (Parm, OutParm, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::GetItemSize(struct FVector2D* itemSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSize");

	UUI_QuickAccessItemWidget_C_GetItemSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (itemSize != nullptr)
		*itemSize = params.itemSize;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetImageBrush
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             imageBrush                     (Parm, OutParm)

void UUI_QuickAccessItemWidget_C::GetImageBrush(struct FSlateBrush* imageBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetImageBrush");

	UUI_QuickAccessItemWidget_C_GetImageBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (imageBrush != nullptr)
		*imageBrush = params.imageBrush;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.On__imageWidget_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_QuickAccessItemWidget_C::On__imageWidget_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.On__imageWidget_MouseButtonDown_1");

	UUI_QuickAccessItemWidget_C_On__imageWidget_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetItemSlotNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            itemSlotNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::SetItemSlotNumber(int itemSlotNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetItemSlotNumber");

	UUI_QuickAccessItemWidget_C_SetItemSlotNumber_Params params;
	params.itemSlotNumber = itemSlotNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateNormalColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_QuickAccessItemWidget_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateNormalColor");

	UUI_QuickAccessItemWidget_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateAlarmColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_QuickAccessItemWidget_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateAlarmColor");

	UUI_QuickAccessItemWidget_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSlotNumber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_QuickAccessItemWidget_C::GetItemSlotNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSlotNumber");

	UUI_QuickAccessItemWidget_C_GetItemSlotNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetTextColor");

	UUI_QuickAccessItemWidget_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_QuickAccessItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.Construct");

	UUI_QuickAccessItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragLeave");

	UUI_QuickAccessItemWidget_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ExecuteUbergraph_UI_QuickAccessItemWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::ExecuteUbergraph_UI_QuickAccessItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ExecuteUbergraph_UI_QuickAccessItemWidget");

	UUI_QuickAccessItemWidget_C_ExecuteUbergraph_UI_QuickAccessItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
