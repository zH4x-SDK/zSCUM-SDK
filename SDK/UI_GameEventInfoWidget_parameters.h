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

// Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.UpdateStats
struct UUI_GameEventInfoWidget_C_UpdateStats_Params
{
	class AGameEventBase*                              _gameEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.ExecuteUbergraph_UI_GameEventInfoWidget
struct UUI_GameEventInfoWidget_C_ExecuteUbergraph_UI_GameEventInfoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
