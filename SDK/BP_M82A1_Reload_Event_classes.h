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

// BlueprintGeneratedClass BP_M82A1_Reload_Event.BP_M82A1_Reload_Event_C
// 0x0004 (0x008C - 0x0088)
class UBP_M82A1_Reload_Event_C : public UEventInsertMagazine
{
public:
	int                                                MaxAmmoCount;                                             // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M82A1_Reload_Event.BP_M82A1_Reload_Event_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
