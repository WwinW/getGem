#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget
struct UIWidget_t176;
// UnityEngine.Material
struct Material_t89;
// UnityEngine.Light
struct Light_t102;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t409;

#include "AssemblyU2DCSharp_UITweener.h"
#include "UnityEngine_UnityEngine_Color.h"

// TweenColor
struct  TweenColor_t410  : public UITweener_t408
{
	// UnityEngine.Color TweenColor::from
	Color_t33  ___from_20;
	// UnityEngine.Color TweenColor::to
	Color_t33  ___to_21;
	// System.Boolean TweenColor::mCached
	bool ___mCached_22;
	// UIWidget TweenColor::mWidget
	UIWidget_t176 * ___mWidget_23;
	// UnityEngine.Material TweenColor::mMat
	Material_t89 * ___mMat_24;
	// UnityEngine.Light TweenColor::mLight
	Light_t102 * ___mLight_25;
	// UnityEngine.SpriteRenderer TweenColor::mSr
	SpriteRenderer_t409 * ___mSr_26;
};
