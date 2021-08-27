
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

// Function Lock_Basic.Lock_Basic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALock_Basic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lock_Basic.Lock_Basic_C.UserConstructionScript");

	ALock_Basic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
