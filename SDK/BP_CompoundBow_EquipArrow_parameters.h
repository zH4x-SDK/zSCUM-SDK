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

// Function BP_CompoundBow_EquipArrow.BP_CompoundBow_EquipArrow_C.ExecuteUsingData
struct UBP_CompoundBow_EquipArrow_C_ExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CompoundBow_EquipArrow.BP_CompoundBow_EquipArrow_C.CanExecuteUsingData
struct UBP_CompoundBow_EquipArrow_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
