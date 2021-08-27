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

// BlueprintGeneratedClass BP_WeaponFlashlight_M9.BP_WeaponFlashlight_M9_C
// 0x0010 (0x08B8 - 0x08A8)
class ABP_WeaponFlashlight_M9_C : public AWeaponAttachmentFlashlight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A8(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponFlashlight_M9.BP_WeaponFlashlight_M9_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__SpotLight_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
	void ExecuteUbergraph_BP_WeaponFlashlight_M9(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
