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

// BlueprintGeneratedClass PromTrap.PromTrap_C
// 0x0038 (0x0A28 - 0x09F0)
class APromTrap_C : public AExplosiveTrapItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09F0(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        ArmedLight;                                               // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_BoxProximityTriggerComponent_C*          BoxProximityTrigger;                                      // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TriggeredMovement_PromTrapTriggerCurve_E937A8874F7B8AC6150893BF78948185;// 0x0A08(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TriggeredMovement__Direction_E937A8874F7B8AC6150893BF78948185;// 0x0A14(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A15(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TriggeredMovement;                                        // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LIGHT_ON_TIME;                                            // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LIGHT_OFF_TIME;                                           // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PromTrap.PromTrap_C");
		return ptr;
	}


	void UserConstructionScript();
	void TriggeredMovement__FinishedFunc();
	void TriggeredMovement__UpdateFunc();
	void BP_OnDisarmed();
	void BP_OnArmed();
	void BP_OnTriggered();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PromTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
