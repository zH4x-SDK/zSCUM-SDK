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

// BlueprintGeneratedClass BP_CTFGameEvent.BP_CTFGameEvent_C
// 0x0008 (0x07B0 - 0x07A8)
class ABP_CTFGameEvent_C : public ACTFGameEvent
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CTFGameEvent.BP_CTFGameEvent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
