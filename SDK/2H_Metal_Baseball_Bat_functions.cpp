
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

// Function 2H_Metal_Baseball_Bat.2H_Metal_Baseball_Bat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void A2H_Metal_Baseball_Bat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function 2H_Metal_Baseball_Bat.2H_Metal_Baseball_Bat_C.UserConstructionScript");

	A2H_Metal_Baseball_Bat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
