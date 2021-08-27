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

// BlueprintGeneratedClass BP_ImprovisedFlashlight.BP_ImprovisedFlashlight_C
// 0x0008 (0x0900 - 0x08F8)
class ABP_ImprovisedFlashlight_C : public AWeaponAttachmentUniversalFlashlight
{
public:
	class USpotLightComponent*                         SpotLight;                                                // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ImprovisedFlashlight.BP_ImprovisedFlashlight_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
