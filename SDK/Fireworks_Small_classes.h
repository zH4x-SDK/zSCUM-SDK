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

// BlueprintGeneratedClass Fireworks_Small.Fireworks_Small_C
// 0x00C8 (0x0950 - 0x0888)
class AFireworks_Small_C : public AFireworksItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0888(0x0008) (Transient, DuplicateTransient)
	float                                              RandomAngle;                                              // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0894(0x0004) MISSED OFFSET
	TArray<class UParticleSystem*>                     BurstParticleSystems;                                     // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MaxRotationSpeed;                                         // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRotationSpeed;                                         // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLaunchVelocity;                                        // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinLaunchVelocity;                                        // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShellMaxLife;                                             // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShellminLife;                                             // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBurstTime;                                             // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinBurstTime;                                             // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ShellParticleSystem;                                      // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfBursts;                                           // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondaryBurstDelay;                                      // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FlareColor;                                               // 0x08D8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ShellTailColor;                                           // 0x08E8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               UseShapedBurst;                                           // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08F9(0x0003) MISSED OFFSET
	float                                              BurstSparkleMultiplier;                                   // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShellSparkleMultiplier;                                   // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BurstStarMultiplier;                                      // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellSmoke;                                            // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseBurstSmoke;                                            // 0x0909(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x090A(0x0006) MISSED OFFSET
	class USkeletalMesh*                               ShapedBurstActorMesh;                                     // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0919(0x0007) MISSED OFFSET
	struct FTransform                                  ShellTransform;                                           // 0x0920(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fireworks_Small.Fireworks_Small_C");
		return ptr;
	}


	void UserConstructionScript();
	void LaunchShell();
	void ExecuteUbergraph_Fireworks_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
