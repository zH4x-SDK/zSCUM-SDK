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

// Class DcxVehicle.DcxVehicle
// 0x0010 (0x0398 - 0x0388)
class ADcxVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UDcxVehicleWheelsComponent*                  VehicleWheels;                                            // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicle");
		return ptr;
	}


	class UDcxVehicleWheelsComponent* GetVehicleWheels();
	class USkeletalMeshComponent* GetMesh();
	void STATIC_DcxVehicleSetBasisVectors(const struct FVector& Up, const struct FVector& Forward);
};


// Class DcxVehicle.DcxVehicle4W
// 0x0000 (0x0398 - 0x0398)
class ADcxVehicle4W : public ADcxVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicle4W");
		return ptr;
	}


	class UDcxVehicleDriveComponent4W* GetVehicleDrive4W();
};


// Class DcxVehicle.DcxVehicleAnimInstance
// 0x0600 (0x0960 - 0x0360)
class UDcxVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x5F0];                                     // 0x0360(0x05F0) MISSED OFFSET
	class UDcxVehicleWheelsComponent*                  VehicleWheels;                                            // 0x0950(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0958(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleAnimInstance");
		return ptr;
	}

};


// Class DcxVehicle.DcxVehicleWheelsComponent
// 0x0118 (0x02A0 - 0x0188)
class UDcxVehicleWheelsComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	float                                              ChassisMass;                                              // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InertiaTensorScale;                                       // 0x0194(0x000C) (Edit, IsPlainOldData)
	TArray<struct FDcxVehicleWheelConfiguration>       WheelConfigurations;                                      // 0x01A0(0x0010) (Edit, ZeroConstructor)
	struct FDcxVehicleTireLoadFilterData               TireLoadFilter;                                           // 0x01B0(0x0010) (Edit)
	bool                                               bUseAvoidance;                                            // 0x01C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	float                                              AvoidanceWeight;                                          // 0x01C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x01C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x01CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x01D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x01D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              ThresholdLongitudinalSpeed;                               // 0x01D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LowForwardSpeedSubStepCount;                              // 0x01DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                HighForwardSpeedSubStepCount;                             // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragArea;                                                 // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDcxVehicleDriveInputRate                   ThrottleRate;                                             // 0x01EC(0x0008) (Edit, BlueprintVisible)
	struct FDcxVehicleDriveInputRate                   BrakeRate;                                                // 0x01F4(0x0008) (Edit, BlueprintVisible)
	struct FDcxVehicleDriveInputRate                   HandbrakeRate;                                            // 0x01FC(0x0008) (Edit, BlueprintVisible)
	struct FDcxVehicleDriveInputRate                   SteerRate;                                                // 0x0204(0x0008) (Edit, BlueprintVisible)
	float                                              AvoidanceRadius;                                          // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceHeight;                                          // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceConsiderationRadius;                             // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceThrottleStep;                                    // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceBrakeStep;                                       // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceSteerStep;                                       // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRecreateRequired;                                        // 0x0224(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	class UDcxVehicleWheelsRawInput*                   RawInput;                                                 // 0x0228(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<float>                                      SmoothAnalogControls;                                     // 0x0230(0x0010) (ZeroConstructor, Transient)
	struct FDcxVehicleDriveState                       ReplicatedState;                                          // 0x0240(0x0018) (Net, Transient)
	bool                                               bWasAvoidanceUpdated;                                     // 0x0258(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	struct FVector                                     AvoidanceVelocity;                                        // 0x025C(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     AvoidanceLockVelocity;                                    // 0x0268(0x000C) (Transient, IsPlainOldData)
	float                                              AvoidanceLockTimer;                                       // 0x0274(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x28];                                      // 0x0278(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleWheelsComponent");
		return ptr;
	}


	void SetWheelOffset(int WheelIndex, const struct FVector& Offset);
	void SetWheelData(int WheelIndex, struct FDcxVehicleWheelData* WheelData);
	void SetTire(int WheelId, class UDcxVehicleTire* Tire);
	void SetSuspensionData(int WheelIndex, struct FDcxVehicleSuspensionData* SuspensionData);
	void SetGroupsToIgnore(const struct FNavAvoidanceMask& Mask);
	void SetGroupsToAvoid(const struct FNavAvoidanceMask& Mask);
	void SetChassisMass(float Mass);
	void SetAvoidanceGroup(const struct FNavAvoidanceMask& Mask);
	void ServerUpdateState(const struct FDcxAnalogControlArray& AnalogControls, const struct FDcxGear& CurrentGear, const struct FDcxGear& TargetGear);
	bool IsWheelDisabled(int WheelIndex);
	bool GetWheelState(int WheelIndex, struct FDcxVehicleWheelState* WheelState);
	float GetWheelRotationSpeed(int WheelIndex);
	float GetWheelRotationAngle(int WheelIndex);
	struct FVector GetWheelOffset(int WheelIndex);
	struct FDcxVehicleWheelData GetWheelData(int WheelIndex);
	class UDcxVehicleTire* GetTire(int WheelIndex);
	struct FDcxVehicleSuspensionData GetSuspensionData(int WheelIndex);
	class UDcxVehicleWheelsRawInput* GetRawInput();
	int GetNumWheels();
	float GetForwardSpeed();
	float GetChassisMass();
	struct FName GetBoneName(int WheelIndex);
	float GetAnalogControl(unsigned char Control);
	void EnableWheel(int WheelIndex);
	void EnableAvoidance(bool bEnabled);
	void DisableWheel(int WheelIndex);
};


