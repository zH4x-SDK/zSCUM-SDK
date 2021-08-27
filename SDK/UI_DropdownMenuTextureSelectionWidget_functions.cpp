
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

// Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_DropdownMenuTextureSelectionWidget_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.OnMouseButtonDown_1");

	UUI_DropdownMenuTextureSelectionWidget_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DropdownMenuTextureSelectionWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.PreConstruct");

	UUI_DropdownMenuTextureSelectionWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.Update
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_DropdownMenuTextureSelectionWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.Update");

	UUI_DropdownMenuTextureSelectionWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DropdownMenuTextureSelectionWidget_C::ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget");

	UUI_DropdownMenuTextureSelectionWidget_C_ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
