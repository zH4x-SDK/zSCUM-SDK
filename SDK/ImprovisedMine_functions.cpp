
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

// Function ImprovisedMine.ImprovisedMine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AImprovisedMine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedMine.ImprovisedMine_C.UserConstructionScript");

	AImprovisedMine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedMine.ImprovisedMine_C.BP_OnArmed
// (Event, Public, BlueprintEvent)

void AImprovisedMine_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedMine.ImprovisedMine_C.BP_OnArmed");

	AImprovisedMine_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedMine.ImprovisedMine_C.BP_OnDisarmed
// (Event, Public, BlueprintEvent)

void AImprovisedMine_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedMine.ImprovisedMine_C.BP_OnDisarmed");

	AImprovisedMine_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedMine.ImprovisedMine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AImprovisedMine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedMine.ImprovisedMine_C.ReceiveBeginPlay");

	AImprovisedMine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedMine.ImprovisedMine_C.ExecuteUbergraph_ImprovisedMine
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AImprovisedMine_C::ExecuteUbergraph_ImprovisedMine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedMine.ImprovisedMine_C.ExecuteUbergraph_ImprovisedMine");

	AImprovisedMine_C_ExecuteUbergraph_ImprovisedMine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
