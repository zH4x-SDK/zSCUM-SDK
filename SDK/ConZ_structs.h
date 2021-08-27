#pragma once

// Name: SCUM, Version: 4.20.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ConZ.EWidgetDisplayInfoType
enum class EWidgetDisplayInfoType : uint8_t
{
	EWidgetDisplayInfoType__None   = 0,
	EWidgetDisplayInfoType__FirstOverSecond = 1,
	EWidgetDisplayInfoType__Single = 2,
	EWidgetDisplayInfoType__EWidgetDisplayInfoType_MAX = 3
};


// Enum ConZ.EInteractionType
enum class EInteractionType : uint8_t
{
	EInteractionType__None         = 0,
	EInteractionType__Select       = 1,
	EInteractionType__UnSelectAll  = 2,
	EInteractionType__Search       = 3,
	EInteractionType__Examine      = 4,
	EInteractionType__PickUp       = 5,
	EInteractionType__PickUpAllExamined = 6,
	EInteractionType__PickUpAllSelected = 7,
	EInteractionType__Use          = 8,
	EInteractionType__Operate      = 9,
	EInteractionType__Drop         = 10,
	EInteractionType__DropAllSelected = 11,
	EInteractionType__Throw        = 12,
	EInteractionType__Open         = 13,
	EInteractionType__Close        = 14,
	EInteractionType__Lock         = 15,
	EInteractionType__Unlock       = 16,
	EInteractionType__Push         = 17,
	EInteractionType__GodModeFill  = 18,
	EInteractionType__Fill         = 19,
	EInteractionType__AdjustHeight = 20,
	EInteractionType__ConfirmHeight = 21,
	EInteractionType__Tank         = 22,
	EInteractionType__Craft        = 23,
	EInteractionType__Uncraft      = 24,
	EInteractionType__Create       = 25,
	EInteractionType__Fix          = 26,
	EInteractionType__FixAll       = 27,
	EInteractionType__Eat          = 28,
	EInteractionType__EatAll       = 29,
	EInteractionType__Drink        = 30,
	EInteractionType__DrinkAll     = 31,
	EInteractionType__CheckTaste   = 32,
	EInteractionType__Equip        = 33,
	EInteractionType__UnEquip      = 34,
	EInteractionType__Cut          = 35,
	EInteractionType__Collect      = 36,
	EInteractionType__LightFire    = 37,
	EInteractionType__AddFuel      = 38,
	EInteractionType__Extinguish   = 39,
	EInteractionType__Prepare      = 40,
	EInteractionType__Cook         = 41,
	EInteractionType__Chop         = 42,
	EInteractionType__SmokeFood    = 43,
	EInteractionType__Destroy      = 44,
	EInteractionType__Store        = 45,
	EInteractionType__TakeInHands  = 46,
	EInteractionType__WashCloth    = 47,
	EInteractionType__WashClothAll = 48,
	EInteractionType__RemoveFromHands = 49,
	EInteractionType__CarryItem    = 50,
	EInteractionType__AddToQuickAccess = 51,
	EInteractionType__RemoveFromQuickAccess = 52,
	EInteractionType__ChamberBullet = 53,
	EInteractionType__LoadAmmo     = 54,
	EInteractionType__UnloadAmmo   = 55,
	EInteractionType__Swap         = 56,
	EInteractionType__Join         = 57,
	EInteractionType__Split        = 58,
	EInteractionType__Unpack       = 59,
	EInteractionType__CheckPulse   = 60,
	EInteractionType__Diagnose     = 61,
	EInteractionType__MakeConscious = 62,
	EInteractionType__ArtificalPerspiration = 63,
	EInteractionType__PullTooth    = 64,
	EInteractionType__PatchWounds  = 65,
	EInteractionType__ImmobilizeLimbs = 66,
	EInteractionType__MendBones    = 67,
	EInteractionType__TreatSickness = 68,
	EInteractionType__PerformLocalAnesthesia = 69,
	EInteractionType__PerformGeneralAnesthesia = 70,
	EInteractionType__PerformSurgery = 71,
	EInteractionType__RevivePatient = 72,
	EInteractionType__InviteToSquad = 73,
	EInteractionType__RemoveFromSquad = 74,
	EInteractionType__LeaveSquad   = 75,
	EInteractionType__Urinate      = 76,
	EInteractionType__Defecate     = 77,
	EInteractionType__Vomit        = 78,
	EInteractionType__CheckTime    = 79,
	EInteractionType__BindHands    = 80,
	EInteractionType__TightenBinds = 81,
	EInteractionType__RemoveBinds  = 82,
	EInteractionType__LoosenBinds  = 83,
	EInteractionType__BreakBinds   = 84,
	EInteractionType__Bury         = 85,
	EInteractionType__UnBury       = 86,
	EInteractionType__Rest         = 87,
	EInteractionType__SitOnGround  = 88,
	EInteractionType__LayOnGround  = 89,
	EInteractionType__ExamineInventory = 90,
	EInteractionType__GestureShowFinger = 91,
	EInteractionType__GestureStandSurrender = 92,
	EInteractionType__GestureWaveHi = 93,
	EInteractionType__GestureYouAreDead = 94,
	EInteractionType__GestureFY    = 95,
	EInteractionType__GesturePoint = 96,
	EInteractionType__GestureHeart = 97,
	EInteractionType__GestureBallpalm = 98,
	EInteractionType__GestureFacepalm = 99,
	EInteractionType__GestureFingerGun = 100,
	EInteractionType__GestureLaughing = 101,
	EInteractionType__GestureSmellWave = 102,
	EInteractionType__GestureSquat = 103,
	EInteractionType__GestureCharge = 104,
	EInteractionType__GestureFreeze = 105,
	EInteractionType__GestureGetDown = 106,
	EInteractionType__GestureGetUp = 107,
	EInteractionType__GestureHalt  = 108,
	EInteractionType__GestureHurryUp = 109,
	EInteractionType__GesturePointMe = 110,
	EInteractionType__GesturePointYou = 111,
	EInteractionType__GestureRally = 112,
	EInteractionType__GestureThumbsUp = 113,
	EInteractionType__GestureThumbsDown = 114,
	EInteractionType__GestureUnderstandNot = 115,
	EInteractionType__GestureUnderstandYes = 116,
	EInteractionType__PlayInstrument = 117,
	EInteractionType__Whistle      = 118,
	EInteractionType__MakeUnconscious = 119,
	EInteractionType__CutHair      = 120,
	EInteractionType__CutFacialHair = 121,
	EInteractionType__PacifyAnimal = 122,
	EInteractionType__TameAnimal   = 123,
	EInteractionType__LearnAnimal  = 124,
	EInteractionType__CommandAnimal = 125,
	EInteractionType__FeedAnimal   = 126,
	EInteractionType__Buy          = 127,
	EInteractionType__Maintain     = 128,
	EInteractionType__Lockpick     = 129,
	EInteractionType__RemoveLocks  = 130,
	EInteractionType__AddUpgrade   = 131,
	EInteractionType__RadioTurnOn  = 132,
	EInteractionType__RadioTurnOff = 133,
	EInteractionType__RadioIncreaseVolume = 134,
	EInteractionType__RadioDecreaseVolume = 135,
	EInteractionType__StackAdd     = 136,
	EInteractionType__StackSplit   = 137,
	EInteractionType__RepairBaseElement = 138,
	EInteractionType__RepairBaseElementArea = 139,
	EInteractionType__RepairBaseElementsUnder25Percent = 140,
	EInteractionType__RepairBaseElementsUnder50Percent = 141,
	EInteractionType__RepairBaseElementsUnder75Percent = 142,
	EInteractionType__ClaimBase    = 143,
	EInteractionType__ShowBaseFlagInfluence = 144,
	EInteractionType__HideBaseFlagInfluence = 145,
	EInteractionType__StartBaseFlagOvertake = 146,
	EInteractionType__StopBaseFlagOvertake = 147,
	EInteractionType__OpenContainer = 148,
	EInteractionType__ChangeItemText = 149,
	EInteractionType__CommitItemText = 150,
	EInteractionType__TurnOn       = 151,
	EInteractionType__TurnOff      = 152,
	EInteractionType__AddProximityTrigger = 153,
	EInteractionType__AddLaserTrigger = 154,
	EInteractionType__AddTripwireTrigger = 155,
	EInteractionType__RemoveTrigger = 156,
	EInteractionType__ShowTrigger  = 157,
	EInteractionType__ArmTrap      = 158,
	EInteractionType__DisarmTrap   = 159,
	EInteractionType__BuryTrap     = 160,
	EInteractionType__UnburyTrap   = 161,
	EInteractionType__EInteractionType_MAX = 162
};


// Enum ConZ.ENoiseLevel
enum class ENoiseLevel : uint8_t
{
	ENoiseLevel__Mute              = 0,
	ENoiseLevel__VerySilent        = 1,
	ENoiseLevel__Silent            = 2,
	ENoiseLevel__Moderate          = 3,
	ENoiseLevel__Loud              = 4,
	ENoiseLevel__VeryLoud          = 5,
	ENoiseLevel__Count             = 6,
	ENoiseLevel__ENoiseLevel_MAX   = 7
};


// Enum ConZ.EItemExhausted
enum class EItemExhausted : uint8_t
{
	EItemExhausted__DoNothing      = 0,
	EItemExhausted__Destroy        = 1,
	EItemExhausted__Uncraft        = 2,
	EItemExhausted__EItemExhausted_MAX = 3
};


// Enum ConZ.EItemRarity
enum class EItemRarity : uint8_t
{
	EItemRarity__ExtremelyRare     = 0,
	EItemRarity__VeryRare          = 1,
	EItemRarity__Rare              = 2,
	EItemRarity__Uncommon          = 3,
	EItemRarity__Common            = 4,
	EItemRarity__Abundant          = 5,
	EItemRarity__Count             = 6,
	EItemRarity__EItemRarity_MAX   = 7
};


// Enum ConZ.EConfigFile
enum class EConfigFile : uint8_t
{
	EConfigFile__None              = 0,
	EConfigFile__Engine            = 1,
	EConfigFile__GameUserSettings  = 2,
	EConfigFile__ServerSettings    = 3,
	EConfigFile__EConfigFile_MAX   = 4
};


// Enum ConZ.EDoorStateFlags
enum class EDoorStateFlags : uint8_t
{
	EDoorStateFlags__None          = 0,
	EDoorStateFlags__Open          = 1,
	EDoorStateFlags__Locked        = 2,
	EDoorStateFlags__HasPower      = 3,
	EDoorStateFlags__ChangeSide    = 4,
	EDoorStateFlags__HasLock       = 5,
	EDoorStateFlags__EDoorStateFlags_MAX = 6
};


// Enum ConZ.ERespawnOption
enum class ERespawnOption : uint8_t
{
	ERespawnOption__Random         = 0,
	ERespawnOption__Sector         = 1,
	ERespawnOption__Shelter        = 2,
	ERespawnOption__Squad          = 3,
	ERespawnOption__ERespawnOption_MAX = 4
};


// Enum ConZ.EConZSquadMemberRank
enum class EConZSquadMemberRank : uint8_t
{
	EConZSquadMemberRank__None     = 0,
	EConZSquadMemberRank__Member   = 1,
	EConZSquadMemberRank__Enforcer = 2,
	EConZSquadMemberRank__Underboss = 3,
	EConZSquadMemberRank__Boss     = 4,
	EConZSquadMemberRank__EConZSquadMemberRank_MAX = 5
};


// Enum ConZ.EChatType
enum class EChatType : uint8_t
{
	EChatType__Default             = 0,
	EChatType__Local               = 1,
	EChatType__Global              = 2,
	EChatType__Squad               = 3,
	EChatType__ServerMessage       = 4,
	EChatType__Error               = 5,
	EChatType__EChatType_MAX       = 6
};


// Enum ConZ.ESortOrder
enum class ESortOrder : uint8_t
{
	ESortOrder__Ascending          = 0,
	ESortOrder__Descending         = 1,
	ESortOrder__ESortOrder_MAX     = 2
};


// Enum ConZ.EEventsRankingStatsOrderByField
enum class EEventsRankingStatsOrderByField : uint8_t
{
	EEventsRankingStatsOrderByField__FamePoints = 0,
	EEventsRankingStatsOrderByField__EventScore = 1,
	EEventsRankingStatsOrderByField__EventKills = 2,
	EEventsRankingStatsOrderByField__EventDeaths = 3,
	EEventsRankingStatsOrderByField__EEventsRankingStatsOrderByField_MAX = 4
};


// Enum ConZ.ESkillLevel
enum class ESkillLevel : uint8_t
{
	ESkillLevel__NoSkill           = 0,
	ESkillLevel__Basic             = 1,
	ESkillLevel__Medium            = 2,
	ESkillLevel__Advanced          = 3,
	ESkillLevel__AboveAdvanced     = 4,
	ESkillLevel__ESkillLevel_MAX   = 5
};


// Enum ConZ.EAnimalAction
enum class EAnimalAction : uint8_t
{
	EAnimalAction__None            = 0,
	EAnimalAction__Eat             = 1,
	EAnimalAction__Rest            = 2,
	EAnimalAction__Attack          = 3,
	EAnimalAction__Sit             = 4,
	EAnimalAction__Wait            = 5,
	EAnimalAction__Intimidate      = 6,
	EAnimalAction__Alert           = 7,
	EAnimalAction__Turn            = 8,
	EAnimalAction__EAnimalAction_MAX = 9
};


// Enum ConZ.EBodyPart
enum class EBodyPart : uint8_t
{
	EBodyPart__Unknown             = 0,
	EBodyPart__Head                = 1,
	EBodyPart__Chest               = 2,
	EBodyPart__Abdomen             = 3,
	EBodyPart__ArmLeftLower        = 4,
	EBodyPart__ArmLeftUpper        = 5,
	EBodyPart__ArmRightLower       = 6,
	EBodyPart__ArmRightUpper       = 7,
	EBodyPart__LegLeftLower        = 8,
	EBodyPart__LegLeftUpper        = 9,
	EBodyPart__LegRightLower       = 10,
	EBodyPart__LegRightUpper       = 11,
	EBodyPart__Num                 = 12,
	EBodyPart__EBodyPart_MAX       = 13
};


// Enum ConZ.EEnvironmentClass
enum class EEnvironmentClass : uint8_t
{
	EEnvironmentClass__Indoor_Small = 0,
	EEnvironmentClass__Indoor_Medium = 1,
	EEnvironmentClass__Indoor_Large = 2,
	EEnvironmentClass__Outdoor_Large = 3,
	EEnvironmentClass__Count       = 4,
	EEnvironmentClass__EEnvironmentClass_MAX = 5
};


// Enum ConZ.EGender
enum class EGender : uint8_t
{
	EGender__Unspecified           = 0,
	EGender__Female                = 1,
	EGender__Male                  = 2,
	EGender__EGender_MAX           = 3
};


// Enum ConZ.EDetectHitCollisionType
enum class EDetectHitCollisionType : uint8_t
{
	EDetectHitCollisionType__None  = 0,
	EDetectHitCollisionType__Head  = 1,
	EDetectHitCollisionType__Body  = 2,
	EDetectHitCollisionType__Legs  = 3,
	EDetectHitCollisionType__EDetectHitCollisionType_MAX = 4
};


// Enum ConZ.EDamageMagnitudeType
enum class EDamageMagnitudeType : uint8_t
{
	EDamageMagnitudeType__Small    = 0,
	EDamageMagnitudeType__Medium   = 1,
	EDamageMagnitudeType__Large    = 2,
	EDamageMagnitudeType__Knockout = 3,
	EDamageMagnitudeType__EDamageMagnitudeType_MAX = 4
};


// Enum ConZ.ECharacterImpactSourceSoundCategory
enum class ECharacterImpactSourceSoundCategory : uint8_t
{
	ECharacterImpactSourceSoundCategory__Any = 0,
	ECharacterImpactSourceSoundCategory__Head_Bare = 1,
	ECharacterImpactSourceSoundCategory__Hands_Bare = 2,
	ECharacterImpactSourceSoundCategory__Hands_Gloved = 3,
	ECharacterImpactSourceSoundCategory__Legs_Bare = 4,
	ECharacterImpactSourceSoundCategory__Claws = 5,
	ECharacterImpactSourceSoundCategory__Jaws = 6,
	ECharacterImpactSourceSoundCategory__Blunt_Wood = 7,
	ECharacterImpactSourceSoundCategory__Blunt_Metal = 8,
	ECharacterImpactSourceSoundCategory__Sharp_Metal = 9,
	ECharacterImpactSourceSoundCategory__ECharacterImpactSourceSoundCategory_MAX = 10
};


// Enum ConZ.EAITeam
enum class EAITeam : uint8_t
{
	EAITeam__Prisoner              = 0,
	EAITeam__Zombie                = 1,
	EAITeam__Animal                = 2,
	EAITeam__Mechanoid             = 3,
	EAITeam__None                  = 4,
	EAITeam__EAITeam_MAX           = 5
};


// Enum ConZ.EConZPxDominanceGroup
enum class EConZPxDominanceGroup : uint8_t
{
	EConZPxDominanceGroup__Default = 0,
	EConZPxDominanceGroup__MediumPawns = 1,
	EConZPxDominanceGroup__LargePawns = 2,
	EConZPxDominanceGroup__EConZPxDominanceGroup_MAX = 3
};


// Enum ConZ.EPrisonerMovementPace
enum class EPrisonerMovementPace : uint8_t
{
	EPrisonerMovementPace__NotMoving = 0,
	EPrisonerMovementPace__Slow    = 1,
	EPrisonerMovementPace__Medium  = 2,
	EPrisonerMovementPace__Fast    = 3,
	EPrisonerMovementPace__EPrisonerMovementPace_MAX = 4
};


// Enum ConZ.EPrisonerBorderCrossingPenalty
enum class EPrisonerBorderCrossingPenalty : uint8_t
{
	EPrisonerBorderCrossingPenalty__None = 0,
	EPrisonerBorderCrossingPenalty__Penalty1 = 1,
	EPrisonerBorderCrossingPenalty__Penalty2 = 2,
	EPrisonerBorderCrossingPenalty__Penalty3 = 3,
	EPrisonerBorderCrossingPenalty__Penalty4 = 4,
	EPrisonerBorderCrossingPenalty__DeadPenalty = 5,
	EPrisonerBorderCrossingPenalty__EPrisonerBorderCrossingPenalty_MAX = 6
};


// Enum ConZ.ETabMode
enum class ETabMode : uint8_t
{
	ETabMode__None                 = 0,
	ETabMode__Inventory            = 1,
	ETabMode__BCU                  = 2,
	ETabMode__Crafting             = 3,
	ETabMode__Journal              = 4,
	ETabMode__Squad                = 5,
	ETabMode__Events               = 6,
	ETabMode__Last                 = 7,
	ETabMode__ETabMode_MAX         = 8
};


// Enum ConZ.EWeaponMalfunction
enum class EWeaponMalfunction : uint8_t
{
	EWeaponMalfunction__None       = 0,
	EWeaponMalfunction__BadRound   = 1,
	EWeaponMalfunction__StovePipe  = 2,
	EWeaponMalfunction__RoundNotLoaded = 3,
	EWeaponMalfunction__DoubleFeed = 4,
	EWeaponMalfunction__Count      = 5,
	EWeaponMalfunction__EWeaponMalfunction_MAX = 6
};


// Enum ConZ.EPrisonerCombatMode
enum class EPrisonerCombatMode : uint8_t
{
	EPrisonerCombatMode__None      = 0,
	EPrisonerCombatMode__MeleeUnarmed = 1,
	EPrisonerCombatMode__MeleeWeapon = 2,
	EPrisonerCombatMode__Firearm   = 3,
	EPrisonerCombatMode__EPrisonerCombatMode_MAX = 4
};


// Enum ConZ.EHoldBreathState
enum class EHoldBreathState : uint8_t
{
	EHoldBreathState__None         = 0,
	EHoldBreathState__BreathIn     = 1,
	EHoldBreathState__HoldBreath   = 2,
	EHoldBreathState__BreathOut    = 3,
	EHoldBreathState__Breathless   = 4,
	EHoldBreathState__BreathInRecovery = 5,
	EHoldBreathState__Count        = 6,
	EHoldBreathState__EHoldBreathState_MAX = 7
};


// Enum ConZ.EPrisonerWettablePart
enum class EPrisonerWettablePart : uint8_t
{
	EPrisonerWettablePart__Head    = 0,
	EPrisonerWettablePart__UpperBody = 1,
	EPrisonerWettablePart__LowerBody = 2,
	EPrisonerWettablePart__Feet    = 3,
	EPrisonerWettablePart__Count   = 4,
	EPrisonerWettablePart__EPrisonerWettablePart_MAX = 5
};


// Enum ConZ.EPrisonerMeleeTargetSelectionMode
enum class EPrisonerMeleeTargetSelectionMode : uint8_t
{
	EPrisonerMeleeTargetSelectionMode__Manual = 0,
	EPrisonerMeleeTargetSelectionMode__SemiAutomatic = 1,
	EPrisonerMeleeTargetSelectionMode__Automatic = 2,
	EPrisonerMeleeTargetSelectionMode__EPrisonerMeleeTargetSelectionMode_MAX = 3
};


// Enum ConZ.EMotionIntensity
enum class EMotionIntensity : uint8_t
{
	EMotionIntensity__None         = 0,
	EMotionIntensity__Light        = 1,
	EMotionIntensity__Medium       = 2,
	EMotionIntensity__Heavy        = 3,
	EMotionIntensity__EMotionIntensity_MAX = 4
};


// Enum ConZ.EPrisonerStance
enum class EPrisonerStance : uint8_t
{
	EPrisonerStance__Standing      = 0,
	EPrisonerStance__Crouching     = 1,
	EPrisonerStance__Prone         = 2,
	EPrisonerStance__Swimming      = 3,
	EPrisonerStance__Count         = 4,
	EPrisonerStance__EPrisonerStance_MAX = 5
};


// Enum ConZ.ESkillAttribute
enum class ESkillAttribute : uint8_t
{
	ESkillAttribute__Constitution  = 0,
	ESkillAttribute__Dexterity     = 1,
	ESkillAttribute__Intelligence  = 2,
	ESkillAttribute__Strength      = 3,
	ESkillAttribute__ESkillAttribute_MAX = 4
};


// Enum ConZ.EBodyState
enum class EBodyState : uint8_t
{
	EBodyState__FullyFed           = 0,
	EBodyState__Hungry             = 1,
	EBodyState__Starving           = 2,
	EBodyState__WellHydrated       = 3,
	EBodyState__Hydrated           = 4,
	EBodyState__Thirsty            = 5,
	EBodyState__VeryThirsty        = 6,
	EBodyState__Dehydrated         = 7,
	EBodyState__UrinationNeeded    = 8,
	EBodyState__ForcedUrination    = 9,
	EBodyState__DefecationNeeded   = 10,
	EBodyState__ForcedDefecation   = 11,
	EBodyState__Choking            = 12,
	EBodyState__Unconsciousness    = 13,
	EBodyState__Coma               = 14,
	EBodyState__Death              = 15,
	EBodyState__Headless           = 16,
	EBodyState__LowBloodSugar      = 17,
	EBodyState__NoseBleeding       = 18,
	EBodyState__FeelingCold        = 19,
	EBodyState__Fatigue            = 20,
	EBodyState__HeartPalpitations  = 21,
	EBodyState__RespiratoryProblems = 22,
	EBodyState__RespiratoryFailure = 23,
	EBodyState__Confusion          = 24,
	EBodyState__Nausea             = 25,
	EBodyState__BlurredVision      = 26,
	EBodyState__NightBlindness     = 27,
	EBodyState__Pellagra           = 28,
	EBodyState__PainfulJoints      = 29,
	EBodyState__SkinProblems       = 30,
	EBodyState__MuscleWeakness     = 31,
	EBodyState__ItchingFeet        = 32,
	EBodyState__Headache           = 33,
	EBodyState__LightChestPain     = 34,
	EBodyState__SeriousChestPain   = 35,
	EBodyState__CardiacArrest      = 36,
	EBodyState__GrayHair           = 37,
	EBodyState__HairLoss           = 38,
	EBodyState__ColdHands          = 39,
	EBodyState__Fever              = 40,
	EBodyState__ApetiteLoss        = 41,
	EBodyState__MemoryLoss         = 42,
	EBodyState__Anemia             = 43,
	EBodyState__Cramps             = 44,
	EBodyState__Numbness           = 45,
	EBodyState__Farts              = 46,
	EBodyState__Constipation       = 47,
	EBodyState__AbdominalPain      = 48,
	EBodyState__StomachPain        = 49,
	EBodyState__Seizures           = 50,
	EBodyState__Burping            = 51,
	EBodyState__Vomiting           = 52,
	EBodyState__StomachRupture     = 53,
	EBodyState__LiverFailure       = 54,
	EBodyState__Diarrhea           = 55,
	EBodyState__Dizziness          = 56,
	EBodyState__Depression         = 57,
	EBodyState__Lethargy           = 58,
	EBodyState__Hallucinations     = 59,
	EBodyState__Delirium           = 60,
	EBodyState__DecreasedConsciousness = 61,
	EBodyState__DifficultySleeping = 62,
	EBodyState__Overdose           = 63,
	EBodyState__Tiring             = 64,
	EBodyState__Fainting           = 65,
	EBodyState__Count              = 66,
	EBodyState__EBodyState_MAX     = 67
};


// Enum ConZ.ECharacterActionEndState
enum class ECharacterActionEndState : uint8_t
{
	ECharacterActionEndState__None = 0,
	ECharacterActionEndState__Regular = 1,
	ECharacterActionEndState__ConditionNotMet = 2,
	ECharacterActionEndState__Canceled = 3,
	ECharacterActionEndState__Failed = 4,
	ECharacterActionEndState__Terminated = 5,
	ECharacterActionEndState__ECharacterActionEndState_MAX = 6
};


// Enum ConZ.ECharacterActionAckType
enum class ECharacterActionAckType : uint8_t
{
	ECharacterActionAckType__None  = 0,
	ECharacterActionAckType__Begin = 1,
	ECharacterActionAckType__End   = 2,
	ECharacterActionAckType__ECharacterActionAckType_MAX = 3
};


// Enum ConZ.EPlayableInstrumentTone
enum class EPlayableInstrumentTone : uint8_t
{
	EPlayableInstrumentTone__C     = 0,
	EPlayableInstrumentTone__Db    = 1,
	EPlayableInstrumentTone__D     = 2,
	EPlayableInstrumentTone__Eb    = 3,
	EPlayableInstrumentTone__E     = 4,
	EPlayableInstrumentTone__F     = 5,
	EPlayableInstrumentTone__Gb    = 6,
	EPlayableInstrumentTone__G     = 7,
	EPlayableInstrumentTone__Ab    = 8,
	EPlayableInstrumentTone__A     = 9,
	EPlayableInstrumentTone__Bb    = 10,
	EPlayableInstrumentTone__B     = 11,
	EPlayableInstrumentTone__C2    = 12,
	EPlayableInstrumentTone__Count = 13,
	EPlayableInstrumentTone__EPlayableInstrumentTone_MAX = 14
};


// Enum ConZ.EWeaponCategory
enum class EWeaponCategory : uint8_t
{
	EWeaponCategory__ThrowingWeapons = 0,
	EWeaponCategory__RangedWeapons = 1,
	EWeaponCategory__Handguns      = 2,
	EWeaponCategory__SubmachineGuns = 3,
	EWeaponCategory__Rifles        = 4,
	EWeaponCategory__Shotguns      = 5,
	EWeaponCategory__AutomaticRifles = 6,
	EWeaponCategory__SniperRifles  = 7,
	EWeaponCategory__Bow           = 8,
	EWeaponCategory__Count         = 9,
	EWeaponCategory__EWeaponCategory_MAX = 10
};


// Enum ConZ.EWindSpeedCategory
enum class EWindSpeedCategory : uint8_t
{
	EWindSpeedCategory__Zero       = 0,
	EWindSpeedCategory__Low        = 1,
	EWindSpeedCategory__Medium     = 2,
	EWindSpeedCategory__High       = 3,
	EWindSpeedCategory__EWindSpeedCategory_MAX = 4
};


// Enum ConZ.EPrisonerPostTeleportBehavior
enum class EPrisonerPostTeleportBehavior : uint8_t
{
	EPrisonerPostTeleportBehavior__None = 0,
	EPrisonerPostTeleportBehavior__ReviveIfDead = 1,
	EPrisonerPostTeleportBehavior__GameEventLoadout = 2,
	EPrisonerPostTeleportBehavior__EPrisonerPostTeleportBehavior_MAX = 3
};


