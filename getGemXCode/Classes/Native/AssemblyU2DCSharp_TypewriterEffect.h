#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TypewriterEffect
struct TypewriterEffect_t229;
// UIScrollView
struct UIScrollView_t230;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t231;
// UILabel
struct UILabel_t177;
// System.String
struct String_t;
// BetterList`1<TypewriterEffect/FadeEntry>
struct BetterList_1_t232;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// TypewriterEffect
struct  TypewriterEffect_t229  : public MonoBehaviour_t6
{
	// System.Int32 TypewriterEffect::charsPerSecond
	int32_t ___charsPerSecond_3;
	// System.Single TypewriterEffect::fadeInTime
	float ___fadeInTime_4;
	// System.Single TypewriterEffect::delayOnPeriod
	float ___delayOnPeriod_5;
	// System.Single TypewriterEffect::delayOnNewLine
	float ___delayOnNewLine_6;
	// UIScrollView TypewriterEffect::scrollView
	UIScrollView_t230 * ___scrollView_7;
	// System.Boolean TypewriterEffect::keepFullDimensions
	bool ___keepFullDimensions_8;
	// System.Collections.Generic.List`1<EventDelegate> TypewriterEffect::onFinished
	List_1_t231 * ___onFinished_9;
	// UILabel TypewriterEffect::mLabel
	UILabel_t177 * ___mLabel_10;
	// System.String TypewriterEffect::mFullText
	String_t* ___mFullText_11;
	// System.Int32 TypewriterEffect::mCurrentOffset
	int32_t ___mCurrentOffset_12;
	// System.Single TypewriterEffect::mNextChar
	float ___mNextChar_13;
	// System.Boolean TypewriterEffect::mReset
	bool ___mReset_14;
	// System.Boolean TypewriterEffect::mActive
	bool ___mActive_15;
	// BetterList`1<TypewriterEffect/FadeEntry> TypewriterEffect::mFade
	BetterList_1_t232 * ___mFade_16;
};
struct TypewriterEffect_t229_StaticFields{
	// TypewriterEffect TypewriterEffect::current
	TypewriterEffect_t229 * ___current_2;
};
