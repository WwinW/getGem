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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Vector4__ctor_m3187 (Vector4_t391 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern "C" float Vector4_get_Item_m5286 (Vector4_t391 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern "C" void Vector4_set_Item_m5288 (Vector4_t391 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" int32_t Vector4_GetHashCode_m5747 (Vector4_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" bool Vector4_Equals_m5748 (Vector4_t391 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector4::ToString()
extern "C" String_t* Vector4_ToString_m5749 (Vector4_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" float Vector4_Dot_m5750 (Object_t * __this /* static, unused */, Vector4_t391  ___a, Vector4_t391  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" float Vector4_SqrMagnitude_m5751 (Object_t * __this /* static, unused */, Vector4_t391  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C" float Vector4_get_sqrMagnitude_m5278 (Vector4_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C" Vector4_t391  Vector4_get_zero_m3475 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector4_t391  Vector4_op_Subtraction_m5752 (Object_t * __this /* static, unused */, Vector4_t391  ___a, Vector4_t391  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
extern "C" Vector4_t391  Vector4_op_Multiply_m3389 (Object_t * __this /* static, unused */, Vector4_t391  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C" Vector4_t391  Vector4_op_Division_m5284 (Object_t * __this /* static, unused */, Vector4_t391  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Equality_m5753 (Object_t * __this /* static, unused */, Vector4_t391  ___lhs, Vector4_t391  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Inequality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Inequality_m3465 (Object_t * __this /* static, unused */, Vector4_t391  ___lhs, Vector4_t391  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
extern "C" Vector4_t391  Vector4_op_Implicit_m3442 (Object_t * __this /* static, unused */, Vector2_t54  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
