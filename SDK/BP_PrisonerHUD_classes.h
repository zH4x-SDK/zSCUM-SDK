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

// BlueprintGeneratedClass BP_PrisonerHUD.BP_PrisonerHUD_C
// 0x0008 (0x0558 - 0x0550)
class ABP_PrisonerHUD_C : public APrisonerHUD
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PrisonerHUD.BP_PrisonerHUD_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
