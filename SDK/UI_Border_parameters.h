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

// Function UI_Border.UI_Border_C.SetColor
struct UUI_Border_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_Border.UI_Border_C.OnSynchronizeProperties
struct UUI_Border_C_OnSynchronizeProperties_Params
{
};

// Function UI_Border.UI_Border_C.ExecuteUbergraph_UI_Border
struct UUI_Border_C_ExecuteUbergraph_UI_Border_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
