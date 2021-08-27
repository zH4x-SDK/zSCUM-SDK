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

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.IsReadyForReloadUsingEmptyClipAndAmmo
struct ABP_Weapon_M1_Garand_C_IsReadyForReloadUsingEmptyClipAndAmmo_Params
{
	bool                                               Ready;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.FindEmptyClip
struct ABP_Weapon_M1_Garand_C_FindEmptyClip_Params
{
	TArray<class AItem*>                               Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AItem*                                       Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.FindReloadData
struct ABP_Weapon_M1_Garand_C_FindReloadData_Params
{
	TArray<class AItem*>                               Items;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FWeaponReloadData                           reloadData;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.CanReloadUsingData
struct ABP_Weapon_M1_Garand_C_CanReloadUsingData_Params
{
	struct FWeaponReloadData                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.GetFiringMontage
struct ABP_Weapon_M1_Garand_C_GetFiringMontage_Params
{
	bool                                               isLastShot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UpdateReloadData
struct ABP_Weapon_M1_Garand_C_UpdateReloadData_Params
{
	struct FWeaponReloadData                           reloadDataIn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FWeaponReloadData                           reloadDataOut;                                            // (Parm, OutParm)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.GetAmmoReloadCapacity
struct ABP_Weapon_M1_Garand_C_GetAmmoReloadCapacity_Params
{
	class AAmmunitionItem*                             ammo;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.CanSwitchFiringMode
struct ABP_Weapon_M1_Garand_C_CanSwitchFiringMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UserConstructionScript
struct ABP_Weapon_M1_Garand_C_UserConstructionScript_Params
{
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ReceiveBeginPlay
struct ABP_Weapon_M1_Garand_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentAdded
struct ABP_Weapon_M1_Garand_C_OnAttachmentAdded_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentRemoved
struct ABP_Weapon_M1_Garand_C_OnAttachmentRemoved_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ExecuteUbergraph_BP_Weapon_M1_Garand
struct ABP_Weapon_M1_Garand_C_ExecuteUbergraph_BP_Weapon_M1_Garand_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
