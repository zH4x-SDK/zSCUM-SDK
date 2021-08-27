
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

// Function ObjectiveContainer.ObjectiveContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UObjectiveContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.Construct");

	UObjectiveContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectiveContainer.ObjectiveContainer_C.ExecuteUbergraph_ObjectiveContainer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UObjectiveContainer_C::ExecuteUbergraph_ObjectiveContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.ExecuteUbergraph_ObjectiveContainer");

	UObjectiveContainer_C_ExecuteUbergraph_ObjectiveContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObjectiveContainer.ObjectiveContainer_C.ObjectiveCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UObjectiveContainer_C::ObjectiveCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.ObjectiveCompleted__DelegateSignature");

	UObjectiveContainer_C_ObjectiveCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
