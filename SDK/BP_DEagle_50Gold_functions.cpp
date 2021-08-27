
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

// Function BP_DEagle_50Gold.BP_DEagle_50Gold_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DEagle_50Gold_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DEagle_50Gold.BP_DEagle_50Gold_C.UserConstructionScript");

	ABP_DEagle_50Gold_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
