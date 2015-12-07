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

// TweenRotation
struct TweenRotation_t414;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void TweenRotation::.ctor()
extern "C" void TweenRotation__ctor_m2203 (TweenRotation_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenRotation::get_cachedTransform()
extern "C" Transform_t9 * TweenRotation_get_cachedTransform_m2204 (TweenRotation_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TweenRotation::get_rotation()
extern "C" Quaternion_t63  TweenRotation_get_rotation_m2205 (TweenRotation_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::set_rotation(UnityEngine.Quaternion)
extern "C" void TweenRotation_set_rotation_m2206 (TweenRotation_t414 * __this, Quaternion_t63  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TweenRotation::get_value()
extern "C" Quaternion_t63  TweenRotation_get_value_m2207 (TweenRotation_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::set_value(UnityEngine.Quaternion)
extern "C" void TweenRotation_set_value_m2208 (TweenRotation_t414 * __this, Quaternion_t63  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenRotation_OnUpdate_m2209 (TweenRotation_t414 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenRotation TweenRotation::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Quaternion)
extern "C" TweenRotation_t414 * TweenRotation_Begin_m2210 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, float ___duration, Quaternion_t63  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetStartToCurrentValue()
extern "C" void TweenRotation_SetStartToCurrentValue_m2211 (TweenRotation_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetEndToCurrentValue()
extern "C" void TweenRotation_SetEndToCurrentValue_m2212 (TweenRotation_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetCurrentValueToStart()
extern "C" void TweenRotation_SetCurrentValueToStart_m2213 (TweenRotation_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetCurrentValueToEnd()
extern "C" void TweenRotation_SetCurrentValueToEnd_m2214 (TweenRotation_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
