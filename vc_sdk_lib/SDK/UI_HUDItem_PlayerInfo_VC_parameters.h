﻿#pragma once

// Name: ViceCity, Version: 1.0.0


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

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.GetHealthText
struct UUI_HUDItem_PlayerInfo_VC_C_GetHealthText_Params
{
	class UTextBlock*                                  HealthText;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.GetArmorText
struct UUI_HUDItem_PlayerInfo_VC_C_GetArmorText_Params
{
	class UTextBlock*                                  ArmorText;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.GetWeaponImage
struct UUI_HUDItem_PlayerInfo_VC_C_GetWeaponImage_Params
{
	class UImage*                                      WeaponImage;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.GetTimeText
struct UUI_HUDItem_PlayerInfo_VC_C_GetTimeText_Params
{
	class UTextBlock*                                  TimeText;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.GetMoneyText
struct UUI_HUDItem_PlayerInfo_VC_C_GetMoneyText_Params
{
	class UTextBlock*                                  MoneyText;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.GetWantedStarsBox
struct UUI_HUDItem_PlayerInfo_VC_C_GetWantedStarsBox_Params
{
	class UHorizontalBox*                              WantedStarsBox;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.GetAmmoText
struct UUI_HUDItem_PlayerInfo_VC_C_GetAmmoText_Params
{
	class UTextBlock*                                  AmmoText;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.SetupStars
struct UUI_HUDItem_PlayerInfo_VC_C_SetupStars_Params
{
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.Construct
struct UUI_HUDItem_PlayerInfo_VC_C_Construct_Params
{
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.Tick
struct UUI_HUDItem_PlayerInfo_VC_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.SetContentTextFour
struct UUI_HUDItem_PlayerInfo_VC_C_SetContentTextFour_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.SetFifthImageColor
struct UUI_HUDItem_PlayerInfo_VC_C_SetFifthImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.SetSixthImageColor
struct UUI_HUDItem_PlayerInfo_VC_C_SetSixthImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.SetImageMaterial
struct UUI_HUDItem_PlayerInfo_VC_C_SetImageMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_VC.UI_HUDItem_PlayerInfo_VC_C.ExecuteUbergraph_UI_HUDItem_PlayerInfo_VC
struct UUI_HUDItem_PlayerInfo_VC_C_ExecuteUbergraph_UI_HUDItem_PlayerInfo_VC_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