// Enum ConZ.EPrisonerCommonSpawnLocation
enum class EPrisonerCommonSpawnLocation : uint8_t
{
	EPrisonerCommonSpawnLocation__None = 0,
	EPrisonerCommonSpawnLocation__Random = 1,
	EPrisonerCommonSpawnLocation__Sector = 2,
	EPrisonerCommonSpawnLocation__Home = 3,
	EPrisonerCommonSpawnLocation__Squad = 4,
	EPrisonerCommonSpawnLocation__Event = 5,
	EPrisonerCommonSpawnLocation__EPrisonerCommonSpawnLocation_MAX = 6
};


// Enum ConZ.ECarryingItemState
enum class ECarryingItemState : uint8_t
{
	ECarryingItemState__None       = 0,
	ECarryingItemState__Idle       = 1,
	ECarryingItemState__ECarryingItemState_MAX = 2
};


// Enum ConZ.EPlayingInstrumentState
enum class EPlayingInstrumentState : uint8_t
{
	EPlayingInstrumentState__None  = 0,
	EPlayingInstrumentState__Exiting = 1,
	EPlayingInstrumentState__Idle  = 2,
	EPlayingInstrumentState__Playing = 3,
	EPlayingInstrumentState__EPlayingInstrumentState_MAX = 4
};


// Enum ConZ.EScopingWithItemInHandsState
enum class EScopingWithItemInHandsState : uint8_t
{
	EScopingWithItemInHandsState__None = 0,
	EScopingWithItemInHandsState__Starting = 1,
	EScopingWithItemInHandsState__Scoping = 2,
	EScopingWithItemInHandsState__StoppingWithEffect = 3,
	EScopingWithItemInHandsState__StoppingNoEffect = 4,
	EScopingWithItemInHandsState__EScopingWithItemInHandsState_MAX = 5
};


// Enum ConZ.EThrowingMode
enum class EThrowingMode : uint8_t
{
	EThrowingMode__None            = 0,
	EThrowingMode__Cancelled       = 1,
	EThrowingMode__Aiming          = 2,
	EThrowingMode__Throwing        = 3,
	EThrowingMode__EThrowingMode_MAX = 4
};


// Enum ConZ.EWeaponAimingType
enum class EWeaponAimingType : uint8_t
{
	EWeaponAimingType__None        = 0,
	EWeaponAimingType__Hip         = 1,
	EWeaponAimingType__DownTheSights = 2,
	EWeaponAimingType__EWeaponAimingType_MAX = 3
};


// Enum ConZ.EDodgeDirectionType
enum class EDodgeDirectionType : uint8_t
{
	EDodgeDirectionType__Front     = 0,
	EDodgeDirectionType__Back      = 1,
	EDodgeDirectionType__Left      = 2,
	EDodgeDirectionType__Right     = 3,
	EDodgeDirectionType__EDodgeDirectionType_MAX = 4
};


// Enum ConZ.EClothesType
enum class EClothesType : uint8_t
{
	EClothesType__None             = 0,
	EClothesType__Back             = 1,
	EClothesType__HeadUpper        = 2,
	EClothesType__HeadUpperSkeletal = 3,
	EClothesType__HeadLower        = 4,
	EClothesType__Head             = 5,
	EClothesType__Eyes             = 6,
	EClothesType__Neck             = 7,
	EClothesType__Body_Armor       = 8,
	EClothesType__Body_LongSleeves = 9,
	EClothesType__Body_ShortSleeves = 10,
	EClothesType__Waist            = 11,
	EClothesType__Hands            = 12,
	EClothesType__Legs             = 13,
	EClothesType__Feet             = 14,
	EClothesType__Underwear        = 15,
	EClothesType__PenisWarmer      = 16,
	EClothesType__Suit             = 17,
	EClothesType__Count            = 18,
	EClothesType__EClothesType_MAX = 19
};


// Enum ConZ.EBodySlot
enum class EBodySlot : uint8_t
{
	EBodySlot__Head                = 0,
	EBodySlot__Chest               = 1,
	EBodySlot__Legs                = 2,
	EBodySlot__Feet                = 3,
	EBodySlot__Count               = 4,
	EBodySlot__EBodySlot_MAX       = 5
};


// Enum ConZ.EClothesPart
enum class EClothesPart : uint8_t
{
	EClothesPart__None             = 0,
	EClothesPart__BodyUpper        = 1,
	EClothesPart__BodyLower        = 2,
	EClothesPart__Head             = 3,
	EClothesPart__Eyes             = 4,
	EClothesPart__Neck             = 5,
	EClothesPart__Hands            = 6,
	EClothesPart__ArmUpper         = 7,
	EClothesPart__ArmLower         = 8,
	EClothesPart__Legs             = 9,
	EClothesPart__Feet             = 10,
	EClothesPart__EClothesPart_MAX = 11
};


// Enum ConZ.EDiagnosedResult
enum class EDiagnosedResult : uint8_t
{
	EDiagnosedResult__None         = 0,
	EDiagnosedResult__DeathDetected = 1,
	EDiagnosedResult__UnconsciousnessDetected = 2,
	EDiagnosedResult__NotBreathingDetected = 3,
	EDiagnosedResult__IncreasedBodyTempDetected = 4,
	EDiagnosedResult__DiarrheaDetected = 5,
	EDiagnosedResult__VomitingDetected = 6,
	EDiagnosedResult__PhysicalInjuryDetected = 7,
	EDiagnosedResult__BrokenLimbsInjuryDetected = 8,
	EDiagnosedResult__ChokingSicknessDetected = 9,
	EDiagnosedResult__OverdoseSicknessDetected = 10,
	EDiagnosedResult__OvereatingSicknessDetected = 11,
	EDiagnosedResult__DehydrationSicknessDetected = 12,
	EDiagnosedResult__StarvationSicknessDetected = 13,
	EDiagnosedResult__CarbonMonoxidePoisoningDetected = 14,
	EDiagnosedResult__DysenteryDiseaseDetected = 15,
	EDiagnosedResult__HypothermiaDiseaseDetected = 16,
	EDiagnosedResult__HyperthermiaDiseaseDetected = 17,
	EDiagnosedResult__HookwormsDiseaseDetected = 18,
	EDiagnosedResult__HepatitisADiseaseDetected = 19,
	EDiagnosedResult__HeatstrokeDiseaseDetected = 20,
	EDiagnosedResult__HeartAttackDetected = 21,
	EDiagnosedResult__LeptospirosisDiseaseDetected = 22,
	EDiagnosedResult__MalariaDiseaseDetected = 23,
	EDiagnosedResult__MeningitisDiseaseDetected = 24,
	EDiagnosedResult__RadiationSicknessDetected = 25,
	EDiagnosedResult__SalmonellaDiseaseDetected = 26,
	EDiagnosedResult__SunburnSicknessDetected = 27,
	EDiagnosedResult__ToothacheSicknessDetected = 28,
	EDiagnosedResult__TrenchFootDiseaseDetected = 29,
	EDiagnosedResult__CystitisDiseaseDetected = 30,
	EDiagnosedResult__CalciumDeficiencyDetected = 31,
	EDiagnosedResult__CopperDeficiencyDetected = 32,
	EDiagnosedResult__EnergyDeficiencyDetected = 33,
	EDiagnosedResult__FatDeficiencyDetected = 34,
	EDiagnosedResult__FiberDeficiencyDetected = 35,
	EDiagnosedResult__IronDeficiencyDetected = 36,
	EDiagnosedResult__MagnesiumDeficiencyDetected = 37,
	EDiagnosedResult__ManganeseDeficiencyDetected = 38,
	EDiagnosedResult__PhosphorusDeficiencyDetected = 39,
	EDiagnosedResult__PotassiumDeficiencyDetected = 40,
	EDiagnosedResult__ProteinDeficiencyDetected = 41,
	EDiagnosedResult__SeleniumDeficiencyDetected = 42,
	EDiagnosedResult__SodiumDeficiencyDetected = 43,
	EDiagnosedResult__ZincDeficiencyDetected = 44,
	EDiagnosedResult__VitaminADeficiencyDetected = 45,
	EDiagnosedResult__VitaminB1DeficiencyDetected = 46,
	EDiagnosedResult__VitaminB2DeficiencyDetected = 47,
	EDiagnosedResult__VitaminB3DeficiencyDetected = 48,
	EDiagnosedResult__VitaminB4DeficiencyDetected = 49,
	EDiagnosedResult__VitaminB5DeficiencyDetected = 50,
	EDiagnosedResult__VitaminB6DeficiencyDetected = 51,
	EDiagnosedResult__VitaminB9DeficiencyDetected = 52,
	EDiagnosedResult__VitaminB12DeficiencyDetected = 53,
	EDiagnosedResult__VitaminCDeficiencyDetected = 54,
	EDiagnosedResult__VitaminDDeficiencyDetected = 55,
	EDiagnosedResult__VitaminEDeficiencyDetected = 56,
	EDiagnosedResult__VitaminKDeficiencyDetected = 57,
	EDiagnosedResult__BacillusCereusPoisoningDetected = 58,
	EDiagnosedResult__BotulismPoisoningDetected = 59,
	EDiagnosedResult__CampylobacteriosisPoisoningDetected = 60,
	EDiagnosedResult__CyclosporiasisPoisoningDetected = 61,
	EDiagnosedResult__IntestinalCryptosporidiosisPoisoningDetected = 62,
	EDiagnosedResult__StaphylococcalPoisoningDetected = 63,
	EDiagnosedResult__VibrioVulnificusInfectionDetected = 64,
	EDiagnosedResult__AmanitaVirosaPoisoningDetected = 65,
	EDiagnosedResult__PsilocybeCyanescensPoisoningDetected = 66,
	EDiagnosedResult__AmanitaPhalloidesPoisoningDetected = 67,
	EDiagnosedResult__AmanitaPantheriaPoisoningDetected = 68,
	EDiagnosedResult__AmanitaMuscariaPoisoningDetected = 69,
	EDiagnosedResult__InocybePatouillardiiPoisoningDetected = 70,
	EDiagnosedResult__FoxglovePoisoningDetected = 71,
	EDiagnosedResult__HemlockPoisoningDetected = 72,
	EDiagnosedResult__BaneberryPoisoningDetected = 73,
	EDiagnosedResult__DeadlyNightshadePoisoningDetected = 74,
	EDiagnosedResult__DrunkennessSicknessDetected = 75,
	EDiagnosedResult__AlcoholismAddictionDetected = 76,
	EDiagnosedResult__Count        = 77,
	EDiagnosedResult__EDiagnosedResult_MAX = 78
};


// Enum ConZ.EBleedingType
enum class EBleedingType : uint8_t
{
	EBleedingType__None            = 0,
	EBleedingType__Scratch         = 1,
	EBleedingType__Small           = 2,
	EBleedingType__Large           = 3,
	EBleedingType__EBleedingType_MAX = 4
};


// Enum ConZ.EPrisonerActionDifficulty
enum class EPrisonerActionDifficulty : uint8_t
{
	EPrisonerActionDifficulty__None = 0,
	EPrisonerActionDifficulty__Easy = 1,
	EPrisonerActionDifficulty__Demanding = 2,
	EPrisonerActionDifficulty__VeryDemanding = 3,
	EPrisonerActionDifficulty__EPrisonerActionDifficulty_MAX = 4
};


// Enum ConZ.EPrisonerECGRhythm
enum class EPrisonerECGRhythm : uint8_t
{
	EPrisonerECGRhythm__Normal     = 0,
	EPrisonerECGRhythm__A          = 1,
	EPrisonerECGRhythm__G          = 2,
	EPrisonerECGRhythm__H          = 3,
	EPrisonerECGRhythm__I          = 4,
	EPrisonerECGRhythm__EPrisonerECGRhythm_MAX = 5
};


// Enum ConZ.EMineral
enum class EMineral : uint8_t
{
	EMineral__Calcium              = 0,
	EMineral__Iron                 = 1,
	EMineral__Magnesium            = 2,
	EMineral__Phosphorus           = 3,
	EMineral__Potassium            = 4,
	EMineral__Zinc                 = 5,
	EMineral__Copper               = 6,
	EMineral__Manganese            = 7,
	EMineral__Selenium             = 8,
	EMineral__Count                = 9,
	EMineral__EMineral_MAX         = 10
};


// Enum ConZ.EVitamin
enum class EVitamin : uint8_t
{
	EVitamin__A                    = 0,
	EVitamin__B1                   = 1,
	EVitamin__B2                   = 2,
	EVitamin__B3                   = 3,
	EVitamin__B4                   = 4,
	EVitamin__B5                   = 5,
	EVitamin__B6                   = 6,
	EVitamin__B9                   = 7,
	EVitamin__B12                  = 8,
	EVitamin__C                    = 9,
	EVitamin__D                    = 10,
	EVitamin__E                    = 11,
	EVitamin__K                    = 12,
	EVitamin__Count                = 13,
	EVitamin__EVitamin_MAX         = 14
};


// Enum ConZ.EPrisonerTempCategory
enum class EPrisonerTempCategory : uint8_t
{
	EPrisonerTempCategory__Idle    = 0,
	EPrisonerTempCategory__Low     = 1,
	EPrisonerTempCategory__Medium  = 2,
	EPrisonerTempCategory__High    = 3,
	EPrisonerTempCategory__EPrisonerTempCategory_MAX = 4
};


// Enum ConZ.ETestMinMax
enum class ETestMinMax : uint8_t
{
	ETestMinMax__Normal            = 0,
	ETestMinMax__Min               = 1,
	ETestMinMax__Max               = 2
};


// Enum ConZ.EOptionalState
enum class EOptionalState : uint8_t
{
	EOptionalState__None           = 0,
	EOptionalState__Add            = 1,
	EOptionalState__Remove         = 2,
	EOptionalState__EOptionalState_MAX = 3
};


// Enum ConZ.ERecipeAvailabilityState
enum class ERecipeAvailabilityState : uint8_t
{
	ERecipeAvailabilityState__None = 0,
	ERecipeAvailabilityState__SkillLow = 1,
	ERecipeAvailabilityState__NoIngredients = 2,
	ERecipeAvailabilityState__SomeIngredients = 3,
	ERecipeAvailabilityState__AllIngredients = 4,
	ERecipeAvailabilityState__ERecipeAvailabilityState_MAX = 5
};


// Enum ConZ.EInventoryNodeWidgetType
enum class EInventoryNodeWidgetType : uint8_t
{
	EInventoryNodeWidgetType__None = 0,
	EInventoryNodeWidgetType__Inventory = 1,
	EInventoryNodeWidgetType__InventoryContainer = 2,
	EInventoryNodeWidgetType__HandsAndHolsters = 3,
	EInventoryNodeWidgetType__QuickAccess = 4,
	EInventoryNodeWidgetType__ClothesSideLayer = 5,
	EInventoryNodeWidgetType__ToolTip = 6,
	EInventoryNodeWidgetType__Vicinity = 7,
	EInventoryNodeWidgetType__VicinityContainer = 8,
	EInventoryNodeWidgetType__EInventoryNodeWidgetType_MAX = 9
};


// Enum ConZ.EWeaponFiringMode
enum class EWeaponFiringMode : uint8_t
{
	EWeaponFiringMode__Automatic   = 0,
	EWeaponFiringMode__SingleShot  = 1,
	EWeaponFiringMode__EWeaponFiringMode_MAX = 2
};


// Enum ConZ.EWeaponMalfunctionEvent
enum class EWeaponMalfunctionEvent : uint8_t
{
	EWeaponMalfunctionEvent__RoundAdded = 0,
	EWeaponMalfunctionEvent__ChamberOpened = 1,
	EWeaponMalfunctionEvent__ChamberOpenedCasingEjected = 2,
	EWeaponMalfunctionEvent__ChamberOpenedRoundEjected = 3,
	EWeaponMalfunctionEvent__ChamberClosed = 4,
	EWeaponMalfunctionEvent__ChamberClosedRoundLoaded = 5,
	EWeaponMalfunctionEvent__AttachmentAdded = 6,
	EWeaponMalfunctionEvent__EWeaponMalfunctionEvent_MAX = 7
};


// Enum ConZ.EWeaponActionNotifyType
enum class EWeaponActionNotifyType : uint8_t
{
	EWeaponActionNotifyType__None  = 0,
	EWeaponActionNotifyType__ChamberOpened = 1,
	EWeaponActionNotifyType__ChamberClosed = 2,
	EWeaponActionNotifyType__ChamberOpenedClosed = 3,
	EWeaponActionNotifyType__BowInsertArrow = 4,
	EWeaponActionNotifyType__BowRemoveArrow = 5,
	EWeaponActionNotifyType__CompoundBowTuneDrawWeight = 6,
	EWeaponActionNotifyType__StaminaDrained = 7,
	EWeaponActionNotifyType__DropMagazine = 8,
	EWeaponActionNotifyType__ClearMalfunction = 9,
	EWeaponActionNotifyType__EWeaponActionNotifyType_MAX = 10
};


// Enum ConZ.EWeaponBehaviourMode
enum class EWeaponBehaviourMode : uint8_t
{
	EWeaponBehaviourMode__Default  = 0,
	EWeaponBehaviourMode__Inspect  = 1,
	EWeaponBehaviourMode__EWeaponBehaviourMode_MAX = 2
};


// Enum ConZ.EWeaponFiringStateType
enum class EWeaponFiringStateType : uint8_t
{
	EWeaponFiringStateType__Automatic = 0,
	EWeaponFiringStateType__SemiAutomatic = 1,
	EWeaponFiringStateType__Manual = 2,
	EWeaponFiringStateType__EWeaponFiringStateType_MAX = 3
};


// Enum ConZ.EAnimalStance
enum class EAnimalStance : uint8_t
{
	EAnimalStance__Breathing       = 0,
	EAnimalStance__Idle            = 1,
	EAnimalStance__Agressive       = 2,
	EAnimalStance__Alerted         = 3,
	EAnimalStance__EAnimalStance_MAX = 4
};


// Enum ConZ.EAnimalActivityCycle
enum class EAnimalActivityCycle : uint8_t
{
	EAnimalActivityCycle__Diurnal  = 0,
	EAnimalActivityCycle__Nocturnal = 1,
	EAnimalActivityCycle__Both     = 2,
	EAnimalActivityCycle__EAnimalActivityCycle_MAX = 3
};


// Enum ConZ.EAnimal2Sound
enum class EAnimal2Sound : uint8_t
{
	EAnimal2Sound__None            = 0,
	EAnimal2Sound__Idle            = 1,
	EAnimal2Sound__Angry           = 2,
	EAnimal2Sound__Attack          = 3,
	EAnimal2Sound__Kill            = 4,
	EAnimal2Sound__Scared          = 5,
	EAnimal2Sound__Alerted         = 6,
	EAnimal2Sound__EAnimal2Sound_MAX = 7
};


// Enum ConZ.EAnimalSound
enum class EAnimalSound : uint8_t
{
	EAnimalSound__None             = 0,
	EAnimalSound__Idle             = 1,
	EAnimalSound__Angry            = 2,
	EAnimalSound__Attack           = 3,
	EAnimalSound__Kill             = 4,
	EAnimalSound__EAnimalSound_MAX = 5
};


// Enum ConZ.EAnimalLearnLevel
enum class EAnimalLearnLevel : uint8_t
{
	EAnimalLearnLevel__Basic       = 0,
	EAnimalLearnLevel__Medium      = 1,
	EAnimalLearnLevel__Advanced    = 2,
	EAnimalLearnLevel__EAnimalLearnLevel_MAX = 3
};


// Enum ConZ.EAnimalCommand
enum class EAnimalCommand : uint8_t
{
	EAnimalCommand__None           = 0,
	EAnimalCommand__Follow         = 1,
	EAnimalCommand__Unfollow       = 2,
	EAnimalCommand__StayStill      = 3,
	EAnimalCommand__MoveFreely     = 4,
	EAnimalCommand__FetchItem      = 5,
	EAnimalCommand__Attack         = 6,
	EAnimalCommand__Defend         = 7,
	EAnimalCommand__Guard          = 8,
	EAnimalCommand__Seek           = 9,
	EAnimalCommand__EAnimalCommand_MAX = 10
};


// Enum ConZ.EAnimalHandlingStage
enum class EAnimalHandlingStage : uint8_t
{
	EAnimalHandlingStage__NotPacified = 0,
	EAnimalHandlingStage__Pacified = 1,
	EAnimalHandlingStage__Tamed    = 2,
	EAnimalHandlingStage__LearnedBasic = 3,
	EAnimalHandlingStage__LearnedMedium = 4,
	EAnimalHandlingStage__LearnedAdvanced = 5,
	EAnimalHandlingStage__EAnimalHandlingStage_MAX = 6
};


// Enum ConZ.EAnimalHandlingLevel
enum class EAnimalHandlingLevel : uint8_t
{
	EAnimalHandlingLevel__SmallDomestic = 0,
	EAnimalHandlingLevel__BigDomestic = 1,
	EAnimalHandlingLevel__Wild     = 2,
	EAnimalHandlingLevel__Unhandleable = 3,
	EAnimalHandlingLevel__EAnimalHandlingLevel_MAX = 4
};


// Enum ConZ.EAnimalPace
enum class EAnimalPace : uint8_t
{
	EAnimalPace__Idle              = 0,
	EAnimalPace__Walking           = 1,
	EAnimalPace__Running           = 2,
	EAnimalPace__EAnimalPace_MAX   = 3
};


// Enum ConZ.EBlueprintItemActionType
enum class EBlueprintItemActionType : uint8_t
{
	EBlueprintItemActionType__BlueprintPlaced = 0,
	EBlueprintItemActionType__BlueprintFilled = 1,
	EBlueprintItemActionType__BlueprintCompleted = 2,
	EBlueprintItemActionType__EBlueprintItemActionType_MAX = 3
};


// Enum ConZ.ESplineAxis
enum class ESplineAxis : uint8_t
{
	ESplineAxis__X                 = 0,
	ESplineAxis__Y                 = 1,
	ESplineAxis__Z                 = 2,
	ESplineAxis__ESplineAxis_MAX   = 3
};


// Enum ConZ.EWireType
enum class EWireType : uint8_t
{
	EWireType__Green               = 0,
	EWireType__Yellow              = 1,
	EWireType__Red                 = 2,
	EWireType__Count               = 3,
	EWireType__EWireType_MAX       = 4
};


// Enum ConZ.EBoundBodyPart
enum class EBoundBodyPart : uint8_t
{
	EBoundBodyPart__Hands          = 0,
	EBoundBodyPart__Feet           = 1,
	EBoundBodyPart__EBoundBodyPart_MAX = 2
};


// Enum ConZ.EBrokenLimbsTreatment
enum class EBrokenLimbsTreatment : uint8_t
{
	EBrokenLimbsTreatment__Immobilize = 0,
	EBrokenLimbsTreatment__MendBones = 1,
	EBrokenLimbsTreatment__EBrokenLimbsTreatment_MAX = 2
};


// Enum ConZ.EBruiseZone
enum class EBruiseZone : uint8_t
{
	EBruiseZone__Left              = 0,
	EBruiseZone__Middle            = 1,
	EBruiseZone__Right             = 2,
	EBruiseZone__Count             = 3,
	EBruiseZone__EBruiseZone_MAX   = 4
};


// Enum ConZ.EBruiseLayer
enum class EBruiseLayer : uint8_t
{
	EBruiseLayer__Light            = 0,
	EBruiseLayer__Medium           = 1,
	EBruiseLayer__Hard             = 2,
	EBruiseLayer__Count            = 3,
	EBruiseLayer__EBruiseLayer_MAX = 4
};


// Enum ConZ.ECardinalDirection
enum class ECardinalDirection : uint8_t
{
	ECardinalDirection__None       = 0,
	ECardinalDirection__North      = 1,
	ECardinalDirection__East       = 2,
	ECardinalDirection__South      = 3,
	ECardinalDirection__West       = 4,
	ECardinalDirection__ECardinalDirection_MAX = 5
};


// Enum ConZ.ECharacterActionNotifyType
enum class ECharacterActionNotifyType : uint8_t
{
	ECharacterActionNotifyType__None = 0,
	ECharacterActionNotifyType__AddMagazine = 1,
	ECharacterActionNotifyType__RemoveMagazine = 2,
	ECharacterActionNotifyType__InsertCartridge = 3,
	ECharacterActionNotifyType__SwapWeapons = 4,
	ECharacterActionNotifyType__Chop = 5,
	ECharacterActionNotifyType__CommitSuicide = 6,
	ECharacterActionNotifyType__IgniteFlare = 7,
	ECharacterActionNotifyType__BuryBreach = 8,
	ECharacterActionNotifyType__BuryDump = 9,
	ECharacterActionNotifyType__ECharacterActionNotifyType_MAX = 10
};


// Enum ConZ.ECharacterActionState
enum class ECharacterActionState : uint8_t
{
	ECharacterActionState__None    = 0,
	ECharacterActionState__WaitingBeginOnServer = 1,
	ECharacterActionState__Executing = 2,
	ECharacterActionState__Ended   = 3,
	ECharacterActionState__ECharacterActionState_MAX = 4
};


// Enum ConZ.ECharacterActionFlags
enum class ECharacterActionFlags : uint8_t
{
	ECharacterActionFlags__ClientWaitBeginOnServer = 0,
	ECharacterActionFlags__AllWaitEndOnOwningClient = 1,
	ECharacterActionFlags__CanBeAborted = 2,
	ECharacterActionFlags__ECharacterActionFlags_MAX = 3
};


// Enum ConZ.ECharacterActionConstraint
enum class ECharacterActionConstraint : uint8_t
{
	ECharacterActionConstraint__Move = 0,
	ECharacterActionConstraint__Turn = 1,
	ECharacterActionConstraint__Stance = 2,
	ECharacterActionConstraint__ProneInOut = 3,
	ECharacterActionConstraint__Lean = 4,
	ECharacterActionConstraint__ECharacterActionConstraint_MAX = 5
};


// Enum ConZ.ECharacterLegsImpactSoundCategory
enum class ECharacterLegsImpactSoundCategory : uint8_t
{
	ECharacterLegsImpactSoundCategory__Any = 0,
	ECharacterLegsImpactSoundCategory__Bare = 1,
	ECharacterLegsImpactSoundCategory__Blocked = 2,
	ECharacterLegsImpactSoundCategory__LightlyClothed = 3,
	ECharacterLegsImpactSoundCategory__ECharacterLegsImpactSoundCategory_MAX = 4
};


// Enum ConZ.ECharacterArmsImpactSoundCategory
enum class ECharacterArmsImpactSoundCategory : uint8_t
{
	ECharacterArmsImpactSoundCategory__Any = 0,
	ECharacterArmsImpactSoundCategory__Bare = 1,
	ECharacterArmsImpactSoundCategory__Blocked = 2,
	ECharacterArmsImpactSoundCategory__LightlyClothed = 3,
	ECharacterArmsImpactSoundCategory__ECharacterArmsImpactSoundCategory_MAX = 4
};


// Enum ConZ.ECharacterTorsoImpactSoundCategory
enum class ECharacterTorsoImpactSoundCategory : uint8_t
{
	ECharacterTorsoImpactSoundCategory__Any = 0,
	ECharacterTorsoImpactSoundCategory__Bare = 1,
	ECharacterTorsoImpactSoundCategory__Blocked = 2,
	ECharacterTorsoImpactSoundCategory__LightlyClothed = 3,
	ECharacterTorsoImpactSoundCategory__ECharacterTorsoImpactSoundCategory_MAX = 4
};


// Enum ConZ.ECharacterHeadImpactSoundCategory
enum class ECharacterHeadImpactSoundCategory : uint8_t
{
	ECharacterHeadImpactSoundCategory__Any = 0,
	ECharacterHeadImpactSoundCategory__Bare = 1,
	ECharacterHeadImpactSoundCategory__Blocked = 2,
	ECharacterHeadImpactSoundCategory__Helmet = 3,
	ECharacterHeadImpactSoundCategory__ECharacterHeadImpactSoundCategory_MAX = 4
};


// Enum ConZ.ECharacterPainSoundSeverity
enum class ECharacterPainSoundSeverity : uint8_t
{
	ECharacterPainSoundSeverity__Light = 0,
	ECharacterPainSoundSeverity__Medium = 1,
	ECharacterPainSoundSeverity__Heavy = 2,
	ECharacterPainSoundSeverity__Stun = 3,
	ECharacterPainSoundSeverity__Knockout = 4,
	ECharacterPainSoundSeverity__Death = 5,
	ECharacterPainSoundSeverity__ECharacterPainSoundSeverity_MAX = 6
};


// Enum ConZ.ECharacterSpawnerRange
enum class ECharacterSpawnerRange : uint8_t
{
	ECharacterSpawnerRange__Long   = 0,
	ECharacterSpawnerRange__Short  = 1,
	ECharacterSpawnerRange__ECharacterSpawnerRange_MAX = 2
};


