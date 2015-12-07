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
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Rect__ctor_m625 (Rect_t55 * __this, float ___x, float ___y, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m607 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" void Rect_set_x_m608 (Rect_t55 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m609 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" void Rect_set_y_m610 (Rect_t55 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
extern "C" Vector2_t54  Rect_get_position_m5285 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
extern "C" Vector2_t54  Rect_get_center_m5367 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_min()
extern "C" Vector2_t54  Rect_get_min_m5200 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_max()
extern "C" Vector2_t54  Rect_get_max_m5201 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m611 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" void Rect_set_width_m612 (Rect_t55 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m613 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" void Rect_set_height_m614 (Rect_t55 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
extern "C" Vector2_t54  Rect_get_size_m5202 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m3128 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_xMin(System.Single)
extern "C" void Rect_set_xMin_m3264 (Rect_t55 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m3129 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_yMin(System.Single)
extern "C" void Rect_set_yMin_m3266 (Rect_t55 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m3130 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_xMax(System.Single)
extern "C" void Rect_set_xMax_m3265 (Rect_t55 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m3131 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_yMax(System.Single)
extern "C" void Rect_set_yMax_m3267 (Rect_t55 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Rect::ToString()
extern "C" String_t* Rect_ToString_m5689 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern "C" bool Rect_Contains_m5206 (Rect_t55 * __this, Vector3_t34  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect)
extern "C" bool Rect_Overlaps_m5351 (Rect_t55 * __this, Rect_t55  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rect::GetHashCode()
extern "C" int32_t Rect_GetHashCode_m5690 (Rect_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern "C" bool Rect_Equals_m5691 (Rect_t55 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Inequality_m3578 (Object_t * __this /* static, unused */, Rect_t55  ___lhs, Rect_t55  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool Rect_op_Equality_m5358 (Object_t * __this /* static, unused */, Rect_t55  ___lhs, Rect_t55  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
