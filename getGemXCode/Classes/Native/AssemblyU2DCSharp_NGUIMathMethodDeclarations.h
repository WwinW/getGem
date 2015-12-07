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
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t48;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;
// UnityEngine.Camera
struct Camera_t171;
// UIRect
struct UIRect_t267;
// UIWidget
struct UIWidget_t176;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Bounds.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"

// System.Single NGUIMath::Lerp(System.Single,System.Single,System.Single)
extern "C" float NGUIMath_Lerp_m1661 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ClampIndex(System.Int32,System.Int32)
extern "C" int32_t NGUIMath_ClampIndex_m1662 (Object_t * __this /* static, unused */, int32_t ___val, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::RepeatIndex(System.Int32,System.Int32)
extern "C" int32_t NGUIMath_RepeatIndex_m1663 (Object_t * __this /* static, unused */, int32_t ___val, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::WrapAngle(System.Single)
extern "C" float NGUIMath_WrapAngle_m1664 (Object_t * __this /* static, unused */, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::Wrap01(System.Single)
extern "C" float NGUIMath_Wrap01_m1665 (Object_t * __this /* static, unused */, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::HexToDecimal(System.Char)
extern "C" int32_t NGUIMath_HexToDecimal_m1666 (Object_t * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char NGUIMath::DecimalToHexChar(System.Int32)
extern "C" uint16_t NGUIMath_DecimalToHexChar_m1667 (Object_t * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex8(System.Int32)
extern "C" String_t* NGUIMath_DecimalToHex8_m1668 (Object_t * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex24(System.Int32)
extern "C" String_t* NGUIMath_DecimalToHex24_m1669 (Object_t * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex32(System.Int32)
extern "C" String_t* NGUIMath_DecimalToHex32_m1670 (Object_t * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ColorToInt(UnityEngine.Color)
extern "C" int32_t NGUIMath_ColorToInt_m1671 (Object_t * __this /* static, unused */, Color_t33  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::IntToColor(System.Int32)
extern "C" Color_t33  NGUIMath_IntToColor_m1672 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::IntToBinary(System.Int32,System.Int32)
extern "C" String_t* NGUIMath_IntToBinary_m1673 (Object_t * __this /* static, unused */, int32_t ___val, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::HexToColor(System.UInt32)
extern "C" Color_t33  NGUIMath_HexToColor_m1674 (Object_t * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToTexCoords(UnityEngine.Rect,System.Int32,System.Int32)
extern "C" Rect_t55  NGUIMath_ConvertToTexCoords_m1675 (Object_t * __this /* static, unused */, Rect_t55  ___rect, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C" Rect_t55  NGUIMath_ConvertToPixels_m1676 (Object_t * __this /* static, unused */, Rect_t55  ___rect, int32_t ___width, int32_t ___height, bool ___round, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect)
extern "C" Rect_t55  NGUIMath_MakePixelPerfect_m1677 (Object_t * __this /* static, unused */, Rect_t55  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C" Rect_t55  NGUIMath_MakePixelPerfect_m1678 (Object_t * __this /* static, unused */, Rect_t55  ___rect, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ConstrainRect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t54  NGUIMath_ConstrainRect_m1679 (Object_t * __this /* static, unused */, Vector2_t54  ___minRect, Vector2_t54  ___maxRect, Vector2_t54  ___minArea, Vector2_t54  ___maxArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateAbsoluteWidgetBounds(UnityEngine.Transform)
extern "C" Bounds_t269  NGUIMath_CalculateAbsoluteWidgetBounds_m1680 (Object_t * __this /* static, unused */, Transform_t9 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform)
extern "C" Bounds_t269  NGUIMath_CalculateRelativeWidgetBounds_m1681 (Object_t * __this /* static, unused */, Transform_t9 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,System.Boolean)
extern "C" Bounds_t269  NGUIMath_CalculateRelativeWidgetBounds_m1682 (Object_t * __this /* static, unused */, Transform_t9 * ___trans, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform)
extern "C" Bounds_t269  NGUIMath_CalculateRelativeWidgetBounds_m1683 (Object_t * __this /* static, unused */, Transform_t9 * ___relativeTo, Transform_t9 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C" Bounds_t269  NGUIMath_CalculateRelativeWidgetBounds_m1684 (Object_t * __this /* static, unused */, Transform_t9 * ___relativeTo, Transform_t9 * ___content, bool ___considerInactive, bool ___considerParents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,System.Boolean,System.Boolean,UnityEngine.Matrix4x4&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Boolean&,System.Boolean)
extern "C" void NGUIMath_CalculateRelativeWidgetBounds_m1685 (Object_t * __this /* static, unused */, Transform_t9 * ___content, bool ___considerInactive, bool ___isRoot, Matrix4x4_t401 * ___toLocal, Vector3_t34 * ___vMin, Vector3_t34 * ___vMax, bool* ___isSet, bool ___considerParents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringDampen(UnityEngine.Vector3&,System.Single,System.Single)
extern "C" Vector3_t34  NGUIMath_SpringDampen_m1686 (Object_t * __this /* static, unused */, Vector3_t34 * ___velocity, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringDampen(UnityEngine.Vector2&,System.Single,System.Single)
extern "C" Vector2_t54  NGUIMath_SpringDampen_m1687 (Object_t * __this /* static, unused */, Vector2_t54 * ___velocity, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single)
extern "C" float NGUIMath_SpringLerp_m1688 (Object_t * __this /* static, unused */, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single,System.Single,System.Single)
extern "C" float NGUIMath_SpringLerp_m1689 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringLerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
extern "C" Vector2_t54  NGUIMath_SpringLerp_m1690 (Object_t * __this /* static, unused */, Vector2_t54  ___from, Vector2_t54  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringLerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C" Vector3_t34  NGUIMath_SpringLerp_m1691 (Object_t * __this /* static, unused */, Vector3_t34  ___from, Vector3_t34  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion NGUIMath::SpringLerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C" Quaternion_t63  NGUIMath_SpringLerp_m1692 (Object_t * __this /* static, unused */, Quaternion_t63  ___from, Quaternion_t63  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::RotateTowards(System.Single,System.Single,System.Single)
extern "C" float NGUIMath_RotateTowards_m1693 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___maxAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistancePointToLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float NGUIMath_DistancePointToLineSegment_m1694 (Object_t * __this /* static, unused */, Vector2_t54  ___point, Vector2_t54  ___a, Vector2_t54  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C" float NGUIMath_DistanceToRectangle_m1695 (Object_t * __this /* static, unused */, Vector2U5BU5D_t48* ___screenPoints, Vector2_t54  ___mousePos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector3[],UnityEngine.Vector2,UnityEngine.Camera)
extern "C" float NGUIMath_DistanceToRectangle_m1696 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___worldPoints, Vector2_t54  ___mousePos, Camera_t171 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::GetPivotOffset(UIWidget/Pivot)
extern "C" Vector2_t54  NGUIMath_GetPivotOffset_m1697 (Object_t * __this /* static, unused */, int32_t ___pv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot NGUIMath::GetPivot(UnityEngine.Vector2)
extern "C" int32_t NGUIMath_GetPivot_m1698 (Object_t * __this /* static, unused */, Vector2_t54  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::MoveWidget(UIRect,System.Single,System.Single)
extern "C" void NGUIMath_MoveWidget_m1699 (Object_t * __this /* static, unused */, UIRect_t267 * ___w, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::MoveRect(UIRect,System.Single,System.Single)
extern "C" void NGUIMath_MoveRect_m1700 (Object_t * __this /* static, unused */, UIRect_t267 * ___rect, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::ResizeWidget(UIWidget,UIWidget/Pivot,System.Single,System.Single,System.Int32,System.Int32)
extern "C" void NGUIMath_ResizeWidget_m1701 (Object_t * __this /* static, unused */, UIWidget_t176 * ___w, int32_t ___pivot, float ___x, float ___y, int32_t ___minWidth, int32_t ___minHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::ResizeWidget(UIWidget,UIWidget/Pivot,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void NGUIMath_ResizeWidget_m1702 (Object_t * __this /* static, unused */, UIWidget_t176 * ___w, int32_t ___pivot, float ___x, float ___y, int32_t ___minWidth, int32_t ___minHeight, int32_t ___maxWidth, int32_t ___maxHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single)
extern "C" void NGUIMath_AdjustWidget_m1703 (Object_t * __this /* static, unused */, UIWidget_t176 * ___w, float ___left, float ___bottom, float ___right, float ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
extern "C" void NGUIMath_AdjustWidget_m1704 (Object_t * __this /* static, unused */, UIWidget_t176 * ___w, float ___left, float ___bottom, float ___right, float ___top, int32_t ___minWidth, int32_t ___minHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void NGUIMath_AdjustWidget_m1705 (Object_t * __this /* static, unused */, UIWidget_t176 * ___w, float ___left, float ___bottom, float ___right, float ___top, int32_t ___minWidth, int32_t ___minHeight, int32_t ___maxWidth, int32_t ___maxHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::AdjustByDPI(System.Single)
extern "C" int32_t NGUIMath_AdjustByDPI_m1706 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ScreenToPixels(UnityEngine.Vector2,UnityEngine.Transform)
extern "C" Vector2_t54  NGUIMath_ScreenToPixels_m1707 (Object_t * __this /* static, unused */, Vector2_t54  ___pos, Transform_t9 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ScreenToParentPixels(UnityEngine.Vector2,UnityEngine.Transform)
extern "C" Vector2_t54  NGUIMath_ScreenToParentPixels_m1708 (Object_t * __this /* static, unused */, Vector2_t54  ___pos, Transform_t9 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::WorldToLocalPoint(UnityEngine.Vector3,UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Transform)
extern "C" Vector3_t34  NGUIMath_WorldToLocalPoint_m1709 (Object_t * __this /* static, unused */, Vector3_t34  ___worldPos, Camera_t171 * ___worldCam, Camera_t171 * ___uiCam, Transform_t9 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::OverlayPosition(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Camera,UnityEngine.Camera)
extern "C" void NGUIMath_OverlayPosition_m1710 (Object_t * __this /* static, unused */, Transform_t9 * ___trans, Vector3_t34  ___worldPos, Camera_t171 * ___worldCam, Camera_t171 * ___myCam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::OverlayPosition(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Camera)
extern "C" void NGUIMath_OverlayPosition_m1711 (Object_t * __this /* static, unused */, Transform_t9 * ___trans, Vector3_t34  ___worldPos, Camera_t171 * ___worldCam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::OverlayPosition(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void NGUIMath_OverlayPosition_m1712 (Object_t * __this /* static, unused */, Transform_t9 * ___trans, Transform_t9 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
