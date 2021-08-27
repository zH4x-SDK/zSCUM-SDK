
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

// Function Menu.Menu_C.UpdateDroneVisual
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMenu_C::UpdateDroneVisual()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.UpdateDroneVisual");

	AMenu_C_UpdateDroneVisual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMenu_C::InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1");

	AMenu_C_InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ReceiveBeginPlay");

	AMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenu_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ReceiveTick");

	AMenu_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Recapture
// (BlueprintCallable, BlueprintEvent)

void AMenu_C::Recapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Recapture");

	AMenu_C_Recapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.ExecuteUbergraph_Menu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenu_C::ExecuteUbergraph_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ExecuteUbergraph_Menu");

	AMenu_C_ExecuteUbergraph_Menu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
