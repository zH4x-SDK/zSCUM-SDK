
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

// Function 1H_Improvised_metal_knife.1H_Improvised_metal_knife_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void A1H_Improvised_metal_knife_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function 1H_Improvised_metal_knife.1H_Improvised_metal_knife_C.UserConstructionScript");

	A1H_Improvised_metal_knife_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
