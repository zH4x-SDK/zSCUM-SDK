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

// BlueprintGeneratedClass 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C
// 0x0010 (0x00A8 - 0x0098)
class U590A1_Reload_Event_NoChamber_C : public UInsertCartridge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	int                                                loadedAmmoCount;                                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C");
		return ptr;
	}


	float ExecuteUsingData(const struct FWeaponReloadData& Data);
	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
	void OnActionAnimNotify(ECharacterActionNotifyType notifyType);
	void ExecuteUbergraph_590A1_Reload_Event_NoChamber(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
