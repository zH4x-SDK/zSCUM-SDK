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

// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.UpdatePreviewPrisoners
struct ABP_MainMenuGameMode_C_UpdatePreviewPrisoners_Params
{
	class UUserProfile*                                UserProfile;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.UserConstructionScript
struct ABP_MainMenuGameMode_C_UserConstructionScript_Params
{
};

// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveBeginPlay
struct ABP_MainMenuGameMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveTick
struct ABP_MainMenuGameMode_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ExecuteUbergraph_BP_MainMenuGameMode
struct ABP_MainMenuGameMode_C_ExecuteUbergraph_BP_MainMenuGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
