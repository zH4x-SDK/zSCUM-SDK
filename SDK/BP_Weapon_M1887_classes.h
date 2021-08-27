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

// BlueprintGeneratedClass BP_Weapon_M1887.BP_Weapon_M1887_C
// 0x0038 (0x1468 - 0x1430)
class ABP_Weapon_M1887_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1430(0x0008) (Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWeaponReloadData                           ModifiedReloadData;                                       // 0x1440(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_M1887.BP_Weapon_M1887_C");
		return ptr;
	}


	bool CanSwitchFiringMode();
	int GetAmmoReloadCapacity(class AAmmunitionItem* ammo);
	struct FWidgetDisplayInfo GetWidgetDisplayInfo();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FillUpWithAmmo();
	void ExecuteUbergraph_BP_Weapon_M1887(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
