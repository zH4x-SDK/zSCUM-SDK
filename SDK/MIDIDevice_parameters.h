#pragma once

#include "../SDK.h"

// Name: SCUM, Version: 4.20.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
struct UMIDIDeviceManager_FindMIDIDevices_Params
{
	TArray<struct FFoundMIDIDevice>                    OutMIDIDevices;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
struct UMIDIDeviceManager_CreateMIDIDeviceController_Params
{
	int                                                DeviceID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MIDIBufferSize;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMIDIDeviceController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
