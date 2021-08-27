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

// Function BP_M1_OpenInsertBulletLoop.BP_M1_OpenInsertBulletLoop_C.ExecuteUsingData
struct UBP_M1_OpenInsertBulletLoop_C_ExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_M1_OpenInsertBulletLoop.BP_M1_OpenInsertBulletLoop_C.CanExecuteUsingData
struct UBP_M1_OpenInsertBulletLoop_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_M1_OpenInsertBulletLoop.BP_M1_OpenInsertBulletLoop_C.OnActionAnimNotify
struct UBP_M1_OpenInsertBulletLoop_C_OnActionAnimNotify_Params
{
	ECharacterActionNotifyType                         notifyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_M1_OpenInsertBulletLoop.BP_M1_OpenInsertBulletLoop_C.ExecuteUbergraph_BP_M1_OpenInsertBulletLoop
struct UBP_M1_OpenInsertBulletLoop_C_ExecuteUbergraph_BP_M1_OpenInsertBulletLoop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
