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

// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Label_Text
struct UUI_WaypointWidget_C_Get_Label_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Accent_Brush
struct UUI_WaypointWidget_C_Get_Accent_Brush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Color
struct UUI_WaypointWidget_C_Get_Emphasis_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Visibility
struct UUI_WaypointWidget_C_Get_Emphasis_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Visibility
struct UUI_WaypointWidget_C_Get_Bar_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Distance_Text
struct UUI_WaypointWidget_C_Get_Distance_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Brush
struct UUI_WaypointWidget_C_Get_Bar_Brush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_BigPointer_Visibility
struct UUI_WaypointWidget_C_Get_BigPointer_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_SmallPointer_Visibility
struct UUI_WaypointWidget_C_Get_SmallPointer_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Icon_Brush
struct UUI_WaypointWidget_C_Get_Icon_Brush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_WaypointWidget.UI_WaypointWidget_C.Tick
struct UUI_WaypointWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WaypointWidget.UI_WaypointWidget_C.ExecuteUbergraph_UI_WaypointWidget
struct UUI_WaypointWidget_C_ExecuteUbergraph_UI_WaypointWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
