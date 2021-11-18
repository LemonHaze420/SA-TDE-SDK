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
//		Name   -> Function UI_MenuBackground_3Menu.UI_MenuBackground_3Menu_C.GetBGCharImage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UImage*                                      BGChar                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MenuBackground_3Menu_C::GetBGCharImage(class UImage** BGChar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuBackground_3Menu.UI_MenuBackground_3Menu_C.GetBGCharImage");

	UUI_MenuBackground_3Menu_C_GetBGCharImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BGChar != nullptr)
		*BGChar = params.BGChar;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
