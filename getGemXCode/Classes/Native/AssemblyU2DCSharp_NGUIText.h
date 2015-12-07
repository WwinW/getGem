#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIFont
struct UIFont_t295;
// UnityEngine.Font
struct Font_t296;
// NGUIText/GlyphInfo
struct GlyphInfo_t351;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t353;
// BetterList`1<System.Single>
struct BetterList_1_t355;
// System.Single[]
struct SingleU5BU5D_t50;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t53;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_NGUIText_SymbolStyle.h"
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#include "UnityEngine_UnityEngine_Color32.h"

// NGUIText
struct  NGUIText_t352  : public Object_t
{
};
struct NGUIText_t352_StaticFields{
	// UIFont NGUIText::bitmapFont
	UIFont_t295 * ___bitmapFont_0;
	// UnityEngine.Font NGUIText::dynamicFont
	Font_t296 * ___dynamicFont_1;
	// NGUIText/GlyphInfo NGUIText::glyph
	GlyphInfo_t351 * ___glyph_2;
	// System.Int32 NGUIText::fontSize
	int32_t ___fontSize_3;
	// System.Single NGUIText::fontScale
	float ___fontScale_4;
	// System.Single NGUIText::pixelDensity
	float ___pixelDensity_5;
	// UnityEngine.FontStyle NGUIText::fontStyle
	int32_t ___fontStyle_6;
	// NGUIText/Alignment NGUIText::alignment
	int32_t ___alignment_7;
	// UnityEngine.Color NGUIText::tint
	Color_t33  ___tint_8;
	// System.Int32 NGUIText::rectWidth
	int32_t ___rectWidth_9;
	// System.Int32 NGUIText::rectHeight
	int32_t ___rectHeight_10;
	// System.Int32 NGUIText::regionWidth
	int32_t ___regionWidth_11;
	// System.Int32 NGUIText::regionHeight
	int32_t ___regionHeight_12;
	// System.Int32 NGUIText::maxLines
	int32_t ___maxLines_13;
	// System.Boolean NGUIText::gradient
	bool ___gradient_14;
	// UnityEngine.Color NGUIText::gradientBottom
	Color_t33  ___gradientBottom_15;
	// UnityEngine.Color NGUIText::gradientTop
	Color_t33  ___gradientTop_16;
	// System.Boolean NGUIText::encoding
	bool ___encoding_17;
	// System.Single NGUIText::spacingX
	float ___spacingX_18;
	// System.Single NGUIText::spacingY
	float ___spacingY_19;
	// System.Boolean NGUIText::premultiply
	bool ___premultiply_20;
	// NGUIText/SymbolStyle NGUIText::symbolStyle
	int32_t ___symbolStyle_21;
	// System.Int32 NGUIText::finalSize
	int32_t ___finalSize_22;
	// System.Single NGUIText::finalSpacingX
	float ___finalSpacingX_23;
	// System.Single NGUIText::finalLineHeight
	float ___finalLineHeight_24;
	// System.Single NGUIText::baseline
	float ___baseline_25;
	// System.Boolean NGUIText::useSymbols
	bool ___useSymbols_26;
	// UnityEngine.Color NGUIText::mInvisible
	Color_t33  ___mInvisible_27;
	// BetterList`1<UnityEngine.Color> NGUIText::mColors
	BetterList_1_t353 * ___mColors_28;
	// System.Single NGUIText::mAlpha
	float ___mAlpha_29;
	// UnityEngine.CharacterInfo NGUIText::mTempChar
	CharacterInfo_t354  ___mTempChar_30;
	// BetterList`1<System.Single> NGUIText::mSizes
	BetterList_1_t355 * ___mSizes_31;
	// UnityEngine.Color32 NGUIText::s_c0
	Color32_t356  ___s_c0_32;
	// UnityEngine.Color32 NGUIText::s_c1
	Color32_t356  ___s_c1_33;
	// System.Single[] NGUIText::mBoldOffset
	SingleU5BU5D_t50* ___mBoldOffset_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NGUIText::<>f__switch$map1
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map1_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NGUIText::<>f__switch$map2
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map2_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NGUIText::<>f__switch$map3
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map3_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NGUIText::<>f__switch$map4
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map4_38;
};