// Enum ConZ.ESpawnType
enum class ESpawnType : uint8_t
{
	ESpawnType__POI                = 0,
	ESpawnType__Exterior           = 1,
	ESpawnType__Interior           = 2,
	ESpawnType__ESpawnType_MAX     = 3
};


// Enum ConZ.ECharacterStatsOrderByField
enum class ECharacterStatsOrderByField : uint8_t
{
	ECharacterStatsOrderByField__FamePoints = 0,
	ECharacterStatsOrderByField__EventScore = 1,
	ECharacterStatsOrderByField__EventKills = 2,
	ECharacterStatsOrderByField__EventDeaths = 3,
	ECharacterStatsOrderByField__ECharacterStatsOrderByField_MAX = 4
};


// Enum ConZ.EInteractionTargetType
enum class EInteractionTargetType : uint8_t
{
	EInteractionTargetType__Self   = 0,
	EInteractionTargetType__HoveredInteractable = 1,
	EInteractionTargetType__Specified = 2,
	EInteractionTargetType__EInteractionTargetType_MAX = 3
};


// Enum ConZ.EAnimalMovementPace
enum class EAnimalMovementPace : uint8_t
{
	EAnimalMovementPace__Sneak     = 0,
	EAnimalMovementPace__Walk      = 1,
	EAnimalMovementPace__Trot      = 2,
	EAnimalMovementPace__Run       = 3,
	EAnimalMovementPace__EAnimalMovementPace_MAX = 4
};


// Enum ConZ.EAnimalAgressivness
enum class EAnimalAgressivness : uint8_t
{
	EAnimalAgressivness__Timid     = 0,
	EAnimalAgressivness__Moderate  = 1,
	EAnimalAgressivness__Agressive = 2,
	EAnimalAgressivness__EAnimalAgressivness_MAX = 3
};


// Enum ConZ.EAnimalMode
enum class EAnimalMode : uint8_t
{
	EAnimalMode__None              = 0,
	EAnimalMode__Roam              = 1,
	EAnimalMode__Alert             = 2,
	EAnimalMode__Observe           = 3,
	EAnimalMode__TrotAway          = 4,
	EAnimalMode__Aggro             = 5,
	EAnimalMode__Flee              = 6,
	EAnimalMode__EAnimalMode_MAX   = 7
};


// Enum ConZ.EConZBaseErrorMessage
enum class EConZBaseErrorMessage : uint8_t
{
	EConZBaseErrorMessage__None    = 0,
	EConZBaseErrorMessage__CantPlaceMask = 1,
	EConZBaseErrorMessage__CantPlaceDuplicateFlag = 2,
	EConZBaseErrorMessage__CantPlaceEnemyFlag = 3,
	EConZBaseErrorMessage__CantPlaceMustBeOnFoundation = 4,
	EConZBaseErrorMessage__CantPlaceOnOtherElements = 5,
	EConZBaseErrorMessage__CantPlaceNoBase = 6,
	EConZBaseErrorMessage__EConZBaseErrorMessage_MAX = 7
};


// Enum ConZ.ECompassType
enum class ECompassType : uint8_t
{
	ECompassType__None             = 0,
	ECompassType__NorthOnly        = 1,
	ECompassType__CardinalOnly     = 2,
	ECompassType__CardinalAndIntercardinal = 3,
	ECompassType__Everything       = 4,
	ECompassType__Count            = 5,
	ECompassType__ECompassType_MAX = 6
};


// Enum ConZ.EConZBaseEventType
enum class EConZBaseEventType : uint8_t
{
	EConZBaseEventType__None       = 0,
	EConZBaseEventType__ElementConstructed = 1,
	EConZBaseEventType__ElementRepaired = 2,
	EConZBaseEventType__EConZBaseEventType_MAX = 3
};


// Enum ConZ.FConZBaseFlagType
enum class EFConZBaseFlagType : uint8_t
{
	FConZBaseFlagType__None        = 0,
	FConZBaseFlagType__Friendly    = 1,
	FConZBaseFlagType__Enemy       = 2,
	FConZBaseFlagType__FConZBaseFlagType_MAX = 3
};


// Enum ConZ.ESnappingPosition
enum class ESnappingPosition : uint8_t
{
	ESnappingPosition__None        = 0,
	ESnappingPosition__Left        = 1,
	ESnappingPosition__Right       = 2,
	ESnappingPosition__Front       = 3,
	ESnappingPosition__Back        = 4,
	ESnappingPosition__Top         = 5,
	ESnappingPosition__Bottom      = 6,
	ESnappingPosition__Door        = 7,
	ESnappingPosition__Platform    = 8,
	ESnappingPosition__ESnappingPosition_MAX = 9
};


// Enum ConZ.EBaseElementType
enum class EBaseElementType : uint8_t
{
	EBaseElementType__None         = 0,
	EBaseElementType__WoodenPalisade = 1,
	EBaseElementType__SandBox      = 2,
	EBaseElementType__Door         = 3,
	EBaseElementType__Well         = 4,
	EBaseElementType__Platform     = 5,
	EBaseElementType__Watchtower   = 6,
	EBaseElementType__WatchtowerTop = 7,
	EBaseElementType__Foundation   = 8,
	EBaseElementType__Flag         = 9,
	EBaseElementType__WallOrnament = 10,
	EBaseElementType__CeilingOrnament = 11,
	EBaseElementType__Cabin        = 12,
	EBaseElementType__Stairs       = 13,
	EBaseElementType__EBaseElementType_MAX = 14
};


// Enum ConZ.EPlayPreparationsState
enum class EPlayPreparationsState : uint8_t
{
	EPlayPreparationsState__StreamingCheck = 0,
	EPlayPreparationsState__AuthSend = 1,
	EPlayPreparationsState__AuthReceive = 2,
	EPlayPreparationsState__InitialSyncSend = 3,
	EPlayPreparationsState__InitialSyncReceive = 4,
	EPlayPreparationsState__Succeeded = 5,
	EPlayPreparationsState__Failed = 6,
	EPlayPreparationsState__EPlayPreparationsState_MAX = 7
};


// Enum ConZ.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
	EClassRepNodeMapping__NotRouted = 0,
	EClassRepNodeMapping__RelevantAllConnections = 1,
	EClassRepNodeMapping__Spatialize_Static = 2,
	EClassRepNodeMapping__Spatialize_Dynamic = 3,
	EClassRepNodeMapping__Spatialize_Dormancy = 4,
	EClassRepNodeMapping__EClassRepNodeMapping_MAX = 5
};


// Enum ConZ.ECraftingItemCategory
enum class ECraftingItemCategory : uint8_t
{
	ECraftingItemCategory__None    = 0,
	ECraftingItemCategory__ToolsAndWeapons = 1,
	ECraftingItemCategory__Items   = 2,
	ECraftingItemCategory__Food    = 3,
	ECraftingItemCategory__BaseBuilding = 4,
	ECraftingItemCategory__ECraftingItemCategory_MAX = 5
};


// Enum ConZ.ECraftingType
enum class ECraftingType : uint8_t
{
	ECraftingType__Use             = 0,
	ECraftingType__Assemble        = 1,
	ECraftingType__Destroy         = 2,
	ECraftingType__Attach          = 3,
	ECraftingType__ECraftingType_MAX = 4
};


// Enum ConZ.EDbConnectionOpenMode
enum class EDbConnectionOpenMode : uint8_t
{
	EDbConnectionOpenMode__None    = 0,
	EDbConnectionOpenMode__ReadOnly = 1,
	EDbConnectionOpenMode__ReadWrite = 2,
	EDbConnectionOpenMode__EDbConnectionOpenMode_MAX = 3
};


// Enum ConZ.EDialogAnimationState
enum class EDialogAnimationState : uint8_t
{
	EDialogAnimationState__None    = 0,
	EDialogAnimationState__Show    = 1,
	EDialogAnimationState__Hide    = 2,
	EDialogAnimationState__EDialogAnimationState_MAX = 3
};


// Enum ConZ.EDoorType
enum class EDoorType : uint8_t
{
	EDoorType__Regular             = 0,
	EDoorType__BaseDoor            = 1,
	EDoorType__EDoorType_MAX       = 2
};


// Enum ConZ.EDroneSound
enum class EDroneSound : uint8_t
{
	EDroneSound__None              = 0,
	EDroneSound__Idle              = 1,
	EDroneSound__Attack            = 2,
	EDroneSound__Kill              = 3,
	EDroneSound__EDroneSound_MAX   = 4
};


// Enum ConZ.EDroneState
enum class EDroneState : uint8_t
{
	EDroneState__Initial           = 0,
	EDroneState__Patrolling        = 1,
	EDroneState__Following         = 2,
	EDroneState__Fleeing           = 3,
	EDroneState__EDroneState_MAX   = 4
};


// Enum ConZ.EDropZoneGameEventPhase
enum class EDropZoneGameEventPhase : uint8_t
{
	EDropZoneGameEventPhase__Warmup = 0,
	EDropZoneGameEventPhase__Search = 1,
	EDropZoneGameEventPhase__Drop  = 2,
	EDropZoneGameEventPhase__Capture = 3,
	EDropZoneGameEventPhase__EDropZoneGameEventPhase_MAX = 4
};


// Enum ConZ.EFlareIgniteState
enum class EFlareIgniteState : uint8_t
{
	EFlareIgniteState__None        = 0,
	EFlareIgniteState__Start       = 1,
	EFlareIgniteState__Burning     = 2,
	EFlareIgniteState__Extinguish  = 3,
	EFlareIgniteState__Finished    = 4,
	EFlareIgniteState__EFlareIgniteState_MAX = 5
};


// Enum ConZ.EDigestionGroup
enum class EDigestionGroup : uint8_t
{
	EDigestionGroup__Water         = 0,
	EDigestionGroup__Juices        = 1,
	EDigestionGroup__SemiLiquid    = 2,
	EDigestionGroup__Fruits1       = 3,
	EDigestionGroup__Fruits3       = 4,
	EDigestionGroup__Fruits4       = 5,
	EDigestionGroup__Fruits5       = 6,
	EDigestionGroup__Vegetables1   = 7,
	EDigestionGroup__Vegetables2   = 8,
	EDigestionGroup__Vegetables3   = 9,
	EDigestionGroup__Vegetables4   = 10,
	EDigestionGroup__SemiConcentratedCarbs = 11,
	EDigestionGroup__ConcentratedCarbs1 = 12,
	EDigestionGroup__ConcentratedCarbs2 = 13,
	EDigestionGroup__ConcentratedCarbs3 = 14,
	EDigestionGroup__SeedsNuts1    = 15,
	EDigestionGroup__SeedsNuts2    = 16,
	EDigestionGroup__Dairy1        = 17,
	EDigestionGroup__Dairy2        = 18,
	EDigestionGroup__Dairy3        = 19,
	EDigestionGroup__Animal1       = 20,
	EDigestionGroup__Animal2       = 21,
	EDigestionGroup__Animal3       = 22,
	EDigestionGroup__Animal4       = 23,
	EDigestionGroup__Animal5       = 24,
	EDigestionGroup__Animal6       = 25,
	EDigestionGroup__Fish1         = 26,
	EDigestionGroup__Fish2         = 27,
	EDigestionGroup__Vitamins      = 28,
	EDigestionGroup__CookedMeals   = 29,
	EDigestionGroup__OilFat        = 30,
	EDigestionGroup__EDigestionGroup_MAX = 31
};


// Enum ConZ.EGameEventPlayerRoundResult
enum class EGameEventPlayerRoundResult : uint8_t
{
	EGameEventPlayerRoundResult__None = 0,
	EGameEventPlayerRoundResult__Win = 1,
	EGameEventPlayerRoundResult__Lose = 2,
	EGameEventPlayerRoundResult__Draw = 3,
	EGameEventPlayerRoundResult__EGameEventPlayerRoundResult_MAX = 4
};


// Enum ConZ.EGameEventNotificationType
enum class EGameEventNotificationType : uint8_t
{
	EGameEventNotificationType__EventStarted = 0,
	EGameEventNotificationType__EventCanceled = 1,
	EGameEventNotificationType__EventEnded = 2,
	EGameEventNotificationType__NotEnoughParticipants = 3,
	EGameEventNotificationType__ParticipantJoined = 4,
	EGameEventNotificationType__ParticipantLeft = 5,
	EGameEventNotificationType__EGameEventNotificationType_MAX = 6
};


// Enum ConZ.EGameEventParticipantState
enum class EGameEventParticipantState : uint8_t
{
	EGameEventParticipantState__Registered = 0,
	EGameEventParticipantState__Spawning = 1,
	EGameEventParticipantState__Alive = 2,
	EGameEventParticipantState__Dead = 3,
	EGameEventParticipantState__Left = 4,
	EGameEventParticipantState__EGameEventParticipantState_MAX = 5
};


// Enum ConZ.EGameEventState
enum class EGameEventState : uint8_t
{
	EGameEventState__Announced     = 0,
	EGameEventState__RoundStarted  = 1,
	EGameEventState__RoundEnded    = 2,
	EGameEventState__Ended         = 3,
	EGameEventState__EGameEventState_MAX = 4
};


// Enum ConZ.EGameEventBorderState
enum class EGameEventBorderState : uint8_t
{
	EGameEventBorderState__Off     = 0,
	EGameEventBorderState__On      = 1,
	EGameEventBorderState__Bright  = 2,
	EGameEventBorderState__EGameEventBorderState_MAX = 3
};


// Enum ConZ.EGameEventTransportState
enum class EGameEventTransportState : uint8_t
{
	EGameEventTransportState__StandBy = 0,
	EGameEventTransportState__Travelling = 1,
	EGameEventTransportState__Leaving = 2,
	EGameEventTransportState__Landing = 3,
	EGameEventTransportState__LiftOff = 4,
	EGameEventTransportState__EGameEventTransportState_MAX = 5
};


// Enum ConZ.ERagdollTransitionState
enum class ERagdollTransitionState : uint8_t
{
	ERagdollTransitionState__None  = 0,
	ERagdollTransitionState__GoTo  = 1,
	ERagdollTransitionState__RecoverFrom = 2,
	ERagdollTransitionState__RecoverFromImmediately = 3,
	ERagdollTransitionState__ERagdollTransitionState_MAX = 4
};


// Enum ConZ.EHitReactState
enum class EHitReactState : uint8_t
{
	EHitReactState__None           = 0,
	EHitReactState__Hit            = 1,
	EHitReactState__Stun           = 2,
	EHitReactState__Knockout       = 3,
	EHitReactState__GettingUp      = 4,
	EHitReactState__Ragdoll        = 5,
	EHitReactState__EHitReactState_MAX = 6
};


// Enum ConZ.EGoToRagdollCaller
enum class EGoToRagdollCaller : uint8_t
{
	EGoToRagdollCaller__Default    = 0,
	EGoToRagdollCaller__Montage    = 1,
	EGoToRagdollCaller__EGoToRagdollCaller_MAX = 2
};


// Enum ConZ.EWarningType
enum class EWarningType : uint8_t
{
	EWarningType__Danger           = 0,
	EWarningType__Explosion        = 1,
	EWarningType__LifeThreat       = 2,
	EWarningType__Watching         = 3,
	EWarningType__Traps            = 4,
	EWarningType__EWarningType_MAX = 5
};


// Enum ConZ.EHumanRace
enum class EHumanRace : uint8_t
{
	EHumanRace__Caucasian          = 0,
	EHumanRace__Mongoloid          = 1,
	EHumanRace__Negroid            = 2,
	EHumanRace__EHumanRace_MAX     = 3
};


// Enum ConZ.EImpactSeverity
enum class EImpactSeverity : uint8_t
{
	EImpactSeverity__Light         = 0,
	EImpactSeverity__Medium        = 1,
	EImpactSeverity__Heavy         = 2,
	EImpactSeverity__Count         = 3,
	EImpactSeverity__EImpactSeverity_MAX = 4
};


// Enum ConZ.EInteractionState
enum class EInteractionState : uint8_t
{
	EInteractionState__Busy        = 0,
	EInteractionState__NoInteractionDefined = 1,
	EInteractionState__CanInteract = 2,
	EInteractionState__UnableToInteract = 3,
	EInteractionState__EInteractionState_MAX = 4
};


// Enum ConZ.EHandsHolstersType
enum class EHandsHolstersType : uint8_t
{
	EHandsHolstersType__Hands      = 0,
	EHandsHolstersType__HolsterLeft = 1,
	EHandsHolstersType__HolsterRight = 2,
	EHandsHolstersType__EHandsHolstersType_MAX = 3
};


// Enum ConZ.EInventoryNodeWidgetDataType
enum class EInventoryNodeWidgetDataType : uint8_t
{
	EInventoryNodeWidgetDataType__Number = 0,
	EInventoryNodeWidgetDataType__Text = 1,
	EInventoryNodeWidgetDataType__Icon = 2,
	EInventoryNodeWidgetDataType__Visibility = 3,
	EInventoryNodeWidgetDataType__EInventoryNodeWidgetDataType_MAX = 4
};


// Enum ConZ.ETooltipPanelType
enum class ETooltipPanelType : uint8_t
{
	ETooltipPanelType__Overview    = 0,
	ETooltipPanelType__Additional  = 1,
	ETooltipPanelType__ETooltipPanelType_MAX = 2
};


// Enum ConZ.EMedicalDiagnosisType
enum class EMedicalDiagnosisType : uint8_t
{
	EMedicalDiagnosisType__CheckPulse = 0,
	EMedicalDiagnosisType__FullDiagnosis = 1,
	EMedicalDiagnosisType__EMedicalDiagnosisType_MAX = 2
};


// Enum ConZ.EDiagnosisLevel
enum class EDiagnosisLevel : uint8_t
{
	EDiagnosisLevel__TempOnly      = 0,
	EDiagnosisLevel__Physical      = 1,
	EDiagnosisLevel__PhysicalSeverity = 2,
	EDiagnosisLevel__Everything    = 3,
	EDiagnosisLevel__EDiagnosisLevel_MAX = 4
};


// Enum ConZ.EMedicationType
enum class EMedicationType : uint8_t
{
	EMedicationType__Painkillers   = 0,
	EMedicationType__Sedatives     = 1,
	EMedicationType__Antibiotics   = 2,
	EMedicationType__Antiparasitics = 3,
	EMedicationType__Stimulants    = 4,
	EMedicationType__EMedicationType_MAX = 5
};


// Enum ConZ.EMedicationUsage
enum class EMedicationUsage : uint8_t
{
	EMedicationUsage__Pills        = 0,
	EMedicationUsage__Injections   = 1,
	EMedicationUsage__Infusions    = 2,
	EMedicationUsage__EMedicationUsage_MAX = 3
};


// Enum ConZ.EMeleeActionType
enum class EMeleeActionType : uint8_t
{
	EMeleeActionType__None         = 0,
	EMeleeActionType__Attack       = 1,
	EMeleeActionType__PrepareForBlockOrDodge = 2,
	EMeleeActionType__Block        = 3,
	EMeleeActionType__Dodge        = 4,
	EMeleeActionType__EMeleeActionType_MAX = 5
};


// Enum ConZ.EMeleeState
enum class EMeleeState : uint8_t
{
	EMeleeState__Idle              = 0,
	EMeleeState__Attacking         = 1,
	EMeleeState__PreparedForBlockOrDodge = 2,
	EMeleeState__Block             = 3,
	EMeleeState__Dodge             = 4,
	EMeleeState__HitReact          = 5,
	EMeleeState__EMeleeState_MAX   = 6
};


// Enum ConZ.EHitDirectionType
enum class EHitDirectionType : uint8_t
{
	EHitDirectionType__Front       = 0,
	EHitDirectionType__Left        = 1,
	EHitDirectionType__Back        = 2,
	EHitDirectionType__Right       = 3,
	EHitDirectionType__EHitDirectionType_MAX = 4
};


// Enum ConZ.EAttackCollisionType
enum class EAttackCollisionType : uint8_t
{
	EAttackCollisionType__None     = 0,
	EAttackCollisionType__WeaponLeftHand = 1,
	EAttackCollisionType__WeaponRightHand = 2,
	EAttackCollisionType__Head     = 3,
	EAttackCollisionType__LeftHand = 4,
	EAttackCollisionType__RightHand = 5,
	EAttackCollisionType__LeftLeg  = 6,
	EAttackCollisionType__RightLeg = 7,
	EAttackCollisionType__EAttackCollisionType_MAX = 8
};


// Enum ConZ.EEndMinigameReason
enum class EEndMinigameReason : uint8_t
{
	EEndMinigameReason__Succees    = 0,
	EEndMinigameReason__Fail       = 1,
	EEndMinigameReason__Cancel     = 2,
	EEndMinigameReason__EEndMinigameReason_MAX = 3
};


// Enum ConZ.EObjectiveAnimationState
enum class EObjectiveAnimationState : uint8_t
{
	EObjectiveAnimationState__None = 0,
	EObjectiveAnimationState__Start = 1,
	EObjectiveAnimationState__Complete = 2,
	EObjectiveAnimationState__EObjectiveAnimationState_MAX = 3
};


// Enum ConZ.EMissionManagerState
enum class EMissionManagerState : uint8_t
{
	EMissionManagerState__None     = 0,
	EMissionManagerState__MainStorySuccess = 1,
	EMissionManagerState__SideStorySuccess = 2,
	EMissionManagerState__TutorialSuccess = 3,
	EMissionManagerState__MainStoryFailed = 4,
	EMissionManagerState__SideStoryFailed = 5,
	EMissionManagerState__TutorialFailed = 6,
	EMissionManagerState__EMissionManagerState_MAX = 7
};


// Enum ConZ.EDialogType
enum class EDialogType : uint8_t
{
	EDialogType__Subtitle          = 0,
	EDialogType__Action            = 1,
	EDialogType__Wait              = 2,
	EDialogType__EDialogType_MAX   = 3
};


// Enum ConZ.EDialogEvent
enum class EDialogEvent : uint8_t
{
	EDialogEvent__Intro            = 0,
	EDialogEvent__OpenInteface     = 1,
	EDialogEvent__OpenCraftingInterface = 2,
	EDialogEvent__ChooseKnife      = 3,
	EDialogEvent__OpenCraftingInterface_Bag = 4,
	EDialogEvent__EDialogEvent_MAX = 5
};


// Enum ConZ.EFaction
enum class EFaction : uint8_t
{
	EFaction__None                 = 0,
	EFaction__Rebel                = 1,
	EFaction__TEC                  = 2,
	EFaction__EFaction_MAX         = 3
};


// Enum ConZ.EObjectiveState
enum class EObjectiveState : uint8_t
{
	EObjectiveState__None          = 0,
	EObjectiveState__Initialized   = 1,
	EObjectiveState__Started       = 2,
	EObjectiveState__Completed     = 3,
	EObjectiveState__Failed        = 4,
	EObjectiveState__Belated       = 5,
	EObjectiveState__EObjectiveState_MAX = 6
};


// Enum ConZ.EMissionType
enum class EMissionType : uint8_t
{
	EMissionType__None             = 0,
	EMissionType__MainStory        = 1,
	EMissionType__SideStory        = 2,
	EMissionType__Tutorial         = 3,
	EMissionType__EMissionType_MAX = 4
};


// Enum ConZ.EMissionState
enum class EMissionState : uint8_t
{
	EMissionState__Available       = 0,
	EMissionState__Unavailable     = 1,
	EMissionState__Started         = 2,
	EMissionState__Completed       = 3,
	EMissionState__Failed          = 4,
	EMissionState__Belated         = 5,
	EMissionState__EMissionState_MAX = 6
};


// Enum ConZ.ENotificationTarget
enum class ENotificationTarget : uint8_t
{
	ENotificationTarget__Everybody = 0,
	ENotificationTarget__SingleClient = 1,
	ENotificationTarget__ENotificationTarget_MAX = 2
};


// Enum ConZ.EMouseSensitivityMode
enum class EMouseSensitivityMode : uint8_t
{
	EMouseSensitivityMode__None    = 0,
	EMouseSensitivityMode__ThirdPerson = 1,
	EMouseSensitivityMode__FirstPerson = 2,
	EMouseSensitivityMode__DownTheSight = 3,
	EMouseSensitivityMode__Scope   = 4,
	EMouseSensitivityMode__Drone   = 5,
	EMouseSensitivityMode__EMouseSensitivityMode_MAX = 6
};


// Enum ConZ.EAnesthesiaType
enum class EAnesthesiaType : uint8_t
{
	EAnesthesiaType__Local         = 0,
	EAnesthesiaType__General       = 1,
	EAnesthesiaType__EAnesthesiaType_MAX = 2
};


// Enum ConZ.EPickupItemOperation
enum class EPickupItemOperation : uint8_t
{
	EPickupItemOperation__PickupOnly = 0,
	EPickupItemOperation__PickupAndEat = 1,
	EPickupItemOperation__PickupAndEatAll = 2,
	EPickupItemOperation__EPickupItemOperation_MAX = 3
};


// Enum ConZ.EPlacementState
enum class EPlacementState : uint8_t
{
	EPlacementState__Placing       = 0,
	EPlacementState__PlacingSecondPoint = 1,
	EPlacementState__AdjustingHeight = 2,
	EPlacementState__PlacedPending = 3,
	EPlacementState__Placed        = 4,
	EPlacementState__EPlacementState_MAX = 5
};


// Enum ConZ.EPlacementBaseBuildingState
enum class EPlacementBaseBuildingState : uint8_t
{
	EPlacementBaseBuildingState__Placing = 0,
	EPlacementBaseBuildingState__PlacingSecondPoint = 1,
	EPlacementBaseBuildingState__Placed = 2,
	EPlacementBaseBuildingState__EPlacementBaseBuildingState_MAX = 3
};


// Enum ConZ.EPlaceableIngredientType
enum class EPlaceableIngredientType : uint8_t
{
	EPlaceableIngredientType__Mandatory = 0,
	EPlaceableIngredientType__Tool = 1,
	EPlaceableIngredientType__EPlaceableIngredientType_MAX = 2
};


// Enum ConZ.EIngredientUsageRule
enum class EIngredientUsageRule : uint8_t
{
	EIngredientUsageRule__Quantity = 0,
	EIngredientUsageRule__Usage    = 1,
	EIngredientUsageRule__Weight   = 2,
	EIngredientUsageRule__EIngredientUsageRule_MAX = 3
};


// Enum ConZ.EPlacementAllowedStatus
enum class EPlacementAllowedStatus : uint8_t
{
	EPlacementAllowedStatus__None  = 0,
	EPlacementAllowedStatus__Allowed = 1,
	EPlacementAllowedStatus__NotAllowedPlacementLineTraceFailed = 2,
	EPlacementAllowedStatus__NotAllowedNormalTestFailed = 3,
	EPlacementAllowedStatus__NotAllowedInteractionDistance = 4,
	EPlacementAllowedStatus__NotAllowedReachability = 5,
	EPlacementAllowedStatus__NotAllowedWater = 6,
	EPlacementAllowedStatus__NotAllowedAngle = 7,
	EPlacementAllowedStatus__NotAllowedMeshOverlap = 8,
	EPlacementAllowedStatus__NotAllowedTopOverlap = 9,
	EPlacementAllowedStatus__NotAllowedTopOverlapSimple = 10,
	EPlacementAllowedStatus__NotAllowedBottomOverlap = 11,
	EPlacementAllowedStatus__NotAllowedFullBoxOverlap = 12,
	EPlacementAllowedStatus__NotAllowedExtendedOverlap = 13,
	EPlacementAllowedStatus__NotAllowedFloating = 14,
	EPlacementAllowedStatus__NotAllowedTeleportSpot = 15,
	EPlacementAllowedStatus__NotAllowedHitCharacter = 16,
	EPlacementAllowedStatus__NotAllowedHitItem = 17,
	EPlacementAllowedStatus__NotAllowedHitVehicle = 18,
	EPlacementAllowedStatus__NotAllowedNotSnapping = 19,
	EPlacementAllowedStatus__NotAllowedCantPlaceAtLocation = 20,
	EPlacementAllowedStatus__NotAllowedLocationMask = 21,
	EPlacementAllowedStatus__NotAllowedLocationDupFlag = 22,
	EPlacementAllowedStatus__NotAllowedLocationEnemyFlag = 23,
	EPlacementAllowedStatus__NotAllowedLocationFoundation = 24,
	EPlacementAllowedStatus__NotAllowedLocationOtherElement = 25,
	EPlacementAllowedStatus__NotAllowedLocationNoBase = 26,
	EPlacementAllowedStatus__NotAllowedEnemyFlag = 27,
	EPlacementAllowedStatus__NotAllowedTwoPointsConstaints = 28,
	EPlacementAllowedStatus__NotAllowedHeightDifference = 29,
	EPlacementAllowedStatus__NotAllowedTopSweep = 30,
	EPlacementAllowedStatus__NotAllowedMidSweep = 31,
	EPlacementAllowedStatus__NotAllowedTilesNotGrounded = 32,
	EPlacementAllowedStatus__NotAllowedPlacedDistance = 33,
	EPlacementAllowedStatus__NotAllowedUnknown = 34,
	EPlacementAllowedStatus__EPlacementAllowedStatus_MAX = 35
};


