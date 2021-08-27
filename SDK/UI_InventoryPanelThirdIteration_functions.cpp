
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

// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ReinitializeForPrisoner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::ReinitializeForPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ReinitializeForPrisoner");

	UUI_InventoryPanelThirdIteration_C_ReinitializeForPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ScrollToEquippedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::ScrollToEquippedItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ScrollToEquippedItem");

	UUI_InventoryPanelThirdIteration_C_ScrollToEquippedItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnDragLeave");

	UUI_InventoryPanelThirdIteration_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.SetDisplayedCharacterName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_InventoryPanelThirdIteration_C::SetDisplayedCharacterName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.SetDisplayedCharacterName");

	UUI_InventoryPanelThirdIteration_C_SetDisplayedCharacterName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ExecuteUbergraph_UI_InventoryPanelThirdIteration
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::ExecuteUbergraph_UI_InventoryPanelThirdIteration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ExecuteUbergraph_UI_InventoryPanelThirdIteration");

	UUI_InventoryPanelThirdIteration_C_ExecuteUbergraph_UI_InventoryPanelThirdIteration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
