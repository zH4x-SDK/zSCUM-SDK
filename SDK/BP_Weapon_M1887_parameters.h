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

// Function BP_Weapon_M1887.BP_Weapon_M1887_C.CanSwitchFiringMode
struct ABP_Weapon_M1887_C_CanSwitchFiringMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M1887.BP_Weapon_M1887_C.GetAmmoReloadCapacity
struct ABP_Weapon_M1887_C_GetAmmoReloadCapacity_Params
{
	class AAmmunitionItem*                             ammo;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M1887.BP_Weapon_M1887_C.GetWidgetDisplayInfo
struct ABP_Weapon_M1887_C_GetWidgetDisplayInfo_Params
{
	struct FWidgetDisplayInfo                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Weapon_M1887.BP_Weapon_M1887_C.UserConstructionScript
struct ABP_Weapon_M1887_C_UserConstructionScript_Params
{
};

// Function BP_Weapon_M1887.BP_Weapon_M1887_C.ReceiveBeginPlay
struct ABP_Weapon_M1887_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_M1887.BP_Weapon_M1887_C.FillUpWithAmmo
struct ABP_Weapon_M1887_C_FillUpWithAmmo_Params
{
};

// Function BP_Weapon_M1887.BP_Weapon_M1887_C.ExecuteUbergraph_BP_Weapon_M1887
struct ABP_Weapon_M1887_C_ExecuteUbergraph_BP_Weapon_M1887_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