// Enum ConZ.EPlacementAlgorithm
enum class EPlacementAlgorithm : uint8_t
{
	EPlacementAlgorithm__Classic   = 0,
	EPlacementAlgorithm__New       = 1,
	EPlacementAlgorithm__EPlacementAlgorithm_MAX = 2
};


// Enum ConZ.EPlacementBaseState
enum class EPlacementBaseState : uint8_t
{
	EPlacementBaseState__None      = 0,
	EPlacementBaseState__Placing   = 1,
	EPlacementBaseState__Placed    = 2,
	EPlacementBaseState__HeightAdjustment = 3,
	EPlacementBaseState__EPlacementBaseState_MAX = 4
};


// Enum ConZ.EPlayableInstrumentView
enum class EPlayableInstrumentView : uint8_t
{
	EPlayableInstrumentView__FirstPerson = 0,
	EPlayableInstrumentView__ThirdPerson = 1,
	EPlayableInstrumentView__EPlayableInstrumentView_MAX = 2
};


// Enum ConZ.EPlayableInstrumentChord
enum class EPlayableInstrumentChord : uint8_t
{
	EPlayableInstrumentChord__Count = 0,
	EPlayableInstrumentChord__EPlayableInstrumentChord_MAX = 1
};


// Enum ConZ.EInstrumentEventType
enum class EInstrumentEventType : uint8_t
{
	EInstrumentEventType__PlayTone = 0,
	EInstrumentEventType__StopTone = 1,
	EInstrumentEventType__EInstrumentEventType_MAX = 2
};


// Enum ConZ.EStanceChangeFlag
enum class EStanceChangeFlag : uint8_t
{
	EStanceChangeFlag__Exact       = 0,
	EStanceChangeFlag__Min         = 1,
	EStanceChangeFlag__Max         = 2
};


// Enum ConZ.ESwapItemsType
enum class ESwapItemsType : uint8_t
{
	ESwapItemsType__None           = 0,
	ESwapItemsType__NotWeaponToNotWeapon = 1,
	ESwapItemsType__WeaponToWeapon = 2,
	ESwapItemsType__NotWeaponToWeapon = 3,
	ESwapItemsType__WeaponToNotWeapon = 4,
	ESwapItemsType__ESwapItemsType_MAX = 5
};


// Enum ConZ.EPrisonerAnimationCurve
enum class EPrisonerAnimationCurve : uint8_t
{
	EPrisonerAnimationCurve__LegsPose = 0,
	EPrisonerAnimationCurve__CanStartGoToLoop = 1,
	EPrisonerAnimationCurve__CanStartGoToStopLU = 2,
	EPrisonerAnimationCurve__CanStartGoToStopRU = 3,
	EPrisonerAnimationCurve__DistanceToPivot = 4,
	EPrisonerAnimationCurve__CanLandGoToLoop = 5,
	EPrisonerAnimationCurve__CanFireWeapon = 6,
	EPrisonerAnimationCurve__LeftHandIK = 7,
	EPrisonerAnimationCurve__MoveInputScale = 8,
	EPrisonerAnimationCurve__MoveInputModifierScale = 9,
	EPrisonerAnimationCurve__MoveInputModifierCourseAngle = 10,
	EPrisonerAnimationCurve__IgnoreMoveInput = 11,
	EPrisonerAnimationCurve__IgnoreTurnInput = 12,
	EPrisonerAnimationCurve__IsStanceTransitionActive = 13,
	EPrisonerAnimationCurve__MeshOffsetWhenInWater = 14,
	EPrisonerAnimationCurve__ViewRoll = 15,
	EPrisonerAnimationCurve__ViewPitch = 16,
	EPrisonerAnimationCurve__ViewYaw = 17,
	EPrisonerAnimationCurve__Count = 18,
	EPrisonerAnimationCurve__EPrisonerAnimationCurve_MAX = 19
};


// Enum ConZ.EPrisonerAnimationState
enum class EPrisonerAnimationState : uint8_t
{
	EPrisonerAnimationState__Unknown = 0,
	EPrisonerAnimationState__Entry = 1,
	EPrisonerAnimationState__StandIdle = 2,
	EPrisonerAnimationState__StandIdleToCrouchIdle = 3,
	EPrisonerAnimationState__StandIdleToProneIdle = 4,
	EPrisonerAnimationState__StandWalkStart = 5,
	EPrisonerAnimationState__StandWalkLoop = 6,
	EPrisonerAnimationState__StandWalkStop = 7,
	EPrisonerAnimationState__StandJogStart = 8,
	EPrisonerAnimationState__StandJogLoop = 9,
	EPrisonerAnimationState__StandJogStop = 10,
	EPrisonerAnimationState__StandRunStart = 11,
	EPrisonerAnimationState__StandRunLoop = 12,
	EPrisonerAnimationState__StandRunStop = 13,
	EPrisonerAnimationState__CrouchIdle = 14,
	EPrisonerAnimationState__CrouchIdleToStandIdle = 15,
	EPrisonerAnimationState__CrouchIdleToProneIdle = 16,
	EPrisonerAnimationState__CrouchWalkStart = 17,
	EPrisonerAnimationState__CrouchWalkLoop = 18,
	EPrisonerAnimationState__CrouchWalkStop = 19,
	EPrisonerAnimationState__ProneIdle = 20,
	EPrisonerAnimationState__ProneIdleToStandIdle = 21,
	EPrisonerAnimationState__ProneIdleToCrouchIdle = 22,
	EPrisonerAnimationState__ProneWalkLoop = 23,
	EPrisonerAnimationState__Count = 24,
	EPrisonerAnimationState__EPrisonerAnimationState_MAX = 25
};


// Enum ConZ.EPrisonerConsciousness
enum class EPrisonerConsciousness : uint8_t
{
	EPrisonerConsciousness__Conscious = 0,
	EPrisonerConsciousness__Unconscious = 1,
	EPrisonerConsciousness__Coma   = 2,
	EPrisonerConsciousness__Death  = 3,
	EPrisonerConsciousness__EPrisonerConsciousness_MAX = 4
};


// Enum ConZ.EBuryState
enum class EBuryState : uint8_t
{
	EBuryState__None               = 0,
	EBuryState__Bury               = 1,
	EBuryState__ResumeBury         = 2,
	EBuryState__Rest               = 3,
	EBuryState__Finish             = 4,
	EBuryState__EBuryState_MAX     = 5
};


// Enum ConZ.EPrisonerFacialExpression
enum class EPrisonerFacialExpression : uint8_t
{
	EPrisonerFacialExpression__None = 0,
	EPrisonerFacialExpression__Angry1 = 1,
	EPrisonerFacialExpression__Angry2 = 2,
	EPrisonerFacialExpression__Hit = 3,
	EPrisonerFacialExpression__Punching = 4,
	EPrisonerFacialExpression__Fear1 = 5,
	EPrisonerFacialExpression__Fear2 = 6,
	EPrisonerFacialExpression__Fear3 = 7,
	EPrisonerFacialExpression__WhatTheHell1 = 8,
	EPrisonerFacialExpression__WhatTheHell2 = 9,
	EPrisonerFacialExpression__Whistling1 = 10,
	EPrisonerFacialExpression__Whistling2 = 11,
	EPrisonerFacialExpression__Ouch1 = 12,
	EPrisonerFacialExpression__Ouch2 = 13,
	EPrisonerFacialExpression__Count = 14,
	EPrisonerFacialExpression__EPrisonerFacialExpression_MAX = 15
};


// Enum ConZ.EPrisonerFirstPersonSubview
enum class EPrisonerFirstPersonSubview : uint8_t
{
	EPrisonerFirstPersonSubview__Standing = 0,
	EPrisonerFirstPersonSubview__Crouching = 1,
	EPrisonerFirstPersonSubview__Prone = 2,
	EPrisonerFirstPersonSubview__StandingMelee = 3,
	EPrisonerFirstPersonSubview__StandingAiming = 4,
	EPrisonerFirstPersonSubview__CrouchingAiming = 5,
	EPrisonerFirstPersonSubview__ProneAiming = 6,
	EPrisonerFirstPersonSubview__StandingAimingDownTheSights = 7,
	EPrisonerFirstPersonSubview__CrouchingAimingDownTheSights = 8,
	EPrisonerFirstPersonSubview__ProneAimingDownTheSights = 9,
	EPrisonerFirstPersonSubview__ClimbingWindow = 10,
	EPrisonerFirstPersonSubview__Mounted = 11,
	EPrisonerFirstPersonSubview__Lying = 12,
	EPrisonerFirstPersonSubview__Count = 13,
	EPrisonerFirstPersonSubview__EPrisonerFirstPersonSubview_MAX = 14
};


// Enum ConZ.EPrisonerHUDMode
enum class EPrisonerHUDMode : uint8_t
{
	EPrisonerHUDMode__Normal       = 0,
	EPrisonerHUDMode__DebugMain    = 1,
	EPrisonerHUDMode__DebugSkills  = 2,
	EPrisonerHUDMode__DebugMovement = 3,
	EPrisonerHUDMode__DebugMeleeSkill = 4,
	EPrisonerHUDMode__Target       = 5,
	EPrisonerHUDMode__Map          = 6,
	EPrisonerHUDMode__DroneNormal  = 7,
	EPrisonerHUDMode__DroneMap     = 8,
	EPrisonerHUDMode__EPrisonerHUDMode_MAX = 9
};


// Enum ConZ.EPrisonerDivingState
enum class EPrisonerDivingState : uint8_t
{
	EPrisonerDivingState__None     = 0,
	EPrisonerDivingState__WantsToDive = 1,
	EPrisonerDivingState__Diving   = 2,
	EPrisonerDivingState__EPrisonerDivingState_MAX = 3
};


// Enum ConZ.EPrisonerMovementMode
enum class EPrisonerMovementMode : uint8_t
{
	EPrisonerMovementMode__None    = 0,
	EPrisonerMovementMode__Climbing_Anchoring = 1,
	EPrisonerMovementMode__Climbing_PlayingMontage = 2,
	EPrisonerMovementMode__ClimbingLadder = 3,
	EPrisonerMovementMode__ClimbingWindow_Anchoring = 4,
	EPrisonerMovementMode__ClimbingWindow_PlayingMontage = 5,
	EPrisonerMovementMode__EPrisonerMovementMode_MAX = 6
};


// Enum ConZ.EPrisonerResponseIdle
enum class EPrisonerResponseIdle : uint8_t
{
	EPrisonerResponseIdle__None    = 0,
	EPrisonerResponseIdle__Winded  = 1,
	EPrisonerResponseIdle__Exhausted = 2,
	EPrisonerResponseIdle__Cold    = 3,
	EPrisonerResponseIdle__Dirty   = 4,
	EPrisonerResponseIdle__NeedsToUrinate = 5,
	EPrisonerResponseIdle__NeedsToDefecate = 6,
	EPrisonerResponseIdle__Dizzy   = 7,
	EPrisonerResponseIdle__Drunk   = 8,
	EPrisonerResponseIdle__Num     = 9,
	EPrisonerResponseIdle__EPrisonerResponseIdle_MAX = 10
};


// Enum ConZ.EPrisonerRestingMode
enum class EPrisonerRestingMode : uint8_t
{
	EPrisonerRestingMode__None     = 0,
	EPrisonerRestingMode__Sitting  = 1,
	EPrisonerRestingMode__Lying    = 2,
	EPrisonerRestingMode__Count    = 3,
	EPrisonerRestingMode__EPrisonerRestingMode_MAX = 4
};


// Enum ConZ.EPrisonerVisibilityFlag
enum class EPrisonerVisibilityFlag : uint8_t
{
	EPrisonerVisibilityFlag__None  = 0,
	EPrisonerVisibilityFlag__Default = 1,
	EPrisonerVisibilityFlag__View  = 2,
	EPrisonerVisibilityFlag__Awareness = 3,
	EPrisonerVisibilityFlag__All   = 4,
	EPrisonerVisibilityFlag__EPrisonerVisibilityFlag_MAX = 5
};


// Enum ConZ.EPrisonerAimOffsetType
enum class EPrisonerAimOffsetType : uint8_t
{
	EPrisonerAimOffsetType__Standing = 0,
	EPrisonerAimOffsetType__Crouching = 1,
	EPrisonerAimOffsetType__Prone  = 2,
	EPrisonerAimOffsetType__ProneMoving = 3,
	EPrisonerAimOffsetType__FirstPersonView = 4,
	EPrisonerAimOffsetType__FirstPersonViewProne = 5,
	EPrisonerAimOffsetType__AimingDownTheSights = 6,
	EPrisonerAimOffsetType__Count  = 7,
	EPrisonerAimOffsetType__EPrisonerAimOffsetType_MAX = 8
};


// Enum ConZ.EPrisonerMontageBlendType
enum class EPrisonerMontageBlendType : uint8_t
{
	EPrisonerMontageBlendType__All = 0,
	EPrisonerMontageBlendType__LeftHand = 1,
	EPrisonerMontageBlendType__RightHand = 2,
	EPrisonerMontageBlendType__EPrisonerMontageBlendType_MAX = 3
};


// Enum ConZ.EPrisonerMontage
enum class EPrisonerMontage : uint8_t
{
	EPrisonerMontage__None         = 0,
	EPrisonerMontage__WeaponEquipRifle = 1,
	EPrisonerMontage__WeaponUnequipRifle = 2,
	EPrisonerMontage__WeaponEquipHandgun = 3,
	EPrisonerMontage__WeaponUnequipHandgun = 4,
	EPrisonerMontage__Urinate      = 5,
	EPrisonerMontage__UrinateForced = 6,
	EPrisonerMontage__Defecate     = 7,
	EPrisonerMontage__DefecateForced = 8,
	EPrisonerMontage__Vomit        = 9,
	EPrisonerMontage__VomitForced  = 10,
	EPrisonerMontage__SearchObject = 11,
	EPrisonerMontage__SearchPrisoner = 12,
	EPrisonerMontage__SearchZombie = 13,
	EPrisonerMontage__PatchWounds  = 14,
	EPrisonerMontage__PatchWoundsEnd = 15,
	EPrisonerMontage__DrinkInteraction = 16,
	EPrisonerMontage__Eat          = 17,
	EPrisonerMontage__EatCan       = 18,
	EPrisonerMontage__Drink        = 19,
	EPrisonerMontage__Throw        = 20,
	EPrisonerMontage__SwapWeapons  = 21,
	EPrisonerMontage__ChopTree     = 22,
	EPrisonerMontage__ChopTreeEnd  = 23,
	EPrisonerMontage__ChopLog      = 24,
	EPrisonerMontage__ChopLogEnd   = 25,
	EPrisonerMontage__SwapItemsNotWeaponToNotWeapon = 26,
	EPrisonerMontage__SwapItemsWeaponToWeapon = 27,
	EPrisonerMontage__SwapItemsNotWeaponToWeapon = 28,
	EPrisonerMontage__SwapItemsWeaponToNotWeapon = 29,
	EPrisonerMontage__Craft        = 30,
	EPrisonerMontage__Uncraft      = 31,
	EPrisonerMontage__CheckTime    = 32,
	EPrisonerMontage__CheckTimeWhileItemInHands = 33,
	EPrisonerMontage__CheckTimeWhileWeaponInHands = 34,
	EPrisonerMontage__GestureShowFinger = 35,
	EPrisonerMontage__GestureStandSurrender = 36,
	EPrisonerMontage__GestureWaveHi = 37,
	EPrisonerMontage__GestureYouAreDead = 38,
	EPrisonerMontage__GestureFY    = 39,
	EPrisonerMontage__GesturePoint = 40,
	EPrisonerMontage__GestureHeart = 41,
	EPrisonerMontage__GestureBallpalm = 42,
	EPrisonerMontage__GestureFacepalm = 43,
	EPrisonerMontage__GestureFingerGun = 44,
	EPrisonerMontage__GestureLaughing = 45,
	EPrisonerMontage__GestureSmellWave = 46,
	EPrisonerMontage__GestureSquat = 47,
	EPrisonerMontage__GestureCharge = 48,
	EPrisonerMontage__GestureFreeze = 49,
	EPrisonerMontage__GestureGetDown = 50,
	EPrisonerMontage__GestureGetUp = 51,
	EPrisonerMontage__GestureHalt  = 52,
	EPrisonerMontage__GestureHurryUp = 53,
	EPrisonerMontage__GesturePointMe = 54,
	EPrisonerMontage__GesturePointYou = 55,
	EPrisonerMontage__GestureRally = 56,
	EPrisonerMontage__GestureThumbsUp = 57,
	EPrisonerMontage__GestureThumbsDown = 58,
	EPrisonerMontage__GestureUnderstandNot = 59,
	EPrisonerMontage__GestureUnderstandYes = 60,
	EPrisonerMontage__CommitSuicide = 61,
	EPrisonerMontage__CommitSuicideRare = 62,
	EPrisonerMontage__CommitSuicideCaptured = 63,
	EPrisonerMontage__LockpickRegular = 64,
	EPrisonerMontage__Whistle      = 65,
	EPrisonerMontage__TuneBow      = 66,
	EPrisonerMontage__RepairVehicle = 67,
	EPrisonerMontage__WashCloth    = 68,
	EPrisonerMontage__Bury         = 69,
	EPrisonerMontage__BuryRest     = 70,
	EPrisonerMontage__ResumeBury   = 71,
	EPrisonerMontage__SitOnGroundStart = 72,
	EPrisonerMontage__SitOnGroundEnd = 73,
	EPrisonerMontage__LayOnGroundStart = 74,
	EPrisonerMontage__LayOnGroundEnd = 75,
	EPrisonerMontage__IgniteFlare  = 76,
	EPrisonerMontage__ArmTrap      = 77,
	EPrisonerMontage__Count        = 78,
	EPrisonerMontage__EPrisonerMontage_MAX = 79
};


// Enum ConZ.EWeaponAnimationPose
enum class EWeaponAnimationPose : uint8_t
{
	EWeaponAnimationPose__None     = 0,
	EWeaponAnimationPose__Relaxed  = 1,
	EWeaponAnimationPose__AimingHip = 2,
	EWeaponAnimationPose__AimingDownTheSights = 3,
	EWeaponAnimationPose__AimingDownTheSightsStill = 4,
	EWeaponAnimationPose__AimingDownTheSightsWalking = 5,
	EWeaponAnimationPose__AimingDownTheSightsLimpingWalking = 6,
	EWeaponAnimationPose__Count    = 7,
	EWeaponAnimationPose__EWeaponAnimationPose_MAX = 8
};


// Enum ConZ.EPrisonerAnimationSet
enum class EPrisonerAnimationSet : uint8_t
{
	EPrisonerAnimationSet__Base    = 0,
	EPrisonerAnimationSet__Rifle   = 1,
	EPrisonerAnimationSet__RifleRelaxed = 2,
	EPrisonerAnimationSet__UnarmedCombat = 3,
	EPrisonerAnimationSet__Handgun = 4,
	EPrisonerAnimationSet__BowRelaxed = 5,
	EPrisonerAnimationSet__Bow     = 6,
	EPrisonerAnimationSet__CarryingItem = 7,
	EPrisonerAnimationSet__HandsBound = 8,
	EPrisonerAnimationSet__BaseLimping = 9,
	EPrisonerAnimationSet__RifleLimping = 10,
	EPrisonerAnimationSet__RifleRelaxedLimping = 11,
	EPrisonerAnimationSet__UnarmedCombatLimping = 12,
	EPrisonerAnimationSet__HandgunLimping = 13,
	EPrisonerAnimationSet__BowRelaxedLimping = 14,
	EPrisonerAnimationSet__BowLimping = 15,
	EPrisonerAnimationSet__CarryingItemLimping = 16,
	EPrisonerAnimationSet__HandsBoundLimping = 17,
	EPrisonerAnimationSet__Count   = 18,
	EPrisonerAnimationSet__EPrisonerAnimationSet_MAX = 19
};


// Enum ConZ.EPrisonerReplicatedComponent
enum class EPrisonerReplicatedComponent : uint8_t
{
	EPrisonerReplicatedComponent__LifeComponent = 0,
	EPrisonerReplicatedComponent__SkillComponent = 1,
	EPrisonerReplicatedComponent__InventoryComponent = 2,
	EPrisonerReplicatedComponent__HitReactComponent = 3,
	EPrisonerReplicatedComponent__InteractionComponent = 4,
	EPrisonerReplicatedComponent__Count = 5,
	EPrisonerReplicatedComponent__EPrisonerReplicatedComponent_MAX = 6
};


// Enum ConZ.EPrisonerThirdPersonSubview
enum class EPrisonerThirdPersonSubview : uint8_t
{
	EPrisonerThirdPersonSubview__Standing = 0,
	EPrisonerThirdPersonSubview__Crouching = 1,
	EPrisonerThirdPersonSubview__Prone = 2,
	EPrisonerThirdPersonSubview__StandingMelee = 3,
	EPrisonerThirdPersonSubview__StandingAiming = 4,
	EPrisonerThirdPersonSubview__CrouchingAiming = 5,
	EPrisonerThirdPersonSubview__ProneAiming = 6,
	EPrisonerThirdPersonSubview__Ragdoll = 7,
	EPrisonerThirdPersonSubview__NarrowLadder = 8,
	EPrisonerThirdPersonSubview__Swimming = 9,
	EPrisonerThirdPersonSubview__Diving = 10,
	EPrisonerThirdPersonSubview__ClimbingWindow = 11,
	EPrisonerThirdPersonSubview__Defecating = 12,
	EPrisonerThirdPersonSubview__Count = 13,
	EPrisonerThirdPersonSubview__EPrisonerThirdPersonSubview_MAX = 14
};


// Enum ConZ.EPlayerSideView
enum class EPlayerSideView : uint8_t
{
	EPlayerSideView__Left          = 0,
	EPlayerSideView__Right         = 1,
	EPlayerSideView__Count         = 2,
	EPlayerSideView__EPlayerSideView_MAX = 3
};


// Enum ConZ.EPenetrationType
enum class EPenetrationType : uint8_t
{
	EPenetrationType__None         = 0,
	EPenetrationType__Entry        = 1,
	EPenetrationType__Exit         = 2,
	EPenetrationType__Both         = 3,
	EPenetrationType__EPenetrationType_MAX = 4
};


// Enum ConZ.EBallisticDragModel
enum class EBallisticDragModel : uint8_t
{
	EBallisticDragModel__G1        = 0,
	EBallisticDragModel__G2        = 1,
	EBallisticDragModel__G5        = 2,
	EBallisticDragModel__G6        = 3,
	EBallisticDragModel__G7        = 4,
	EBallisticDragModel__G8        = 5,
	EBallisticDragModel__EBallisticDragModel_MAX = 6
};


// Enum ConZ.EQuiverActiveMesh
enum class EQuiverActiveMesh : uint8_t
{
	EQuiverActiveMesh__Static      = 0,
	EQuiverActiveMesh__Skeletal    = 1,
	EQuiverActiveMesh__SkeletalAlternative = 2,
	EQuiverActiveMesh__EQuiverActiveMesh_MAX = 3
};


// Enum ConZ.ERepairType
enum class ERepairType : uint8_t
{
	ERepairType__None              = 0,
	ERepairType__RepairHealth      = 1,
	ERepairType__ERepairType_MAX   = 2
};


// Enum ConZ.EScopingView
enum class EScopingView : uint8_t
{
	EScopingView__FirstPerson      = 0,
	EScopingView__ThirdPerson      = 1,
	EScopingView__EScopingView_MAX = 2
};


// Enum ConZ.EScopingStance
enum class EScopingStance : uint8_t
{
	EScopingStance__Standing       = 0,
	EScopingStance__Crouching      = 1,
	EScopingStance__Prone          = 2,
	EScopingStance__EScopingStance_MAX = 3
};


// Enum ConZ.ESentryMovementPace
enum class ESentryMovementPace : uint8_t
{
	ESentryMovementPace__Walking   = 0,
	ESentryMovementPace__Running   = 1,
	ESentryMovementPace__Count     = 2,
	ESentryMovementPace__ESentryMovementPace_MAX = 3
};


// Enum ConZ.ESentryState
enum class ESentryState : uint8_t
{
	ESentryState__Initial          = 0,
	ESentryState__Offline          = 1,
	ESentryState__Patrolling       = 2,
	ESentryState__Guarding         = 3,
	ESentryState__Following        = 4,
	ESentryState__Threaten         = 5,
	ESentryState__SearchAndDestroy = 6,
	ESentryState__ESentryState_MAX = 7
};


// Enum ConZ.ESentryThirdPersonSubview
enum class ESentryThirdPersonSubview : uint8_t
{
	ESentryThirdPersonSubview__Standing = 0,
	ESentryThirdPersonSubview__StandingAiming = 1,
	ESentryThirdPersonSubview__Count = 2,
	ESentryThirdPersonSubview__ESentryThirdPersonSubview_MAX = 3
};


// Enum ConZ.ESortType
enum class ESortType : uint8_t
{
	ESortType__None                = 0,
	ESortType__Host                = 1,
	ESortType__Password            = 2,
	ESortType__Mode                = 3,
	ESortType__Version             = 4,
	ESortType__Time                = 5,
	ESortType__Friends             = 6,
	ESortType__Players             = 7,
	ESortType__Ping                = 8,
	ESortType__ESortType_MAX       = 9
};


// Enum ConZ.EServerBrowserTab
enum class EServerBrowserTab : uint8_t
{
	EServerBrowserTab__Internet    = 0,
	EServerBrowserTab__Favorites   = 1,
	EServerBrowserTab__LastPlayed  = 2,
	EServerBrowserTab__EServerBrowserTab_MAX = 3
};


// Enum ConZ.ESicknessState
enum class ESicknessState : uint8_t
{
	ESicknessState__Sick           = 0,
	ESicknessState__Cured          = 1,
	ESicknessState__Treated        = 2,
	ESicknessState__Untreated      = 3,
	ESicknessState__Done           = 4,
	ESicknessState__ESicknessState_MAX = 5
};


// Enum ConZ.ESimpleAnimalMode
enum class ESimpleAnimalMode : uint8_t
{
	ESimpleAnimalMode__Wander      = 0,
	ESimpleAnimalMode__Flee        = 1,
	ESimpleAnimalMode__ESimpleAnimalMode_MAX = 2
};


// Enum ConZ.ESkillReplicationID
enum class ESkillReplicationID : uint8_t
{
	ESkillReplicationID__None      = 0,
	ESkillReplicationID__EnduranceSkill = 1,
	ESkillReplicationID__ResistanceSkill = 2,
	ESkillReplicationID__RunningSkill = 3,
	ESkillReplicationID__SwimmingSkill = 4,
	ESkillReplicationID__MedicalSkill = 5,
	ESkillReplicationID__AwarenessSkill = 6,
	ESkillReplicationID__StealthSkill = 7,
	ESkillReplicationID__AnimalHandlingSkill = 8,
	ESkillReplicationID__CookingSkill = 9,
	ESkillReplicationID__SurvivalSkill = 10,
	ESkillReplicationID__BioChemSkill = 11,
	ESkillReplicationID__BoxingSkill = 12,
	ESkillReplicationID__MeleeWeaponsSkill = 13,
	ESkillReplicationID__RiflesSkill = 14,
	ESkillReplicationID__HandgunSkill = 15,
	ESkillReplicationID__SnipingSkill = 16,
	ESkillReplicationID__CamouflageSkill = 17,
	ESkillReplicationID__TacticsSkill = 18,
	ESkillReplicationID__ThrowingSkill = 19,
	ESkillReplicationID__ArcherySkill = 20,
	ESkillReplicationID__ThieverySkill = 21,
	ESkillReplicationID__DrivingSkill = 22,
	ESkillReplicationID__EngineeringSkill = 23,
	ESkillReplicationID__DemolitionSkill = 24,
	ESkillReplicationID__ESkillReplicationID_MAX = 25
};


// Enum ConZ.ESurvivalStatsSubcategory
enum class ESurvivalStatsSubcategory : uint8_t
{
	ESurvivalStatsSubcategory__General = 0,
	ESurvivalStatsSubcategory__Food = 1,
	ESurvivalStatsSubcategory__Hunting = 2,
	ESurvivalStatsSubcategory__Travel = 3,
	ESurvivalStatsSubcategory__Metabolism = 4,
	ESurvivalStatsSubcategory__Crafting = 5,
	ESurvivalStatsSubcategory__Combat = 6,
	ESurvivalStatsSubcategory__Events = 7,
	ESurvivalStatsSubcategory__ESurvivalStatsSubcategory_MAX = 8
};


