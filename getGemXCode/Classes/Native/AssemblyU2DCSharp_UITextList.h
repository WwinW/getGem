#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UILabel
struct UILabel_t177;
// UIProgressBar
struct UIProgressBar_t221;
// System.Char[]
struct CharU5BU5D_t486;
// BetterList`1<UITextList/Paragraph>
struct BetterList_1_t487;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UITextList_Style.h"

// UITextList
struct  UITextList_t196  : public MonoBehaviour_t6
{
	// UILabel UITextList::textLabel
	UILabel_t177 * ___textLabel_2;
	// UIProgressBar UITextList::scrollBar
	UIProgressBar_t221 * ___scrollBar_3;
	// UITextList/Style UITextList::style
	int32_t ___style_4;
	// System.Int32 UITextList::paragraphHistory
	int32_t ___paragraphHistory_5;
	// System.Char[] UITextList::mSeparator
	CharU5BU5D_t486* ___mSeparator_6;
	// BetterList`1<UITextList/Paragraph> UITextList::mParagraphs
	BetterList_1_t487 * ___mParagraphs_7;
	// System.Single UITextList::mScroll
	float ___mScroll_8;
	// System.Int32 UITextList::mTotalLines
	int32_t ___mTotalLines_9;
	// System.Int32 UITextList::mLastWidth
	int32_t ___mLastWidth_10;
	// System.Int32 UITextList::mLastHeight
	int32_t ___mLastHeight_11;
};
