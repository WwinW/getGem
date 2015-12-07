#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t423;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t409;
// UI2DSprite
struct UI2DSprite_t236;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UI2DSpriteAnimation
struct  UI2DSpriteAnimation_t422  : public MonoBehaviour_t6
{
	// System.Int32 UI2DSpriteAnimation::framerate
	int32_t ___framerate_2;
	// System.Boolean UI2DSpriteAnimation::ignoreTimeScale
	bool ___ignoreTimeScale_3;
	// System.Boolean UI2DSpriteAnimation::loop
	bool ___loop_4;
	// UnityEngine.Sprite[] UI2DSpriteAnimation::frames
	SpriteU5BU5D_t423* ___frames_5;
	// UnityEngine.SpriteRenderer UI2DSpriteAnimation::mUnitySprite
	SpriteRenderer_t409 * ___mUnitySprite_6;
	// UI2DSprite UI2DSpriteAnimation::mNguiSprite
	UI2DSprite_t236 * ___mNguiSprite_7;
	// System.Int32 UI2DSpriteAnimation::mIndex
	int32_t ___mIndex_8;
	// System.Single UI2DSpriteAnimation::mUpdate
	float ___mUpdate_9;
};
