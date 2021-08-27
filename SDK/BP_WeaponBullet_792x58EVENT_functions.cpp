
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

// Function BP_WeaponBullet_792x58EVENT.BP_WeaponBullet_792x58EVENT_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponBullet_792x58EVENT_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_792x58EVENT.BP_WeaponBullet_792x58EVENT_C.UserConstructionScript");

	ABP_WeaponBullet_792x58EVENT_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_792x58EVENT.BP_WeaponBullet_792x58EVENT_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeaponBullet_792x58EVENT_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_792x58EVENT.BP_WeaponBullet_792x58EVENT_C.ReceiveBeginPlay");

	ABP_WeaponBullet_792x58EVENT_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_792x58EVENT.BP_WeaponBullet_792x58EVENT_C.ExecuteUbergraph_BP_WeaponBullet_792x58EVENT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_792x58EVENT_C::ExecuteUbergraph_BP_WeaponBullet_792x58EVENT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_792x58EVENT.BP_WeaponBullet_792x58EVENT_C.ExecuteUbergraph_BP_WeaponBullet_792x58EVENT");

	ABP_WeaponBullet_792x58EVENT_C_ExecuteUbergraph_BP_WeaponBullet_792x58EVENT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
