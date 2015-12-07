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

// UIBasicSprite
struct UIBasicSprite_t222;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t372;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t374;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t375;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t48;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIBasicSprite_Type.h"
#include "AssemblyU2DCSharp_UIBasicSprite_Flip.h"
#include "AssemblyU2DCSharp_UIBasicSprite_FillDirection.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Color32.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UIBasicSprite::.ctor()
extern "C" void UIBasicSprite__ctor_m1870 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::.cctor()
extern "C" void UIBasicSprite__cctor_m1871 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIBasicSprite/Type UIBasicSprite::get_type()
extern "C" int32_t UIBasicSprite_get_type_m1872 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::set_type(UIBasicSprite/Type)
extern "C" void UIBasicSprite_set_type_m1873 (UIBasicSprite_t222 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIBasicSprite/Flip UIBasicSprite::get_flip()
extern "C" int32_t UIBasicSprite_get_flip_m1874 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::set_flip(UIBasicSprite/Flip)
extern "C" void UIBasicSprite_set_flip_m1875 (UIBasicSprite_t222 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIBasicSprite/FillDirection UIBasicSprite::get_fillDirection()
extern "C" int32_t UIBasicSprite_get_fillDirection_m1876 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::set_fillDirection(UIBasicSprite/FillDirection)
extern "C" void UIBasicSprite_set_fillDirection_m1877 (UIBasicSprite_t222 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIBasicSprite::get_fillAmount()
extern "C" float UIBasicSprite_get_fillAmount_m1878 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::set_fillAmount(System.Single)
extern "C" void UIBasicSprite_set_fillAmount_m1879 (UIBasicSprite_t222 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIBasicSprite::get_minWidth()
extern "C" int32_t UIBasicSprite_get_minWidth_m1880 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIBasicSprite::get_minHeight()
extern "C" int32_t UIBasicSprite_get_minHeight_m1881 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIBasicSprite::get_invert()
extern "C" bool UIBasicSprite_get_invert_m1882 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::set_invert(System.Boolean)
extern "C" void UIBasicSprite_set_invert_m1883 (UIBasicSprite_t222 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIBasicSprite::get_hasBorder()
extern "C" bool UIBasicSprite_get_hasBorder_m1884 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIBasicSprite::get_premultipliedAlpha()
extern "C" bool UIBasicSprite_get_premultipliedAlpha_m1885 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIBasicSprite::get_pixelSize()
extern "C" float UIBasicSprite_get_pixelSize_m1886 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIBasicSprite::get_drawingUVs()
extern "C" Vector4_t391  UIBasicSprite_get_drawingUVs_m1887 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UIBasicSprite::get_drawingColor()
extern "C" Color32_t356  UIBasicSprite_get_drawingColor_m1888 (UIBasicSprite_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::Fill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,UnityEngine.Rect,UnityEngine.Rect)
extern "C" void UIBasicSprite_Fill_m1889 (UIBasicSprite_t222 * __this, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, Rect_t55  ___outer, Rect_t55  ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::SimpleFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UIBasicSprite_SimpleFill_m1890 (UIBasicSprite_t222 * __this, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::SlicedFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UIBasicSprite_SlicedFill_m1891 (UIBasicSprite_t222 * __this, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::TiledFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UIBasicSprite_TiledFill_m1892 (UIBasicSprite_t222 * __this, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::FilledFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UIBasicSprite_FilledFill_m1893 (UIBasicSprite_t222 * __this, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::AdvancedFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UIBasicSprite_AdvancedFill_m1894 (UIBasicSprite_t222 * __this, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIBasicSprite::RadialCut(UnityEngine.Vector2[],UnityEngine.Vector2[],System.Single,System.Boolean,System.Int32)
extern "C" bool UIBasicSprite_RadialCut_m1895 (Object_t * __this /* static, unused */, Vector2U5BU5D_t48* ___xy, Vector2U5BU5D_t48* ___uv, float ___fill, bool ___invert, int32_t ___corner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::RadialCut(UnityEngine.Vector2[],System.Single,System.Single,System.Boolean,System.Int32)
extern "C" void UIBasicSprite_RadialCut_m1896 (Object_t * __this /* static, unused */, Vector2U5BU5D_t48* ___xy, float ___cos, float ___sin, bool ___invert, int32_t ___corner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIBasicSprite::Fill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,UnityEngine.Color)
extern "C" void UIBasicSprite_Fill_m1897 (Object_t * __this /* static, unused */, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, float ___v0x, float ___v1x, float ___v0y, float ___v1y, float ___u0x, float ___u1x, float ___u0y, float ___u1y, Color_t33  ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
