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
//		Name   -> Function Transition_Load_VC.Transition_Load_VC_C.Construct
//		Flags  -> ()
void UTransition_Load_VC_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Load_VC.Transition_Load_VC_C.Construct");

	UTransition_Load_VC_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Load_VC.Transition_Load_VC_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Load_VC_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Load_VC.Transition_Load_VC_C.Tick");

	UTransition_Load_VC_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Load_VC.Transition_Load_VC_C.ExecuteUbergraph_Transition_Load_VC
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Load_VC_C::ExecuteUbergraph_Transition_Load_VC(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Load_VC.Transition_Load_VC_C.ExecuteUbergraph_Transition_Load_VC");

	UTransition_Load_VC_C_ExecuteUbergraph_Transition_Load_VC_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
