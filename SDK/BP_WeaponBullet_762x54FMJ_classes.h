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

// BlueprintGeneratedClass BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C
// 0x0008 (0x0528 - 0x0520)
class ABP_WeaponBullet_762x54FMJ_C : public AProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_762x54FMJ(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif