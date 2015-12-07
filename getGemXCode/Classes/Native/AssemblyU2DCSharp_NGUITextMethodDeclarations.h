#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// BMSymbol
struct BMSymbol_t334;
// NGUIText/GlyphInfo
struct GlyphInfo_t351;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t353;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t372;
// BetterList`1<System.Int32>
struct BetterList_1_t469;
// System.Text.StringBuilder
struct StringBuilder_t519;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t374;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t375;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void NGUIText::.cctor()
extern "C" void NGUIText__cctor_m1714 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Update()
extern "C" void NGUIText_Update_m1715 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Update(System.Boolean)
extern "C" void NGUIText_Update_m1716 (Object_t * __this /* static, unused */, bool ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Prepare(System.String)
extern "C" void NGUIText_Prepare_m1717 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol NGUIText::GetSymbol(System.String,System.Int32,System.Int32)
extern "C" BMSymbol_t334 * NGUIText_GetSymbol_m1718 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___index, int32_t ___textLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIText::GetGlyphWidth(System.Int32,System.Int32)
extern "C" float NGUIText_GetGlyphWidth_m1719 (Object_t * __this /* static, unused */, int32_t ___ch, int32_t ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NGUIText/GlyphInfo NGUIText::GetGlyph(System.Int32,System.Int32)
extern "C" GlyphInfo_t351 * NGUIText_GetGlyph_m1720 (Object_t * __this /* static, unused */, int32_t ___ch, int32_t ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIText::ParseAlpha(System.String,System.Int32)
extern "C" float NGUIText_ParseAlpha_m1721 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor(System.String,System.Int32)
extern "C" Color_t33  NGUIText_ParseColor_m1722 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor24(System.String,System.Int32)
extern "C" Color_t33  NGUIText_ParseColor24_m1723 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor32(System.String,System.Int32)
extern "C" Color_t33  NGUIText_ParseColor32_m1724 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor(UnityEngine.Color)
extern "C" String_t* NGUIText_EncodeColor_m1725 (Object_t * __this /* static, unused */, Color_t33  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor(System.String,UnityEngine.Color)
extern "C" String_t* NGUIText_EncodeColor_m1726 (Object_t * __this /* static, unused */, String_t* ___text, Color_t33  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeAlpha(System.Single)
extern "C" String_t* NGUIText_EncodeAlpha_m1727 (Object_t * __this /* static, unused */, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor24(UnityEngine.Color)
extern "C" String_t* NGUIText_EncodeColor24_m1728 (Object_t * __this /* static, unused */, Color_t33  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor32(UnityEngine.Color)
extern "C" String_t* NGUIText_EncodeColor32_m1729 (Object_t * __this /* static, unused */, Color_t33  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ParseSymbol(System.String,System.Int32&)
extern "C" bool NGUIText_ParseSymbol_m1730 (Object_t * __this /* static, unused */, String_t* ___text, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::IsHex(System.Char)
extern "C" bool NGUIText_IsHex_m1731 (Object_t * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ParseSymbol(System.String,System.Int32&,BetterList`1<UnityEngine.Color>,System.Boolean,System.Int32&,System.Boolean&,System.Boolean&,System.Boolean&,System.Boolean&,System.Boolean&)
extern "C" bool NGUIText_ParseSymbol_m1732 (Object_t * __this /* static, unused */, String_t* ___text, int32_t* ___index, BetterList_1_t353 * ___colors, bool ___premultiply, int32_t* ___sub, bool* ___bold, bool* ___italic, bool* ___underline, bool* ___strike, bool* ___ignoreColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::StripSymbols(System.String)
extern "C" String_t* NGUIText_StripSymbols_m1733 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Align(BetterList`1<UnityEngine.Vector3>,System.Int32,System.Single)
extern "C" void NGUIText_Align_m1734 (Object_t * __this /* static, unused */, BetterList_1_t372 * ___verts, int32_t ___indexOffset, float ___printedWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::GetExactCharacterIndex(BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>,UnityEngine.Vector2)
extern "C" int32_t NGUIText_GetExactCharacterIndex_m1735 (Object_t * __this /* static, unused */, BetterList_1_t372 * ___verts, BetterList_1_t469 * ___indices, Vector2_t54  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::GetApproximateCharacterIndex(BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>,UnityEngine.Vector2)
extern "C" int32_t NGUIText_GetApproximateCharacterIndex_m1736 (Object_t * __this /* static, unused */, BetterList_1_t372 * ___verts, BetterList_1_t469 * ___indices, Vector2_t54  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::IsSpace(System.Int32)
extern "C" bool NGUIText_IsSpace_m1737 (Object_t * __this /* static, unused */, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::EndLine(System.Text.StringBuilder&)
extern "C" void NGUIText_EndLine_m1738 (Object_t * __this /* static, unused */, StringBuilder_t519 ** ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::ReplaceSpaceWithNewline(System.Text.StringBuilder&)
extern "C" void NGUIText_ReplaceSpaceWithNewline_m1739 (Object_t * __this /* static, unused */, StringBuilder_t519 ** ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIText::CalculatePrintedSize(System.String)
extern "C" Vector2_t54  NGUIText_CalculatePrintedSize_m1740 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::CalculateOffsetToFit(System.String)
extern "C" int32_t NGUIText_CalculateOffsetToFit_m1741 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::GetEndOfLineThatFits(System.String)
extern "C" String_t* NGUIText_GetEndOfLineThatFits_m1742 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::WrapText(System.String,System.String&)
extern "C" bool NGUIText_WrapText_m1743 (Object_t * __this /* static, unused */, String_t* ___text, String_t** ___finalText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::WrapText(System.String,System.String&,System.Boolean)
extern "C" bool NGUIText_WrapText_m1744 (Object_t * __this /* static, unused */, String_t* ___text, String_t** ___finalText, bool ___keepCharCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Print(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void NGUIText_Print_m1745 (Object_t * __this /* static, unused */, String_t* ___text, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintApproximateCharacterPositions(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>)
extern "C" void NGUIText_PrintApproximateCharacterPositions_m1746 (Object_t * __this /* static, unused */, String_t* ___text, BetterList_1_t372 * ___verts, BetterList_1_t469 * ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintExactCharacterPositions(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>)
extern "C" void NGUIText_PrintExactCharacterPositions_m1747 (Object_t * __this /* static, unused */, String_t* ___text, BetterList_1_t372 * ___verts, BetterList_1_t469 * ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintCaretAndSelection(System.String,System.Int32,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector3>)
extern "C" void NGUIText_PrintCaretAndSelection_m1748 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___start, int32_t ___end, BetterList_1_t372 * ___caret, BetterList_1_t372 * ___highlight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
