#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector2[]
struct Vector2U5BU5D_t48;

#include "AssemblyU2DCSharp_UIWidget.h"
#include "AssemblyU2DCSharp_UIBasicSprite_Type.h"
#include "AssemblyU2DCSharp_UIBasicSprite_FillDirection.h"
#include "AssemblyU2DCSharp_UIBasicSprite_Flip.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "AssemblyU2DCSharp_UIBasicSprite_AdvancedType.h"

// UIBasicSprite
struct  UIBasicSprite_t222  : public UIWidget_t176
{
	// UIBasicSprite/Type UIBasicSprite::mType
	int32_t ___mType_52;
	// UIBasicSprite/FillDirection UIBasicSprite::mFillDirection
	int32_t ___mFillDirection_53;
	// System.Single UIBasicSprite::mFillAmount
	float ___mFillAmount_54;
	// System.Boolean UIBasicSprite::mInvert
	bool ___mInvert_55;
	// UIBasicSprite/Flip UIBasicSprite::mFlip
	int32_t ___mFlip_56;
	// UnityEngine.Rect UIBasicSprite::mInnerUV
	Rect_t55  ___mInnerUV_57;
	// UnityEngine.Rect UIBasicSprite::mOuterUV
	Rect_t55  ___mOuterUV_58;
	// UIBasicSprite/AdvancedType UIBasicSprite::centerType
	int32_t ___centerType_59;
	// UIBasicSprite/AdvancedType UIBasicSprite::leftType
	int32_t ___leftType_60;
	// UIBasicSprite/AdvancedType UIBasicSprite::rightType
	int32_t ___rightType_61;
	// UIBasicSprite/AdvancedType UIBasicSprite::bottomType
	int32_t ___bottomType_62;
	// UIBasicSprite/AdvancedType UIBasicSprite::topType
	int32_t ___topType_63;
};
struct UIBasicSprite_t222_StaticFields{
	// UnityEngine.Vector2[] UIBasicSprite::mTempPos
	Vector2U5BU5D_t48* ___mTempPos_64;
	// UnityEngine.Vector2[] UIBasicSprite::mTempUVs
	Vector2U5BU5D_t48* ___mTempUVs_65;
};
