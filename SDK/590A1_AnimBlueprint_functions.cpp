
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

// Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_590A1_AnimBlueprint_AnimGraphNode_ModifyBone_561A74914456A1C12221C48F1B74D990
// (BlueprintEvent)

void U590A1_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_590A1_AnimBlueprint_AnimGraphNode_ModifyBone_561A74914456A1C12221C48F1B74D990()
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_590A1_AnimBlueprint_AnimGraphNode_ModifyBone_561A74914456A1C12221C48F1B74D990");

	U590A1_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_590A1_AnimBlueprint_AnimGraphNode_ModifyBone_561A74914456A1C12221C48F1B74D990_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_590A1_AnimBlueprint_AnimGraphNode_BlendListByEnum_89A79703467B580947D221946A82A8AF
// (BlueprintEvent)

void U590A1_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_590A1_AnimBlueprint_AnimGraphNode_BlendListByEnum_89A79703467B580947D221946A82A8AF()
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_590A1_AnimBlueprint_AnimGraphNode_BlendListByEnum_89A79703467B580947D221946A82A8AF");

	U590A1_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_590A1_AnimBlueprint_AnimGraphNode_BlendListByEnum_89A79703467B580947D221946A82A8AF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U590A1_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.BlueprintUpdateAnimation");

	U590A1_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.ExecuteUbergraph_590A1_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U590A1_AnimBlueprint_C::ExecuteUbergraph_590A1_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.ExecuteUbergraph_590A1_AnimBlueprint");

	U590A1_AnimBlueprint_C_ExecuteUbergraph_590A1_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
