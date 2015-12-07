#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t89;
// BMFont
struct BMFont_t329;
// UIAtlas
struct UIAtlas_t173;
// UIFont
struct UIFont_t295;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t456;
// UnityEngine.Font
struct Font_t296;
// UISpriteData
struct UISpriteData_t335;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_FontStyle.h"

// UIFont
struct  UIFont_t295  : public MonoBehaviour_t6
{
	// UnityEngine.Material UIFont::mMat
	Material_t89 * ___mMat_2;
	// UnityEngine.Rect UIFont::mUVRect
	Rect_t55  ___mUVRect_3;
	// BMFont UIFont::mFont
	BMFont_t329 * ___mFont_4;
	// UIAtlas UIFont::mAtlas
	UIAtlas_t173 * ___mAtlas_5;
	// UIFont UIFont::mReplacement
	UIFont_t295 * ___mReplacement_6;
	// System.Collections.Generic.List`1<BMSymbol> UIFont::mSymbols
	List_1_t456 * ___mSymbols_7;
	// UnityEngine.Font UIFont::mDynamicFont
	Font_t296 * ___mDynamicFont_8;
	// System.Int32 UIFont::mDynamicFontSize
	int32_t ___mDynamicFontSize_9;
	// UnityEngine.FontStyle UIFont::mDynamicFontStyle
	int32_t ___mDynamicFontStyle_10;
	// UISpriteData UIFont::mSprite
	UISpriteData_t335 * ___mSprite_11;
	// System.Int32 UIFont::mPMA
	int32_t ___mPMA_12;
	// System.Int32 UIFont::mPacked
	int32_t ___mPacked_13;
};
