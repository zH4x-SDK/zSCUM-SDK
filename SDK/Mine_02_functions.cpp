
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

// Function Mine_02.Mine_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMine_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_02.Mine_02_C.UserConstructionScript");

	AMine_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_02.Mine_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMine_02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_02.Mine_02_C.ReceiveBeginPlay");

	AMine_02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_02.Mine_02_C.BP_OnArmed
// (Event, Public, BlueprintEvent)

void AMine_02_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_02.Mine_02_C.BP_OnArmed");

	AMine_02_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_02.Mine_02_C.BP_OnDisarmed
// (Event, Public, BlueprintEvent)

void AMine_02_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_02.Mine_02_C.BP_OnDisarmed");

	AMine_02_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_02.Mine_02_C.ExecuteUbergraph_Mine_02
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMine_02_C::ExecuteUbergraph_Mine_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_02.Mine_02_C.ExecuteUbergraph_Mine_02");

	AMine_02_C_ExecuteUbergraph_Mine_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
