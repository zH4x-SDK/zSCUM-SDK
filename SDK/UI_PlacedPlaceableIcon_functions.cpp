
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

// Function UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C.GetIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PlacedPlaceableIcon_C::GetIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C.GetIcon");

	UUI_PlacedPlaceableIcon_C_GetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PlacedPlaceableIcon_C::Init(class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C.Init");

	UUI_PlacedPlaceableIcon_C_Init_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
