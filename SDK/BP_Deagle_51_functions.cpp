
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

// Function BP_Deagle_51.BP_DEagle_50_C.CanSwitchFiringMode
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DEagle_50_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deagle_51.BP_DEagle_50_C.CanSwitchFiringMode");

	ABP_DEagle_50_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Deagle_51.BP_DEagle_50_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DEagle_50_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deagle_51.BP_DEagle_50_C.UserConstructionScript");

	ABP_DEagle_50_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Deagle_51.BP_DEagle_50_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DEagle_50_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deagle_51.BP_DEagle_50_C.ReceiveBeginPlay");

	ABP_DEagle_50_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Deagle_51.BP_DEagle_50_C.ExecuteUbergraph_BP_DEagle_51
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DEagle_50_C::ExecuteUbergraph_BP_DEagle_51(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deagle_51.BP_DEagle_50_C.ExecuteUbergraph_BP_DEagle_51");

	ABP_DEagle_50_C_ExecuteUbergraph_BP_DEagle_51_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
