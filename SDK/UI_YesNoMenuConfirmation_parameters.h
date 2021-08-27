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

// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.AdjustPosition
struct UUI_YesNoMenuConfirmation_C_AdjustPosition_Params
{
	struct FVector2D                                   adjustment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.Init
struct UUI_YesNoMenuConfirmation_C_Init_Params
{
	class UCanvasPanel*                                CanvasPanel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UUI_YesNoMenuConfirmation_C_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UUI_YesNoMenuConfirmation_C_BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.OnYes
struct UUI_YesNoMenuConfirmation_C_OnYes_Params
{
};

// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.ExecuteUbergraph_UI_YesNoMenuConfirmation
struct UUI_YesNoMenuConfirmation_C_ExecuteUbergraph_UI_YesNoMenuConfirmation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.YesClicked__DelegateSignature
struct UUI_YesNoMenuConfirmation_C_YesClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
