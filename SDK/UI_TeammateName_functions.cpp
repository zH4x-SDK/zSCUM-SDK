
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

// Function UI_TeammateName.UI_TeammateName_C.GetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void UUI_TeammateName_C::GetName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeammateName.UI_TeammateName_C.GetName");

	UUI_TeammateName_C_GetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function UI_TeammateName.UI_TeammateName_C.SetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_TeammateName_C::SetName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeammateName.UI_TeammateName_C.SetName");

	UUI_TeammateName_C_SetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
