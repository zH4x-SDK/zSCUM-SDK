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

// BlueprintGeneratedClass BP_AK15_RemoveMagInsertBulletChamber.BP_AK15_RemoveMagInsertBulletChamber_C
// 0x0000 (0x0088 - 0x0088)
class UBP_AK15_RemoveMagInsertBulletChamber_C : public URemoveMagazineInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AK15_RemoveMagInsertBulletChamber.BP_AK15_RemoveMagInsertBulletChamber_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
