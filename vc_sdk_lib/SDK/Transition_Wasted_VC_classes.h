﻿#pragma once

// Name: ViceCity, Version: 1.0.0


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

// WidgetBlueprintGeneratedClass Transition_Wasted_VC.Transition_Wasted_VC_C
// 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
class UTransition_Wasted_VC_C : public UTransition_Wasted_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Transition_Wasted_VC.Transition_Wasted_VC_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_Transition_Wasted_VC(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif