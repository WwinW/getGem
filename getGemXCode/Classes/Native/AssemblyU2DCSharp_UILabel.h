#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t296;
// UIFont
struct UIFont_t295;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t89;
// BetterList`1<UILabel>
struct BetterList_1_t467;
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Int32>
struct Dictionary_2_t468;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t372;
// BetterList`1<System.Int32>
struct BetterList_1_t469;

#include "AssemblyU2DCSharp_UIWidget.h"
#include "AssemblyU2DCSharp_UILabel_Crispness.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment.h"
#include "AssemblyU2DCSharp_UILabel_Effect.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_NGUIText_SymbolStyle.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "AssemblyU2DCSharp_UILabel_Overflow.h"

// UILabel
struct  UILabel_t177  : public UIWidget_t176
{
	// UILabel/Crispness UILabel::keepCrispWhenShrunk
	int32_t ___keepCrispWhenShrunk_52;
	// UnityEngine.Font UILabel::mTrueTypeFont
	Font_t296 * ___mTrueTypeFont_53;
	// UIFont UILabel::mFont
	UIFont_t295 * ___mFont_54;
	// System.String UILabel::mText
	String_t* ___mText_55;
	// System.Int32 UILabel::mFontSize
	int32_t ___mFontSize_56;
	// UnityEngine.FontStyle UILabel::mFontStyle
	int32_t ___mFontStyle_57;
	// NGUIText/Alignment UILabel::mAlignment
	int32_t ___mAlignment_58;
	// System.Boolean UILabel::mEncoding
	bool ___mEncoding_59;
	// System.Int32 UILabel::mMaxLineCount
	int32_t ___mMaxLineCount_60;
	// UILabel/Effect UILabel::mEffectStyle
	int32_t ___mEffectStyle_61;
	// UnityEngine.Color UILabel::mEffectColor
	Color_t33  ___mEffectColor_62;
	// NGUIText/SymbolStyle UILabel::mSymbols
	int32_t ___mSymbols_63;
	// UnityEngine.Vector2 UILabel::mEffectDistance
	Vector2_t54  ___mEffectDistance_64;
	// UILabel/Overflow UILabel::mOverflow
	int32_t ___mOverflow_65;
	// UnityEngine.Material UILabel::mMaterial
	Material_t89 * ___mMaterial_66;
	// System.Boolean UILabel::mApplyGradient
	bool ___mApplyGradient_67;
	// UnityEngine.Color UILabel::mGradientTop
	Color_t33  ___mGradientTop_68;
	// UnityEngine.Color UILabel::mGradientBottom
	Color_t33  ___mGradientBottom_69;
	// System.Int32 UILabel::mSpacingX
	int32_t ___mSpacingX_70;
	// System.Int32 UILabel::mSpacingY
	int32_t ___mSpacingY_71;
	// System.Boolean UILabel::mUseFloatSpacing
	bool ___mUseFloatSpacing_72;
	// System.Single UILabel::mFloatSpacingX
	float ___mFloatSpacingX_73;
	// System.Single UILabel::mFloatSpacingY
	float ___mFloatSpacingY_74;
	// System.Boolean UILabel::mShrinkToFit
	bool ___mShrinkToFit_75;
	// System.Int32 UILabel::mMaxLineWidth
	int32_t ___mMaxLineWidth_76;
	// System.Int32 UILabel::mMaxLineHeight
	int32_t ___mMaxLineHeight_77;
	// System.Single UILabel::mLineWidth
	float ___mLineWidth_78;
	// System.Boolean UILabel::mMultiline
	bool ___mMultiline_79;
	// UnityEngine.Font UILabel::mActiveTTF
	Font_t296 * ___mActiveTTF_80;
	// System.Single UILabel::mDensity
	float ___mDensity_81;
	// System.Boolean UILabel::mShouldBeProcessed
	bool ___mShouldBeProcessed_82;
	// System.String UILabel::mProcessedText
	String_t* ___mProcessedText_83;
	// System.Boolean UILabel::mPremultiply
	bool ___mPremultiply_84;
	// UnityEngine.Vector2 UILabel::mCalculatedSize
	Vector2_t54  ___mCalculatedSize_85;
	// System.Single UILabel::mScale
	float ___mScale_86;
	// System.Int32 UILabel::mPrintedSize
	int32_t ___mPrintedSize_87;
	// System.Int32 UILabel::mLastWidth
	int32_t ___mLastWidth_88;
	// System.Int32 UILabel::mLastHeight
	int32_t ___mLastHeight_89;
};
struct UILabel_t177_StaticFields{
	// BetterList`1<UILabel> UILabel::mList
	BetterList_1_t467 * ___mList_90;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Int32> UILabel::mFontUsage
	Dictionary_2_t468 * ___mFontUsage_91;
	// System.Boolean UILabel::mTexRebuildAdded
	bool ___mTexRebuildAdded_92;
	// BetterList`1<UnityEngine.Vector3> UILabel::mTempVerts
	BetterList_1_t372 * ___mTempVerts_93;
	// BetterList`1<System.Int32> UILabel::mTempIndices
	BetterList_1_t469 * ___mTempIndices_94;
};
