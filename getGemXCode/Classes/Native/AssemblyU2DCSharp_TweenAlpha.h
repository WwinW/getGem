#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIRect
struct UIRect_t267;
// UnityEngine.Material
struct Material_t89;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t409;

#include "AssemblyU2DCSharp_UITweener.h"

// TweenAlpha
struct  TweenAlpha_t407  : public UITweener_t408
{
	// System.Single TweenAlpha::from
	float ___from_20;
	// System.Single TweenAlpha::to
	float ___to_21;
	// System.Boolean TweenAlpha::mCached
	bool ___mCached_22;
	// UIRect TweenAlpha::mRect
	UIRect_t267 * ___mRect_23;
	// UnityEngine.Material TweenAlpha::mMat
	Material_t89 * ___mMat_24;
	// UnityEngine.SpriteRenderer TweenAlpha::mSr
	SpriteRenderer_t409 * ___mSr_25;
};
