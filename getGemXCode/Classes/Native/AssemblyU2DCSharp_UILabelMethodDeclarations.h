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

// UILabel
struct UILabel_t177;
// UnityEngine.Material
struct Material_t89;
// UIFont
struct UIFont_t295;
// UnityEngine.Font
struct Font_t296;
// UnityEngine.Object
struct Object_t85;
struct Object_t85_marshaled;
// System.String
struct String_t;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;
// UnityEngine.Transform
struct Transform_t9;
// UIGeometry
struct UIGeometry_t390;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t372;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t374;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t375;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_NGUIText_SymbolStyle.h"
#include "AssemblyU2DCSharp_UILabel_Overflow.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "AssemblyU2DCSharp_UILabel_Effect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UILabel::.ctor()
extern "C" void UILabel__ctor_m2536 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::.cctor()
extern "C" void UILabel__cctor_m2537 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_shouldBeProcessed()
extern "C" bool UILabel_get_shouldBeProcessed_m2538 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_shouldBeProcessed(System.Boolean)
extern "C" void UILabel_set_shouldBeProcessed_m2539 (UILabel_t177 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_isAnchoredHorizontally()
extern "C" bool UILabel_get_isAnchoredHorizontally_m2540 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_isAnchoredVertically()
extern "C" bool UILabel_get_isAnchoredVertically_m2541 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UILabel::get_material()
extern "C" Material_t89 * UILabel_get_material_m2542 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_material(UnityEngine.Material)
extern "C" void UILabel_set_material_m2543 (UILabel_t177 * __this, Material_t89 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UILabel::get_font()
extern "C" UIFont_t295 * UILabel_get_font_m2544 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_font(UIFont)
extern "C" void UILabel_set_font_m2545 (UILabel_t177 * __this, UIFont_t295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UILabel::get_bitmapFont()
extern "C" UIFont_t295 * UILabel_get_bitmapFont_m2546 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_bitmapFont(UIFont)
extern "C" void UILabel_set_bitmapFont_m2547 (UILabel_t177 * __this, UIFont_t295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UILabel::get_trueTypeFont()
extern "C" Font_t296 * UILabel_get_trueTypeFont_m2548 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_trueTypeFont(UnityEngine.Font)
extern "C" void UILabel_set_trueTypeFont_m2549 (UILabel_t177 * __this, Font_t296 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UILabel::get_ambigiousFont()
extern "C" Object_t85 * UILabel_get_ambigiousFont_m2550 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_ambigiousFont(UnityEngine.Object)
extern "C" void UILabel_set_ambigiousFont_m2551 (UILabel_t177 * __this, Object_t85 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::get_text()
extern "C" String_t* UILabel_get_text_m2552 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_text(System.String)
extern "C" void UILabel_set_text_m2553 (UILabel_t177 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_defaultFontSize()
extern "C" int32_t UILabel_get_defaultFontSize_m2554 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_fontSize()
extern "C" int32_t UILabel_get_fontSize_m2555 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_fontSize(System.Int32)
extern "C" void UILabel_set_fontSize_m2556 (UILabel_t177 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UILabel::get_fontStyle()
extern "C" int32_t UILabel_get_fontStyle_m2557 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_fontStyle(UnityEngine.FontStyle)
extern "C" void UILabel_set_fontStyle_m2558 (UILabel_t177 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NGUIText/Alignment UILabel::get_alignment()
extern "C" int32_t UILabel_get_alignment_m2559 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_alignment(NGUIText/Alignment)
extern "C" void UILabel_set_alignment_m2560 (UILabel_t177 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_applyGradient()
extern "C" bool UILabel_get_applyGradient_m2561 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_applyGradient(System.Boolean)
extern "C" void UILabel_set_applyGradient_m2562 (UILabel_t177 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UILabel::get_gradientTop()
extern "C" Color_t33  UILabel_get_gradientTop_m2563 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_gradientTop(UnityEngine.Color)
extern "C" void UILabel_set_gradientTop_m2564 (UILabel_t177 * __this, Color_t33  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UILabel::get_gradientBottom()
extern "C" Color_t33  UILabel_get_gradientBottom_m2565 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_gradientBottom(UnityEngine.Color)
extern "C" void UILabel_set_gradientBottom_m2566 (UILabel_t177 * __this, Color_t33  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_spacingX()
extern "C" int32_t UILabel_get_spacingX_m2567 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_spacingX(System.Int32)
extern "C" void UILabel_set_spacingX_m2568 (UILabel_t177 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_spacingY()
extern "C" int32_t UILabel_get_spacingY_m2569 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_spacingY(System.Int32)
extern "C" void UILabel_set_spacingY_m2570 (UILabel_t177 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_useFloatSpacing()
extern "C" bool UILabel_get_useFloatSpacing_m2571 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_useFloatSpacing(System.Boolean)
extern "C" void UILabel_set_useFloatSpacing_m2572 (UILabel_t177 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UILabel::get_floatSpacingX()
extern "C" float UILabel_get_floatSpacingX_m2573 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_floatSpacingX(System.Single)
extern "C" void UILabel_set_floatSpacingX_m2574 (UILabel_t177 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UILabel::get_floatSpacingY()
extern "C" float UILabel_get_floatSpacingY_m2575 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_floatSpacingY(System.Single)
extern "C" void UILabel_set_floatSpacingY_m2576 (UILabel_t177 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UILabel::get_effectiveSpacingY()
extern "C" float UILabel_get_effectiveSpacingY_m2577 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UILabel::get_effectiveSpacingX()
extern "C" float UILabel_get_effectiveSpacingX_m2578 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_keepCrisp()
extern "C" bool UILabel_get_keepCrisp_m2579 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_supportEncoding()
extern "C" bool UILabel_get_supportEncoding_m2580 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_supportEncoding(System.Boolean)
extern "C" void UILabel_set_supportEncoding_m2581 (UILabel_t177 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NGUIText/SymbolStyle UILabel::get_symbolStyle()
extern "C" int32_t UILabel_get_symbolStyle_m2582 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_symbolStyle(NGUIText/SymbolStyle)
extern "C" void UILabel_set_symbolStyle_m2583 (UILabel_t177 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UILabel/Overflow UILabel::get_overflowMethod()
extern "C" int32_t UILabel_get_overflowMethod_m2584 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_overflowMethod(UILabel/Overflow)
extern "C" void UILabel_set_overflowMethod_m2585 (UILabel_t177 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_lineWidth()
extern "C" int32_t UILabel_get_lineWidth_m2586 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_lineWidth(System.Int32)
extern "C" void UILabel_set_lineWidth_m2587 (UILabel_t177 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_lineHeight()
extern "C" int32_t UILabel_get_lineHeight_m2588 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_lineHeight(System.Int32)
extern "C" void UILabel_set_lineHeight_m2589 (UILabel_t177 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_multiLine()
extern "C" bool UILabel_get_multiLine_m2590 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_multiLine(System.Boolean)
extern "C" void UILabel_set_multiLine_m2591 (UILabel_t177 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UILabel::get_localCorners()
extern "C" Vector3U5BU5D_t36* UILabel_get_localCorners_m2592 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UILabel::get_worldCorners()
extern "C" Vector3U5BU5D_t36* UILabel_get_worldCorners_m2593 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UILabel::get_drawingDimensions()
extern "C" Vector4_t391  UILabel_get_drawingDimensions_m2594 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::get_maxLineCount()
extern "C" int32_t UILabel_get_maxLineCount_m2595 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_maxLineCount(System.Int32)
extern "C" void UILabel_set_maxLineCount_m2596 (UILabel_t177 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UILabel/Effect UILabel::get_effectStyle()
extern "C" int32_t UILabel_get_effectStyle_m2597 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_effectStyle(UILabel/Effect)
extern "C" void UILabel_set_effectStyle_m2598 (UILabel_t177 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UILabel::get_effectColor()
extern "C" Color_t33  UILabel_get_effectColor_m2599 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_effectColor(UnityEngine.Color)
extern "C" void UILabel_set_effectColor_m2600 (UILabel_t177 * __this, Color_t33  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UILabel::get_effectDistance()
extern "C" Vector2_t54  UILabel_get_effectDistance_m2601 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_effectDistance(UnityEngine.Vector2)
extern "C" void UILabel_set_effectDistance_m2602 (UILabel_t177 * __this, Vector2_t54  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_shrinkToFit()
extern "C" bool UILabel_get_shrinkToFit_m2603 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::set_shrinkToFit(System.Boolean)
extern "C" void UILabel_set_shrinkToFit_m2604 (UILabel_t177 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::get_processedText()
extern "C" String_t* UILabel_get_processedText_m2605 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UILabel::get_printedSize()
extern "C" Vector2_t54  UILabel_get_printedSize_m2606 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UILabel::get_localSize()
extern "C" Vector2_t54  UILabel_get_localSize_m2607 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::get_isValid()
extern "C" bool UILabel_get_isValid_m2608 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnInit()
extern "C" void UILabel_OnInit_m2609 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnDisable()
extern "C" void UILabel_OnDisable_m2610 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::SetActiveFont(UnityEngine.Font)
extern "C" void UILabel_SetActiveFont_m2611 (UILabel_t177 * __this, Font_t296 * ___fnt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnFontChanged(UnityEngine.Font)
extern "C" void UILabel_OnFontChanged_m2612 (Object_t * __this /* static, unused */, Font_t296 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UILabel::GetSides(UnityEngine.Transform)
extern "C" Vector3U5BU5D_t36* UILabel_GetSides_m2613 (UILabel_t177 * __this, Transform_t9 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::UpgradeFrom265()
extern "C" void UILabel_UpgradeFrom265_m2614 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnAnchor()
extern "C" void UILabel_OnAnchor_m2615 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::ProcessAndRequest()
extern "C" void UILabel_ProcessAndRequest_m2616 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnEnable()
extern "C" void UILabel_OnEnable_m2617 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnStart()
extern "C" void UILabel_OnStart_m2618 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::MarkAsChanged()
extern "C" void UILabel_MarkAsChanged_m2619 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::ProcessText()
extern "C" void UILabel_ProcessText_m2620 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::ProcessText(System.Boolean,System.Boolean)
extern "C" void UILabel_ProcessText_m2621 (UILabel_t177 * __this, bool ___legacyMode, bool ___full, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::MakePixelPerfect()
extern "C" void UILabel_MakePixelPerfect_m2622 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::AssumeNaturalSize()
extern "C" void UILabel_AssumeNaturalSize_m2623 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::GetCharacterIndex(UnityEngine.Vector3)
extern "C" int32_t UILabel_GetCharacterIndex_m2624 (UILabel_t177 * __this, Vector3_t34  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::GetCharacterIndex(UnityEngine.Vector2)
extern "C" int32_t UILabel_GetCharacterIndex_m2625 (UILabel_t177 * __this, Vector2_t54  ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::GetCharacterIndexAtPosition(UnityEngine.Vector3,System.Boolean)
extern "C" int32_t UILabel_GetCharacterIndexAtPosition_m2626 (UILabel_t177 * __this, Vector3_t34  ___worldPos, bool ___precise, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::GetCharacterIndexAtPosition(UnityEngine.Vector2,System.Boolean)
extern "C" int32_t UILabel_GetCharacterIndexAtPosition_m2627 (UILabel_t177 * __this, Vector2_t54  ___localPos, bool ___precise, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::GetWordAtPosition(UnityEngine.Vector3)
extern "C" String_t* UILabel_GetWordAtPosition_m2628 (UILabel_t177 * __this, Vector3_t34  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::GetWordAtPosition(UnityEngine.Vector2)
extern "C" String_t* UILabel_GetWordAtPosition_m2629 (UILabel_t177 * __this, Vector2_t54  ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::GetWordAtCharacterIndex(System.Int32)
extern "C" String_t* UILabel_GetWordAtCharacterIndex_m2630 (UILabel_t177 * __this, int32_t ___characterIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::GetUrlAtPosition(UnityEngine.Vector3)
extern "C" String_t* UILabel_GetUrlAtPosition_m2631 (UILabel_t177 * __this, Vector3_t34  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::GetUrlAtPosition(UnityEngine.Vector2)
extern "C" String_t* UILabel_GetUrlAtPosition_m2632 (UILabel_t177 * __this, Vector2_t54  ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel::GetUrlAtCharacterIndex(System.Int32)
extern "C" String_t* UILabel_GetUrlAtCharacterIndex_m2633 (UILabel_t177 * __this, int32_t ___characterIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::GetCharacterIndex(System.Int32,UnityEngine.KeyCode)
extern "C" int32_t UILabel_GetCharacterIndex_m2634 (UILabel_t177 * __this, int32_t ___currentIndex, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::PrintOverlay(System.Int32,System.Int32,UIGeometry,UIGeometry,UnityEngine.Color,UnityEngine.Color)
extern "C" void UILabel_PrintOverlay_m2635 (UILabel_t177 * __this, int32_t ___start, int32_t ___end, UIGeometry_t390 * ___caret, UIGeometry_t390 * ___highlight, Color_t33  ___caretColor, Color_t33  ___highlightColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UILabel_OnFill_m2636 (UILabel_t177 * __this, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UILabel::ApplyOffset(BetterList`1<UnityEngine.Vector3>,System.Int32)
extern "C" Vector2_t54  UILabel_ApplyOffset_m2637 (UILabel_t177 * __this, BetterList_1_t372 * ___verts, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::ApplyShadow(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,System.Int32,System.Int32,System.Single,System.Single)
extern "C" void UILabel_ApplyShadow_m2638 (UILabel_t177 * __this, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, int32_t ___start, int32_t ___end, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UILabel::CalculateOffsetToFit(System.String)
extern "C" int32_t UILabel_CalculateOffsetToFit_m2639 (UILabel_t177 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::SetCurrentProgress()
extern "C" void UILabel_SetCurrentProgress_m2640 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::SetCurrentPercent()
extern "C" void UILabel_SetCurrentPercent_m2641 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::SetCurrentSelection()
extern "C" void UILabel_SetCurrentSelection_m2642 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::Wrap(System.String,System.String&)
extern "C" bool UILabel_Wrap_m2643 (UILabel_t177 * __this, String_t* ___text, String_t** ___final, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UILabel::Wrap(System.String,System.String&,System.Int32)
extern "C" bool UILabel_Wrap_m2644 (UILabel_t177 * __this, String_t* ___text, String_t** ___final, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UILabel::UpdateNGUIText()
extern "C" void UILabel_UpdateNGUIText_m2645 (UILabel_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
