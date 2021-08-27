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

// BlueprintGeneratedClass BP_Menu_Design.BP_Menu_Design_C
// 0x0121 (0x0551 - 0x0430)
class ABP_Menu_Design_C : public ABuilding
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Sparks3;                                                  // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Sparks2;                                                  // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Sparks1;                                                  // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Smoke4;                                                   // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Smoke3;                                                   // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Smoke2;                                                   // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Smoke1;                                                   // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SpotLight1;                                               // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Monitor_LP_01;                                         // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Menu_Design_Fan_02;                                    // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BP_Sliding_Doors_02;                                      // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BP_Sliding_Doors_012;                                     // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BP_Sliding_Doors_011;                                     // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BP_Sliding_Doors_01;                                      // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SphereReflectionCapture;                                  // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         LightComponent024;                                        // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         LightComponent023;                                        // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         LightComponent019;                                        // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         LightComponent015;                                        // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         LightComponent013;                                        // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         LightComponent012;                                        // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         LightComponent011;                                        // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         LightComponent04;                                         // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         LightComponent01;                                         // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         LightComponent0;                                          // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PrisonerMoveInsideTimeline_NewTrack_0_18E89A024149A17A3D64EEA95389DBF2;// 0x0520(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PrisonerMoveInsideTimeline__Direction_18E89A024149A17A3D64EEA95389DBF2;// 0x0524(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0525(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PrisonerMoveInsideTimeline;                               // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              YawAngle;                                                 // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PrisonerHolder;                                           // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      PrisonerHolderInitialLocationMarker;                      // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      PrisonerHolderFinalLocationMarker;                        // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               _isPrisonerInsideDoor;                                    // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Design.BP_Menu_Design_C");
		return ptr;
	}


	void UserConstructionScript();
	void PrisonerMoveInsideTimeline__FinishedFunc();
	void PrisonerMoveInsideTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StartPrisonerEnterSequence(bool backwards);
	void BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount);
	void BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount);
	void BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount);
	void BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount);
	void BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount);
	void BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount);
	void BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount);
	void ExecuteUbergraph_BP_Menu_Design(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
