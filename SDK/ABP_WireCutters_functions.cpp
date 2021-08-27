
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

// Function ABP_WireCutters.ABP_WireCutters_C.ExecuteUbergraph_ABP_WireCutters
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_WireCutters_C::ExecuteUbergraph_ABP_WireCutters(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WireCutters.ABP_WireCutters_C.ExecuteUbergraph_ABP_WireCutters");

	UABP_WireCutters_C_ExecuteUbergraph_ABP_WireCutters_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
