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

// Function BP_M1_OpenEjectBulletInsertClip.BP_M1_OpenEjectBulletInsertClip_C.ExecuteUsingData
struct UBP_M1_OpenEjectBulletInsertClip_C_ExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_M1_OpenEjectBulletInsertClip.BP_M1_OpenEjectBulletInsertClip_C.CanExecuteUsingData
struct UBP_M1_OpenEjectBulletInsertClip_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_M1_OpenEjectBulletInsertClip.BP_M1_OpenEjectBulletInsertClip_C.ExecuteUbergraph_BP_M1_OpenEjectBulletInsertClip
struct UBP_M1_OpenEjectBulletInsertClip_C_ExecuteUbergraph_BP_M1_OpenEjectBulletInsertClip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
