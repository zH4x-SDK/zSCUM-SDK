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

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
struct UEasyAntiCheatNetComponent_ServerMessage_Params
{
	TArray<unsigned char>                              Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
struct UEasyAntiCheatNetComponent_ClientMessage_Params
{
	TArray<unsigned char>                              Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