// Enum ConZ.ESurvivalStatsCategory
enum class ESurvivalStatsCategory : uint8_t
{
	ESurvivalStatsCategory__Survival = 0,
	ESurvivalStatsCategory__Weapons = 1,
	ESurvivalStatsCategory__Combat = 2,
	ESurvivalStatsCategory__ESurvivalStatsCategory_MAX = 3
};


// Enum ConZ.EItemThrowingBehavior
enum class EItemThrowingBehavior : uint8_t
{
	EItemThrowingBehavior__None    = 0,
	EItemThrowingBehavior__Default = 1,
	EItemThrowingBehavior__Piercing = 2,
	EItemThrowingBehavior__Fragile = 3,
	EItemThrowingBehavior__Sticky  = 4,
	EItemThrowingBehavior__EItemThrowingBehavior_MAX = 5
};


// Enum ConZ.EBleedingSeverity
enum class EBleedingSeverity : uint8_t
{
	EBleedingSeverity__NoBleeding  = 0,
	EBleedingSeverity__VeryLight   = 1,
	EBleedingSeverity__Light       = 2,
	EBleedingSeverity__Moderate    = 3,
	EBleedingSeverity__Heavy       = 4,
	EBleedingSeverity__Severe      = 5,
	EBleedingSeverity__EBleedingSeverity_MAX = 6
};


// Enum ConZ.ETrapTriggerType
enum class ETrapTriggerType : uint8_t
{
	ETrapTriggerType__None         = 0,
	ETrapTriggerType__ProximityTrigger = 1,
	ETrapTriggerType__LaserTrigger = 2,
	ETrapTriggerType__TripwireTrigger = 3,
	ETrapTriggerType__ETrapTriggerType_MAX = 4
};


// Enum ConZ.EUnarmedCombatInput
enum class EUnarmedCombatInput : uint8_t
{
	EUnarmedCombatInput__WalkForward = 0,
	EUnarmedCombatInput__WalkBackward = 1,
	EUnarmedCombatInput__WalkRight = 2,
	EUnarmedCombatInput__WalkLeft  = 3,
	EUnarmedCombatInput__Punch     = 4,
	EUnarmedCombatInput__Kick      = 5,
	EUnarmedCombatInput__BlockPressed = 6,
	EUnarmedCombatInput__BlockReleased = 7,
	EUnarmedCombatInput__PreviousTarget = 8,
	EUnarmedCombatInput__NextTarget = 9,
	EUnarmedCombatInput__ReleaseCursor = 10,
	EUnarmedCombatInput__EUnarmedCombatInput_MAX = 11
};


// Enum ConZ.EUserProfileType
enum class EUserProfileType : uint8_t
{
	EUserProfileType__Singleplayer = 0,
	EUserProfileType__MultiplayerAuthority = 1,
	EUserProfileType__MultiplayerCache = 2,
	EUserProfileType__EUserProfileType_MAX = 3
};


// Enum ConZ.EVehicleEngineState
enum class EVehicleEngineState : uint8_t
{
	EVehicleEngineState__Unavailable = 0,
	EVehicleEngineState__TurnedOff = 1,
	EVehicleEngineState__Starting  = 2,
	EVehicleEngineState__ReadyDelay = 3,
	EVehicleEngineState__Ready     = 4,
	EVehicleEngineState__FailedToStartDelay = 5,
	EVehicleEngineState__FailedToStart = 6,
	EVehicleEngineState__StalledDelay = 7,
	EVehicleEngineState__Stalled   = 8,
	EVehicleEngineState__EVehicleEngineState_MAX = 9
};


// Enum ConZ.EVehicleSeatType
enum class EVehicleSeatType : uint8_t
{
	EVehicleSeatType__Driver       = 0,
	EVehicleSeatType__Passenger    = 1,
	EVehicleSeatType__EVehicleSeatType_MAX = 2
};


// Enum ConZ.EWaypointTraverseType
enum class EWaypointTraverseType : uint8_t
{
	EWaypointTraverseType__Clockwise = 0,
	EWaypointTraverseType__CounterClockwise = 1,
	EWaypointTraverseType__Random  = 2,
	EWaypointTraverseType__EWaypointTraverseType_MAX = 3
};


// Enum ConZ.EAnimalWaypointType
enum class EAnimalWaypointType : uint8_t
{
	EAnimalWaypointType__PassThrough = 0,
	EAnimalWaypointType__Wait      = 1,
	EAnimalWaypointType__Rest      = 2,
	EAnimalWaypointType__Eat       = 3,
	EAnimalWaypointType__All       = 4,
	EAnimalWaypointType__EAnimalWaypointType_MAX = 5
};


// Enum ConZ.EWeaponAnimationCurve
enum class EWeaponAnimationCurve : uint8_t
{
	EWeaponAnimationCurve__DrawAmount = 0,
	EWeaponAnimationCurve__StrengthAmount = 1,
	EWeaponAnimationCurve__Count   = 2,
	EWeaponAnimationCurve__EWeaponAnimationCurve_MAX = 3
};


// Enum ConZ.EBowAimingTestType
enum class EBowAimingTestType : uint8_t
{
	EBowAimingTestType__DotOnly    = 0,
	EBowAimingTestType__ViewOnly   = 1,
	EBowAimingTestType__DotAndView = 2,
	EBowAimingTestType__EBowAimingTestType_MAX = 3
};


// Enum ConZ.EBowDrawPercentage
enum class EBowDrawPercentage : uint8_t
{
	EBowDrawPercentage__Draw50percent = 0,
	EBowDrawPercentage__Draw75percent = 1,
	EBowDrawPercentage__Draw100percent = 2,
	EBowDrawPercentage__Count      = 3,
	EBowDrawPercentage__EBowDrawPercentage_MAX = 4
};


// Enum ConZ.EWeaponBowState
enum class EWeaponBowState : uint8_t
{
	EWeaponBowState__None          = 0,
	EWeaponBowState__InsertArrow   = 1,
	EWeaponBowState__RemoveArrow   = 2,
	EWeaponBowState__Draw          = 3,
	EWeaponBowState__CancelFiring  = 4,
	EWeaponBowState__FireDummy     = 5,
	EWeaponBowState__Fire          = 6,
	EWeaponBowState__FireAndInsertArrow = 7,
	EWeaponBowState__Active        = 8,
	EWeaponBowState__EWeaponBowState_MAX = 9
};


// Enum ConZ.EWeaponKeyInput
enum class EWeaponKeyInput : uint8_t
{
	EWeaponKeyInput__ToggleLight   = 0,
	EWeaponKeyInput__EWeaponKeyInput_MAX = 1
};


// Enum ConZ.EReloadWeaponSequence
enum class EReloadWeaponSequence : uint8_t
{
	EReloadWeaponSequence__None    = 0,
	EReloadWeaponSequence__InsertMagazine = 1,
	EReloadWeaponSequence__RemoveMagazineInstertMagazine = 2,
	EReloadWeaponSequence__InstertCartridge = 3,
	EReloadWeaponSequence__RemoveMagazineInstertCartridge = 4,
	EReloadWeaponSequence__EReloadWeaponSequence_MAX = 5
};


// Enum ConZ.EWeaponAttachmentActionType
enum class EWeaponAttachmentActionType : uint8_t
{
	EWeaponAttachmentActionType__Add = 0,
	EWeaponAttachmentActionType__Remove = 1,
	EWeaponAttachmentActionType__Swap = 2,
	EWeaponAttachmentActionType__Count = 3,
	EWeaponAttachmentActionType__EWeaponAttachmentActionType_MAX = 4
};


// Enum ConZ.EWeaponType
enum class EWeaponType : uint8_t
{
	EWeaponType__Rifle             = 0,
	EWeaponType__Handgun           = 1,
	EWeaponType__Bow               = 2,
	EWeaponType__Count             = 3,
	EWeaponType__EWeaponType_MAX   = 4
};


// Enum ConZ.EDayPeriod
enum class EDayPeriod : uint8_t
{
	EDayPeriod__Nighttime          = 0,
	EDayPeriod__Dawn               = 1,
	EDayPeriod__Daytime            = 2,
	EDayPeriod__Dusk               = 3,
	EDayPeriod__EDayPeriod_MAX     = 4
};


// Enum ConZ.EWidgetType
enum class EWidgetType : uint8_t
{
	EWidgetType__InteractionWidgetClass = 0,
	EWidgetType__InteractionContainerWidgetClass = 1,
	EWidgetType__ItemWidgetClass   = 2,
	EWidgetType__InventoryWidgetClass = 3,
	EWidgetType__InventorySlotWidgetClass = 4,
	EWidgetType__WarningWidgetClass = 5,
	EWidgetType__HudWidgetClass    = 6,
	EWidgetType__LoadingWidgetClass = 7,
	EWidgetType__LoadingIconWidgetClass = 8,
	EWidgetType__SpawnScreenWidgetClass = 9,
	EWidgetType__WaypointScreenWidgetClass = 10,
	EWidgetType__HoverPanelWidgetClass = 11,
	EWidgetType__ActionProgressWidgetClass = 12,
	EWidgetType__ItemSelectionWidgetClass = 13,
	EWidgetType__ExamineWidgetClass = 14,
	EWidgetType__HandsInventoryWidgetClass = 15,
	EWidgetType__GenericItemInventoryWidgetClass = 16,
	EWidgetType__InventoryContainersWidgetClass = 17,
	EWidgetType__CombinedInventoryWidgetClass = 18,
	EWidgetType__TeamInvitationWidgetClass = 19,
	EWidgetType__CraftingInfoWidgetClass = 20,
	EWidgetType__CraftingComponentWidgetClass = 21,
	EWidgetType__CraftingRecipeWidgetClass = 22,
	EWidgetType__EmptySlotWidgetClass = 23,
	EWidgetType__TeamInfoWidgetClass = 24,
	EWidgetType__TeammateNameWidgetClass = 25,
	EWidgetType__PreviousNextSwitchWidgetClass = 26,
	EWidgetType__VicinityItemContainerWidgetClass = 27,
	EWidgetType__QuickAccessItemWidget = 28,
	EWidgetType__GameEventPanelWidgetClass = 29,
	EWidgetType__GameEventCardWidgetClass = 30,
	EWidgetType__GameEventScoreboardWidgetClass = 31,
	EWidgetType__GameEventMiniScoreboardWidgetClass = 32,
	EWidgetType__CircularMenuWidgetClass = 33,
	EWidgetType__CircularMenuSegmentWidgetClass = 34,
	EWidgetType__LockpickingWidgetClass = 35,
	EWidgetType__DoorUpgradeWidgetClass = 36,
	EWidgetType__UpgradeWidgetClass = 37,
	EWidgetType__ObjectivesWidget  = 38,
	EWidgetType__MissionPrompt     = 39,
	EWidgetType__MissionResult     = 40,
	EWidgetType__MissionItem       = 41,
	EWidgetType__ObjectiveItem     = 42,
	EWidgetType__MissionReward     = 43,
	EWidgetType__InventoryContainerWidget2Test = 44,
	EWidgetType__InventoryItemWidget2Test = 45,
	EWidgetType__ItemInventoryWidget2 = 46,
	EWidgetType__InventoryPanelSideLayerWidget = 47,
	EWidgetType__ItemWidget2       = 48,
	EWidgetType__ItemWidget2VicinityContainer = 49,
	EWidgetType__ItemTooltipWidget = 50,
	EWidgetType__TooltipPanelFoodOverview = 51,
	EWidgetType__TooltipPanelFoodNutritionsSingle = 52,
	EWidgetType__TooltipPanelFoodNutritionsFull = 53,
	EWidgetType__TooltipPanelFoodGraphs = 54,
	EWidgetType__TooltipPanelWeaponAbsolute = 55,
	EWidgetType__TooltipPanelWeaponRelative = 56,
	EWidgetType__StatisticsListRow = 57,
	EWidgetType__RewardItemWidget  = 58,
	EWidgetType__EWidgetType_MAX   = 59
};


// Enum ConZ.EWolfAttackState
enum class EWolfAttackState : uint8_t
{
	EWolfAttackState__Peace        = 0,
	EWolfAttackState__Chasing      = 1,
	EWolfAttackState__Attacking    = 2,
	EWolfAttackState__EWolfAttackState_MAX = 3
};


// Enum ConZ.ECraftingMarkerMode
enum class ECraftingMarkerMode : uint8_t
{
	ECraftingMarkerMode__Marker    = 0,
	ECraftingMarkerMode__FullInfo  = 1,
	ECraftingMarkerMode__ECraftingMarkerMode_MAX = 2
};


// Enum ConZ.EZombieRagdollAutoRecoveryType
enum class EZombieRagdollAutoRecoveryType : uint8_t
{
	EZombieRagdollAutoRecoveryType__None = 0,
	EZombieRagdollAutoRecoveryType__WhenAtRest = 1,
	EZombieRagdollAutoRecoveryType__AfterTimeSpan = 2,
	EZombieRagdollAutoRecoveryType__WhenAtRestAfterTimeSpan = 3,
	EZombieRagdollAutoRecoveryType__EZombieRagdollAutoRecoveryType_MAX = 4
};


// Enum ConZ.EZombieTurnMontage
enum class EZombieTurnMontage : uint8_t
{
	EZombieTurnMontage__RelaxedIdle = 0,
	EZombieTurnMontage__AlertedIdle = 1,
	EZombieTurnMontage__CombatIdle = 2,
	EZombieTurnMontage__RelaxedIdleToAlertedIdle = 3,
	EZombieTurnMontage__Count      = 4,
	EZombieTurnMontage__EZombieTurnMontage_MAX = 5
};


