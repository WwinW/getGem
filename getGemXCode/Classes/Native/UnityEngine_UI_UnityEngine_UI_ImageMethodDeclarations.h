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

// UnityEngine.UI.Image
struct Image_t667;
// UnityEngine.Sprite
struct Sprite_t235;
// UnityEngine.Texture
struct Texture_t376;
// UnityEngine.Mesh
struct Mesh_t378;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t787;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;
// UnityEngine.Camera
struct Camera_t171;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_Type.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Color32.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Image::.ctor()
extern "C" void Image__ctor_m4223 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::.cctor()
extern "C" void Image__cctor_m4224 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
extern "C" Sprite_t235 * Image_get_sprite_m4225 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C" void Image_set_sprite_m4226 (Image_t667 * __this, Sprite_t235 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_overrideSprite()
extern "C" Sprite_t235 * Image_get_overrideSprite_m4227 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_overrideSprite(UnityEngine.Sprite)
extern "C" void Image_set_overrideSprite_m4228 (Image_t667 * __this, Sprite_t235 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/Type UnityEngine.UI.Image::get_type()
extern "C" int32_t Image_get_type_m4229 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
extern "C" void Image_set_type_m4230 (Image_t667 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_preserveAspect()
extern "C" bool Image_get_preserveAspect_m4231 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_preserveAspect(System.Boolean)
extern "C" void Image_set_preserveAspect_m4232 (Image_t667 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillCenter()
extern "C" bool Image_get_fillCenter_m4233 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillCenter(System.Boolean)
extern "C" void Image_set_fillCenter_m4234 (Image_t667 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::get_fillMethod()
extern "C" int32_t Image_get_fillMethod_m4235 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillMethod(UnityEngine.UI.Image/FillMethod)
extern "C" void Image_set_fillMethod_m4236 (Image_t667 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_fillAmount()
extern "C" float Image_get_fillAmount_m4237 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
extern "C" void Image_set_fillAmount_m4238 (Image_t667 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillClockwise()
extern "C" bool Image_get_fillClockwise_m4239 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillClockwise(System.Boolean)
extern "C" void Image_set_fillClockwise_m4240 (Image_t667 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_fillOrigin()
extern "C" int32_t Image_get_fillOrigin_m4241 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillOrigin(System.Int32)
extern "C" void Image_set_fillOrigin_m4242 (Image_t667 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_eventAlphaThreshold()
extern "C" float Image_get_eventAlphaThreshold_m4243 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_eventAlphaThreshold(System.Single)
extern "C" void Image_set_eventAlphaThreshold_m4244 (Image_t667 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Image::get_mainTexture()
extern "C" Texture_t376 * Image_get_mainTexture_m4245 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_hasBorder()
extern "C" bool Image_get_hasBorder_m4246 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_pixelsPerUnit()
extern "C" float Image_get_pixelsPerUnit_m4247 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnBeforeSerialize()
extern "C" void Image_OnBeforeSerialize_m4248 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnAfterDeserialize()
extern "C" void Image_OnAfterDeserialize_m4249 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetDrawingDimensions(System.Boolean)
extern "C" Vector4_t391  Image_GetDrawingDimensions_m4250 (Image_t667 * __this, bool ___shouldPreserveAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::SetNativeSize()
extern "C" void Image_SetNativeSize_m4251 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnPopulateMesh(UnityEngine.Mesh)
extern "C" void Image_OnPopulateMesh_m4252 (Image_t667 * __this, Mesh_t378 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSimpleSprite(UnityEngine.Mesh,System.Boolean)
extern "C" void Image_GenerateSimpleSprite_m4253 (Image_t667 * __this, Mesh_t378 * ___toFill, bool ___lPreserveAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSlicedSprite(UnityEngine.Mesh)
extern "C" void Image_GenerateSlicedSprite_m4254 (Image_t667 * __this, Mesh_t378 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateTiledSprite(UnityEngine.Mesh)
extern "C" void Image_GenerateTiledSprite_m4255 (Image_t667 * __this, Mesh_t378 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::AddQuad(UnityEngine.UI.VertexHelper,UnityEngine.Vector3[],UnityEngine.Color32,UnityEngine.Vector3[])
extern "C" void Image_AddQuad_m4256 (Object_t * __this /* static, unused */, VertexHelper_t787 * ___vh, Vector3U5BU5D_t36* ___quadPositions, Color32_t356  ___color, Vector3U5BU5D_t36* ___quadUVs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::AddQuad(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" void Image_AddQuad_m4257 (Object_t * __this /* static, unused */, VertexHelper_t787 * ___vh, Vector2_t54  ___posMin, Vector2_t54  ___posMax, Color32_t356  ___color, Vector2_t54  ___uvMin, Vector2_t54  ___uvMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetAdjustedBorders(UnityEngine.Vector4,UnityEngine.Rect)
extern "C" Vector4_t391  Image_GetAdjustedBorders_m4258 (Image_t667 * __this, Vector4_t391  ___border, Rect_t55  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateFilledSprite(UnityEngine.Mesh,System.Boolean)
extern "C" void Image_GenerateFilledSprite_m4259 (Image_t667 * __this, Mesh_t378 * ___toFill, bool ___preserveAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::RadialCut(UnityEngine.Vector3[],UnityEngine.Vector3[],System.Single,System.Boolean,System.Int32)
extern "C" bool Image_RadialCut_m4260 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___xy, Vector3U5BU5D_t36* ___uv, float ___fill, bool ___invert, int32_t ___corner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::RadialCut(UnityEngine.Vector3[],System.Single,System.Single,System.Boolean,System.Int32)
extern "C" void Image_RadialCut_m4261 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___xy, float ___cos, float ___sin, bool ___invert, int32_t ___corner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputHorizontal()
extern "C" void Image_CalculateLayoutInputHorizontal_m4262 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputVertical()
extern "C" void Image_CalculateLayoutInputVertical_m4263 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minWidth()
extern "C" float Image_get_minWidth_m4264 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredWidth()
extern "C" float Image_get_preferredWidth_m4265 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleWidth()
extern "C" float Image_get_flexibleWidth_m4266 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minHeight()
extern "C" float Image_get_minHeight_m4267 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredHeight()
extern "C" float Image_get_preferredHeight_m4268 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleHeight()
extern "C" float Image_get_flexibleHeight_m4269 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_layoutPriority()
extern "C" int32_t Image_get_layoutPriority_m4270 (Image_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool Image_IsRaycastLocationValid_m4271 (Image_t667 * __this, Vector2_t54  ___screenPoint, Camera_t171 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Image::MapCoordinate(UnityEngine.Vector2,UnityEngine.Rect)
extern "C" Vector2_t54  Image_MapCoordinate_m4272 (Image_t667 * __this, Vector2_t54  ___local, Rect_t55  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
