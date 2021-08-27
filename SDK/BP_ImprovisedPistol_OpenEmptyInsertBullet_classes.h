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

// BlueprintGeneratedClass BP_ImprovisedPistol_OpenEmptyInsertBullet.BP_ImprovisedPistol_OpenEmptyInsertBullet_C
// 0x0000 (0x0098 - 0x0098)
class UBP_ImprovisedPistol_OpenEmptyInsertBullet_C : public UInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ImprovisedPistol_OpenEmptyInsertBullet.BP_ImprovisedPistol_OpenEmptyInsertBullet_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
