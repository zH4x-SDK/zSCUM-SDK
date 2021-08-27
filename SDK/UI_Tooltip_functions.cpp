
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

// Function UI_Tooltip.UI_Tooltip_C.InitFromInventoryNode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UInventoryNode> Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Tooltip_C::InitFromInventoryNode(const TScriptInterface<class UInventoryNode>& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.InitFromInventoryNode");

	UUI_Tooltip_C_InitFromInventoryNode_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Tooltip.UI_Tooltip_C.UpdateDebugText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Tooltip_C::UpdateDebugText(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.UpdateDebugText");

	UUI_Tooltip_C_UpdateDebugText_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Tooltip.UI_Tooltip_C.GetItemDurability
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_Tooltip_C::GetItemDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.GetItemDurability");

	UUI_Tooltip_C_GetItemDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Tooltip.UI_Tooltip_C.InitFromCaptionAndDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Caption                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Tooltip_C::InitFromCaptionAndDescription(const struct FText& Caption, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.InitFromCaptionAndDescription");

	UUI_Tooltip_C_InitFromCaptionAndDescription_Params params;
	params.Caption = Caption;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Tooltip.UI_Tooltip_C.InitFromItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Tooltip_C::InitFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.InitFromItem");

	UUI_Tooltip_C_InitFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
