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

// BlueprintGeneratedClass BarbedSpikeTrap.BarbedSpikeTrap_C
// 0x0008 (0x0948 - 0x0940)
class ABarbedSpikeTrap_C : public ADamagingTrapItem
{
public:
	class UBP_BoxProximityTriggerComponent_C*          BoxProximityTrigger;                                      // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BarbedSpikeTrap.BarbedSpikeTrap_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