// Class DcxVehicle.DcxVehicleDriveComponent
// 0x0158 (0x03F8 - 0x02A0)
class UDcxVehicleDriveComponent : public UDcxVehicleWheelsComponent
{
public:
	struct FDcxVehicleEngineData                       EngineData;                                               // 0x02A0(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDcxVehicleGearboxData                      GearboxData;                                              // 0x0330(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDcxVehicleClutchData                       ClutchData;                                               // 0x0360(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoReverse;                                             // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              WrongDirectionThreshold;                                  // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoBrake;                                               // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	float                                              StopThreshold;                                            // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          SteerCurve;                                               // 0x0380(0x0078) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveComponent");
		return ptr;
	}


	void SetTargetGear(int NewGear, bool bImmediate);
	void SetGearboxType(TEnumAsByte<EDcxVehicleGearbox> NewGearboxType);
	void SetGearboxData(struct FDcxVehicleGearboxData* NewGearboxData);
	void SetEngineRotationSpeed(float RPM);
	void SetEngineData(struct FDcxVehicleEngineData* NewEngineData);
	void SetClutchData(struct FDcxVehicleClutchData* NewClutchData);
	int GetTargetGear();
	TEnumAsByte<EDcxVehicleGearbox> GetGearboxType();
	struct FDcxVehicleGearboxData GetGearboxData();
	float GetEngineRotationSpeed();
	struct FDcxVehicleEngineData GetEngineData();
	int GetCurrentGear();
	struct FDcxVehicleClutchData GetClutchData();
};


// Class DcxVehicle.DcxVehicleDriveComponent4W
// 0x0020 (0x0418 - 0x03F8)
class UDcxVehicleDriveComponent4W : public UDcxVehicleDriveComponent
{
public:
	struct FDcxVehicleDifferentialData4W               DifferentialData;                                         // 0x03F8(0x001C) (Edit)
	float                                              AckermannGeometryAccuracy;                                // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveComponent4W");
		return ptr;
	}


	void SetDifferentialData(struct FDcxVehicleDifferentialData4W* NewDifferentialData);
	class UDcxVehicleDriveRawInput4W* GetRawInput4W();
	struct FDcxVehicleDifferentialData4W GetDifferentialData();
};


// Class DcxVehicle.DcxVehicleDriveComponentNW
// 0x0000 (0x03F8 - 0x03F8)
class UDcxVehicleDriveComponentNW : public UDcxVehicleDriveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveComponentNW");
		return ptr;
	}


	void SetDrivenWheel(int WheelIndex, bool bIsDriven);
	bool IsDrivenWheel(int WheelIndex);
	class UDcxVehicleDriveRawInputNW* GetRawInputNW();
};


// Class DcxVehicle.DcxVehicleDriveComponentTank
// 0x0008 (0x0400 - 0x03F8)
class UDcxVehicleDriveComponentTank : public UDcxVehicleDriveComponent
{
public:
	TEnumAsByte<EDcxVehicleDriveControlModelTank>      DriveModel;                                               // 0x03F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveComponentTank");
		return ptr;
	}


	void SetDriveModel(TEnumAsByte<EDcxVehicleDriveControlModelTank> ControlModel);
	class UDcxVehicleDriveRawInputTank* GetRawInputTank();
	TEnumAsByte<EDcxVehicleDriveControlModelTank> GetDriveModel();
};


// Class DcxVehicle.DcxVehicleWheelsRawInput
// 0x0018 (0x0040 - 0x0028)
class UDcxVehicleWheelsRawInput : public UObject
{
public:
	int                                                ThrottleIndex;                                            // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<float>                                      RawAnalogControls;                                        // 0x0030(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleWheelsRawInput");
		return ptr;
	}


	void SetThrottle(float Throttle);
	float GetThrottle();
};


