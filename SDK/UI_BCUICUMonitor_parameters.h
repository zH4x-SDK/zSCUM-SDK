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

// Function UI_BCUICUMonitor.UI_BCUICUMonitor_C.SetPrisoner
struct UUI_BCUICUMonitor_C_SetPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BCUICUMonitor.UI_BCUICUMonitor_C.Construct
struct UUI_BCUICUMonitor_C_Construct_Params
{
};

// Function UI_BCUICUMonitor.UI_BCUICUMonitor_C.ExecuteUbergraph_UI_BCUICUMonitor
struct UUI_BCUICUMonitor_C_ExecuteUbergraph_UI_BCUICUMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
