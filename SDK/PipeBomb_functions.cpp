
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

// Function PipeBomb.PipeBomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APipeBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.UserConstructionScript");

	APipeBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PipeBomb.PipeBomb_C.BP_OnArmed
// (Event, Public, BlueprintEvent)

void APipeBomb_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.BP_OnArmed");

	APipeBomb_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PipeBomb.PipeBomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APipeBomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.ReceiveBeginPlay");

	APipeBomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PipeBomb.PipeBomb_C.BP_OnDisarmed
// (Event, Public, BlueprintEvent)

void APipeBomb_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.BP_OnDisarmed");

	APipeBomb_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PipeBomb.PipeBomb_C.ExecuteUbergraph_PipeBomb
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APipeBomb_C::ExecuteUbergraph_PipeBomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.ExecuteUbergraph_PipeBomb");

	APipeBomb_C_ExecuteUbergraph_PipeBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
