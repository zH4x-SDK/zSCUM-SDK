
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

// Function Candle_01.Candle_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACandle_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Candle_01.Candle_01_C.UserConstructionScript");

	ACandle_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
