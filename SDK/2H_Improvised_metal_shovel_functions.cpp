
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

// Function 2H_Improvised_metal_shovel.2H_Improvised_metal_shovel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void A2H_Improvised_metal_shovel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function 2H_Improvised_metal_shovel.2H_Improvised_metal_shovel_C.UserConstructionScript");

	A2H_Improvised_metal_shovel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
