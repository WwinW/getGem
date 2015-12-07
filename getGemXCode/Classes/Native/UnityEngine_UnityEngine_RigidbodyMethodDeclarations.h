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

// UnityEngine.Rigidbody
struct Rigidbody_t105;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_velocity_m3666 (Rigidbody_t105 * __this, Vector3_t34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_velocity_m6040 (Rigidbody_t105 * __this, Vector3_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
extern "C" void Rigidbody_set_useGravity_m3630 (Rigidbody_t105 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" void Rigidbody_set_isKinematic_m3629 (Rigidbody_t105 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
extern "C" Quaternion_t63  Rigidbody_get_rotation_m3049 (Rigidbody_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Rigidbody_INTERNAL_get_rotation_m6041 (Rigidbody_t105 * __this, Quaternion_t63 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C" void Rigidbody_MovePosition_m618 (Rigidbody_t105 * __this, Vector3_t34  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_CALL_MovePosition_m6042 (Object_t * __this /* static, unused */, Rigidbody_t105 * ___self, Vector3_t34 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C" void Rigidbody_MoveRotation_m621 (Rigidbody_t105 * __this, Quaternion_t63  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C" void Rigidbody_INTERNAL_CALL_MoveRotation_m6043 (Object_t * __this /* static, unused */, Rigidbody_t105 * ___self, Quaternion_t63 * ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
