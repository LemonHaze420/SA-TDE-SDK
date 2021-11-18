﻿// Name: GTA III, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_ConfirmationDialog_Fullscreen_GTA3_Mission.UI_ConfirmationDialog_Fullscreen_GTA3_Mission_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ConfirmationDialog_Fullscreen_GTA3_Mission_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Fullscreen_GTA3_Mission.UI_ConfirmationDialog_Fullscreen_GTA3_Mission_C.PreConstruct");

	UUI_ConfirmationDialog_Fullscreen_GTA3_Mission_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_ConfirmationDialog_Fullscreen_GTA3_Mission.UI_ConfirmationDialog_Fullscreen_GTA3_Mission_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_ConfirmationDialog_Fullscreen_GTA3_Mission_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Fullscreen_GTA3_Mission.UI_ConfirmationDialog_Fullscreen_GTA3_Mission_C.Construct");

	UUI_ConfirmationDialog_Fullscreen_GTA3_Mission_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_ConfirmationDialog_Fullscreen_GTA3_Mission.UI_ConfirmationDialog_Fullscreen_GTA3_Mission_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ConfirmationDialog_Fullscreen_GTA3_Mission_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Fullscreen_GTA3_Mission.UI_ConfirmationDialog_Fullscreen_GTA3_Mission_C.Tick");

	UUI_ConfirmationDialog_Fullscreen_GTA3_Mission_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_ConfirmationDialog_Fullscreen_GTA3_Mission.UI_ConfirmationDialog_Fullscreen_GTA3_Mission_C.ExecuteUbergraph_UI_ConfirmationDialog_Fullscreen_GTA3_Mission
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ConfirmationDialog_Fullscreen_GTA3_Mission_C::ExecuteUbergraph_UI_ConfirmationDialog_Fullscreen_GTA3_Mission(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Fullscreen_GTA3_Mission.UI_ConfirmationDialog_Fullscreen_GTA3_Mission_C.ExecuteUbergraph_UI_ConfirmationDialog_Fullscreen_GTA3_Mission");

	UUI_ConfirmationDialog_Fullscreen_GTA3_Mission_C_ExecuteUbergraph_UI_ConfirmationDialog_Fullscreen_GTA3_Mission_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
