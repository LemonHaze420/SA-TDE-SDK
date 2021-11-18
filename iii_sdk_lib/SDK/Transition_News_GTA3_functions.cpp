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
//		Name   -> Function Transition_News_GTA3.Transition_News_GTA3_C.GetNextState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EGTATransitionState>           NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_News_GTA3_C::GetNextState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, TEnumAsByte<GTABase_EGTATransitionState>* NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_News_GTA3.Transition_News_GTA3_C.GetNextState");

	UTransition_News_GTA3_C_GetNextState_Params params {};
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NextState != nullptr)
		*NextState = params.NextState;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function Transition_News_GTA3.Transition_News_GTA3_C.SetInitialColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTransition_News_GTA3_C::SetInitialColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_News_GTA3.Transition_News_GTA3_C.SetInitialColor");

	UTransition_News_GTA3_C_SetInitialColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function Transition_News_GTA3.Transition_News_GTA3_C.IsOpaque
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTransition_News_GTA3_C::IsOpaque()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_News_GTA3.Transition_News_GTA3_C.IsOpaque");

	UTransition_News_GTA3_C_IsOpaque_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function Transition_News_GTA3.Transition_News_GTA3_C.UpdateToCurrentState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTransition_News_GTA3_C::UpdateToCurrentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_News_GTA3.Transition_News_GTA3_C.UpdateToCurrentState");

	UTransition_News_GTA3_C_UpdateToCurrentState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function Transition_News_GTA3.Transition_News_GTA3_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_News_GTA3_C::Update(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_News_GTA3.Transition_News_GTA3_C.Update");

	UTransition_News_GTA3_C_Update_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function Transition_News_GTA3.Transition_News_GTA3_C.GetCurrentFadeCanvas
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_News_GTA3_C::GetCurrentFadeCanvas(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_News_GTA3.Transition_News_GTA3_C.GetCurrentFadeCanvas");

	UTransition_News_GTA3_C_GetCurrentFadeCanvas_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCanvas != nullptr)
		*OutCanvas = params.OutCanvas;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function Transition_News_GTA3.Transition_News_GTA3_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTransition_News_GTA3_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_News_GTA3.Transition_News_GTA3_C.Construct");

	UTransition_News_GTA3_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function Transition_News_GTA3.Transition_News_GTA3_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_News_GTA3_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_News_GTA3.Transition_News_GTA3_C.Tick");

	UTransition_News_GTA3_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function Transition_News_GTA3.Transition_News_GTA3_C.ExecuteUbergraph_Transition_News_GTA3
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_News_GTA3_C::ExecuteUbergraph_Transition_News_GTA3(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_News_GTA3.Transition_News_GTA3_C.ExecuteUbergraph_Transition_News_GTA3");

	UTransition_News_GTA3_C_ExecuteUbergraph_Transition_News_GTA3_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
