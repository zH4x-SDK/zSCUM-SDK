
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

// Function StakePitTrap.StakePitTrap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStakePitTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StakePitTrap.StakePitTrap_C.UserConstructionScript");

	AStakePitTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StakePitTrap.StakePitTrap_C.BP_OnTriggered
// (Event, Public, BlueprintEvent)

void AStakePitTrap_C::BP_OnTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function StakePitTrap.StakePitTrap_C.BP_OnTriggered");

	AStakePitTrap_C_BP_OnTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StakePitTrap.StakePitTrap_C.ExecuteUbergraph_StakePitTrap
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStakePitTrap_C::ExecuteUbergraph_StakePitTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StakePitTrap.StakePitTrap_C.ExecuteUbergraph_StakePitTrap");

	AStakePitTrap_C_ExecuteUbergraph_StakePitTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
