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

// UnityEngine.Transform
struct Transform_t9;
// System.Collections.IEnumerator
struct IEnumerator_t58;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Space.h"

// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t34  Transform_get_position_m524 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m521 (Transform_t9 * __this, Vector3_t34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m5957 (Transform_t9 * __this, Vector3_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m5958 (Transform_t9 * __this, Vector3_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t34  Transform_get_localPosition_m586 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m587 (Transform_t9 * __this, Vector3_t34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m5959 (Transform_t9 * __this, Vector3_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m5960 (Transform_t9 * __this, Vector3_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" Vector3_t34  Transform_get_eulerAngles_m576 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C" void Transform_set_eulerAngles_m582 (Transform_t9 * __this, Vector3_t34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
extern "C" Vector3_t34  Transform_get_localEulerAngles_m588 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C" void Transform_set_localEulerAngles_m589 (Transform_t9 * __this, Vector3_t34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localEulerAngles(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localEulerAngles_m5961 (Transform_t9 * __this, Vector3_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localEulerAngles(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localEulerAngles_m5962 (Transform_t9 * __this, Vector3_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t34  Transform_get_forward_m5263 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t63  Transform_get_rotation_m526 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m522 (Transform_t9 * __this, Quaternion_t63  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m5963 (Transform_t9 * __this, Quaternion_t63 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m5964 (Transform_t9 * __this, Quaternion_t63 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t63  Transform_get_localRotation_m3029 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m620 (Transform_t9 * __this, Quaternion_t63  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m5965 (Transform_t9 * __this, Quaternion_t63 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m5966 (Transform_t9 * __this, Quaternion_t63 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t34  Transform_get_localScale_m584 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m529 (Transform_t9 * __this, Vector3_t34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m5967 (Transform_t9 * __this, Vector3_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m5968 (Transform_t9 * __this, Vector3_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t9 * Transform_get_parent_m502 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" void Transform_set_parent_m501 (Transform_t9 * __this, Transform_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t9 * Transform_get_parentInternal_m5969 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m5970 (Transform_t9 * __this, Transform_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m5330 (Transform_t9 * __this, Transform_t9 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m5157 (Transform_t9 * __this, Transform_t9 * ___parent, bool ___worldPositionStays, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t401  Transform_get_worldToLocalMatrix_m3109 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m5971 (Transform_t9 * __this, Matrix4x4_t401 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C" Matrix4x4_t401  Transform_get_localToWorldMatrix_m3473 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_localToWorldMatrix_m5972 (Transform_t9 * __this, Matrix4x4_t401 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Translate_m605 (Transform_t9 * __this, Vector3_t34  ___translation, int32_t ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m622 (Transform_t9 * __this, Vector3_t34  ___eulerAngles, int32_t ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m579 (Transform_t9 * __this, Transform_t9 * ___target, Vector3_t34  ___worldUp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m580 (Transform_t9 * __this, Vector3_t34  ___worldPosition, Vector3_t34  ___worldUp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C" void Transform_LookAt_m3652 (Transform_t9 * __this, Vector3_t34  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_CALL_LookAt_m5973 (Object_t * __this /* static, unused */, Transform_t9 * ___self, Vector3_t34 * ___worldPosition, Vector3_t34 * ___worldUp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t34  Transform_TransformDirection_m3118 (Transform_t9 * __this, Vector3_t34  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t34  Transform_INTERNAL_CALL_TransformDirection_m5974 (Object_t * __this /* static, unused */, Transform_t9 * ___self, Vector3_t34 * ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t34  Transform_InverseTransformDirection_m3116 (Transform_t9 * __this, Vector3_t34  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t34  Transform_INTERNAL_CALL_InverseTransformDirection_m5975 (Object_t * __this /* static, unused */, Transform_t9 * ___self, Vector3_t34 * ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t34  Transform_TransformPoint_m3188 (Transform_t9 * __this, Vector3_t34  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t34  Transform_INTERNAL_CALL_TransformPoint_m5976 (Object_t * __this /* static, unused */, Transform_t9 * ___self, Vector3_t34 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(System.Single,System.Single,System.Single)
extern "C" Vector3_t34  Transform_TransformPoint_m3467 (Transform_t9 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t34  Transform_InverseTransformPoint_m3093 (Transform_t9 * __this, Vector3_t34  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t34  Transform_INTERNAL_CALL_InverseTransformPoint_m5977 (Object_t * __this /* static, unused */, Transform_t9 * ___self, Vector3_t34 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m3087 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::DetachChildren()
extern "C" void Transform_DetachChildren_m3675 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m5331 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" Vector3_t34  Transform_get_lossyScale_m3617 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_lossyScale_m5978 (Transform_t9 * __this, Vector3_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
extern "C" bool Transform_IsChildOf_m5188 (Transform_t9 * __this, Transform_t9 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform::get_hasChanged()
extern "C" bool Transform_get_hasChanged_m3471 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
extern "C" void Transform_set_hasChanged_m3472 (Transform_t9 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" Object_t * Transform_GetEnumerator_m5979 (Transform_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t9 * Transform_GetChild_m3088 (Transform_t9 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
