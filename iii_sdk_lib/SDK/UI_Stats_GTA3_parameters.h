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
// Parameters
//---------------------------------------------------------------------------

// Function UI_Stats_GTA3.UI_Stats_GTA3_C.Construct
struct UUI_Stats_GTA3_C_Construct_Params
{
};

// Function UI_Stats_GTA3.UI_Stats_GTA3_C.Tick
struct UUI_Stats_GTA3_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Stats_GTA3.UI_Stats_GTA3_C.OnSynchronizeProperties
struct UUI_Stats_GTA3_C_OnSynchronizeProperties_Params
{
};

// Function UI_Stats_GTA3.UI_Stats_GTA3_C.ExecuteUbergraph_UI_Stats_GTA3
struct UUI_Stats_GTA3_C_ExecuteUbergraph_UI_Stats_GTA3_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
