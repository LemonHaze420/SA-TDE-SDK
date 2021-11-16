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
//		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateCCTV
//		Flags  -> ()
// Parameters:
//		int                                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_LightingSubLevel_C::UpdateCCTV(int Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateCCTV");

	UBI_LightingSubLevel_C_UpdateCCTV_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateAdrenaline
//		Flags  -> ()
// Parameters:
//		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_LightingSubLevel_C::UpdateAdrenaline(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateAdrenaline");

	UBI_LightingSubLevel_C_UpdateAdrenaline_Params params {};
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateLocationEffects
//		Flags  -> ()
// Parameters:
//		float                                              Underwater                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Tunnel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_LightingSubLevel_C::UpdateLocationEffects(float Underwater, float Tunnel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateLocationEffects");

	UBI_LightingSubLevel_C_UpdateLocationEffects_Params params {};
	params.Underwater = Underwater;
	params.Tunnel = Tunnel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.SetupScalability
//		Flags  -> ()
// Parameters:
//		class AGTAScalability*                             Scalability                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_LightingSubLevel_C::SetupScalability(class AGTAScalability* Scalability)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.SetupScalability");

	UBI_LightingSubLevel_C_SetupScalability_Params params {};
	params.Scalability = Scalability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateWeatherImpact
//		Flags  -> ()
// Parameters:
//		float                                              RoadWetness                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WaveAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_LightingSubLevel_C::UpdateWeatherImpact(float RoadWetness, float WaveAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateWeatherImpact");

	UBI_LightingSubLevel_C_UpdateWeatherImpact_Params params {};
	params.RoadWetness = RoadWetness;
	params.WaveAmount = WaveAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateSkyColors
//		Flags  -> ()
// Parameters:
//		struct FColor                                      skyTop                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FColor                                      skyBottom                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_LightingSubLevel_C::UpdateSkyColors(const struct FColor& skyTop, const struct FColor& skyBottom)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateSkyColors");

	UBI_LightingSubLevel_C_UpdateSkyColors_Params params {};
	params.skyTop = skyTop;
	params.skyBottom = skyBottom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateLightColors
//		Flags  -> ()
// Parameters:
//		struct FColor                                      directional                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FColor                                      ambient                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_LightingSubLevel_C::UpdateLightColors(const struct FColor& directional, const struct FColor& ambient)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateLightColors");

	UBI_LightingSubLevel_C_UpdateLightColors_Params params {};
	params.directional = directional;
	params.ambient = ambient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.Update Environment Effects
//		Flags  -> ()
// Parameters:
//		float                                              Foggyness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Heat_Haze                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Lightning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              RIOT                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_LightingSubLevel_C::Update_Environment_Effects(float Foggyness, float Heat_Haze, float Lightning, float RIOT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.Update Environment Effects");

	UBI_LightingSubLevel_C_Update_Environment_Effects_Params params {};
	params.Foggyness = Foggyness;
	params.Heat_Haze = Heat_Haze;
	params.Lightning = Lightning;
	params.RIOT = RIOT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateWeatherEffects
//		Flags  -> ()
// Parameters:
//		float                                              Cloud                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Rain                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Sandstorm                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     WindDir                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WindPower                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ExtraSunny                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_LightingSubLevel_C::UpdateWeatherEffects(float Cloud, float Rain, float Sandstorm, const struct FVector& WindDir, float WindPower, float ExtraSunny)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateWeatherEffects");

	UBI_LightingSubLevel_C_UpdateWeatherEffects_Params params {};
	params.Cloud = Cloud;
	params.Rain = Rain;
	params.Sandstorm = Sandstorm;
	params.WindDir = WindDir;
	params.WindPower = WindPower;
	params.ExtraSunny = ExtraSunny;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateTimeOfDay
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_LightingSubLevel_C::UpdateTimeOfDay(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateTimeOfDay");

	UBI_LightingSubLevel_C_UpdateTimeOfDay_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
