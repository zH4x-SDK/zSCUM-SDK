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

// WidgetBlueprintGeneratedClass UI_PlacedPlaceablesWidget.UI_PlacedPlaceablesWidget_C
// 0x0014 (0x028C - 0x0278)
class UUI_PlacedPlaceablesWidget_C : public UPlacedPlaceableWidget
{
public:
	TArray<class UUI_PlacedPlaceableIcon_C*>           _icons;                                                   // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                _placeableIndex;                                          // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PlacedPlaceablesWidget.UI_PlacedPlaceablesWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
