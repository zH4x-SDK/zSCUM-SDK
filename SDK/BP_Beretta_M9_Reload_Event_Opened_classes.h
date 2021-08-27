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

// BlueprintGeneratedClass BP_Beretta_M9_Reload_Event_Opened.BP_Beretta_M9_Reload_Event_Opened_C
// 0x000C (0x0094 - 0x0088)
class UBP_Beretta_M9_Reload_Event_Opened_C : public UEventInsertMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (Transient, DuplicateTransient)
	int                                                MaxAmmoCount;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Beretta_M9_Reload_Event_Opened.BP_Beretta_M9_Reload_Event_Opened_C");
		return ptr;
	}


	void OnActionAnimNotify(ECharacterActionNotifyType notifyType);
	void ExecuteUbergraph_BP_Beretta_M9_Reload_Event_Opened(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
