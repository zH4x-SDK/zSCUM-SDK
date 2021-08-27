
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

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.IsReadyForReloadUsingEmptyClipAndAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ready                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1_Garand_C::IsReadyForReloadUsingEmptyClipAndAmmo(bool* Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.IsReadyForReloadUsingEmptyClipAndAmmo");

	ABP_Weapon_M1_Garand_C_IsReadyForReloadUsingEmptyClipAndAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ready != nullptr)
		*Ready = params.Ready;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.FindEmptyClip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AItem*>           Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AItem*                   Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1_Garand_C::FindEmptyClip(TArray<class AItem*>* Items, class AItem** Item, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.FindEmptyClip");

	ABP_Weapon_M1_Garand_C_FindEmptyClip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Item != nullptr)
		*Item = params.Item;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.FindReloadData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AItem*>           Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FWeaponReloadData       reloadData                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_M1_Garand_C::FindReloadData(TArray<class AItem*> Items, struct FWeaponReloadData* reloadData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.FindReloadData");

	ABP_Weapon_M1_Garand_C_FindReloadData_Params params;
	params.Items = Items;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (reloadData != nullptr)
		*reloadData = params.reloadData;

	return params.ReturnValue;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.CanReloadUsingData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FWeaponReloadData       Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_M1_Garand_C::CanReloadUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.CanReloadUsingData");

	ABP_Weapon_M1_Garand_C_CanReloadUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.GetFiringMontage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           isLastShot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* ABP_Weapon_M1_Garand_C::GetFiringMontage(bool isLastShot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.GetFiringMontage");

	ABP_Weapon_M1_Garand_C_GetFiringMontage_Params params;
	params.isLastShot = isLastShot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UpdateReloadData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponReloadData       reloadDataIn                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FWeaponReloadData       reloadDataOut                  (Parm, OutParm)

void ABP_Weapon_M1_Garand_C::UpdateReloadData(struct FWeaponReloadData* reloadDataIn, struct FWeaponReloadData* reloadDataOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UpdateReloadData");

	ABP_Weapon_M1_Garand_C_UpdateReloadData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (reloadDataIn != nullptr)
		*reloadDataIn = params.reloadDataIn;
	if (reloadDataOut != nullptr)
		*reloadDataOut = params.reloadDataOut;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.GetAmmoReloadCapacity
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAmmunitionItem*         ammo                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Weapon_M1_Garand_C::GetAmmoReloadCapacity(class AAmmunitionItem* ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.GetAmmoReloadCapacity");

	ABP_Weapon_M1_Garand_C_GetAmmoReloadCapacity_Params params;
	params.ammo = ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.CanSwitchFiringMode
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_M1_Garand_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.CanSwitchFiringMode");

	ABP_Weapon_M1_Garand_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_M1_Garand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UserConstructionScript");

	ABP_Weapon_M1_Garand_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_M1_Garand_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ReceiveBeginPlay");

	ABP_Weapon_M1_Garand_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1_Garand_C::OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentAdded");

	ABP_Weapon_M1_Garand_C_OnAttachmentAdded_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1_Garand_C::OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentRemoved");

	ABP_Weapon_M1_Garand_C_OnAttachmentRemoved_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ExecuteUbergraph_BP_Weapon_M1_Garand
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1_Garand_C::ExecuteUbergraph_BP_Weapon_M1_Garand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ExecuteUbergraph_BP_Weapon_M1_Garand");

	ABP_Weapon_M1_Garand_C_ExecuteUbergraph_BP_Weapon_M1_Garand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
