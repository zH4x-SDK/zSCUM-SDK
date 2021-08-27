
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

// Function UI_SquadEmblem.UI_SquadEmblem_C.GetEmblemData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConZSquadEmblem        Data                           (Parm, OutParm, IsPlainOldData)

void UUI_SquadEmblem_C::GetEmblemData(struct FConZSquadEmblem* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEmblem.UI_SquadEmblem_C.GetEmblemData");

	UUI_SquadEmblem_C_GetEmblemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function UI_SquadEmblem.UI_SquadEmblem_C.SetEmblemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConZSquadEmblem        Data                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUI_SquadEmblem_C::SetEmblemData(const struct FConZSquadEmblem& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEmblem.UI_SquadEmblem_C.SetEmblemData");

	UUI_SquadEmblem_C_SetEmblemData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEmblem.UI_SquadEmblem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadEmblem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEmblem.UI_SquadEmblem_C.PreConstruct");

	UUI_SquadEmblem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEmblem.UI_SquadEmblem_C.ExecuteUbergraph_UI_SquadEmblem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadEmblem_C::ExecuteUbergraph_UI_SquadEmblem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEmblem.UI_SquadEmblem_C.ExecuteUbergraph_UI_SquadEmblem");

	UUI_SquadEmblem_C_ExecuteUbergraph_UI_SquadEmblem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
