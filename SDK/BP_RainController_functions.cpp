
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

// Function BP_RainController.BP_RainController_C.DisableRain
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RainController_C::DisableRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.DisableRain");

	ABP_RainController_C_DisableRain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.EnableRain
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RainController_C::EnableRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.EnableRain");

	ABP_RainController_C_EnableRain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RainController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.UserConstructionScript");

	ABP_RainController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_RainController_C::BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature");

	ABP_RainController_C_BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RainController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveEndPlay");

	ABP_RainController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_RainController_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveDestroyed");

	ABP_RainController_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ShiftCam
// (BlueprintCallable, BlueprintEvent)

void ABP_RainController_C::ShiftCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ShiftCam");

	ABP_RainController_C_ShiftCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RainController_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveTick");

	ABP_RainController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RainController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveBeginPlay");

	ABP_RainController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ExecuteUbergraph_BP_RainController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RainController_C::ExecuteUbergraph_BP_RainController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ExecuteUbergraph_BP_RainController");

	ABP_RainController_C_ExecuteUbergraph_BP_RainController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
