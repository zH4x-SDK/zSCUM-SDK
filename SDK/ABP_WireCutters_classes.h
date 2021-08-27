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

// AnimBlueprintGeneratedClass ABP_WireCutters.ABP_WireCutters_C
// 0x00F8 (0x0458 - 0x0360)
class UABP_WireCutters_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2FD1880A497BB5B3F85D0BBB2B25C9CA;      // 0x0368(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_E2C5ED4046165503F441B299F9722454;// 0x03B0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A554059449E6F4C2213809ACD8F5DA49;      // 0x03E8(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_WireCutters.ABP_WireCutters_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_WireCutters(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
