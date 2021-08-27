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

// Function BP_M1_OpenRemoveClipInsertClip.BP_M1_OpenRemoveClipInsertClip_C.CanExecuteUsingData
struct UBP_M1_OpenRemoveClipInsertClip_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_M1_OpenRemoveClipInsertClip.BP_M1_OpenRemoveClipInsertClip_C.OnActionAnimNotify
struct UBP_M1_OpenRemoveClipInsertClip_C_OnActionAnimNotify_Params
{
	ECharacterActionNotifyType                         notifyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_M1_OpenRemoveClipInsertClip.BP_M1_OpenRemoveClipInsertClip_C.ExecuteUbergraph_BP_M1_OpenRemoveClipInsertClip
struct UBP_M1_OpenRemoveClipInsertClip_C_ExecuteUbergraph_BP_M1_OpenRemoveClipInsertClip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
