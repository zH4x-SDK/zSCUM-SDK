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

// BlueprintGeneratedClass CartridgeTrap.CartridgeTrap_C
// 0x0008 (0x09F8 - 0x09F0)
class ACartridgeTrap_C : public AExplosiveTrapItem
{
public:
	class UBP_BoxProximityTriggerComponent_C*          BoxProximityTrigger;                                      // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CartridgeTrap.CartridgeTrap_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
