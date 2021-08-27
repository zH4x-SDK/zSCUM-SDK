
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

// Function BP_AK15_RemoveMagInsertMagChamber.BP_AK15_RemoveMagInsertMagChamber_C.CanExecuteUsingData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FWeaponReloadData       Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AK15_RemoveMagInsertMagChamber_C::CanExecuteUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AK15_RemoveMagInsertMagChamber.BP_AK15_RemoveMagInsertMagChamber_C.CanExecuteUsingData");

	UBP_AK15_RemoveMagInsertMagChamber_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
