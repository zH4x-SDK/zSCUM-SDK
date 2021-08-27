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

// Function STF12_Reload_Event_NoChamber.STF12_Reload_Event_NoChamber_C.ExecuteUsingData
struct USTF12_Reload_Event_NoChamber_C_ExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STF12_Reload_Event_NoChamber.STF12_Reload_Event_NoChamber_C.CanExecuteUsingData
struct USTF12_Reload_Event_NoChamber_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function STF12_Reload_Event_NoChamber.STF12_Reload_Event_NoChamber_C.OnActionAnimNotify
struct USTF12_Reload_Event_NoChamber_C_OnActionAnimNotify_Params
{
	ECharacterActionNotifyType                         notifyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function STF12_Reload_Event_NoChamber.STF12_Reload_Event_NoChamber_C.ExecuteUbergraph_STF12_Reload_Event_NoChamber
struct USTF12_Reload_Event_NoChamber_C_ExecuteUbergraph_STF12_Reload_Event_NoChamber_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
