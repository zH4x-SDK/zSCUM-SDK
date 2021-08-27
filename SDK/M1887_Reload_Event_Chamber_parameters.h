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

// Function M1887_Reload_Event_Chamber.M1887_Reload_Event_Chamber_C.ExecuteUsingData
struct UM1887_Reload_Event_Chamber_C_ExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function M1887_Reload_Event_Chamber.M1887_Reload_Event_Chamber_C.CanExecuteUsingData
struct UM1887_Reload_Event_Chamber_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function M1887_Reload_Event_Chamber.M1887_Reload_Event_Chamber_C.OnActionAnimNotify
struct UM1887_Reload_Event_Chamber_C_OnActionAnimNotify_Params
{
	ECharacterActionNotifyType                         notifyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function M1887_Reload_Event_Chamber.M1887_Reload_Event_Chamber_C.ExecuteUbergraph_M1887_Reload_Event_Chamber
struct UM1887_Reload_Event_Chamber_C_ExecuteUbergraph_M1887_Reload_Event_Chamber_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
