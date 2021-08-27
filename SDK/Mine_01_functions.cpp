
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

// Function Mine_01.Mine_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMine_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.UserConstructionScript");

	AMine_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_01.Mine_01_C.BP_OnArmed
// (Event, Public, BlueprintEvent)

void AMine_01_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.BP_OnArmed");

	AMine_01_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_01.Mine_01_C.BP_OnDisarmed
// (Event, Public, BlueprintEvent)

void AMine_01_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.BP_OnDisarmed");

	AMine_01_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_01.Mine_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMine_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.ReceiveBeginPlay");

	AMine_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_01.Mine_01_C.ExecuteUbergraph_Mine_01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMine_01_C::ExecuteUbergraph_Mine_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.ExecuteUbergraph_Mine_01");

	AMine_01_C_ExecuteUbergraph_Mine_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
