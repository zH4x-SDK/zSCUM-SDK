
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

// Function UI_HandPanel3.UI_HandPanel3_C.GetQuickAccessAt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuickAccessItemSwitcher3* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UQuickAccessItemSwitcher3* UUI_HandPanel3_C::GetQuickAccessAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandPanel3.UI_HandPanel3_C.GetQuickAccessAt");

	UUI_HandPanel3_C_GetQuickAccessAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
