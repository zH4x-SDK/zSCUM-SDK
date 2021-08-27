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

// BlueprintGeneratedClass BP_M1_Clip.BP_M1_Clip_C
// 0x0088 (0x0928 - 0x08A0)
class ABP_M1_Clip_C : public AWeaponAttachmentMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A0(0x0008) (Transient, DuplicateTransient)
	class UTexture2D*                                  EmptyIcon;                                                // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FInteractionStruct                          EquipInteraction;                                         // 0x08B0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FInteractionStruct>                  ReturnInteraction;                                        // 0x0918(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_Clip.BP_M1_Clip_C");
		return ptr;
	}


	TArray<struct FInteractionStruct> GetInteractionsWithItem(class UObject* User, class AItem* Item);
	EInteractionState GetStateForInteractionWithItem(class AItem* Item);
	struct FInteractionStruct GetDefaultInteractionForPrisoner(class APrisoner* Prisoner, const struct FInteractionQueryParameters& Params);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnAmmoChangedEvent();
	void OnDetachedFromItem(class AItem* Item);
	void ExecuteUbergraph_BP_M1_Clip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
