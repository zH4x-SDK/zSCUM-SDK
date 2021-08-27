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

// Function BP_Weapon_AS_Val.BP_Weapon_AS_Val_C.CanAddAttachment
struct ABP_Weapon_AS_Val_C_CanAddAttachment_Params
{
	class AWeaponAttachment*                           Attachment;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_AS_Val.BP_Weapon_AS_Val_C.UserConstructionScript
struct ABP_Weapon_AS_Val_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
