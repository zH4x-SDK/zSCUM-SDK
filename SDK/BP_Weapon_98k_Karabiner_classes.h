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

// BlueprintGeneratedClass BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C
// 0x0060 (0x1490 - 0x1430)
class ABP_Weapon_98k_Karabiner_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1430(0x0008) (Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWeaponReloadData                           FinalReloadData;                                          // 0x1440(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWeaponReloadData                           NewVar_1;                                                 // 0x1468(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C");
		return ptr;
	}


	bool CanSwitchFiringMode();
	int GetAmmoReloadCapacity(class AAmmunitionItem* ammo);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Weapon_98k_Karabiner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
