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

// UnityEngine.UI.Text
struct Text_t666;
// UnityEngine.TextGenerator
struct TextGenerator_t715;
// UnityEngine.Texture
struct Texture_t376;
// UnityEngine.Font
struct Font_t296;
// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t378;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Text::.ctor()
extern "C" void Text__ctor_m4740 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::.cctor()
extern "C" void Text__cctor_m4741 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGenerator()
extern "C" TextGenerator_t715 * Text_get_cachedTextGenerator_m4742 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGeneratorForLayout()
extern "C" TextGenerator_t715 * Text_get_cachedTextGeneratorForLayout_m4743 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Text::get_mainTexture()
extern "C" Texture_t376 * Text_get_mainTexture_m4744 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::FontTextureChanged()
extern "C" void Text_FontTextureChanged_m4745 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.UI.Text::get_font()
extern "C" Font_t296 * Text_get_font_m4746 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
extern "C" void Text_set_font_m4747 (Text_t666 * __this, Font_t296 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.Text::get_text()
extern "C" String_t* Text_get_text_m4748 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_text(System.String)
extern "C" void Text_set_text_m4749 (Text_t666 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_supportRichText()
extern "C" bool Text_get_supportRichText_m4750 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_supportRichText(System.Boolean)
extern "C" void Text_set_supportRichText_m4751 (Text_t666 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_resizeTextForBestFit()
extern "C" bool Text_get_resizeTextForBestFit_m4752 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextForBestFit(System.Boolean)
extern "C" void Text_set_resizeTextForBestFit_m4753 (Text_t666 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMinSize()
extern "C" int32_t Text_get_resizeTextMinSize_m4754 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMinSize(System.Int32)
extern "C" void Text_set_resizeTextMinSize_m4755 (Text_t666 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMaxSize()
extern "C" int32_t Text_get_resizeTextMaxSize_m4756 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMaxSize(System.Int32)
extern "C" void Text_set_resizeTextMaxSize_m4757 (Text_t666 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.Text::get_alignment()
extern "C" int32_t Text_get_alignment_m4758 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
extern "C" void Text_set_alignment_m4759 (Text_t666 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_fontSize()
extern "C" int32_t Text_get_fontSize_m4760 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
extern "C" void Text_set_fontSize_m4761 (Text_t666 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HorizontalWrapMode UnityEngine.UI.Text::get_horizontalOverflow()
extern "C" int32_t Text_get_horizontalOverflow_m4762 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
extern "C" void Text_set_horizontalOverflow_m4763 (Text_t666 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.VerticalWrapMode UnityEngine.UI.Text::get_verticalOverflow()
extern "C" int32_t Text_get_verticalOverflow_m4764 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_verticalOverflow(UnityEngine.VerticalWrapMode)
extern "C" void Text_set_verticalOverflow_m4765 (Text_t666 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_lineSpacing()
extern "C" float Text_get_lineSpacing_m4766 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_lineSpacing(System.Single)
extern "C" void Text_set_lineSpacing_m4767 (Text_t666 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.UI.Text::get_fontStyle()
extern "C" int32_t Text_get_fontStyle_m4768 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontStyle(UnityEngine.FontStyle)
extern "C" void Text_set_fontStyle_m4769 (Text_t666 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_pixelsPerUnit()
extern "C" float Text_get_pixelsPerUnit_m4770 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnEnable()
extern "C" void Text_OnEnable_m4771 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnDisable()
extern "C" void Text_OnDisable_m4772 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::UpdateGeometry()
extern "C" void Text_UpdateGeometry_m4773 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.UI.Text::GetGenerationSettings(UnityEngine.Vector2)
extern "C" TextGenerationSettings_t823  Text_GetGenerationSettings_m4774 (Text_t666 * __this, Vector2_t54  ___extents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Text::GetTextAnchorPivot(UnityEngine.TextAnchor)
extern "C" Vector2_t54  Text_GetTextAnchorPivot_m4775 (Object_t * __this /* static, unused */, int32_t ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnPopulateMesh(UnityEngine.Mesh)
extern "C" void Text_OnPopulateMesh_m4776 (Text_t666 * __this, Mesh_t378 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputHorizontal()
extern "C" void Text_CalculateLayoutInputHorizontal_m4777 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputVertical()
extern "C" void Text_CalculateLayoutInputVertical_m4778 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minWidth()
extern "C" float Text_get_minWidth_m4779 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredWidth()
extern "C" float Text_get_preferredWidth_m4780 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleWidth()
extern "C" float Text_get_flexibleWidth_m4781 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minHeight()
extern "C" float Text_get_minHeight_m4782 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredHeight()
extern "C" float Text_get_preferredHeight_m4783 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleHeight()
extern "C" float Text_get_flexibleHeight_m4784 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_layoutPriority()
extern "C" int32_t Text_get_layoutPriority_m4785 (Text_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
