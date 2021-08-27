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

// Function UI_SquadTooltip.UI_SquadTooltip_C.SetData
struct UUI_SquadTooltip_C_SetData_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Infromation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FConZSquadEmblem                            EmblemData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
