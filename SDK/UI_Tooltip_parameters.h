#pragma once

#include "../SDK.h"

// Name: SCUM, Version: 4.20.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_Tooltip.UI_Tooltip_C.InitFromInventoryNode
struct UUI_Tooltip_C_InitFromInventoryNode_Params
{
	TScriptInterface<class UInventoryNode>             Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Tooltip.UI_Tooltip_C.UpdateDebugText
struct UUI_Tooltip_C_UpdateDebugText_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Tooltip.UI_Tooltip_C.GetItemDurability
struct UUI_Tooltip_C_GetItemDurability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Tooltip.UI_Tooltip_C.InitFromCaptionAndDescription
struct UUI_Tooltip_C_InitFromCaptionAndDescription_Params
{
	struct FText                                       Caption;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_Tooltip.UI_Tooltip_C.InitFromItem
struct UUI_Tooltip_C_InitFromItem_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