// Class DcxVehicle.DcxVehicleDriveRawInput
// 0x0008 (0x0048 - 0x0040)
class UDcxVehicleDriveRawInput : public UDcxVehicleWheelsRawInput
{
public:
	int                                                ClutchIndex;                                              // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGearUp;                                                  // 0x0044(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGearDown;                                                // 0x0045(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveRawInput");
		return ptr;
	}


	void SetGearUp(bool bGearUpPressed);
	void SetGearDown(bool bGearDownPressed);
	void SetClutch(float Clutch);
	bool GetGearUp();
	bool GetGearDown();
	float GetClutch();
};


// Class DcxVehicle.DcxVehicleDriveRawInput4W
// 0x0000 (0x0048 - 0x0048)
class UDcxVehicleDriveRawInput4W : public UDcxVehicleDriveRawInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveRawInput4W");
		return ptr;
	}


	void SetSteer(float Steer);
	void SetHandbrake(float Handbrake);
	void SetBrake(float Brake);
	float GetSteer();
	float GetHandbrake();
	float GetBrake();
};


// Class DcxVehicle.DcxVehicleDriveRawInputNW
// 0x0000 (0x0048 - 0x0048)
class UDcxVehicleDriveRawInputNW : public UDcxVehicleDriveRawInput4W
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveRawInputNW");
		return ptr;
	}

};


// Class DcxVehicle.DcxVehicleDriveRawInputTank
// 0x0008 (0x0050 - 0x0048)
class UDcxVehicleDriveRawInputTank : public UDcxVehicleDriveRawInput
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveRawInputTank");
		return ptr;
	}


	void SetRightThrust(float Thrust);
	void SetRightBrake(float Brake);
	void SetLeftThrust(float Thrust);
	void SetLeftBrake(float Brake);
	float GetRightThrust();
	float GetRightBrake();
	float GetLeftThrust();
	float GetLeftBrake();
};


// Class DcxVehicle.DcxVehicleNoDrive
// 0x0000 (0x0398 - 0x0398)
class ADcxVehicleNoDrive : public ADcxVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleNoDrive");
		return ptr;
	}


	class UDcxVehicleNoDriveComponent* GetVehicleNoDrive();
};


// Class DcxVehicle.DcxVehicleNoDriveComponent
// 0x0008 (0x02A8 - 0x02A0)
class UDcxVehicleNoDriveComponent : public UDcxVehicleWheelsComponent
{
public:
	bool                                               bUseRawInput;                                             // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              MaxDriveTorque;                                           // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleNoDriveComponent");
		return ptr;
	}


	void SetSteerAngle(int WheelIndex, float SteerAngle);
	void SetDriveTorque(int WheelIndex, float DriveTorque);
	void SetBrakeTorque(int WheelIndex, float BrakeTorque);
	float GetSteerAngle(int WheelIndex);
	class UDcxVehicleNoDriveRawInput* GetRawInputND();
	float GetDriveTorque(int WheelIndex);
	float GetBrakeTorque(int WheelIndex);
};


// Class DcxVehicle.DcxVehicleNoDriveRawInput
// 0x0000 (0x0040 - 0x0040)
class UDcxVehicleNoDriveRawInput : public UDcxVehicleWheelsRawInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleNoDriveRawInput");
		return ptr;
	}


	void SetSteer(float NewSteer);
	void SetBrake(float NewBrake);
	float GetSteer();
	float GetBrake();
};


// Class DcxVehicle.DcxVehicleNW
// 0x0000 (0x0398 - 0x0398)
class ADcxVehicleNW : public ADcxVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleNW");
		return ptr;
	}


	class UDcxVehicleDriveComponentNW* GetVehicleDriveNW();
};


// Class DcxVehicle.DcxVehicleTank
// 0x0000 (0x0398 - 0x0398)
class ADcxVehicleTank : public ADcxVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleTank");
		return ptr;
	}


	class UDcxVehicleDriveComponentTank* GetVehicleDriveTank();
};


// Class DcxVehicle.DcxVehicleTire
// 0x00A0 (0x00D0 - 0x0030)
class UDcxVehicleTire : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0030(0x0004) MISSED OFFSET
	float                                              LateralStiffnessX;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LateralStiffnessY;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LongitudinalStiffnessPerUnitGravity;                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CamberStiffnessPerUnitGravity;                            // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          FrictionVsSlipGraph;                                      // 0x0048(0x0078) (Edit)
	TArray<struct FDcxDrivableSurfaceToTireFrictionPair> DrivableSurfaceToTireFrictionPairs;                       // 0x00C0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleTire");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
