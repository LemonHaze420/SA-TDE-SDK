﻿#pragma once

// Name: GTA III, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_LegalStartup_GTA3.UI_LegalStartup_GTA3_C
// 0x0009 (FullSize[0x0358] - InheritedSize[0x034F])
class UUI_LegalStartup_GTA3_C : public UUI_LegalStartup_Base_C
{
public:
	unsigned char                                      UnknownData_FYD8[0x1];                                     // 0x034F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LegalStartup_GTA3.UI_LegalStartup_GTA3_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_LegalStartup_GTA3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
