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

// BlueprintGeneratedClass BP_Survival_Blueprints_Mission.BP_Survival_Blueprints_Mission_C
// 0x0008 (0x0578 - 0x0570)
class ABP_Survival_Blueprints_Mission_C : public AMission
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Blueprints_Mission.BP_Survival_Blueprints_Mission_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
