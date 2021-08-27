
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

// Function VitalsMonitor.VitalsMonitor_C.shouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalsMonitor_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.shouldAlarmBeOn");

	UVitalsMonitor_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function VitalsMonitor.VitalsMonitor_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UVitalsMonitor_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.Init");

	UVitalsMonitor_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalsMonitor_C::SetPrisonerAndLifeComponentToMonitor(class APrisoner* Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.SetPrisonerAndLifeComponentToMonitor");

	UVitalsMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function VitalsMonitor.VitalsMonitor_C.GetHeartRateBPM
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalsMonitor_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.GetHeartRateBPM");

	UVitalsMonitor_C_GetHeartRateBPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalsMonitor.VitalsMonitor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVitalsMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.Construct");

	UVitalsMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalsMonitor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.Tick");

	UVitalsMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UVitalsMonitor_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.AlarmOnWindowContent");

	UVitalsMonitor_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void UVitalsMonitor_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.AlarmOffWindowContent");

	UVitalsMonitor_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.ExecuteUbergraph_VitalsMonitor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalsMonitor_C::ExecuteUbergraph_VitalsMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.ExecuteUbergraph_VitalsMonitor");

	UVitalsMonitor_C_ExecuteUbergraph_VitalsMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
