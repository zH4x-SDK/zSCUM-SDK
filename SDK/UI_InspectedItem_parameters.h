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

// Function UI_InspectedItem.UI_InspectedItem_C.SetIsToolForSomething
struct UUI_InspectedItem_C_SetIsToolForSomething_Params
{
	bool                                               IsTool;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InspectedItem.UI_InspectedItem_C.ExecuteUbergraph_UI_InspectedItem
struct UUI_InspectedItem_C_ExecuteUbergraph_UI_InspectedItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
