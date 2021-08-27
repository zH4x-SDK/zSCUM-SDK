
#include "../SDK.h"

// Name: SCUM, Version: 4.20.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.CanSwitchFiringMode
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_MosinNagant_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.CanSwitchFiringMode");

	ABP_Weapon_MosinNagant_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.GetAmmoReloadCapacity
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAmmunitionItem*         ammo                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Weapon_MosinNagant_C::GetAmmoReloadCapacity(class AAmmunitionItem* ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.GetAmmoReloadCapacity");

	ABP_Weapon_MosinNagant_C_GetAmmoReloadCapacity_Params params;
	params.ammo = ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_MosinNagant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.UserConstructionScript");

	ABP_Weapon_MosinNagant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_MosinNagant_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.ReceiveBeginPlay");

	ABP_Weapon_MosinNagant_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.ExecuteUbergraph_BP_Weapon_MosinNagant
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MosinNagant_C::ExecuteUbergraph_BP_Weapon_MosinNagant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.ExecuteUbergraph_BP_Weapon_MosinNagant");

	ABP_Weapon_MosinNagant_C_ExecuteUbergraph_BP_Weapon_MosinNagant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
