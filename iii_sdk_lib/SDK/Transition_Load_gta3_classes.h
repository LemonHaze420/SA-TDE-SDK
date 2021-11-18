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

// WidgetBlueprintGeneratedClass Transition_Load_gta3.Transition_Load_gta3_C
// 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
class UTransition_Load_gta3_C : public UTransition_LoadingTemplate_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Transition_Load_gta3.Transition_Load_gta3_C");
		return ptr;
	}



	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_Transition_Load_gta3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
