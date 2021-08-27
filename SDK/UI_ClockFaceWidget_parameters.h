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

// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetBrightness
struct UUI_ClockFaceWidget_C_SetBrightness_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.AppendZero
struct UUI_ClockFaceWidget_C_AppendZero_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetHours
struct UUI_ClockFaceWidget_C_SetHours_Params
{
	int                                                Hours;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetMinutes
struct UUI_ClockFaceWidget_C_SetMinutes_Params
{
	int                                                Minutes;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.ExecuteUbergraph_UI_ClockFaceWidget
struct UUI_ClockFaceWidget_C_ExecuteUbergraph_UI_ClockFaceWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
