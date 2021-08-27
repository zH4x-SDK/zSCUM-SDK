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

// Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.Init
struct UUI_CraftingInfoInWorld_C_Init_Params
{
	class AItem*                                       itemCDO;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.SetCaptionAndDescription
struct UUI_CraftingInfoInWorld_C_SetCaptionAndDescription_Params
{
	struct FText                                       Caption;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       Description;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.ExecuteUbergraph_UI_CraftingInfoInWorld
struct UUI_CraftingInfoInWorld_C_ExecuteUbergraph_UI_CraftingInfoInWorld_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
