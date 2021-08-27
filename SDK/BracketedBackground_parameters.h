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

// Function BracketedBackground.BracketedBackground_C.SetAlarmBackgroundColor
struct UBracketedBackground_C_SetAlarmBackgroundColor_Params
{
};

// Function BracketedBackground.BracketedBackground_C.SetNormalBackgroundColor
struct UBracketedBackground_C_SetNormalBackgroundColor_Params
{
};

// Function BracketedBackground.BracketedBackground_C.SetBackgroundColor
struct UBracketedBackground_C_SetBackgroundColor_Params
{
	struct FLinearColor                                colorToSet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
