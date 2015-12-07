#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UISprite
struct UISprite_t172;
// System.Collections.Generic.List`1<System.String>
struct List_1_t90;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UISpriteAnimation
struct  UISpriteAnimation_t481  : public MonoBehaviour_t6
{
	// System.Int32 UISpriteAnimation::mFPS
	int32_t ___mFPS_2;
	// System.String UISpriteAnimation::mPrefix
	String_t* ___mPrefix_3;
	// System.Boolean UISpriteAnimation::mLoop
	bool ___mLoop_4;
	// System.Boolean UISpriteAnimation::mSnap
	bool ___mSnap_5;
	// UISprite UISpriteAnimation::mSprite
	UISprite_t172 * ___mSprite_6;
	// System.Single UISpriteAnimation::mDelta
	float ___mDelta_7;
	// System.Int32 UISpriteAnimation::mIndex
	int32_t ___mIndex_8;
	// System.Boolean UISpriteAnimation::mActive
	bool ___mActive_9;
	// System.Collections.Generic.List`1<System.String> UISpriteAnimation::mSpriteNames
	List_1_t90 * ___mSpriteNames_10;
};
