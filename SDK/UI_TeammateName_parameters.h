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

// Function UI_TeammateName.UI_TeammateName_C.GetName
struct UUI_TeammateName_C_GetName_Params
{
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function UI_TeammateName.UI_TeammateName_C.SetName
struct UUI_TeammateName_C_SetName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
