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

// Function SkyLight_Blueprint.SkyLight_Blueprint_C.UserConstructionScript
struct ASkyLight_Blueprint_C_UserConstructionScript_Params
{
};

// Function SkyLight_Blueprint.SkyLight_Blueprint_C.ReceiveBeginPlay
struct ASkyLight_Blueprint_C_ReceiveBeginPlay_Params
{
};

// Function SkyLight_Blueprint.SkyLight_Blueprint_C.ReceiveTick
struct ASkyLight_Blueprint_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkyLight_Blueprint.SkyLight_Blueprint_C.ExecuteUbergraph_SkyLight_Blueprint
struct ASkyLight_Blueprint_C_ExecuteUbergraph_SkyLight_Blueprint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
