
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

// Function UI_CharacterSelection.UI_CharacterSelection_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CharacterSelection_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnPreviewKeyDown");

	UUI_CharacterSelection_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CharacterSelection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.Construct");

	UUI_CharacterSelection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.OnESC
// (BlueprintCallable, BlueprintEvent)

void UUI_CharacterSelection_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnESC");

	UUI_CharacterSelection_C_OnESC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.CancelCriminalRecord
// (BlueprintCallable, BlueprintEvent)

void UUI_CharacterSelection_C::CancelCriminalRecord()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.CancelCriminalRecord");

	UUI_CharacterSelection_C_CancelCriminalRecord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.CancelDeleteCharacter
// (BlueprintCallable, BlueprintEvent)

void UUI_CharacterSelection_C::CancelDeleteCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.CancelDeleteCharacter");

	UUI_CharacterSelection_C_CancelDeleteCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.Back
// (BlueprintCallable, BlueprintEvent)

void UUI_CharacterSelection_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.Back");

	UUI_CharacterSelection_C_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterDeleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CharacterSlot_C*     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CharacterSelection_C::OnCharacterDeleted(class UUI_CharacterSlot_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterDeleted");

	UUI_CharacterSelection_C_OnCharacterDeleted_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserProfile*            UserProfile                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterSelection_C::OnCharacterSelected(class UUserProfile* UserProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterSelected");

	UUI_CharacterSelection_C_OnCharacterSelected_Params params;
	params.UserProfile = UserProfile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.ExecuteUbergraph_UI_CharacterSelection
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterSelection_C::ExecuteUbergraph_UI_CharacterSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.ExecuteUbergraph_UI_CharacterSelection");

	UUI_CharacterSelection_C_ExecuteUbergraph_UI_CharacterSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
