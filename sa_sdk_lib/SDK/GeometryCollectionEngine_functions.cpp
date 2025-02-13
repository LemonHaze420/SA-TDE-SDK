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
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
//		Flags  -> ()
// Parameters:
//		TArray<struct FChaosTrailingEventData>             TrailingEvents                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		GeometryCollectionEngine_EChaosTrailingSortMethod  SortMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SortTrailingEvents(TArray<struct FChaosTrailingEventData>* TrailingEvents, GeometryCollectionEngine_EChaosTrailingSortMethod SortMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents");

	UChaosDestructionListener_SortTrailingEvents_Params params {};
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TrailingEvents != nullptr)
		*TrailingEvents = params.TrailingEvents;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
//		Flags  -> ()
// Parameters:
//		TArray<struct FChaosCollisionEventData>            CollisionEvents                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		GeometryCollectionEngine_EChaosCollisionSortMethod SortMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents, GeometryCollectionEngine_EChaosCollisionSortMethod SortMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents");

	UChaosDestructionListener_SortCollisionEvents_Params params {};
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CollisionEvents != nullptr)
		*CollisionEvents = params.CollisionEvents;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
//		Flags  -> ()
// Parameters:
//		TArray<struct FChaosBreakingEventData>             BreakingEvents                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		GeometryCollectionEngine_EChaosBreakingSortMethod  SortMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SortBreakingEvents(TArray<struct FChaosBreakingEventData>* BreakingEvents, GeometryCollectionEngine_EChaosBreakingSortMethod SortMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents");

	UChaosDestructionListener_SortBreakingEvents_Params params {};
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BreakingEvents != nullptr)
		*BreakingEvents = params.BreakingEvents;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
//		Flags  -> ()
// Parameters:
//		struct FChaosTrailingEventRequestSettings          InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings");

	UChaosDestructionListener_SetTrailingEventRequestSettings_Params params {};
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled");

	UChaosDestructionListener_SetTrailingEventEnabled_Params params {};
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
//		Flags  -> ()
// Parameters:
//		struct FChaosCollisionEventRequestSettings         InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings");

	UChaosDestructionListener_SetCollisionEventRequestSettings_Params params {};
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled");

	UChaosDestructionListener_SetCollisionEventEnabled_Params params {};
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
//		Flags  -> ()
// Parameters:
//		struct FChaosBreakingEventRequestSettings          InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings");

	UChaosDestructionListener_SetBreakingEventRequestSettings_Params params {};
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled");

	UChaosDestructionListener_SetBreakingEventEnabled_Params params {};
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
//		Flags  -> ()
// Parameters:
//		class AGeometryCollectionActor*                    GeometryCollectionActor                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor");

	UChaosDestructionListener_RemoveGeometryCollectionActor_Params params {};
	params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
//		Flags  -> ()
// Parameters:
//		class AChaosSolverActor*                           ChaosSolverActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor");

	UChaosDestructionListener_RemoveChaosSolverActor_Params params {};
	params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UChaosDestructionListener::IsEventListening()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening");

	UChaosDestructionListener_IsEventListening_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
//		Flags  -> ()
// Parameters:
//		class AGeometryCollectionActor*                    GeometryCollectionActor                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor");

	UChaosDestructionListener_AddGeometryCollectionActor_Params params {};
	params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
//		Flags  -> ()
// Parameters:
//		class AChaosSolverActor*                           ChaosSolverActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChaosDestructionListener::AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor");

	UChaosDestructionListener_AddChaosSolverActor_Params params {};
	params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGeometryCollectionActor::RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");

	AGeometryCollectionActor_RaycastSingle_Params params {};
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
//		Flags  -> ()
// Parameters:
//		bool                                               bNewNotifyBreaks                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks");

	UGeometryCollectionComponent_SetNotifyBreaks_Params params {};
	params.bNewNotifyBreaks = bNewNotifyBreaks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
//		Flags  -> ()
// Parameters:
//		struct FChaosPhysicsCollisionInfo                  CollisionInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision");

	UGeometryCollectionComponent_ReceivePhysicsCollision_Params params {};
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
//		Flags  -> ()
// Parameters:
//		struct FGeometryCollectionRepData                  OldData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::OnRep_RepData(const struct FGeometryCollectionRepData& OldData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData");

	UGeometryCollectionComponent_OnRep_RepData_Params params {};
	params.OldData = OldData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UGeometryCollectionComponent*                FracturedComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params params {};
	params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UGeometryCollectionComponent*                FracturedComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params params {};
	params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
//		Flags  -> ()
// Parameters:
//		int                                                TransformIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::NetAbandonCluster(int TransformIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster");

	UGeometryCollectionComponent_NetAbandonCluster_Params params {};
	params.TransformIndex = TransformIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Chaos_EGeometryCollectionPhysicsTypeEnum           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFieldSystemMetaData*                        MetaData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFieldNodeBase*                              Field                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, Chaos_EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField");

	UGeometryCollectionComponent_ApplyPhysicsField_Params params {};
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
//		Flags  -> ()
// Parameters:
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCollectionComponent::ApplyKinematicField(float Radius, const struct FVector& position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField");

	UGeometryCollectionComponent_ApplyKinematicField_Params params {};
	params.Radius = Radius;
	params.position = position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
//		Flags  -> ()
// Parameters:
//		struct FChaosPhysicsCollisionInfo                  CollisionInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void USkeletalMeshSimulationComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision");

	USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Params params {};
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
//		Flags  -> ()
// Parameters:
//		struct FChaosPhysicsCollisionInfo                  CollisionInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UStaticMeshSimulationComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision");

	UStaticMeshSimulationComponent_ReceivePhysicsCollision_Params params {};
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
//		Flags  -> ()
void UStaticMeshSimulationComponent::ForceRecreatePhysicsState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState");

	UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
