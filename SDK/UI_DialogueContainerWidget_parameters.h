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

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetHideAvatarAnimation
struct UUI_DialogueContainerWidget_C_GetHideAvatarAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetShowAvatarAnimation
struct UUI_DialogueContainerWidget_C_GetShowAvatarAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Construct
struct UUI_DialogueContainerWidget_C_Construct_Params
{
};

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Tick
struct UUI_DialogueContainerWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ExecuteUbergraph_UI_DialogueContainerWidget
struct UUI_DialogueContainerWidget_C_ExecuteUbergraph_UI_DialogueContainerWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
