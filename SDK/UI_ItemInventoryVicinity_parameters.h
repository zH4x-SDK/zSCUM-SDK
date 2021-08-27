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

// Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Blink
struct UUI_ItemInventoryVicinity_C_Blink_Params
{
};

// Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Tick
struct UUI_ItemInventoryVicinity_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.InitBlueprint
struct UUI_ItemInventoryVicinity_C_InitBlueprint_Params
{
	TScriptInterface<class UInventoryNode>             Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.ExecuteUbergraph_UI_ItemInventoryVicinity
struct UUI_ItemInventoryVicinity_C_ExecuteUbergraph_UI_ItemInventoryVicinity_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
