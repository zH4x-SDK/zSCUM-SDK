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

// Function BP_Drone.BP_Drone_C.UserConstructionScript
struct ABP_Drone_C_UserConstructionScript_Params
{
};

// Function BP_Drone.BP_Drone_C.OnSilentModeChanged_BP
struct ABP_Drone_C_OnSilentModeChanged_BP_Params
{
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone
struct ABP_Drone_C_ExecuteUbergraph_BP_Drone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
