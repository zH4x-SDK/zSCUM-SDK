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

// BlueprintGeneratedClass BP_ConZGameInstance.BP_ConZGameInstance_C
// 0x0008 (0x0220 - 0x0218)
class UBP_ConZGameInstance_C : public UConZGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConZGameInstance.BP_ConZGameInstance_C");
		return ptr;
	}


	void ReceiveInit();
	void ExecuteUbergraph_BP_ConZGameInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
