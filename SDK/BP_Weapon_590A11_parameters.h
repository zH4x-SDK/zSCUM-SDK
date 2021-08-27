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

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.CanSwitchFiringMode
struct ABP_Weapon_590A11_C_CanSwitchFiringMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.GetWidgetDisplayInfo
struct ABP_Weapon_590A11_C_GetWidgetDisplayInfo_Params
{
	struct FWidgetDisplayInfo                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.UserConstructionScript
struct ABP_Weapon_590A11_C_UserConstructionScript_Params
{
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.FillUpWithAmmo
struct ABP_Weapon_590A11_C_FillUpWithAmmo_Params
{
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.ReceiveBeginPlay
struct ABP_Weapon_590A11_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.OnAttachmentAdded
struct ABP_Weapon_590A11_C_OnAttachmentAdded_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.OnAttachmentRemoved
struct ABP_Weapon_590A11_C_OnAttachmentRemoved_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.ExecuteUbergraph_BP_Weapon_590A11
struct ABP_Weapon_590A11_C_ExecuteUbergraph_BP_Weapon_590A11_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
