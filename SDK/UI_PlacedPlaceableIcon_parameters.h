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

// Function UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C.GetIcon
struct UUI_PlacedPlaceableIcon_C_GetIcon_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C.Init
struct UUI_PlacedPlaceableIcon_C_Init_Params
{
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
