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
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m5677 (Quaternion_t63 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t63  Quaternion_get_identity_m505 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m5678 (Object_t * __this /* static, unused */, Quaternion_t63  ___a, Quaternion_t63  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" Quaternion_t63  Quaternion_LookRotation_m3024 (Object_t * __this /* static, unused */, Vector3_t34  ___forward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t63  Quaternion_INTERNAL_CALL_LookRotation_m5679 (Object_t * __this /* static, unused */, Vector3_t34 * ___forward, Vector3_t34 * ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t63  Quaternion_Slerp_m3028 (Object_t * __this /* static, unused */, Quaternion_t63  ___a, Quaternion_t63  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t63  Quaternion_INTERNAL_CALL_Slerp_m5680 (Object_t * __this /* static, unused */, Quaternion_t63 * ___a, Quaternion_t63 * ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t63  Quaternion_Inverse_m3123 (Object_t * __this /* static, unused */, Quaternion_t63  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t63  Quaternion_INTERNAL_CALL_Inverse_m5681 (Object_t * __this /* static, unused */, Quaternion_t63 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m5682 (Quaternion_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t34  Quaternion_get_eulerAngles_m3439 (Quaternion_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t63  Quaternion_Euler_m3025 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t63  Quaternion_Euler_m619 (Object_t * __this /* static, unused */, Vector3_t34  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t34  Quaternion_Internal_ToEulerRad_m5683 (Object_t * __this /* static, unused */, Quaternion_t63  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t34  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5684 (Object_t * __this /* static, unused */, Quaternion_t63 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t63  Quaternion_Internal_FromEulerRad_m5685 (Object_t * __this /* static, unused */, Vector3_t34  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t63  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5686 (Object_t * __this /* static, unused */, Vector3_t34 * ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m5687 (Quaternion_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m5688 (Quaternion_t63 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t63  Quaternion_op_Multiply_m3026 (Object_t * __this /* static, unused */, Quaternion_t63  ___lhs, Quaternion_t63  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t34  Quaternion_op_Multiply_m3027 (Object_t * __this /* static, unused */, Quaternion_t63  ___rotation, Vector3_t34  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Equality_m525 (Object_t * __this /* static, unused */, Quaternion_t63  ___lhs, Quaternion_t63  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m5335 (Object_t * __this /* static, unused */, Quaternion_t63  ___lhs, Quaternion_t63  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