// Enum ConZ.EZombieStance
enum class EZombieStance : uint8_t
{
	EZombieStance__Relaxed         = 0,
	EZombieStance__Lying           = 1,
	EZombieStance__Alerted         = 2,
	EZombieStance__Combat          = 3,
	EZombieStance__EZombieStance_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ConZ.AdminCommandArgumentDescription
// 0x0020
struct FAdminCommandArgumentDescription
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               ShowCompletionValuesInHelpText;                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UClass*                                      Completion;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AttachmentSocketDataItem
// 0x0018
struct FAttachmentSocketDataItem
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MountType;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MountedItem;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AttachmentSocket
// 0x0010
struct FAttachmentSocket
{
	TArray<struct FAttachmentSocketDataItem>           Items;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.AttachmentSocketOffset
// 0x0020
struct FAttachmentSocketOffset
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct ConZ.ItemLocation
// 0x000E
struct FItemLocation
{
	bool                                               Coastal;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Continantal;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Mountain;                                                 // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Urban;                                                    // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Rural;                                                    // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Industrial;                                               // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Police;                                                   // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MilitaryBasic;                                            // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MilitaryMedium;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MilitaryAdvanced;                                         // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MilitaryWW2;                                              // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Sport;                                                    // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Market;                                                   // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               GasStation;                                               // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PossibleItemSickness
// 0x0010
struct FPossibleItemSickness
{
	class UClass*                                      Sickness;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageProbability;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemMotionNoise
// 0x0008
struct FItemMotionNoise
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemInventoryHandlingSounds
// 0x0008
struct FItemInventoryHandlingSounds
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.VisibilityReplication
// 0x0008
struct FVisibilityReplication
{
	bool                                               Value;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                RepHelper;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.InventoryStackMemberData
// 0x0008
struct FInventoryStackMemberData
{
	int                                                Position;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.InventoryStackData
// 0x0080
struct FInventoryStackData
{
	class UClass*                                      _stackClass;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              _approximateCount;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              _approximateMaxCount;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              _weight;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<unsigned char>                              _data;                                                    // 0x0018(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FInventoryStackMemberData> _membersData;                                             // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ItemLayout
// 0x0040
struct FItemLayout
{
	int                                                CellDivisions;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                OffsetX;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                OffsetY;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTexture2D*                                  Icon;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BoundsX;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BoundsY;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       Bitmask;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   IconOffset;                                               // 0x0030(0x0008) (IsPlainOldData)
	float                                              IconScale;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               UpgradedTo4kUHD;                                          // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               RevertedFromTetris;                                       // 0x003D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ConvertedTo2x2;                                           // 0x003E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x003F(0x0001) MISSED OFFSET
};

// ScriptStruct ConZ.WidgetDisplayInfo
// 0x000C
struct FWidgetDisplayInfo
{
	EWidgetDisplayInfoType                             DisplayType;                                              // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                First;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Second;                                                   // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.HitEffects
// 0x0038
struct FHitEffects
{
	float                                              SpeedThreshold;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParticlesScale;                                           // 0x0010(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeScale;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.EnvironmentDescription
// 0x0002
struct FEnvironmentDescription
{
	EEnvironmentClass                                  EnvironmentClass;                                         // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnderground;                                            // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.MeleeWeaponDesc
// 0x0028
struct FMeleeWeaponDesc
{
	float                                              Damage;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAbsorptionMultiplier;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sharpness;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KnockoutChance;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DamageMagnitudeChange;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECharacterImpactSourceSoundCategory                ImpactSoundCategory;                                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UProjectileImpactEffects*                    ImpactEffects;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                HitReact;                                                 // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.MeleeAttackCapsule
// 0x0070
struct FMeleeAttackCapsule
{
	TWeakObjectPtr<class AActor>                       AttachParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Attachment;                                               // 0x0008(0x0008)
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0030) (IsPlainOldData)
	float                                              UnscaledRadius;                                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UnscaledHalfHeight;                                       // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FMeleeWeaponDesc                            WeaponDesc;                                               // 0x0048(0x0028)
};

// ScriptStruct ConZ.MeleeAttackCapsuleHitInfo
// 0x0100
struct FMeleeAttackCapsuleHitInfo
{
	struct FMeleeAttackCapsule                         MeleeAttackCapsule;                                       // 0x0000(0x0070)
	struct FHitResult                                  HitResult;                                                // 0x0070(0x0088) (IsPlainOldData)
	EDamageMagnitudeType                               DamageMagnitudeType;                                      // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.AnimalSpawnInfo
// 0x0008
struct FAnimalSpawnInfo
{
	int                                                MaxSpawnInstances;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpawnProbability;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AnimalManagementData
// 0x0030
struct FAnimalManagementData
{
	class UClass*                                      AnimalClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class AAnimal2*>                            AliveAnimals;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class ACorpse*>                             DeadAnimals;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                VirtualAnimalAmount;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeHitDetectionMarker
// 0x0080
struct FMeleeHitDetectionMarker
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  RootMotion;                                               // 0x0040(0x0030) (Edit, IsPlainOldData)
	float                                              damageMultiplier;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseBuildingSnappingData
// 0x0010
struct FConZBaseBuildingSnappingData
{
	bool                                               CanSnapLeft;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapRight;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapFront;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapBack;                                              // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapTop;                                               // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapBottom;                                            // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              SnappingDistance;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreZCoordinate;                                        // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.BaseElementSnapMarker
// 0x0050
struct FBaseElementSnapMarker
{
	struct FTransform                                  SnapTransform;                                            // 0x0000(0x0030) (Edit, IsPlainOldData)
	EBaseElementType                                   ElementType;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              SnappingDistance;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveAmountX;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveAmountY;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveAmountZ;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESnappingPosition                                  SnappingPosition;                                         // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanMoveOnXAxis;                                           // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanMoveOnYAxis;                                           // 0x0046(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanMoveOnZAxis;                                           // 0x0047(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.RepairableParams
// 0x0038
struct FRepairableParams
{
	struct FGameplayTagContainer                       RepairableTypes;                                          // 0x0000(0x0020) (Edit)
	float                                              HealthRepairedPerUse;                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExperienceAwardedPerHealthRepaired;                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRepairDuration;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRepairDuration;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        MinSkillLevelRequired;                                    // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.LadderMarker
// 0x00A0
struct FLadderMarker
{
	struct FTransform                                  FirstStep;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LastStep;                                                 // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FTransform                                  Edge;                                                     // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CapsuleBias;                                              // 0x0070(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StepHeight;                                               // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepWidth;                                                // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionExtraAboveLastStep;                           // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionExtraBelowFirstStep;                          // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionExtraOnTheSides;                              // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasEdge;                                                  // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNarrow;                                                 // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForSounds;                                 // 0x0092(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0093(0x000D) MISSED OFFSET
};

// ScriptStruct ConZ.DbIntegerId
// 0x0008
struct FDbIntegerId
{
	int64_t                                            Value;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ScopeZoomLevelSettings
// 0x0530
struct FScopeZoomLevelSettings
{
	float                                              Magnification;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0010(0x0520) (Edit)
};

// ScriptStruct ConZ.DialogueInfo
// 0x0028
struct FDialogueInfo
{
	class UAkAudioEvent*                               VoiceOver;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0008(0x0018) (Edit)
	float                                              Duration;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDialogType                                        DialogType;                                               // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.WireDescription
// 0x000C
struct FWireDescription
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.SplineDescription
// 0x0030
struct FSplineDescription
{
	class USplineComponent*                            SplineComponent;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USplineMeshComponent*>                SplineMeshComponents;                                     // 0x0008(0x0010) (ExportObject, ZeroConstructor)
	class UStaticMeshComponent*                        SplineStartConnector;                                     // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SplineEndConnector;                                       // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillExperienceAwards
// 0x0010
struct FMeleeSkillExperienceAwards
{
	float                                              Hit;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Kill;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ComboHitMultiplier;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkillLevelBonus;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.BruisePatch
// 0x0038
struct FBruisePatch
{
	EBruiseLayer                                       Layer;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<EBruiseZone>                                AllowedZones;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
	int                                                Order;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UTexture2D*                                  Texture;                                                  // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x0028(0x0008) (Edit, IsPlainOldData)
	bool                                               Mute;                                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.WindowMarker
// 0x0050
struct FWindowMarker
{
	bool                                               IsVaultable;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFortifiable;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UWindowFortificationsType*                   WindowFortificationsType;                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AdditionalMarkerIndicesToModify;                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DidIFailToCorrectlyPlaceWindowMarkers;                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     Vertex1;                                                  // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Vertex2;                                                  // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FortificationOffset;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionBoxVertBias;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionBoxHorzBias;                                     // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.WindowMarkerModifier
// 0x0008
struct FWindowMarkerModifier
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsVaultable;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFortifiable;                                            // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.BuildingsArray
// 0x0010
struct FBuildingsArray
{
	TArray<class ABuilding*>                           _buildings;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.DoorRepData
// 0x0020
struct FDoorRepData
{
	EDoorStateFlags                                    StateFlags;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDbIntegerId                                OwningUserProfileId;                                      // 0x0008(0x0008)
	TArray<class UClass*>                              Locks;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.FortificationData
// 0x0020
struct FFortificationData
{
	int                                                MarkerIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      FortificationClass;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDbIntegerId                                OwnerUserProfileId;                                       // 0x0010(0x0008)
	float                                              health;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.BuildingData
// 0x0028
struct FBuildingData
{
	bool                                               IsCleared;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FWindowMarkerModifier>               WindowMarkerModifiers;                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FFortificationData>                  Fortifications;                                           // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.BuryMaterialData
// 0x0028
struct FBuryMaterialData
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BreachActionParticles;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               BreachActionSound;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DumpActionParticles;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DumpActionSound;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CamouflageSkillExperienceAwards
// 0x0004
struct FCamouflageSkillExperienceAwards
{
	float                                              BonusExperience;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CamouflageSkillParametersPerSkillLevel
// 0x0010
struct FCamouflageSkillParametersPerSkillLevel
{
	float                                              Modifier;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bonus;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FoliageAIPerceptionOuterRadius;                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FoliageAIPerceptionInnerRadius;                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.BodyWeaponAnimation
// 0x0010
struct FBodyWeaponAnimation
{
	class UAnimMontage*                                Body;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Weapon;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponAttachmentAnimations
// 0x0020
struct FWeaponAttachmentAnimations
{
	struct FBodyWeaponAnimation                        Add;                                                      // 0x0000(0x0010) (Edit)
	struct FBodyWeaponAnimation                        Remove;                                                   // 0x0010(0x0010) (Edit)
};

// ScriptStruct ConZ.WeaponSpreadItem
// 0x000C
struct FWeaponSpreadItem
{
	float                                              Idle;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Moving;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedTarget;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponSpreadData
// 0x0040
struct FWeaponSpreadData
{
	struct FWeaponSpreadItem                           ByStance[0x4];                                            // 0x0000(0x000C) (Edit)
	float                                              IncrementPerShot;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IncrementFromShotsMax;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IncrementSpeed;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecrementSpeed;                                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponViewKickData
// 0x0018
struct FWeaponViewKickData
{
	float                                              PitchMin;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchMax;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawMin;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawMax;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchDecrementSpeed;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawDecrementSpeed;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.FireAnimationData
// 0x0098
struct FFireAnimationData
{
	struct FBodyWeaponAnimation                        BodyWeaponAnimation;                                      // 0x0000(0x0010) (Edit)
	struct FBodyWeaponAnimation                        BodyWeaponAnimationLastShot;                              // 0x0010(0x0010) (Edit)
	struct FRuntimeFloatCurve                          WeightCurve;                                              // 0x0020(0x0078) (Edit)
};

// ScriptStruct ConZ.WeaponMalfunctionChances
// 0x0028
struct FWeaponMalfunctionChances
{
	struct FFloatInterval                              Value[0x5];                                               // 0x0000(0x0008) (Edit)
};

// ScriptStruct ConZ.WeaponReloadData
// 0x0028
struct FWeaponReloadData
{
	bool                                               IsQuick;                                                  // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AItem*                                       Item;                                                     // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item2;                                                    // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                count;                                                    // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UClass*                                      ReloadSequenceClass;                                      // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.FireShotProjectileData
// 0x0028
struct FFireShotProjectileData
{
	struct FVector                                     StartLocation;                                            // 0x0000(0x000C) (IsPlainOldData)
	struct FVector_NetQuantizeNormal                   shootDirection;                                           // 0x000C(0x000C)
	int                                                zeroRange;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Windage;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RandomFactor;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ConeHalfAngle;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.FireShotDescription
// 0x0008
struct FFireShotDescription
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.WeaponMalfunctionEventDescription
// 0x0008
struct FWeaponMalfunctionEventDescription
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.SkillTemplate
// 0x0038
struct FSkillTemplate
{
	ESkillAttribute                                    Attribute;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FString                                     ClassName;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ESkillLevel                                        Level;                                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Experience;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterTemplate
// 0x0088
struct FCharacterTemplate
{
	float                                              Strength;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Constitution;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Dexterity;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intelligence;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Age;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGender                                            Gender;                                                   // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AppearanceIndex;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TattooIndex;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreastSize;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PenisSize;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamIndex;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     BirthDate;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ArrestDate;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSkillTemplate>                      Skills;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      Item0;                                                    // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item1;                                                    // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item2;                                                    // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterImpactSounds
// 0x0008
struct FCharacterImpactSounds
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterHeadImpactSoundData
// 0x0028
struct FCharacterHeadImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<ECharacterHeadImpactSoundCategory>          ImpactTargetCategories;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterHeadImpactSoundsData
// 0x0018
struct FCharacterHeadImpactSoundsData
{
	TArray<struct FCharacterHeadImpactSoundData>       SoundsData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterTorsoImpactSoundData
// 0x0028
struct FCharacterTorsoImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<ECharacterTorsoImpactSoundCategory>         ImpactTargetCategories;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterTorsoImpactSoundsData
// 0x0018
struct FCharacterTorsoImpactSoundsData
{
	TArray<struct FCharacterTorsoImpactSoundData>      SoundsData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterArmsImpactSoundData
// 0x0028
struct FCharacterArmsImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<ECharacterArmsImpactSoundCategory>          ImpactTargetCategories;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterArmsImpactSoundsData
// 0x0018
struct FCharacterArmsImpactSoundsData
{
	TArray<struct FCharacterArmsImpactSoundData>       SoundsData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterLegsImpactSoundData
// 0x0028
struct FCharacterLegsImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<ECharacterLegsImpactSoundCategory>          ImpactTargetCategories;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterLegsImpactSoundsData
// 0x0018
struct FCharacterLegsImpactSoundsData
{
	TArray<struct FCharacterLegsImpactSoundData>       SoundsData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterSpawnerData2
// 0x0030
struct FCharacterSpawnerData2
{
	class UClass*                                      Character;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPhysicalSurface>>              AllowedSurfaces;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                CharactersPerCell;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalCharacters;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinElevation;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxElevation;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterSpawneeInfo
// 0x0010
struct FCharacterSpawneeInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.SpawnedPawnInfo
// 0x0014
struct FSpawnedPawnInfo
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ConZ.PawnCharacterInfo
// 0x00D0
struct FPawnCharacterInfo
{
	class UClass*                                      SpawnablePawn;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              CharacterPreset;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              PoiCharacterIdleThresholdTimeMP;                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorCharacterIdleThresholdTimeMP;                     // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InteriorCharacterIdleThresholdTimeMP;                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoiCharacterIdleThresholdTimeSP;                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorCharacterIdleThresholdTimeSP;                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InteriorCharacterIdleThresholdTimeSP;                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinShortRangeSpawnDistance;                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxShortRangeSpawnDistance;                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLongRangeSpawnDistance;                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLongRangeSpawnDistance;                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PawnCullDuration;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinWildCharactersPerPawnGroup;                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxWildCharactersPerPawnGroup;                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxExteriorCharactersPerPawnGroup;                        // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxInteriorCharactersPerPawnGroup;                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PawnFieldOfView;                                          // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawningFieldOfView;                                      // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowedPawns;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowedWildPawns;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
	int                                                MaxAllowedExteriorPawns;                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
	int                                                MaxAllowedInteriorPawns;                                  // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
	float                                              ExteriorPawnAmountModifier;                               // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
	float                                              InteriorPawnAmountModifier;                               // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x00A4(0x000C) MISSED OFFSET
	float                                              WildPawnAmountModifier;                                   // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET
	TArray<struct FSpawnedPawnInfo>                    SpawnedPawns;                                             // 0x00C0(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.CharacterSpawnerDataBasedOnPreset
// 0x0020
struct FCharacterSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideCharacterClasses;                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<class UClass*>                              CharacterClasses;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.CharacterSpawnerMarker
// 0x0050
struct FCharacterSpawnerMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	struct FCharacterSpawnerDataBasedOnPreset          Spawner;                                                  // 0x0030(0x0020) (Edit)
};

// ScriptStruct ConZ.ChoppingIngredient
// 0x0028
struct FChoppingIngredient
{
	class UClass*                                      Item;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinQuantity;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsQuantityAffectedByTool;                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideAutoDestructTime;                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              AutoDestructTime;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ChoppingTool2
// 0x0030
struct FChoppingTool2
{
	TArray<class UBaseItemTag*>                        ItemTags;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ItemTagClass;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideChoppingTime;                                     // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              ChoppingTimeMultiplier;                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideIngredientsQuantity;                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                IngredientsQuantityBonus;                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PossibleChoppingTools
// 0x0010
struct FPossibleChoppingTools
{
	TArray<struct FChoppingTool2>                      PossibleTools;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.ExperienceDependentFloat
// 0x0008
struct FExperienceDependentFloat
{
	float                                              ValueWhenExperienceIsMinimal;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ValueWhenExperienceIsMaximal;                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ChoppingParametersPerSkillLevel
// 0x000C
struct FChoppingParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   ChoppingTime;                                             // 0x0000(0x0008) (Edit)
	int                                                IngredientsQuantityBonus;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ChoppingRecipe
// 0x0098
struct FChoppingRecipe
{
	struct FText                                       InteractionCaption;                                       // 0x0000(0x0018) (Edit)
	class UAkAudioEvent*                               ChopAudioEvent;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENoiseLevel                                        NoiseLevel;                                               // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FChoppingIngredient>                 Ingredients;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FPossibleChoppingTools                      ToolRequiredToBeInRightHand;                              // 0x0038(0x0010) (Edit)
	TArray<struct FPossibleChoppingTools>              AdditionalToolsRequired;                                  // 0x0048(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      Skill;                                                    // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExperiencePointsAwarded;                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FChoppingParametersPerSkillLevel            NoSkillLevelData;                                         // 0x0064(0x000C) (Edit)
	struct FChoppingParametersPerSkillLevel            BasicLevelData;                                           // 0x0070(0x000C) (Edit)
	struct FChoppingParametersPerSkillLevel            MediumLevelData;                                          // 0x007C(0x000C) (Edit)
	struct FChoppingParametersPerSkillLevel            AdvancedLevelData;                                        // 0x0088(0x000C) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterSpawnerData
// 0x0010
struct FCharacterSpawnerData
{
	TArray<class UClass*>                              CharacterClasses;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.InteractionStruct
// 0x0068
struct FInteractionStruct
{
	EInteractionType                                   interactionType;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     InteractionCaption;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0018(0x0050) MISSED OFFSET
};

// ScriptStruct ConZ.CircularLayerData
// 0x0008
struct FCircularLayerData
{
	float                                              CenterCutoffPercentage;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CircularSegmentContainer
// 0x0018
struct FCircularSegmentContainer
{
	TArray<class UCircularMenuSegmentWidget*>          SegmentWidgets;                                           // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	int                                                SegmentCountOverride;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ClearMalfunctionData
// 0x0018
struct FClearMalfunctionData
{
	bool                                               ShouldClearMalfunction;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FBodyWeaponAnimation                        Animations;                                               // 0x0008(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.AnimalPaceSettings
// 0x0010
struct FAnimalPaceSettings
{
	float                                              RunSpeed;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TrotSpeed;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SneakSpeed;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AnimalStationaryRotationRateSettings
// 0x003C
struct FAnimalStationaryRotationRateSettings
{
	struct FRotator                                    RunRotationRate;                                          // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    TrotRotationRate;                                         // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    WalkRotationRate;                                         // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    SneakRotationRate;                                        // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    StandRotationRate;                                        // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct ConZ.ChargeAttackData
// 0x0020
struct FChargeAttackData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationModifier;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lengthOverride;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CloseRangeAttackData
// 0x0018
struct FCloseRangeAttackData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationModifier;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalHalfAngleRange;                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TurnMontages
// 0x0010
struct FTurnMontages
{
	class UAnimMontage*                                TurnInPlaceLeft;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TurnInPlaceRight;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AnimalActionMontageData
// 0x0018
struct FAnimalActionMontageData
{
	class UAnimMontage*                                SleepMontage;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EatMontage;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                IntimidateMontage;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.RepActionData
// 0x0003
struct FRepActionData
{
	EAnimalAction                                      Action;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IndexParameter;                                           // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Version;                                                  // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ContainerItemDescriptorData
// 0x0040
struct FContainerItemDescriptorData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              health;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              maxHealth;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                usage;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     DisplayUpperLeft;                                         // 0x0018(0x0010) (ZeroConstructor)
	int                                                DisplayAmountLeft;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DisplayAmountRight;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDisplayText;                                        // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UTexture2D*                                  Icon;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ImageAssetToLoad
// 0x0018
struct FImageAssetToLoad
{
	struct FGameplayTag                                Name;                                                     // 0x0000(0x0008) (Edit)
	struct FString                                     FilePath;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.InteractionData
// 0x0048
struct FInteractionData
{
	int                                                IntegerData;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     PointerData;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolData;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       TextData;                                                 // 0x0018(0x0018)
	struct FVector                                     InteractionLocation;                                      // 0x0030(0x000C) (IsPlainOldData)
	struct FVector                                     VectorData;                                               // 0x003C(0x000C) (IsPlainOldData)
};

// ScriptStruct ConZ.ConZBaseRepairAreaDuration
// 0x0008
struct FConZBaseRepairAreaDuration
{
	int                                                NumberOfBaseElementsTreshold;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepairDuration;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZBaseData
// 0x00F0
struct FConZBaseData
{
	int64_t                                            BaseId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BaseName;                                                 // 0x0008(0x0010) (ZeroConstructor)
	struct FVector2D                                   BaseSize;                                                 // 0x0018(0x0008) (IsPlainOldData)
	struct FVector                                     BaseLocation;                                             // 0x0020(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	int64_t                                            BaseOwnerPlayerId;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsOwnedByPlayer;                                          // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FVector2D                                   BaseBoundsMin;                                            // 0x003C(0x0008) (IsPlainOldData)
	struct FVector2D                                   BaseBoundsMax;                                            // 0x0044(0x0008) (IsPlainOldData)
	unsigned char                                      UnknownData02[0xA4];                                      // 0x004C(0x00A4) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseInteractionData
// 0x0018
struct FConZBaseInteractionData
{
	int64_t                                            BaseId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaseLocation;                                             // 0x0008(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseElementInteractionData
// 0x0020
struct FConZBaseElementInteractionData
{
	int64_t                                            BaseElementId;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaseElementLocation;                                      // 0x0008(0x000C) (IsPlainOldData)
	float                                              RepairValue;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            InteractionTimestamp;                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZBaseElementIdentifier
// 0x0020
struct FConZBaseElementIdentifier
{
	int64_t                                            BaseId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ElementID;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CommonMapNames
// 0x0018
struct FCommonMapNames
{
	struct FName                                       MainMenu;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterCreationMenu;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Singleplayer;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterCreationMenuContext
// 0x0030
struct FCharacterCreationMenuContext
{
	bool                                               IsPreferringMultiplayer;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ServerIp;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ServerResponsePort;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ServerGameplayPort;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerAuthToken;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.RespawnParameters
// 0x0040
struct FRespawnParameters
{
	int                                                RandomLocationPrice;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SectorLocationPrice;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShelterLocationPrice;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SquadLocationPrice;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RandomInitialTime;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SectorInitialTime;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShelterInitialTime;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SquadInitialTime;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RandomCooldownTime;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SectorCooldownTime;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShelterCooldownTime;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SquadCooldownTime;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RandomCooldownResetMultiplier;                            // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SectorCooldownResetMultiplier;                            // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShelterCooldownResetMultiplier;                           // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SquadCooldownResetMultiplier;                             // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TeleportRequest
// 0x0028
struct FTeleportRequest
{
	TWeakObjectPtr<class AActor>                       Subject;                                                  // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0008(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x0014(0x000C) (BlueprintVisible, IsPlainOldData)
	TWeakObjectPtr<class UTeleportUserData>            UserData;                                                 // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GameplayRules
// 0x0010
struct FGameplayRules
{
	bool                                               AllowFirstperson;                                         // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowThirdperson;                                         // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowCrosshair;                                           // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowGlobalChat;                                          // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowLocalChat;                                           // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowSquadChat;                                           // 0x0005(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowMapScreen;                                           // 0x0006(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	float                                              TimeToRemainInGameAfterLeaveGameRequest;                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToRemainInGameAfterLeaveGameRequestWhileCaptured;     // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PlayerLoginInfo
// 0x0060
struct FPlayerLoginInfo
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FDbIntegerId                                UserProfileId;                                            // 0x0010(0x0008) (BlueprintVisible)
	struct FString                                     UserProfileName;                                          // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               IsUserAdmin;                                              // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDeluxeUser;                                             // 0x0029(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAsDrone;                                              // 0x002A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	struct FString                                     ServerName;                                               // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                ServerResponsePort;                                       // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FDbIntegerId                                ServerUserProfileId;                                      // 0x0048(0x0008) (BlueprintVisible)
	struct FGameplayRules                              GameplayRules;                                            // 0x0050(0x0010) (BlueprintVisible)
};

// ScriptStruct ConZ.SurvivalStats
// 0x0140
struct FSurvivalStats
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              HighestPositiveFamePoints;                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DoorsClaimed;                                             // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AnimalsKilled;                                            // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinutesSurvived;                                          // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Deaths;                                                   // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LocksPicked;                                              // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PuppetsKilled;                                            // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GunsCrafted;                                              // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AmmoCrafted;                                              // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BulletsCrafted;                                           // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArrowsCrafted;                                            // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ClothingCrafted;                                          // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LongestKillDistance;                                      // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeKills;                                               // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArcheryKills;                                             // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayersKnockedOut;                                        // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalDefecations;                                         // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalUrinations;                                          // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LightsFired;                                              // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ContainersLooted;                                         // 0x0058(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemsPutIntoContainers;                                   // 0x005C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DeathsByPrisoners;                                        // 0x0060(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AnimalsSkinned;                                           // 0x0064(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoodEaten;                                                // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTravelledByFoot;                                  // 0x006C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WoundsPatched;                                            // 0x0070(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemsPickedUp;                                            // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LiquidDrank;                                              // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeethLost;                                                // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCaloriesIntake;                                      // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShotsFired;                                               // 0x0084(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShotsHit;                                                 // 0x0088(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangeWeaponAccuracy;                                      // 0x008C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Headshots;                                                // 0x0090(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeWeaponSwings;                                        // 0x0094(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeWeaponHits;                                          // 0x0098(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeleeWeaponAccuracy;                                      // 0x009C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeWeaponsCrafted;                                      // 0x00A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DroneKills;                                               // 0x00A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SentryKills;                                              // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PrisonerKills;                                            // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PuppetsKnockedOut;                                        // 0x00B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Diarrheas;                                                // 0x00B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Vomits;                                                   // 0x00B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTravelledInVehicle;                               // 0x00BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MushroomsEaten;                                           // 0x00C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestMuscleMass;                                        // 0x00C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestFat;                                               // 0x00C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HeartAttacks;                                             // 0x00CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Overdose;                                                 // 0x00D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Starvation;                                               // 0x00D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestDamageTaken;                                       // 0x00D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestWeightCarried;                                     // 0x00DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventsWon;                                                // 0x00E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventsLost;                                               // 0x00E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowestNegativeFamePoints;                                 // 0x00E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTravelledSwimming;                                // 0x00EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventsEnemyKills;                                         // 0x00F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventsDeaths;                                             // 0x00F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagCaptures;                                             // 0x00F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CrowsKilled;                                              // 0x00FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SeagullsKilled;                                           // 0x0100(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HorsesKilled;                                             // 0x0104(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BoarsKilled;                                              // 0x0108(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BearsKilled;                                              // 0x010C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GoatsKilled;                                              // 0x0110(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DeersKilled;                                              // 0x0114(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChickensKilled;                                           // 0x0118(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RabbitsKilled;                                            // 0x011C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DonkeysKilled;                                            // 0x0120(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TimesMauledByABear;                                       // 0x0124(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LongestAnimalKillDistance;                                // 0x0128(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventTeamKills;                                           // 0x012C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KillDeathRatio;                                           // 0x0130(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventsKillDeathRatio;                                     // 0x0134(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlcoholDrank;                                             // 0x0138(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FoliageCut;                                               // 0x013C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.EventsRankingStats
// 0x0030
struct FEventsRankingStats
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              FamePoints;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FameLevel;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventScore;                                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventKills;                                               // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventTeamKills;                                           // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventDeaths;                                              // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventSuicides;                                            // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventAssists;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventHeadshots;                                           // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBanned;                                                 // 0x002C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.EventsRankingStatsItem
// 0x0048
struct FEventsRankingStatsItem
{
	int                                                Rank;                                                     // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FEventsRankingStats                         CharacterStats;                                           // 0x0018(0x0030) (BlueprintVisible)
};

// ScriptStruct ConZ.ConZSquadEmblemElement
// 0x0004
struct FConZSquadEmblemElement
{
	unsigned char                                      ShapeIndex;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrimaryColorIndex;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SecondaryColorIndex;                                      // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TertiaryColorIndex;                                       // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZSquadEmblem
// 0x0008
struct FConZSquadEmblem
{
	struct FConZSquadEmblemElement                     Background;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	struct FConZSquadEmblemElement                     Symbol;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ConZ.ConZSquadMember
// 0x0010
struct FConZSquadMember
{
	struct FDbIntegerId                                UserProfileId;                                            // 0x0000(0x0008) (Edit, BlueprintVisible)
	EConZSquadMemberRank                               Rank;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               online;                                                   // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               InDanger;                                                 // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsAlive;                                                  // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnParameters
// 0x0030
struct FVehicleSpawnParameters
{
	struct FGameplayTag                                SpawnGroup;                                               // 0x0000(0x0008) (Edit)
	struct FVector                                     MinSpawnLocationOffset;                                   // 0x0008(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     MaxSpawnLocationOffset;                                   // 0x0014(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     AdminSpawnLocationOffset;                                 // 0x0020(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleMaterialParameterDescription
// 0x0010
struct FVehicleMaterialParameterDescription
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.VehicleDamagedEffectsParameters
// 0x0060
struct FVehicleDamagedEffectsParameters
{
	struct FFloatRange                                 HealthRatioRange;                                         // 0x0000(0x0010) (Edit)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StartAudioEvent;                                          // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopAudioEvent;                                           // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DeactivationDelay;                                        // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleExhaustParticles
// 0x0018
struct FVehicleExhaustParticles
{
	struct FName                                       AttachSocketName;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleExhaustEffects
// 0x0048
struct FVehicleExhaustEffects
{
	TArray<struct FVehicleExhaustParticles>            Particles;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              ThrottleImpulseMinValue;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseMaxValue;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseSpeedTermMaxValue;                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseAttackDuration;                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseSustainDuration;                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseReleaseDuration;                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticlesDestructionDelay;                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x002C(0x001C) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleTireEffectProperties
// 0x0014
struct FVehicleTireEffectProperties
{
	struct FVector                                     TireLocalOffset;                                          // 0x0000(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleImpactEffects
// 0x0038
struct FVehicleImpactEffects
{
	float                                              HitImpulseThreshold;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParticlesScale;                                           // 0x0010(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeScale;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleEngineStallingParameters
// 0x0050
struct FVehicleEngineStallingParameters
{
	float                                              MinDuration;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDuration;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StopEngineChance;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldStallingStopOnThrottleOrBreakRelease;               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldEngineStopOnThrottleOrBreakRelease;                 // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	class UCurveFloat*                                 ThrottleCurve;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BrakeCurve;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceMagnitudeScale;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ForceMagnitudeScaleCurve;                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceDirectionRandomizationAngle;                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      AudioEventTriggerTimeRatios;                              // 0x0040(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.MountSlotEntryPoint
// 0x000C
struct FMountSlotEntryPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct ConZ.ConZVehicleTireParticleData
// 0x0014
struct FConZVehicleTireParticleData
{
	float                                              MinLateralSlip;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLateralSlip;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLongitudinalSlip;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLongitudinalSlip;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleScaleModifier;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemSpawningSettings
// 0x0058
struct FItemSpawningSettings
{
	bool                                               UseQuadTreeToDetermineRelevantSpawnerGroups;              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              RelevantSpawnerGroupsUpdateInterval;                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayerLocationDeltaToUpdateRelevantSpawnerGroups;      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerGroupsCullDistance;                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerGroupsExpirationTimeInMinutes;                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExamineSpawnerExpirationTimeInMinutes;                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerTasksProcessingInterval;                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerTasksProcessingBudgetInMilliseconds;               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfSpawnerTasksPerUpdate;                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDestroySpawnedItemsIfNoPlayersAround;               // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              RarityRatio;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerProbabilityMultiplier;                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExamineSpawnerProbabilityMultiplier;                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ItemHealthMultiplierWhenUnderwater;                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     SaveFileName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	bool                                               DisableSerialization;                                     // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSpawnerProbability;                                 // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemLimit;                                          // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemZone;                                           // 0x004B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemRarity;                                         // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDrawItemSpawnTransforms;                             // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	float                                              DebugDrawItemSpawnTransformsDuration;                     // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CorpseSkeletalMeshRepData
// 0x0070
struct FCorpseSkeletalMeshRepData
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Mesh;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               Visibility;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CorpseStaticMeshRepData
// 0x0070
struct FCorpseStaticMeshRepData
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               Visibility;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CorpsePoseData
// 0x0080
struct FCorpsePoseData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<struct FTransform>                          Transforms;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FVector>                             LinearVelocities;                                         // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FVector>                             AngularVelocities;                                        // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingPair
// 0x0010
struct FCraftingPair
{
	class UClass*                                      CraftedItem;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CraftingItem;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PossibleItem
// 0x0030
struct FPossibleItem
{
	class UCraftingItemTag*                            CraftingTag;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                usage;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              usageWeight;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECraftingType                                      CraftingType;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                QuantityVariation;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeightVariation;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnHere;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingItem
// 0x0028
struct FCraftingItem
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPossibleItem>                       PossibleItems;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	class UAkAudioEvent*                               FillSound;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CraftingSkillLevelData
// 0x0014
struct FCraftingSkillLevelData
{
	float                                              CraftingTime;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProcessingTime;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Points;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability_Add;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability_Multiply;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemClassesArray
// 0x0010
struct FItemClassesArray
{
	TArray<class UClass*>                              ItemClasses;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.CraftingRecipeCraftableItem
// 0x0010
struct FCraftingRecipeCraftableItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnoughSkill;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingRecipeCraftingItem
// 0x0010
struct FCraftingRecipeCraftingItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isOptional;                                               // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingRecipeCraftingIngredient
// 0x0018
struct FCraftingRecipeCraftingIngredient
{
	TArray<struct FCraftingRecipeCraftingItem>         CraftingItems;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsTool;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isOptional;                                               // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingRecipe
// 0x0038
struct FCraftingRecipe
{
	TArray<struct FCraftingRecipeCraftableItem>        CraftableItems;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FCraftingRecipeCraftingIngredient>   CraftingIngredients;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      SkillNeeded;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        SkillLevelNeeded;                                         // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UCraftableItem*                              CraftableItem;                                            // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GameEventParticipantInfo
// 0x0070
struct FGameEventParticipantInfo
{
	struct FString                                     UniqueId;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TWeakObjectPtr<class APrisoner>                    Prisoner;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	EGameEventParticipantState                         State;                                                    // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                TeamIndex;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class UGameEventParticipantStats*>          RoundStats;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class UGameEventParticipantStats*                  EventStats;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class APrisoner*>                           HurtBy;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                RepHelper;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x005C(0x0014) MISSED OFFSET
};

// ScriptStruct ConZ.GameEventRewardPoints
// 0x000C
struct FGameEventRewardPoints
{
	int                                                Cash;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FamePoints;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GameEventParameters
// 0x0188
struct FGameEventParameters
{
	float                                              AnnounceDuration;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CancelDuration;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RoundDuration;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RoundLimit;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WinLimit;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RespawnDelay;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeoutDuration;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinParticipants;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxParticipants;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowRespawn;                                             // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FriendlyFire;                                             // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	TArray<int>                                        TeamLimit;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                EntryFee;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameEventRewardPoints                      PointsPerEnemyKill;                                       // 0x003C(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerTeamKill;                                        // 0x0048(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerDeath;                                           // 0x0054(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerSuicide;                                         // 0x0060(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerAssist;                                          // 0x006C(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerHeadshot;                                        // 0x0078(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerRoundWin;                                        // 0x0084(0x000C) (Edit, BlueprintVisible)
	TArray<struct FGameEventRewardPoints>              PointsPerRank;                                            // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FGameEventRewardPoints                      PointsForParticipation;                                   // 0x00A0(0x000C) (Edit, BlueprintVisible)
	float                                              ScoreToFameConversionFactor;                              // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UItemSelection*>                      PossiblePrimaryWeapons;                                   // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleSecondaryWeapons;                                 // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleTertiaryWeapons;                                  // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleOutfits;                                          // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleSupportItems;                                     // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      MandatoryGear;                                            // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       EventName;                                                // 0x0110(0x0018) (Edit, BlueprintVisible)
	struct FText                                       EventDescription;                                         // 0x0128(0x0018) (Edit, BlueprintVisible)
	struct FText                                       PrerequisitesText;                                        // 0x0140(0x0018) (Edit, BlueprintVisible)
	struct FText                                       WeaponText;                                               // 0x0158(0x0018) (Edit, BlueprintVisible)
	struct FText                                       RewardsText;                                              // 0x0170(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.CTFParameters
// 0x0030
struct FCTFParameters
{
	float                                              FlagResetDuration;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowReturns;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                CaptureLimit;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameEventRewardPoints                      PointsPerPickup;                                          // 0x000C(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerCapture;                                         // 0x0018(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerReturn;                                          // 0x0024(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.SpawnArea
// 0x0014
struct FSpawnArea
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TeamIndex;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DamageOverTimeUpdateGroup
// 0x0018
struct FDamageOverTimeUpdateGroup
{
	float                                              UpdateInterval;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct ConZ.TriggeredEventData
// 0x0010
struct FTriggeredEventData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.TrapTriggerParams
// 0x0010
struct FTrapTriggerParams
{
	class AActor*                                      TriggeredActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectileImpulseMultiplier
// 0x0010
struct FProjectileImpulseMultiplier
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MultiplierByClass
// 0x0010
struct FMultiplierByClass
{
	class UClass*                                      ObjectClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.DamageMultipliers
// 0x0018
struct FDamageMultipliers
{
	class UClass*                                      DamageCauserClass;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiplierByClass>                  DamageMultipliers;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.DeathmatchParameters
// 0x0014
struct FDeathmatchParameters
{
	int                                                RoundScoreLimit;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionInterval;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionDuration;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionStep;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BarrierHeatUpDuration;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DemolitionSkillParametersPerSkillLevel
// 0x0028
struct FDemolitionSkillParametersPerSkillLevel
{
	float                                              TrapQuality;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefuseTime;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArmTrapXP;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisarmOwnedTrapXP;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisarmEnemyTrapXP;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AddTriggerXP;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CraftTrapXP;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfWires;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GreenWiresNumber;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RedWiresNumber;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TooltipPanelData
// 0x0020
struct FTooltipPanelData
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ETooltipPanelType                                  PanelType;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Layer;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsEditorOnly;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.DialogInfoContainer
// 0x0010
struct FDialogInfoContainer
{
	TArray<struct FDialogueInfo>                       DialogInfos;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.DistantLevel
// 0x0020
struct FDistantLevel
{
	class AActor*                                      Level;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.DrivingSkillExperienceAwards
// 0x0008
struct FDrivingSkillExperienceAwards
{
	float                                              StartEngine;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointsPerDrivenDistanceInKm;                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DrivingSkillEngineStallingParameters
// 0x0038
struct FDrivingSkillEngineStallingParameters
{
	float                                              Chance;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDuration;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDuration;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StopEngineChance;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ThrottleCurve;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BrakeCurve;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceMagnitudeScale;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ForceMagnitudeScaleCurve;                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceDirectionRandomizationAngle;                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.DrivingSkillParametersPerSkillLevel
// 0x00A0
struct FDrivingSkillParametersPerSkillLevel
{
	float                                              EngineStartDuration;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineStartFailureChance;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineReadyDelay;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineFailedToStartDelay;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineStalledDelay;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedModifier;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleModifier;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrakeModifier;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearboxSwitchTime;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearboxLatency;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteerRaiseRate;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteerFallRate;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDrivingSkillEngineStallingParameters       EngineStallingByAccelerationParameters;                   // 0x0030(0x0038) (Edit)
	struct FDrivingSkillEngineStallingParameters       EngineStallingByUpShiftParameters;                        // 0x0068(0x0038) (Edit)
};

// ScriptStruct ConZ.DropZoneParameters
// 0x002C
struct FDropZoneParameters
{
	float                                              IntroAnnouncementDelay;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarmupPhaseDuration;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrateDropDuration;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SearchPhaseTimeLimit;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CargoDropDuration;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CapturePhaseTimeLimit;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CargoOpeningDuration;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SkipKeyPhase;                                             // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FGameEventRewardPoints                      PointsPerActivation;                                      // 0x0020(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.EnduranceSkillParametersPerSkillLevel
// 0x0008
struct FEnduranceSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   StaminaRecoveryMultiplier;                                // 0x0000(0x0008) (Edit)
};

// ScriptStruct ConZ.EngineeringSkillExperienceAwards
// 0x0004
struct FEngineeringSkillExperienceAwards
{
	float                                              RepairExperienceMultiplier;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.EngineeringSkillParametersPerSkillLevel
// 0x0014
struct FEngineeringSkillParametersPerSkillLevel
{
	float                                              RepairRadius;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepairTimeMultiplier;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ResultQuality;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IngredientMultiplier;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ToolUsageMultiplier;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemSpawnerDataBasedOnPreset
// 0x0088
struct FItemSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideItemClasses;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideItemSpawnTypes;                                   // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideProbability;                                      // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseItemZone;                                      // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseItemRarity;                                    // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideInitialDamage;                                    // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideRandomizeDamage;                                  // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideInitialUsage;                                     // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideRandomizeUsage;                                   // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideInitialDirtiness;                                 // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideRandomizeDirtiness;                               // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideMinAmmoCount;                                     // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideMaxAmmoCount;                                     // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverridePossibleSicknesses;                               // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseCollisionTraceToAdjustSpawnLocation;           // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseCollisionTraceToAdjustSpawnRotation;           // 0x0017(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ItemClasses;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0028(0x0020) (Edit)
	float                                              Probability;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseItemZone;                                              // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseItemRarity;                                            // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialUsage;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeUsage;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialDirtiness;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDirtiness;                                       // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinAmmoCount;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                       // 0x0070(0x0010) (Edit, ZeroConstructor)
	bool                                               UseCollisionTraceToAdjustSpawnLocation;                   // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseCollisionTraceToAdjustSpawnRotation;                   // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.ExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
// 0x0028
struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
{
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0000(0x0020) (Edit)
	int                                                MaxNumberOfOccurrences;                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ExamineItemSpawnerData
// 0x00A8
struct FExamineItemSpawnerData
{
	int                                                MinQuantity;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowDuplicates;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FItemSpawnerDataBasedOnPreset               Spawner;                                                  // 0x0010(0x0088) (Edit)
	TArray<struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes> MaxOccurrencesPerSpawnTypes;                              // 0x0098(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.ExamineDataPerItemGroup
// 0x0004
struct FExamineDataPerItemGroup
{
	int                                                MaxNumberOfOccurrences;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DamageDescription
// 0x0004
struct FDamageDescription
{
	float                                              StructureDamageMultiplier;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.HeatSourceParameters
// 0x0020
struct FHeatSourceParameters
{
	float                                              Temperature;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UCurveFloat*                                 TemperatureCurve;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BurningSpeed;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceScale;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemSnapMarker
// 0x0050
struct FItemSnapMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FString                                     Tag;                                                      // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SnapDistance;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.FishSpawnInfo
// 0x0008
struct FFishSpawnInfo
{
	int                                                SpawnInstances;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentlySpawned;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
};

// ScriptStruct ConZ.FoliageGeneralData
// 0x0010
struct FFoliageGeneralData
{
	float                                              CollisionBoundsScale;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CollisionBoundsOffset;                                    // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ConZ.FoliageEffectsData
// 0x0018
struct FFoliageEffectsData
{
	class UAkAudioEvent*                               StartMovingThroughFoliageAudioEvent;                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopMovingThroughFoliageAudioEvent;                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OneShotMovingThroughFoliageAudioEvent;                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.FoliageAIPerceptionData
// 0x0002
struct FFoliageAIPerceptionData
{
	bool                                               CanCoverPrisoner;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPrisonerStance                                    MaxUndetectedPrisonerStance;                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GameEventTeamColours
// 0x0060
struct FGameEventTeamColours
{
	struct FLinearColor                                TeamName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsDarker;                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsLighter;                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsHighlighted;                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsDisabled;                                 // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsMini;                                     // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct ConZ.GlobalAnimalSpawnInfo
// 0x001C
struct FGlobalAnimalSpawnInfo
{
	int                                                MaxSpawnInstances;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RespawnPeriod;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfExistingWaypointGroups;                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                WorldMaxSpawnInstances;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                CurrentlyAssigned;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                CurrentlySpawned;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                CurrentlyDead;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
};

// ScriptStruct ConZ.PhysicalHitReactData
// 0x0018
struct FPhysicalHitReactData
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PelvisBoneName;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialStrengthMultiplier;                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendDuration;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PhysicalAnimationDesc
// 0x0038
struct FPhysicalAnimationDesc
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactBodyPartDataItem
// 0x0040
struct FHitReactBodyPartDataItem
{
	class UAnimMontage*                                MontageToPlay;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MontageToRespondTo;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       WeaponsToRespondTo;                                       // 0x0010(0x0020) (Edit)
	class UAnimMontage*                                FollowupMontage;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactDirectionData
// 0x0048
struct FHitReactDirectionData
{
	TArray<struct FHitReactBodyPartDataItem>           FrontHit;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FHitReactBodyPartDataItem>           LeftHit;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FHitReactBodyPartDataItem>           BackHit;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FHitReactBodyPartDataItem>           RightHit;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	float                                              RegainControlDurationMultiplier;                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactMagnitudeData
// 0x0120
struct FHitReactMagnitudeData
{
	struct FHitReactDirectionData                      SmallHit;                                                 // 0x0000(0x0048) (Edit)
	struct FHitReactDirectionData                      MediumHit;                                                // 0x0048(0x0048) (Edit)
	struct FHitReactDirectionData                      LargeHit;                                                 // 0x0090(0x0048) (Edit)
	struct FHitReactDirectionData                      KnockoutHit;                                              // 0x00D8(0x0048) (Edit)
};

// ScriptStruct ConZ.HitReactLandingData
// 0x0028
struct FHitReactLandingData
{
	float                                              MinImpactSpeedToReact;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimMontage*                                MontageToPlay;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanEverGoToRagdoll;                                       // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              MinImpactSpeedForRagdoll;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRagdollDuration;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRagdollDuration;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RagdollDurationPerSpeedUnit;                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.InteractionQueryParameters
// 0x0010
struct FInteractionQueryParameters
{
	struct FVector                                     InteractionLocation;                                      // 0x0000(0x000C) (IsPlainOldData)
	bool                                               IsInDroneMode;                                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.SpawnedItems
// 0x0018
struct FSpawnedItems
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	EPickupItemOperation                               Operation;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<class AItem*>                               Items;                                                    // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.ServerUsedItem
// 0x0018
struct FServerUsedItem
{
	class AItem*                                       Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                usage;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              usageWeight;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	ECraftingType                                      CraftingType;                                             // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SpawnHere;                                                // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.ServerCraftableItem
// 0x0088
struct FServerCraftableItem
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FServerUsedItem>                     MandatoryItems;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FServerUsedItem>                     MandatoryParts;                                           // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FServerUsedItem>                     OptionalItems;                                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FServerUsedItem>                     OptionalParts;                                            // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FServerUsedItem>                     ToolsNeeded;                                              // 0x0050(0x0010) (ZeroConstructor)
	class UAnimMontage*                                CustomCraftingMontage;                                    // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StartCraftingAudioEvent;                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopCraftingAudioEvent;                                   // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryPositionDataRepHelper
// 0x0018
struct FInventoryPositionDataRepHelper
{
	class UClass*                                      _dataClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInventoryPositionData*                      _positionData;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     _owner;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.InventoryItemPositionPair
// 0x0020
struct FInventoryItemPositionPair
{
	struct FInventoryPositionDataRepHelper             Position;                                                 // 0x0000(0x0018)
	class UObject*                                     Item;                                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.InventoryContainer2DRepData
// 0x0028
struct FInventoryContainer2DRepData
{
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     Parent;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SizeX;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RepCounter;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryContainerClothesData
// 0x0020
struct FInventoryContainerClothesData
{
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     Parent;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RepCounter;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryContainerHandsHolstersData
// 0x0020
struct FInventoryContainerHandsHolstersData
{
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     Parent;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RepCounter;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryContainerSelectionRepData
// 0x0028
struct FInventoryContainerSelectionRepData
{
	TArray<class UObject*>                             Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                // 0x0010(0x0010) (ZeroConstructor)
	class UObject*                                     Parent;                                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemSpawnerMarker
// 0x00C0
struct FItemSpawnerMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	struct FItemSpawnerDataBasedOnPreset               Spawner;                                                  // 0x0030(0x0088) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ItemSpawnerData
// 0x0070
struct FItemSpawnerData
{
	TArray<class UClass*>                              ItemClasses;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0010(0x0020) (Edit)
	float                                              Probability;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseItemZone;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseItemRarity;                                            // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialUsage;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeUsage;                                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialDirtiness;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDirtiness;                                       // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinAmmoCount;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                       // 0x0058(0x0010) (Edit, ZeroConstructor)
	bool                                               UseCollisionTraceToAdjustSpawnLocation;                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseCollisionTraceToAdjustSpawnRotation;                   // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryNodeWidgetData
// 0x0038
struct FInventoryNodeWidgetData
{
	struct FName                                       Slot;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EInventoryNodeWidgetDataType                       Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              NumberData;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FText                                       TextData;                                                 // 0x0010(0x0018)
	class UTexture2D*                                  IconData;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   VisibilityData;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ObjectiveData
// 0x0030
struct FObjectiveData
{
	struct FString                                     ObjectiveAssetId;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	EObjectiveState                                    ObjectiveState;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0018(0x0018) (Edit, EditConst)
};

// ScriptStruct ConZ.MissionReward
// 0x0018
struct FMissionReward
{
	TArray<class UClass*>                              RewardItems;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              RewardFamePoints;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RewardReceived;                                           // 0x0014(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.MissionData
// 0x00B8
struct FMissionData
{
	struct FText                                       MissionName;                                              // 0x0000(0x0018) (Edit, EditConst)
	struct FText                                       MissionCategory;                                          // 0x0018(0x0018) (Edit, EditConst)
	struct FText                                       MissionDescription;                                       // 0x0030(0x0018) (Edit, EditConst)
	EMissionType                                       MissionType;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                MissionOrdinalNumber;                                     // 0x004C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EMissionState                                      MissionState;                                             // 0x0050(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EFaction                                           MissionFaction;                                           // 0x0051(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0052(0x0010) UNKNOWN PROPERTY: ArrayProperty ConZ.MissionData.MissionStartingLocations
	int                                                IntendedNumberOfPlayers;                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MissionCooldown;                                          // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	struct FString                                     MissionAssetId;                                           // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FObjectiveData>                      ObjectivesData;                                           // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FMissionReward                              MissionReward;                                            // 0x0098(0x0018) (Edit, EditConst)
	class UTexture2D*                                  MissionBannerImage;                                       // 0x00B0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConZ.LandingEffectDataPerSeverity
// 0x0010
struct FLandingEffectDataPerSeverity
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnParticlesInDirectionOfVelocity;                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.LandingEffectDataPerPhysicalSurface
// 0x0030
struct FLandingEffectDataPerPhysicalSurface
{
	struct FLandingEffectDataPerSeverity               Light;                                                    // 0x0000(0x0010) (Edit)
	struct FLandingEffectDataPerSeverity               Medium;                                                   // 0x0010(0x0010) (Edit)
	struct FLandingEffectDataPerSeverity               Heavy;                                                    // 0x0020(0x0010) (Edit)
};

// ScriptStruct ConZ.MeleeAction
// 0x0020
struct FMeleeAction
{
	EMeleeActionType                                   ActionType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UAnimMontage>                 Montage;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlockDuration;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OrientToTargetSpeedFactor;                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationModifier;                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AttackedByMeleeData
// 0x0018
struct FAttackedByMeleeData
{
	TWeakObjectPtr<class AActor>                       attacker;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAnimMontage>                 Montage;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CheckMeleeAttackCapsuleCollisionData
// 0x00D0
struct FCheckMeleeAttackCapsuleCollisionData
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillAttack
// 0x0070
struct FMeleeSkillAttack
{
	struct FGameplayTagContainer                       AttackTypes;                                              // 0x0000(0x0020) (Edit)
	struct FGameplayTagContainer                       IgnoreReason;                                             // 0x0020(0x0020) (Edit)
	class UAnimMontage*                                Montage;                                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              PitchRange;                                               // 0x0048(0x0008) (Edit)
	float                                              MaxDistance;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinStamina;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OrientToTargetSpeedFactor;                                // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaminaDrainMultiplier;                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeUsedAsInitialAttack;                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeUsedToCloseLargeDistanceToTarget;                    // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Solo;                                                     // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Mute;                                                     // 0x006B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlwaysCandidate;                                        // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillDodge
// 0x0018
struct FMeleeSkillDodge
{
	EDodgeDirectionType                                DodgeDirectionType;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                Montage;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillAnimations
// 0x0098
struct FMeleeSkillAnimations
{
	class UAnimSequenceBase*                           PrimaryIdleAnimationTP;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PrimaryIdleAnimationFP;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           TiredIdleAnimationTP;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           TiredIdleAnimationFP;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           WalkingIdleAnimationTP;                                   // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           WalkingIdleAnimationFP;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           BlockIdleAnimationTP;                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           BlockIdleAnimationFP;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 AimOffsetBlendSpaceTP;                                    // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 AimOffsetBlendSpaceFP;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EnterCombatModeMontage;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                LeaveCombatModeMontage;                                   // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequenceBase*>                   InactivityIdleAnimations;                                 // 0x0060(0x0010) (Edit, ZeroConstructor)
	float                                              IdleToBlockBlendDuration;                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockToIdleBlendDuration;                                 // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMeleeSkillAttack>                   Attacks;                                                  // 0x0078(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMeleeSkillDodge>                    Dodges;                                                   // 0x0088(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.MeleeSkillParametersPerSkillLevel
// 0x0098
struct FMeleeSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   StartDelay;                                               // 0x0000(0x0008) (Edit)
	struct FExperienceDependentFloat                   StartDelayPenaltyPerStrengthShortage;                     // 0x0008(0x0008) (Edit)
	struct FExperienceDependentFloat                   AnimationPlayRateModifier;                                // 0x0010(0x0008) (Edit)
	struct FExperienceDependentFloat                   AnimationPlayRatePenaltyPerStrengthShortage;              // 0x0018(0x0008) (Edit)
	struct FExperienceDependentFloat                   RegainControlDurationModifier;                            // 0x0020(0x0008) (Edit)
	struct FExperienceDependentFloat                   DamageModifier;                                           // 0x0028(0x0008) (Edit)
	struct FExperienceDependentFloat                   staminaDrain;                                             // 0x0030(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaDrainPenaltyPerStrengthShortage;                   // 0x0038(0x0008) (Edit)
	struct FExperienceDependentFloat                   staminaRecoveryDelay;                                     // 0x0040(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaRecoveryDuration;                                  // 0x0048(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowMin;                                // 0x0050(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowMax;                                // 0x0058(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowLinearity;                          // 0x0060(0x0008) (Edit)
	struct FExperienceDependentFloat                   StartDelayWhenExhausted;                                  // 0x0068(0x0008) (Edit)
	struct FExperienceDependentFloat                   AnimationPlayRateModifierWhenExhausted;                   // 0x0070(0x0008) (Edit)
	struct FExperienceDependentFloat                   RegainControlDurationModifierWhenExhausted;               // 0x0078(0x0008) (Edit)
	struct FExperienceDependentFloat                   DamageModifierWhenExhausted;                              // 0x0080(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaMultiplierPerExcessGearWeight;                     // 0x0088(0x0008) (Edit)
	struct FExperienceDependentFloat                   ComboCooldownDuration;                                    // 0x0090(0x0008) (Edit)
};

// ScriptStruct ConZ.MissionItemInfo
// 0x0038
struct FMissionItemInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ConZ.MissionItemInfo.ItemLocation
	class UClass*                                      ItemClass;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldRemove;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              TimeToDestroy;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.NotificationDescriptionReplicationHelper
// 0x0018
struct FNotificationDescriptionReplicationHelper
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.PhysicalSurfaceData
// 0x0010
struct FPhysicalSurfaceData
{
	float                                              DirtinessFactor;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LandingImpactVelocityModifier;                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseLoudnessModifier;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootstepEnhancerChance;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PhysicalSurfaceVehicleEffectsData
// 0x0020
struct FPhysicalSurfaceVehicleEffectsData
{
	class UParticleSystem*                             ParticleTrail;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleTrailSlipModifier;                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleTrailDestructionDelay;                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleWave;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleWaveSlipModifier;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleWaveDestructionDelay;                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PhysicalSurfaceEffectsData
// 0x0020
struct FPhysicalSurfaceEffectsData
{
	struct FPhysicalSurfaceVehicleEffectsData          Vehicle;                                                  // 0x0000(0x0020) (Edit)
};

// ScriptStruct ConZ.PlaceableIngredient
// 0x0058
struct FPlaceableIngredient
{
	TArray<class UCraftingItemTag*>                    Tags;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              SpecificItems;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	EIngredientUsageRule                               UsageRule;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<ECraftingType>                              TagsCraftingTypes;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<ECraftingType>                              SpecificItemsCraftingTypes;                               // 0x0038(0x0010) (Edit, ZeroConstructor)
	EPlaceableIngredientType                           Type;                                                     // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              Required;                                                 // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Satisfied;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PlaceableActorStateReplicationHelper
// 0x0008
struct FPlaceableActorStateReplicationHelper
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ConZOnDemandElementData
// 0x0030
struct FConZOnDemandElementData
{
	struct FConZBaseElementIdentifier                  ElementIdentifier;                                        // 0x0000(0x0020)
	struct FString                                     OwnerName;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.VehicleSpawnerInfo
// 0x0050
struct FVehicleSpawnerInfo
{
	struct FPrimaryAssetId                             VehicleAssetId;                                           // 0x0000(0x0010)
	struct FTransform                                  VehicleTransform;                                         // 0x0010(0x0030) (IsPlainOldData)
	int64_t                                            VehicleLastAccessTime;                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       VehicleActor;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerMeleeAttackTypes
// 0x0080
struct FPrisonerMeleeAttackTypes
{
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenNotMoving;                      // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenWalking;                        // 0x0008(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenJogging;                        // 0x0010(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenRunning;                        // 0x0018(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenFalling;                        // 0x0020(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenNotMoving;                    // 0x0028(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenWalking;                      // 0x0030(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenJogging;                      // 0x0038(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenRunning;                      // 0x0040(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenFalling;                      // 0x0048(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenNotMoving;                        // 0x0050(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenWalking;                          // 0x0058(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenJogging;                          // 0x0060(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenRunning;                          // 0x0068(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenFalling;                          // 0x0070(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                BashMeleeAttackType;                                      // 0x0078(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.PrisonerNearbyFoliageInstanceInfo
// 0x0050
struct FPrisonerNearbyFoliageInstanceInfo
{
	class UInstancedStaticMeshComponent*               InstancedMeshComponent;                                   // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTransform                                  TransformZeroOrigin;                                      // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UFoliageAssetData*                           FoliageAssetData;                                         // 0x0040(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerNearbyFoliageInfo
// 0x0010
struct FPrisonerNearbyFoliageInfo
{
	TArray<struct FPrisonerNearbyFoliageInstanceInfo>  InstancesInfo;                                            // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.PrisonerNearbyFoliageInstanceInfoReplicated
// 0x0010
struct FPrisonerNearbyFoliageInstanceInfoReplicated
{
	class UInstancedStaticMeshComponent*               InstancedMeshComponent;                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerMountReplication
// 0x0010
struct FPrisonerMountReplication
{
	bool                                               HasMountedSlot;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     MountedSlot;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerTeleportRequest
// 0x001C
struct FPrisonerTeleportRequest
{
	struct FVector                                     TargetLocation;                                           // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x000C(0x000C) (IsPlainOldData)
	EPrisonerPostTeleportBehavior                      PostTeleportBehavior;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterActionReplicationHelper
// 0x0018
struct FCharacterActionReplicationHelper
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectileArrowData
// 0x0018
struct FProjectileArrowData
{
	class UClass*                                      AmmunitionArrowClass;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ItemsHealth;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFactor;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlightRotationCorrectionSpeed;                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeviationDegrees;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterActionAck
// 0x000C
struct FCharacterActionAck
{
	int                                                ActionId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubactionIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	ECharacterActionAckType                            Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	ECharacterActionEndState                           EndState;                                                 // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectilePointDamageEvent
// 0x0050 (0x00F8 - 0x00A8)
struct FProjectilePointDamageEvent : public FPointDamageEvent
{
	bool                                               IsHeadUpperShot;                                          // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              EnergyLossPerClothesLayer[0x7];                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      KillerLocation;                                           // 0x00C8(0x000C)
	struct FVector_NetQuantize100                      VictimLocation;                                           // 0x00D4(0x000C)
	class UClass*                                      ProjectileClass;                                          // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstHit;                                               // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.SkillEventWeapon
// 0x0001
struct FSkillEventWeapon
{
	EWeaponCategory                                    WeaponCategory;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.SkillEventWeaponProjectileHitTarget
// 0x0027 (0x0028 - 0x0001)
struct FSkillEventWeaponProjectileHitTarget : public FSkillEventWeapon
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnergyRatio;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadShot;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsKill;                                                   // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WasSniping;                                               // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	EPrisonerStance                                    Stance;                                                   // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
	EWindSpeedCategory                                 WindSpeedCategory;                                        // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              ExperienceMultiplier;                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerWaterMovementParameters
// 0x000C
struct FPrisonerWaterMovementParameters
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerGroundMovementParameters
// 0x000C
struct FPrisonerGroundMovementParameters
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerResponseIdleCompatibleAnimationSets
// 0x0005
struct FPrisonerResponseIdleCompatibleAnimationSets
{
	bool                                               Base;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Rifle;                                                    // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RifleRelaxed;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UnarmedCombat;                                            // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Handgun;                                                  // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerResponseIdleDescription
// 0x0028
struct FPrisonerResponseIdleDescription
{
	TArray<class UAnimMontage*>                        Montages;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              PreMontageDelay;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PostMontageDelay;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CooldownDuration;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeUsedWhenItemIsInHands;                               // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPrisonerResponseIdleCompatibleAnimationSets CombatibleAnimationsSets;                                 // 0x001D(0x0005) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerAppearanceData
// 0x0018
struct FPrisonerAppearanceData
{
	EHumanRace                                         Race;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTag                                MeshSet;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGameplayTag                                MaterialSet;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ConZ.PrisonerAppearanceMeshSet
// 0x0048
struct FPrisonerAppearanceMeshSet
{
	class USkeletalMesh*                               HairMesh;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               FacialHairMesh;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               HeadMesh;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               TorsoMesh;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ArmsMesh;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               HandsMesh;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               LegsMesh;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               FeetMesh;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               PenisMesh;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerAppearanceMaterialSet
// 0x0048
struct FPrisonerAppearanceMaterialSet
{
	class UMaterialInstance*                           HairMaterial;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           FacialHairMaterial;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           HeadMaterial;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           TorsoMaterial;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           ArmsMaterial;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           HandsMaterial;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           LegsMaterial;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           FeetMaterial;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           PenisMaterial;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerTattooMaterialSet
// 0x0020
struct FPrisonerTattooMaterialSet
{
	bool                                               DeluxeOnly;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UTexture2D*                                  HeadTattoo;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  TorsoTattoo;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LimbTattoo;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ClothesPartSet
// 0x0050
struct FClothesPartSet
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty ConZ.ClothesPartSet.ClothesParts
};

// ScriptStruct ConZ.SicknessRecord
// 0x0004
struct FSicknessRecord
{
	EDiagnosedResult                                   Diagnose;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           Phase;                                                    // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DigestionItemRecord
// 0x0038
struct FDigestionItemRecord
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Caption;                                                  // 0x0008(0x0010) (ZeroConstructor)
	class UClass*                                      ItemClass;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           RemainingWeight;                                          // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              Weight;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingVolume;                                          // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Water;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsWaterFromWorld;                                         // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.HealingItemRecord
// 0x0020
struct FHealingItemRecord
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Caption;                                                  // 0x0008(0x0010) (ZeroConstructor)
	uint16_t                                           quantity;                                                 // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerBCUMonitorData
// 0x0128
struct FPrisonerBCUMonitorData
{
	unsigned char                                      Age;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeethNumber;                                              // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Strength;                                                 // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Constitution;                                             // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Dexterity;                                                // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Intelligence;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StrengthGain;                                             // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConstitutionGain;                                         // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DexterityGain;                                            // 0x000F(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StrengthRate;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConstitutionRate;                                         // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DexterityRate;                                            // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	uint16_t                                           Weight;                                                   // 0x0014(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           InitialWeight;                                            // 0x0016(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           StorageFat;                                               // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BFP;                                                      // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	uint16_t                                           MuscleMass;                                               // 0x001C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightLoad;                                               // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	uint16_t                                           FoodWeight;                                               // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           MaxFoodWeight;                                            // 0x0022(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              StomachVolumeOccupied;                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StomachVolumeMax;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StomachWater;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IntestineVolumeOccupied;                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IntestineVolumeMax;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IntestineWater;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ColonVolumeOccupied;                                      // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ColonVolumeMax;                                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BladderVolumeOccupied;                                    // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BladderVolumeMax;                                         // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           gearWeight;                                               // 0x004C(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WLT;                                                      // 0x004E(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WLTEasy;                                                  // 0x0050(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WLTDemanding;                                             // 0x0052(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WLTVeryDemanding;                                         // 0x0054(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             BodyTempCategory;                                         // 0x0056(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             BodyTempIncrease;                                         // 0x0057(0x0001) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Blood;                                                    // 0x0058(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           MinBlood;                                                 // 0x005A(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              Calories;                                                 // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           DailyCaloriesIntake;                                      // 0x0060(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CaloriesUsageSpeed;                                       // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	uint16_t                                           CaloriesIdle;                                             // 0x0064(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CaloriesWalking;                                          // 0x0066(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CaloriesJogging;                                          // 0x0068(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CaloriesRunning;                                          // 0x006A(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              EnergyIntake;                                             // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnergyUsage;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MetabolicCalories;                                        // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Water;                                                    // 0x0078(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              WaterIntake;                                              // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaterUsage;                                               // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           DailyWaterIntake;                                         // 0x0084(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeFat;                                                // 0x0086(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeSaturatedFat;                                       // 0x0088(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeSugar;                                              // 0x008A(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeSodium;                                             // 0x008C(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeCarbs;                                              // 0x008E(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeFiber;                                              // 0x0090(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeProteins;                                           // 0x0092(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeAlcohol;                                            // 0x0094(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	float                                              DailyFatCalories;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DailySugarCalories;                                       // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DailyCarbsCalories;                                       // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DailyProteinsCalories;                                    // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DailyAlcoholCalories;                                     // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<int16_t>                                    IntakeVitamins;                                           // 0x00B0(0x0010) (ZeroConstructor)
	TArray<int16_t>                                    IntakeMinerals;                                           // 0x00C0(0x0010) (ZeroConstructor)
	unsigned char                                      MSR;                                                      // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x00D1(0x0001) MISSED OFFSET
	int16_t                                            CurrentStaminaChange;                                     // 0x00D2(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            SCRIdle;                                                  // 0x00D4(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            SCRWalking;                                               // 0x00D6(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CurrentWaterConsumption;                                  // 0x00D8(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WCRIdle;                                                  // 0x00DA(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WCRWalking;                                               // 0x00DC(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WCRJogging;                                               // 0x00DE(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WCRRunning;                                               // 0x00E0(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CurrentCaloriesConsumption;                               // 0x00E2(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HealingSpeed;                                             // 0x00E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ViewRange;                                                // 0x00E5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PerformanceFailure;                                       // 0x00E6(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SpeedModifier;                                            // 0x00E7(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StaminaRecoveryModifier;                                  // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StaminaConsumptionModifier;                               // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WCRModifier;                                              // 0x00EA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CaloriesBurntModifier;                                    // 0x00EB(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HoldingBreathModifier;                                    // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HealingSpeedModifier;                                     // 0x00ED(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HealthPointsModifier;                                     // 0x00EE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ResistPoisonsModifier;                                    // 0x00EF(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSicknessRecord>                     Sicknesses;                                               // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FDigestionItemRecord>                DigestionItems;                                           // 0x0100(0x0010) (ZeroConstructor)
	TArray<struct FHealingItemRecord>                  HealingItems;                                             // 0x0110(0x0010) (ZeroConstructor)
	uint16_t                                           AirTemp;                                                  // 0x0120(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WindSpeed;                                                // 0x0122(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               BCUDataInitializedOnServer;                               // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerClimbAnimationInfo
// 0x0040
struct FPrisonerClimbAnimationInfo
{
	float                                              MinEdgeHeight;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxEdgeHeight;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VaultDistance;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxVaultLandHeightError;                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnchorOffset;                                             // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AnchoringAnimation;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchoringAnimationTime;                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchoringDuration;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbingMontage;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              staminaDrain;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresEmptyLHand;                                       // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresEmptyRHand;                                       // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.WindowClimbingAnimationInfo
// 0x0048
struct FWindowClimbingAnimationInfo
{
	struct FVector                                     AnchorOffset;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AnchoringAnimation;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchoringAnimationTime;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchoringDuration;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbingMontage;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWindowWidth;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWindowHeight;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpacingToLeftWindowEdge;                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpacingToRightWindowEdge;                              // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWindowDistanceToFloor;                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWindowDistanceToFloor;                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              staminaDrain;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.LadderInfoRepData
// 0x0050
struct FLadderInfoRepData
{
	struct FTransform                                  LadderTransform;                                          // 0x0000(0x0030) (IsPlainOldData)
	struct FVector                                     CapsuleBias;                                              // 0x0030(0x000C) (IsPlainOldData)
	struct FVector                                     RootBoneOffset;                                           // 0x003C(0x000C) (IsPlainOldData)
	float                                              StepHeight;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForSounds;                                 // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NumberOfSteps;                                            // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.WindowInfo
// 0x00D0
struct FWindowInfo
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  TransformInverse;                                         // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Anchor;                                                   // 0x0060(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Width;                                                    // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FWindowClimbingAnimationInfo                AnimationInfo;                                            // 0x0078(0x0048) (Edit, BlueprintVisible)
	int                                                AnimationIndex;                                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.LadderInfo
// 0x00B0
struct FLadderInfo
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  TransformInverse;                                         // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  Edge;                                                     // 0x0060(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CapsuleBias;                                              // 0x0090(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StepHeight;                                               // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepWidth;                                                // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasEdge;                                                  // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNarrow;                                                 // 0x00A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForSounds;                                 // 0x00A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	int                                                NumberOfSteps;                                            // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HitStepIndex;                                             // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ClimbableObstacleInfo
// 0x0080
struct FClimbableObstacleInfo
{
	struct FVector                                     EdgeLocation;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EdgeHeight;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HWallNormal;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     VWallNormal;                                              // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CapsuleLocationAtAnchor;                                  // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CapsuleRotationAtAnchor;                                  // 0x0034(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FPrisonerClimbAnimationInfo                 AnimationInfo;                                            // 0x0040(0x0040) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Walking
// 0x0030
struct FPrisonerMovementSettings_Ground_Standing_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           MeleeCombat;                                              // 0x000C(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x0018(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                // 0x0024(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Jogging
// 0x0024
struct FPrisonerMovementSettings_Ground_Standing_Jogging
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           MeleeCombat;                                              // 0x000C(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x0018(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Running
// 0x000C
struct FPrisonerMovementSettings_Ground_Standing_Running
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing
// 0x00B4
struct FPrisonerMovementSettings_Ground_Standing
{
	struct FPrisonerMovementSettings_Ground_Standing_Walking Walking;                                                  // 0x0000(0x0030) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Walking WalkLimping;                                              // 0x0030(0x0030) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Jogging Jogging;                                                  // 0x0060(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Jogging JogLimping;                                               // 0x0084(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Running Running;                                                  // 0x00A8(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching_Walking
// 0x0024
struct FPrisonerMovementSettings_Ground_Crouching_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x000C(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                // 0x0018(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching
// 0x006C
struct FPrisonerMovementSettings_Ground_Crouching
{
	struct FPrisonerMovementSettings_Ground_Crouching_Walking Walking;                                                  // 0x0000(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Crouching_Walking WalkingFaster;                                            // 0x0024(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Crouching_Walking WalkLimping;                                              // 0x0048(0x0024) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone_Walking
// 0x0024
struct FPrisonerMovementSettings_Ground_Prone_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x000C(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                // 0x0018(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone
// 0x0024
struct FPrisonerMovementSettings_Ground_Prone
{
	struct FPrisonerMovementSettings_Ground_Prone_Walking Walking;                                                  // 0x0000(0x0024) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground
// 0x016C
struct FPrisonerMovementSettings_Ground
{
	struct FPrisonerMovementSettings_Ground_Standing   Standing;                                                 // 0x0000(0x00B4) (Edit)
	struct FPrisonerMovementSettings_Ground_Crouching  Crouching;                                                // 0x00B4(0x006C) (Edit)
	struct FPrisonerMovementSettings_Ground_Prone      Prone;                                                    // 0x0120(0x0024) (Edit)
	float                                              MaxSpeedMultiplierWhenDexterityIsMinimal;                 // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedMultiplierWhenDexterityIsMaximal;                 // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMinimal;             // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMaximal;             // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMinimal;             // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMaximal;             // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedWhenImmersedInWaterAndDexterityIsMinimal;         // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedWhenImmersedInWaterAndDexterityIsMaximal;         // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenImmersedInWater;                // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenImmersedInWater;                // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Air
// 0x000C
struct FPrisonerMovementSettings_Air
{
	float                                              JumpZVelocity;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocityMultiplierWhenDexterityIsMinimal;            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocityMultiplierWhenDexterityIsMaximal;            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Water
// 0x0054
struct FPrisonerMovementSettings_Water
{
	struct FPrisonerWaterMovementParameters            Slow;                                                     // 0x0000(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            Medium;                                                   // 0x000C(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            Fast;                                                     // 0x0018(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            DivingSlow;                                               // 0x0024(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            DivingMedium;                                             // 0x0030(0x000C) (Edit)
	float                                              MaxSpeedMultiplierWhenDexterityIsMinimal;                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedMultiplierWhenDexterityIsMaximal;                 // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMinimal;             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMaximal;             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMinimal;             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMaximal;             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerRestingData
// 0x0010
struct FPrisonerRestingData
{
	EPrisonerRestingMode                               Mode;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsRestingOnGround;                                        // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasChangedTransform;                                      // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasDisabledCapsuleCollision;                              // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAnimSequenceBase>            RestingAnimation;                                         // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FeetIKOffset;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerRestingDataAutonomous
// 0x001C
struct FPrisonerRestingDataAutonomous
{
	bool                                               HasDisabledMovement;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         Location;                                                 // 0x0004(0x000C)
	struct FVector_NetQuantize                         EulerRotation;                                            // 0x0010(0x000C)
};

// ScriptStruct ConZ.PrisonerInitialSkillInfo
// 0x0010
struct FPrisonerInitialSkillInfo
{
	class USkill*                                      Skill;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        InitialLevel;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              InitialExperiencePoints;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.MedicalRecord
// 0x0028
struct FMedicalRecord
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class APrisoner*                                   Patient;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               CheckSuccessful;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<uint32_t>                                   Diagnoses;                                                // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.SkillRecord
// 0x000C
struct FSkillRecord
{
	ESkillReplicationID                                ID;                                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExperiencePoints;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        Level;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int8_t                                             counter;                                                  // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.ActiveMovingThroughFoliageSounds
// 0x0020
struct FActiveMovingThroughFoliageSounds
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAkAudioEvent*                               StartAudioEvent;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopAudioEvent;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.LocalOffsetCurves
// 0x0020
struct FLocalOffsetCurves
{
	class UCurveLinearColor*                           YawIdle;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           YawMoving;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           PitchIdle;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           PitchMoving;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ProjectileData
// 0x0048
struct FProjectileData
{
	struct FText                                       Caption;                                                  // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	float                                              Caliber;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleVelocity;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BallisticCoefficient;                                     // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EBallisticDragModel                                BallisticDragModel;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationFactor;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlancingAngle;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowGlanceOrForceBounce;                                 // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              BounceAngle;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ConZ.FiredShotDescriptionRep
// 0x0004
struct FFiredShotDescriptionRep
{
	uint32_t                                           PackedData;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ImpactEffectData
// 0x0010
struct FImpactEffectData
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   Decal;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.RadioStationTrackData
// 0x0028
struct FRadioStationTrackData
{
	class URadioTrack*                                 Track;                                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAkAudioEvent*>                       StartEvents;                                              // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class UAkAudioEvent*>                       StopEvents;                                               // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.RadioProgramData
// 0x0018
struct FRadioProgramData
{
	class UClass*                                      ProgramClass;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class URadioProgram*                               Program;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Chance;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.RepairToolItemParams
// 0x0040
struct FRepairToolItemParams
{
	struct FGameplayTagContainer                       RepairableItemTypes;                                      // 0x0000(0x0020) (Edit)
	class UAkAudioEvent*                               StartRepairSound;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopRepairSound;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                StartRepairMontage;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                StopRepairMontage;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.RunningSkillParametersPerSkillLevel
// 0x0010
struct FRunningSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   MaxSpeedMultiplier;                                       // 0x0000(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaConsumptionMultiplier;                             // 0x0008(0x0008) (Edit)
};

// ScriptStruct ConZ.SearchPerItemData
// 0x0028
struct FSearchPerItemData
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UPhysicalMaterial*>                   NeededMaterials;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              Probability;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinQuantity;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PatrolPoint
// 0x0020
struct FPatrolPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              MinWaitDuration;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitDuration;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // 0x0014(0x000C) (IsPlainOldData)
};

// ScriptStruct ConZ.DangerZone
// 0x0028
struct FDangerZone
{
	struct FVector                                     GuardLocation;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class ASentryGuardVolume*                          Area;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GuardWorldLocation;                                       // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ServerInfo
// 0x0050
struct FServerInfo
{
	struct FString                                     Address;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Port;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      PlayerCount;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxPlayerCount;                                           // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PasswordProtected;                                        // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	float                                              ping;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InGameTime;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     Version;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsComplete;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ParticleCollisionDecalData
// 0x0018
struct FParticleCollisionDecalData
{
	class UMaterialInterface*                          Decal;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSize;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSize;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLifetime;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLifetime;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CompassSkillParametersPerSkillLevel
// 0x0001
struct FCompassSkillParametersPerSkillLevel
{
	unsigned char                                      CompassSkillLevel;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.HandsPoseCorrections
// 0x0040
struct FHandsPoseCorrections
{
	class UAnimSequenceBase*                           RightHand;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightFist;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightFistInCombatMode;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightHandToIdleBlendAlpha;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           LeftHand;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftFist;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftFistInCombatMode;                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftHandToIdleBlendAlpha;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.TeamDeathmatchParameters
// 0x0014
struct FTeamDeathmatchParameters
{
	int                                                RoundScoreLimit;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionInterval;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionDuration;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionStep;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BarrierHeatUpDuration;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TeleportUserDataReplicator
// 0x0008
struct FTeleportUserDataReplicator
{
	class UTeleportUserData*                           UserData;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TeleportRepData
// 0x0030
struct FTeleportRepData
{
	unsigned char                                      RequestID;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsInProgress;                                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Subject;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x000C(0x000C) (IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FTeleportUserDataReplicator                 UserDataReplicator;                                       // 0x0028(0x0008)
};

// ScriptStruct ConZ.TireSurfaceAudioEntry
// 0x0018
struct FTireSurfaceAudioEntry
{
	class UAkAudioEvent*                               SoundGroup;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPhysicalSurface>>              RelatedPhysicalSurfaces;                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.Tractor4WAnimWheelData
// 0x0008
struct FTractor4WAnimWheelData
{
	float                                              RollAngle;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SteerAngle;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.UserServerHistoryItem
// 0x0028
struct FUserServerHistoryItem
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.UserProfileAuthorityInfo
// 0x0040
struct FUserProfileAuthorityInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Ip;                                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ResponsePort;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GameplayPort;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDbIntegerId                                UserProfileId;                                            // 0x0028(0x0008) (Edit, BlueprintVisible)
	struct FString                                     AuthToken;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.VehicleCorpseBurningParticles
// 0x0070
struct FVehicleCorpseBurningParticles
{
	class UParticleSystem*                             Particles;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  ParticlesTransform;                                       // 0x0010(0x0030) (Edit, IsPlainOldData)
	struct FHeatSourceParameters                       HeatSourceParameters;                                     // 0x0040(0x0020) (Edit)
	struct FDbIntegerId                                HeatSourceId;                                             // 0x0060(0x0008)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnerDataBasedOnPreset
// 0x0028
struct FVehicleSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideVehicleClasses;                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideProbability;                                      // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x000A(0x0010) UNKNOWN PROPERTY: ArrayProperty ConZ.VehicleSpawnerDataBasedOnPreset.VehicleClasses
	float                                              Probability;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnerMarker
// 0x0060
struct FVehicleSpawnerMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	struct FVehicleSpawnerDataBasedOnPreset            Spawner;                                                  // 0x0030(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ExpirableVehicleSpawner
// 0x0028
struct FExpirableVehicleSpawner
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int64_t                                            ExpirationTime;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FPrimaryAssetId                             VehicleAssetId;                                           // 0x0018(0x0010) (Edit)
};

// ScriptStruct ConZ.VehicleSpawnerData
// 0x0018
struct FVehicleSpawnerData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty ConZ.VehicleSpawnerData.VehicleClasses
	float                                              Probability;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ClassesArray
// 0x0020
struct FClassesArray
{
	TArray<class UClass*>                              Classes;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              ProhibitedClasses;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.WashItemData
// 0x0010
struct FWashItemData
{
	class UClass*                                      CleanItem;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WashItemUsage;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.Waypoint
// 0x0030
struct FWaypoint
{
	EAnimalWaypointType                                Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Center;                                                   // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Radius;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                AnimalsSpawnedNum;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class AAnimal2>>             SpawnedAnimals;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.WeaponBowAimOffsets
// 0x0018
struct FWeaponBowAimOffsets
{
	class UBlendSpace*                                 DrawPercentage[0x3];                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponBowArmsShake
// 0x0030
struct FWeaponBowArmsShake
{
	class UAnimSequenceBase*                           ThirdPerson[0x3];                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           FirstPerson[0x3];                                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponBowStateDataReplicated
// 0x000C
struct FWeaponBowStateDataReplicated
{
	EBowDrawPercentage                                 BowDrawPercentage;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              HoldTimeInFullDraw;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	EWeaponBowState                                    WeaponBowState;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieMeshVariation2
// 0x0010
struct FZombieMeshVariation2
{
	class USkeletalMesh*                               DressedMesh;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               StrippedMesh;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieRelaxedStanceAnimations
// 0x0008
struct FZombieRelaxedStanceAnimations
{
	class UAnimSequenceBase*                           WalkLoopAnimation;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieRelaxedStanceVariation2
// 0x0020
struct FZombieRelaxedStanceVariation2
{
	struct FZombieRelaxedStanceAnimations              Animations;                                               // 0x0000(0x0008) (Edit)
	float                                              WalkAcceleration;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkDeceleration;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeedInAnimation;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkTurnRate;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieCombatStanceAnimations
// 0x0018
struct FZombieCombatStanceAnimations
{
	class UAnimSequenceBase*                           RunStartAnimation;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RunLoopAnimation;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RunStopAnimation;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieCombatStanceVariation2
// 0x0030
struct FZombieCombatStanceVariation2
{
	struct FZombieCombatStanceAnimations               Animations;                                               // 0x0000(0x0018) (Edit)
	float                                              RunAcceleration;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunDeceleration;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeedInAnimation;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunTurnRate;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieTurnMontageDescription
// 0x0040
struct FZombieTurnMontageDescription
{
	class UAnimSequenceBase*                           AnimationL90;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimationL180;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimationR90;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimationR180;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TurnAngleCurveName;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTriggerTime;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieAttackDescription
// 0x0020
struct FZombieAttackDescription
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              PitchRange;                                               // 0x0008(0x0008) (Edit)
	float                                              MinDistance;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlMultiplier;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieRagdollAutoRecovery
// 0x0008
struct FZombieRagdollAutoRecovery
{
	EZombieRagdollAutoRecoveryType                     Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Timespan;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieMeshVariation
// 0x0020
struct FZombieMeshVariation
{
	struct FGameplayTag                                Name;                                                     // 0x0000(0x0008) (Edit)
	class USkeletalMesh*                               DressedMesh;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               StrippedMesh;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EGender                                            Gender;                                                   // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieAttributesVariation
// 0x0040
struct FZombieAttributesVariation
{
	struct FGameplayTagContainer                       CompatibleMeshVariations;                                 // 0x0000(0x0020) (Edit)
	float                                              HitPoints;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReceivedMeleeDamageMultiplier;                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReceivedMeleeDamageKnockoutChanceMultiplier;              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InflictedMeleeDamageMultiplier;                           // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinConsecutiveReceivedDamageRatioToBeKnockedOut;          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxConsecutiveReceivedDamageRatioToBeKnockedOut;          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNumConsecutiveReceivedMeleeHitsToBeKnockedOut;         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumConsecutiveReceivedMeleeHitsToBeKnockedOut;         // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieRelaxedStanceVariation
// 0x0040
struct FZombieRelaxedStanceVariation
{
	struct FGameplayTagContainer                       CompatibleMeshVariations;                                 // 0x0000(0x0020) (Edit)
	class UAnimSequenceBase*                           WalkLoopAnimation;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkAcceleration;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkDeceleration;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeedInAnimation;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkTurnRate;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieCombatStanceVariation
// 0x0050
struct FZombieCombatStanceVariation
{
	struct FGameplayTagContainer                       CompatibleMeshVariations;                                 // 0x0000(0x0020) (Edit)
	class UAnimSequenceBase*                           RunStartAnimation;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RunLoopAnimation;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RunStopAnimation;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunAcceleration;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunDeceleration;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeedInAnimation;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunTurnRate;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombiesVariations
// 0x0040
struct FZombiesVariations
{
	TArray<struct FZombieMeshVariation>                MeshVariations;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FZombieAttributesVariation>          AttributesVariations;                                     // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FZombieRelaxedStanceVariation>       RelaxedStanceVariations;                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FZombieCombatStanceVariation>        CombatStanceVariations;                                   // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.AchievementStats
// 0x0001
struct FAchievementStats
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ConZ.Achievements
// 0x0001
struct FAchievements
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ConZ.AnimalData
// 0x0028
struct FAnimalData
{
	class UClass*                                      AnimalClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class AAnimal2*>                            AliveAnimals;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class ACorpse*>                             DeadAnimals;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct ConZ.HitByMeleeImpactSoundsInfo
// 0x0010
struct FHitByMeleeImpactSoundsInfo
{
	ECharacterImpactSourceSoundCategory                ImpactSourceSoundCategory;                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDamageMagnitudeType                               DamageMagnitudeType;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDetectHitCollisionType                            ImpactBodyPart;                                           // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     ImpactPoint;                                              // 0x0004(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterStats
// 0x0030
struct FCharacterStats
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              FamePoints;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FameLevel;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventScore;                                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventKills;                                               // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventTeamKills;                                           // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventDeaths;                                              // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventSuicides;                                            // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventAssists;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventHeadshots;                                           // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBanned;                                                 // 0x002C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterStatsItem
// 0x0048
struct FCharacterStatsItem
{
	int                                                Rank;                                                     // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FCharacterStats                             CharacterStats;                                           // 0x0018(0x0030) (BlueprintVisible)
};

// ScriptStruct ConZ.SelectedChoppingTool
// 0x0040
struct FSelectedChoppingTool
{
	class AItem*                                       Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FChoppingTool2                              Tool;                                                     // 0x0008(0x0030)
	bool                                               IsRequiredToBeInHands;                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ConZPlacementQueryParams
// 0x0010
struct FConZPlacementQueryParams
{
	bool                                               IsSnapping;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               MustBePlacedOnFoundations;                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanEverBePlacedOnFoundations;                             // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBePlacedOnOtherBaseElements;                           // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class APrisoner*                                   User;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZBaseElementSnappingPoints
// 0x0078
struct FConZBaseElementSnappingPoints
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseElementSnappingPoint
// 0x002C
struct FConZBaseElementSnappingPoint
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseElementDescription
// 0x0170
struct FConZBaseElementDescription
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	int64_t                                            ElementID;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ElementName;                                              // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            OwnerUserId;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OwnerName;                                                // 0x0030(0x0010) (ZeroConstructor)
	struct FTransform                                  Transform;                                                // 0x0040(0x0030) (IsPlainOldData)
	class UClass*                                      ElementClass;                                             // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	EBaseElementType                                   ElementType;                                              // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0078(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	struct FVector                                     BoundingBoxMin;                                           // 0x007C(0x000C) (IsPlainOldData)
	struct FVector                                     BoundingBoxMax;                                           // 0x0088(0x000C) (IsPlainOldData)
	unsigned char                                      HeightLevel;                                              // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxHeightLevel;                                           // 0x0095(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NeighboursFlags;                                          // 0x0096(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0097(0x0001) MISSED OFFSET
	struct FConZBaseElementSnappingPoints              SnappingPoints;                                           // 0x0098(0x0078)
	struct FConZBaseBuildingSnappingData               SnappingData;                                             // 0x0110(0x0010)
	TArray<struct FBaseElementSnapMarker>              SnapMarkers;                                              // 0x0120(0x0010) (ZeroConstructor)
	TArray<struct FConZBaseElementSnappingPoint>       SnappingPointArray;                                       // 0x0130(0x0010) (ZeroConstructor)
	float                                              HealthPointsPercentage;                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxHealthPoints;                                          // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDamaged;                                             // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	float                                              DecayPerHour;                                             // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RadialDamageMultiplier;                                   // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ShouldRemoveIntersectingElementsOnDestroy;                // 0x0154(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	TWeakObjectPtr<class ADoor>                        DoorActor;                                                // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               QueuedDestroy;                                            // 0x0160(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	float                                              Quality;                                                  // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ConZFlagElementDescription
// 0x0010 (0x0180 - 0x0170)
struct FConZFlagElementDescription : public FConZBaseElementDescription
{
	int64_t                                            OvertakeEndTime;                                          // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDbIntegerId                                OvertakerId;                                              // 0x0170(0x0008)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ConZFlagElementData
// 0x0010
struct FConZFlagElementData
{
	int64_t                                            OvertakeEndTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDbIntegerId                                OvertakerId;                                              // 0x0008(0x0008)
};

// ScriptStruct ConZ.ConZBaseElementData
// 0x0070
struct FConZBaseElementData
{
	int64_t                                            ElementID;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            OwnerPlayerId;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	class UClass*                                      ElementClass;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              HealthPoints;                                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Quality;                                                  // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DoorElementStateFlags;                                    // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<class UClass*>                              DoorUpgrades;                                             // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ConZMapLocationProperties
// 0x0004
struct FConZMapLocationProperties
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.RecipeAvailabilityState
// 0x00C8
struct FRecipeAvailabilityState
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct ConZ.RecipeItemState
// 0x001C
struct FRecipeItemState
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingPart
// 0x0030
struct FCraftingPart
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ConZ.ExplosionRadialDamageEvent
// 0x0010 (0x0050 - 0x0040)
struct FExplosionRadialDamageEvent : public FRadialDamageEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.BuildingsReplicationHelper
// 0x00E0
struct FBuildingsReplicationHelper
{
	TMap<struct FString, struct FBuildingData>         BuildingsData;                                            // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET
	TMap<struct FString, struct FDoorRepData>          DoorRepData;                                              // 0x0070(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET
};

// ScriptStruct ConZ.FortificationMarkerParams
// 0x0030
struct FFortificationMarkerParams
{
	bool                                               IsValid;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MarkerIndex;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (IsPlainOldData)
	float                                              Scale;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PlayerPawnBirdInfo
// 0x0010
struct FPlayerPawnBirdInfo
{
	int                                                CoastalBirdsinProximity;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ContinetalBirdsinProximity;                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                VirtualAssignedCoastalBirds;                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                VirtualAssignedContinentalBirds;                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConZ.HeatSource
// 0x0040
struct FHeatSource
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FHeatSourceParameters                       parameters;                                               // 0x0010(0x0020) (Edit)
	float                                              FuelDuration;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FuelCapacity;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TimesUpdatedWithoutMoving;                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactResult
// 0x0018
struct FHitReactResult
{
	class UAnimMontage*                                MontageToPlay;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FollowupMontage;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InstanceManager
// 0x0058
struct FInstanceManager
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ConZ.VirtualizedItemDescription
// 0x0008
struct FVirtualizedItemDescription
{
	TWeakObjectPtr<class AItem>                        Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.LandingDamageEvent
// 0x0010 (0x00B8 - 0x00A8)
struct FLandingDamageEvent : public FPointDamageEvent
{
	struct FVector                                     ImpactVelocity;                                           // 0x00A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeDodge
// 0x0010
struct FMeleeDodge
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeAttack
// 0x0018
struct FMeleeAttack
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.MeleePointDamageEvent
// 0x0058 (0x0100 - 0x00A8)
struct FMeleePointDamageEvent : public FPointDamageEvent
{
	struct FMeleeWeaponDesc                            WeaponDesc;                                               // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FGameplayTag                                AttackCapsuleAttachment;                                  // 0x00D0(0x0008) (Edit, BlueprintVisible)
	EDetectHitCollisionType                            DetectHitCollisionType;                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class UAnimMontage*                                AttackMontage;                                            // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDamageMagnitudeType                               DamageMagnitudeType;                                      // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              KnockoutChance;                                           // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EHitDirectionType                                  HitDirectionType;                                         // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class AItem*                                       Weapon;                                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.MeshInstancesMap
// 0x0050
struct FMeshInstancesMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ConZ.MeshInstances
// 0x0050
struct FMeshInstances
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ConZ.MeshInstance
// 0x0038
struct FMeshInstance
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ConZ.MeshItemData
// 0x0058
struct FMeshItemData
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ConZ.MissionLevelInfo
// 0x0010
struct FMissionLevelInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.ActiveManagers
// 0x0010
struct FActiveManagers
{
	TArray<class AMissionManager*>                     MissionManagers;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.ObjectiveDataGroup
// 0x0018
struct FObjectiveDataGroup
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty ConZ.ObjectiveDataGroup.RewardItems
	float                                              RewardFamePoints;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ObjectiveTrackableData
// 0x0008
struct FObjectiveTrackableData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.BodyPartInjury
// 0x0008
struct FBodyPartInjury
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ReplicatedState
// 0x0028
struct FReplicatedState
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     PlacedLocation;                                           // 0x000C(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x000C) (IsPlainOldData)
	bool                                               IsPlacementAllowed;                                       // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.InstrumentEvent
// 0x0010
struct FInstrumentEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.WindowDetectionParams
// 0x0038
struct FWindowDetectionParams
{
	struct FVector                                     CharacterHeadLocation;                                    // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     CharacterFeetLocation;                                    // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     CharacterForwardVector;                                   // 0x0018(0x000C) (IsPlainOldData)
	float                                              MaxHorzDistanceToWindow;                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxCharacterToWindowAngle;                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HorzHitDetectionBias;                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionBiasBelowWindow;                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionBiasAboveWindow;                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.LadderDetectionParams
// 0x0020
struct FLadderDetectionParams
{
	struct FVector                                     RayOrigin;                                                // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     RayDirection;                                             // 0x000C(0x000C) (IsPlainOldData)
	float                                              MaxHorzDistanceToLadder;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxRayToLadderAngle;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerRestingParameters
// 0x0060
struct FPrisonerRestingParameters
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerDistanceTravelledContext
// 0x0018
struct FPrisonerDistanceTravelledContext
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerViolation
// 0x0010
struct FPrisonerViolation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.SkillExperienceChange
// 0x0008
struct FSkillExperienceChange
{
	float                                              ExperienceChange;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerViewInfo
// 0x0010 (0x0580 - 0x0570)
struct FPrisonerViewInfo : public FMinimalViewInfo
{
	float                                              MinViewYaw;                                               // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxViewYaw;                                               // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinViewPitch;                                             // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxViewPitch;                                             // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0578(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectileRadialDamageEvent
// 0x0010 (0x0050 - 0x0040)
struct FProjectileRadialDamageEvent : public FRadialDamageEvent
{
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x0040(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.EngineeringEventData
// 0x0004
struct FEngineeringEventData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.SkillEventThrownItemHitTarget
// 0x0008
struct FSkillEventThrownItemHitTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.SkillEventItemThrown
// 0x0001
struct FSkillEventItemThrown
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ConZ.SkillEventWeaponReload
// 0x0000 (0x0001 - 0x0001)
struct FSkillEventWeaponReload : public FSkillEventWeapon
{

};

// ScriptStruct ConZ.SkillEventWeaponFireShot
// 0x0000 (0x0001 - 0x0001)
struct FSkillEventWeaponFireShot : public FSkillEventWeapon
{

};

// ScriptStruct ConZ.StaticMeshInstanceId
// 0x0010
struct FStaticMeshInstanceId
{
	class UInstancedStaticMeshComponent*               Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ObjectiveItem
// 0x0010
struct FObjectiveItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ThrowingPointDamageEvent
// 0x0018 (0x00C0 - 0x00A8)
struct FThrowingPointDamageEvent : public FPointDamageEvent
{
	TWeakObjectPtr<class AActor>                       ThrownActor;                                              // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitVelocity;                                              // 0x00B0(0x000C) (IsPlainOldData)
	bool                                               IsHeadUpperShot;                                          // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DidPierce;                                                // 0x00BD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.UsableObjectiveItem
// 0x0010
struct FUsableObjectiveItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.VehiclePartDescription
// 0x0010
struct FVehiclePartDescription
{
	struct FGameplayTag                                PartType;                                                 // 0x0000(0x0008) (Edit)
	float                                              health;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleExhaustEffectsParameters
// 0x0070
struct FVehicleExhaustEffectsParameters
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	class UParticleSystem*                             EngineStartedParticleSystem;                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EngineIdleParticleSystem;                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThrottlePressedParticleSystem;                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ThrottlePressedAudioEvent;                                // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDurationBetweenThrottlePressedEffects;                 // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DeactivationDelay;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.Version
// 0x0010
struct FVersion
{
	int                                                Major;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Minor;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Build;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Revision;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponBowDrawData
// 0x000C
struct FWeaponBowDrawData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.MalfunctionData
// 0x0020
struct FMalfunctionData
{
	bool                                               UseCustomChance;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FFloatInterval                              Chance;                                                   // 0x0004(0x0008) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ClearMalfunctionSequences;                                // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.WeaponSyncData
// 0x000C
struct FWeaponSyncData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.WorldEventDrawData
// 0x0050
struct FWorldEventDrawData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
