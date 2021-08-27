#pragma once

// Name: SCUM, Version: 4.20.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DesertEagle_InsertMagazineChamber.BP_DesertEagle_InsertMagazineChamber_C
// 0x0004 (0x008C - 0x0088)
class UBP_DesertEagle_InsertMagazineChamber_C : public UInsertMagazine
{
public:
	int                                                MaxAmmoCount;                                             // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DesertEagle_InsertMagazineChamber.BP_DesertEagle_InsertMagazineChamber_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
