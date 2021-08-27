
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

// Function UI_CraftingComponentTooltip.UI_CraftingComponentTooltip_C.InitFromItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CraftingComponent_C* componentWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CraftingComponentTooltip_C::InitFromItem(class UUI_CraftingComponent_C* componentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponentTooltip.UI_CraftingComponentTooltip_C.InitFromItem");

	UUI_CraftingComponentTooltip_C_InitFromItem_Params params;
	params.componentWidget = componentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
