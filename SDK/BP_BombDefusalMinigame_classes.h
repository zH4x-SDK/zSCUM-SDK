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

// BlueprintGeneratedClass BP_BombDefusalMinigame.BP_BombDefusalMinigame_C
// 0x0008 (0x05A8 - 0x05A0)
class ABP_BombDefusalMinigame_C : public ABombDefusalMinigame
{
public:
	class USpotLightComponent*                         SpotLight;                                                // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BombDefusalMinigame.BP_BombDefusalMinigame_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
