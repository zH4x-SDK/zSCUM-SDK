
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

// Function UI_MicInputIndicator.UI_MicInputIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MicInputIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MicInputIndicator.UI_MicInputIndicator_C.Tick");

	UUI_MicInputIndicator_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MicInputIndicator.UI_MicInputIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MicInputIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MicInputIndicator.UI_MicInputIndicator_C.Construct");

	UUI_MicInputIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MicInputIndicator.UI_MicInputIndicator_C.ExecuteUbergraph_UI_MicInputIndicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MicInputIndicator_C::ExecuteUbergraph_UI_MicInputIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MicInputIndicator.UI_MicInputIndicator_C.ExecuteUbergraph_UI_MicInputIndicator");

	UUI_MicInputIndicator_C_ExecuteUbergraph_UI_MicInputIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
