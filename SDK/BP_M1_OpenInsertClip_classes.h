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

// BlueprintGeneratedClass BP_M1_OpenInsertClip.BP_M1_OpenInsertClip_C
// 0x0008 (0x0090 - 0x0088)
class UBP_M1_OpenInsertClip_C : public UInsertMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_OpenInsertClip.BP_M1_OpenInsertClip_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
	void OnActionAnimNotify(ECharacterActionNotifyType notifyType);
	void ExecuteUbergraph_BP_M1_OpenInsertClip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
