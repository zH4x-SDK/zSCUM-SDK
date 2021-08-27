
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

// Function A_2.A_1_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AA_1_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_2.A_1_C.ReceiveTick");

	AA_1_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_2.A_1_C.ExecuteUbergraph_A_2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AA_1_C::ExecuteUbergraph_A_2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_2.A_1_C.ExecuteUbergraph_A_2");

	AA_1_C_ExecuteUbergraph_A_2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
