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

// Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.Init
struct UUI_CraftingInfoSecondIteration_C_Init_Params
{
	class AItem*                                       itemCDO;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.SetCaptionAndDescription
struct UUI_CraftingInfoSecondIteration_C_SetCaptionAndDescription_Params
{
	struct FText                                       Caption;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       Description;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.ExecuteUbergraph_UI_CraftingInfoSecondIteration
struct UUI_CraftingInfoSecondIteration_C_ExecuteUbergraph_UI_CraftingInfoSecondIteration_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
