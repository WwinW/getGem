#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animation
struct Animation_t213;
// UnityEngine.AnimationClip
struct AnimationClip_t214;
// System.Collections.Generic.List`1<UnityEngine.AnimationClip>
struct List_1_t215;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PlayIdleAnimations
struct  PlayIdleAnimations_t212  : public MonoBehaviour_t6
{
	// UnityEngine.Animation PlayIdleAnimations::mAnim
	Animation_t213 * ___mAnim_2;
	// UnityEngine.AnimationClip PlayIdleAnimations::mIdle
	AnimationClip_t214 * ___mIdle_3;
	// System.Collections.Generic.List`1<UnityEngine.AnimationClip> PlayIdleAnimations::mBreaks
	List_1_t215 * ___mBreaks_4;
	// System.Single PlayIdleAnimations::mNextBreak
	float ___mNextBreak_5;
	// System.Int32 PlayIdleAnimations::mLastIndex
	int32_t ___mLastIndex_6;
};
