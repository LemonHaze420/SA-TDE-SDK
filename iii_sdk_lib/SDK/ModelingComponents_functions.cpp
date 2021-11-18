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
//		Offset -> 0x0104AF30
//		Name   -> Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FString                                     LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPreviewGeometry::SetLineSetVisibility(const struct FString& LineSetIdentifier, bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.SetLineSetVisibility");

	UPreviewGeometry_SetLineSetVisibility_Params params {};
	params.LineSetIdentifier = LineSetIdentifier;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104AD70
//		Name   -> Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FString                                     LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMaterialInterface*                          NewMaterial                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPreviewGeometry::SetLineSetMaterial(const struct FString& LineSetIdentifier, class UMaterialInterface* NewMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.SetLineSetMaterial");

	UPreviewGeometry_SetLineSetMaterial_Params params {};
	params.LineSetIdentifier = LineSetIdentifier;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104AC90
//		Name   -> Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPreviewGeometry::SetAllLineSetsMaterial(class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial");

	UPreviewGeometry_SetAllLineSetsMaterial_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104B1D0
//		Name   -> Function ModelingComponents.PreviewGeometry.RemoveLineSet
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FString                                     LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPreviewGeometry::RemoveLineSet(const struct FString& LineSetIdentifier, bool bDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.RemoveLineSet");

	UPreviewGeometry_RemoveLineSet_Params params {};
	params.LineSetIdentifier = LineSetIdentifier;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104B0F0
//		Name   -> Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPreviewGeometry::RemoveAllLineSets(bool bDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.RemoveAllLineSets");

	UPreviewGeometry_RemoveAllLineSets_Params params {};
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104B5C0
//		Name   -> Function ModelingComponents.PreviewGeometry.GetActor
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		class APreviewGeometryActor*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APreviewGeometryActor* UPreviewGeometry::GetActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.GetActor");

	UPreviewGeometry_GetActor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104B3A0
//		Name   -> Function ModelingComponents.PreviewGeometry.FindLineSet
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FString                                     LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULineSetComponent*                           ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULineSetComponent* UPreviewGeometry::FindLineSet(const struct FString& LineSetIdentifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.FindLineSet");

	UPreviewGeometry_FindLineSet_Params params {};
	params.LineSetIdentifier = LineSetIdentifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104B5E0
//		Name   -> Function ModelingComponents.PreviewGeometry.Disconnect
//		Flags  -> (Final, Native, Public)
void UPreviewGeometry::Disconnect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.Disconnect");

	UPreviewGeometry_Disconnect_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104B620
//		Name   -> Function ModelingComponents.PreviewGeometry.CreateInWorld
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
//		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  WithTransform                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UPreviewGeometry::CreateInWorld(class UWorld* World, const struct FTransform& WithTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.CreateInWorld");

	UPreviewGeometry_CreateInWorld_Params params {};
	params.World = World;
	params.WithTransform = WithTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0104B4C0
//		Name   -> Function ModelingComponents.PreviewGeometry.AddLineSet
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FString                                     LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULineSetComponent*                           ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULineSetComponent* UPreviewGeometry::AddLineSet(const struct FString& LineSetIdentifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.AddLineSet");

	UPreviewGeometry_AddLineSet_Params params {};
	params.LineSetIdentifier = LineSetIdentifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0104C5F0
//		Name   -> Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
//		Flags  -> (Final, Native, Public)
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UWeightMapSetProperties::GetWeightMapsFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc");

	UWeightMapSetProperties_GetWeightMapsFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
