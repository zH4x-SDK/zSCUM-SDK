
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

// Function UI_Mission.UI_Mission_C.GetCompleteObjectiveAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UUI_Mission_C::GetCompleteObjectiveAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Mission.UI_Mission_C.GetCompleteObjectiveAnimation");

	UUI_Mission_C_GetCompleteObjectiveAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Mission.UI_Mission_C.GetStartObjectiveAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UUI_Mission_C::GetStartObjectiveAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Mission.UI_Mission_C.GetStartObjectiveAnimation");

	UUI_Mission_C_GetStartObjectiveAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
