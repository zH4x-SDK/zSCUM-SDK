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

// AnimBlueprintGeneratedClass AnimBP_AK47.AnimBP_AK47_C
// 0x0D20 (0x10A0 - 0x0380)
class UAnimBP_AK47_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_ABA2F4904E6915592D73F69D1C6BA609;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BC02B2E7481F05BCE31319A0561D2FB5;      // 0x03D0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_03DADBA644D7BE01E31A04B96E58141A;      // 0x0440(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FEC0E1A64848347C5978BFA0AC04E2A2;      // 0x04B0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_85C7DA4643C31D53F8BB308F413ED377;// 0x0520(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_58264BD24DEBAF9CF2AE739A596DE9FA;      // 0x0600(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BDE911E84A559D88A4F2C0BEEAB7FBE7;// 0x0670(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D59B6C704E103DDB2518D08D3F9EB5EF;// 0x0750(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_109A1CDB429E6AFAF1F319B5EE169E21;// 0x07A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B993520B41E32B32232EE28B23B40FD6;// 0x07F0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88FEB5494F68D6D97616A4A4C1132F4A;// 0x0840(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4CF9E3C544E097D461B18793B5CE2E4A;// 0x08F0(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_EB28A44641DFBA70ECA1E8AADF522CDF;// 0x09C0(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5C33789C42E8102D0101D1B3E9E43F5C;      // 0x0AA0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_70A266D64771BDF015929CA1F62D489E;      // 0x0B10(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F514FEA24A9A56AA49EEFFA114FF32B5;      // 0x0B80(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C2810B0F4F8407897D5ADA82CAA177CC;// 0x0BF0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3A2B6DB34CD69151FB191790E4E7A961;// 0x0C40(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1404832F4DA828FFBBBFB38315E2A35D;// 0x0C90(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CB440D17440AD8A1105BD49F982DC644;// 0x0CE0(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5F2A59A44BAA82C8F0B5419A1872DBEB;// 0x0DB0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A94CB5D745BA2F2E0B901BBC4B5DD7AD;// 0x0E90(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3997D0884F74D06AF92FC29B8AEA4554;// 0x0F40(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_97DF7057459A16FECE37AFB9C9DD6906;// 0x0FF0(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_AK47.AnimBP_AK47_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_AK47_AnimGraphNode_BlendListByEnum_5F2A59A44BAA82C8F0B5419A1872DBEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_AK47_AnimGraphNode_BlendListByBool_CB440D17440AD8A1105BD49F982DC644();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_AK47_AnimGraphNode_BlendListByEnum_EB28A44641DFBA70ECA1E8AADF522CDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_AK47_AnimGraphNode_BlendListByBool_4CF9E3C544E097D461B18793B5CE2E4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_AK47_AnimGraphNode_BlendListByEnum_85C7DA4643C31D53F8BB308F413ED377();
	void ExecuteUbergraph_AnimBP_AK47(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
