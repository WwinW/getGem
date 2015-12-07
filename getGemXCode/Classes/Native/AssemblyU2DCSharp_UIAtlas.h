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
// System.Collections.Generic.List`1<UISpriteData>
struct List_1_t428;
// UIAtlas
struct UIAtlas_t173;
// System.Collections.Generic.List`1<UIAtlas/Sprite>
struct List_1_t429;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t53;
// System.Comparison`1<UISpriteData>
struct Comparison_1_t430;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UIAtlas_Coordinates.h"

// UIAtlas
struct  UIAtlas_t173  : public MonoBehaviour_t6
{
	// UnityEngine.Material UIAtlas::material
	Material_t89 * ___material_2;
	// System.Collections.Generic.List`1<UISpriteData> UIAtlas::mSprites
	List_1_t428 * ___mSprites_3;
	// System.Single UIAtlas::mPixelSize
	float ___mPixelSize_4;
	// UIAtlas UIAtlas::mReplacement
	UIAtlas_t173 * ___mReplacement_5;
	// UIAtlas/Coordinates UIAtlas::mCoordinates
	int32_t ___mCoordinates_6;
	// System.Collections.Generic.List`1<UIAtlas/Sprite> UIAtlas::sprites
	List_1_t429 * ___sprites_7;
	// System.Int32 UIAtlas::mPMA
	int32_t ___mPMA_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UIAtlas::mSpriteIndices
	Dictionary_2_t53 * ___mSpriteIndices_9;
};
struct UIAtlas_t173_StaticFields{
	// System.Comparison`1<UISpriteData> UIAtlas::<>f__am$cache8
	Comparison_1_t430 * ___U3CU3Ef__amU24cache8_10;
};
