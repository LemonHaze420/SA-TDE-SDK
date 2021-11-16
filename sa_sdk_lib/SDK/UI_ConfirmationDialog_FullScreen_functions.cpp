﻿// Name: SanAndreas, Version: 1.0.0

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
//		Offset -> 0x00000000
//		Name   -> Function UI_ConfirmationDialog_FullScreen.UI_ConfirmationDialog_FullScreen_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ConfirmationDialog_FullScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_FullScreen.UI_ConfirmationDialog_FullScreen_C.Tick");

	UUI_ConfirmationDialog_FullScreen_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ConfirmationDialog_FullScreen.UI_ConfirmationDialog_FullScreen_C.Construct
//		Flags  -> ()
void UUI_ConfirmationDialog_FullScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_FullScreen.UI_ConfirmationDialog_FullScreen_C.Construct");

	UUI_ConfirmationDialog_FullScreen_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ConfirmationDialog_FullScreen.UI_ConfirmationDialog_FullScreen_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ConfirmationDialog_FullScreen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_FullScreen.UI_ConfirmationDialog_FullScreen_C.PreConstruct");

	UUI_ConfirmationDialog_FullScreen_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ConfirmationDialog_FullScreen.UI_ConfirmationDialog_FullScreen_C.ExecuteUbergraph_UI_ConfirmationDialog_FullScreen
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ConfirmationDialog_FullScreen_C::ExecuteUbergraph_UI_ConfirmationDialog_FullScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_FullScreen.UI_ConfirmationDialog_FullScreen_C.ExecuteUbergraph_UI_ConfirmationDialog_FullScreen");

	UUI_ConfirmationDialog_FullScreen_C_ExecuteUbergraph_UI_ConfirmationDialog_FullScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
