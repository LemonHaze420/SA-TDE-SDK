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

// BlueprintGeneratedClass BP_Marker_Hoop.BP_Marker_Hoop_C
// 0x000C (FullSize[0x02E8] - InheritedSize[0x02DC])
class ABP_Marker_Hoop_C : public ABP_Marker_Base_C
{
public:
	unsigned char                                      UnknownData_QGEA[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Marker_Hoop.BP_Marker_Hoop_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Marker_Hoop(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
