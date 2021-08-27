
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

// Function BP_Ocean.BP_Ocean_C.Set Global Parameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Ocean_C::Set_Global_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Set Global Parameters");

	ABP_Ocean_C_Set_Global_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.Set Display Parameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Ocean_C::Set_Display_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Set Display Parameters");

	ABP_Ocean_C_Set_Display_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.Create Wave Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Ocean_C::Create_Wave_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Create Wave Set");

	ABP_Ocean_C_Create_Wave_Set_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Ocean_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.UserConstructionScript");

	ABP_Ocean_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ocean_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay");

	ABP_Ocean_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.SetNetworkOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ocean_C::SetNetworkOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.SetNetworkOffset");

	ABP_Ocean_C_SetNetworkOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.MySetNetworkOffset
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ocean_C::MySetNetworkOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.MySetNetworkOffset");

	ABP_Ocean_C_MySetNetworkOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ocean_C::ExecuteUbergraph_BP_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean");

	ABP_Ocean_C_ExecuteUbergraph_BP_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
