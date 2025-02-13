﻿// Name: ViceCity, Version: 1.0.0

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
//		Name   -> Function UI_HUDItem_Busted_VC.UI_HUDItem_Busted_VC_C.GetMainContentCanvasSlot
//		Flags  -> ()
// Parameters:
//		class UCanvasPanelSlot*                            ContentCanvasSlot                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Busted_VC_C::GetMainContentCanvasSlot(class UCanvasPanelSlot** ContentCanvasSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Busted_VC.UI_HUDItem_Busted_VC_C.GetMainContentCanvasSlot");

	UUI_HUDItem_Busted_VC_C_GetMainContentCanvasSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContentCanvasSlot != nullptr)
		*ContentCanvasSlot = params.ContentCanvasSlot;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Busted_VC.UI_HUDItem_Busted_VC_C.GetRichText
//		Flags  -> ()
// Parameters:
//		class URichTextBlock*                              Text                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Busted_VC_C::GetRichText(class URichTextBlock** Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Busted_VC.UI_HUDItem_Busted_VC_C.GetRichText");

	UUI_HUDItem_Busted_VC_C_GetRichText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Busted_VC.UI_HUDItem_Busted_VC_C.Construct
//		Flags  -> ()
void UUI_HUDItem_Busted_VC_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Busted_VC.UI_HUDItem_Busted_VC_C.Construct");

	UUI_HUDItem_Busted_VC_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Busted_VC.UI_HUDItem_Busted_VC_C.ExecuteUbergraph_UI_HUDItem_Busted_VC
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Busted_VC_C::ExecuteUbergraph_UI_HUDItem_Busted_VC(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Busted_VC.UI_HUDItem_Busted_VC_C.ExecuteUbergraph_UI_HUDItem_Busted_VC");

	UUI_HUDItem_Busted_VC_C_ExecuteUbergraph_UI_HUDItem_Busted_VC_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
