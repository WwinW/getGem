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

// TweenPosition
struct TweenPosition_t293;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TweenPosition::.ctor()
extern "C" void TweenPosition__ctor_m2189 (TweenPosition_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenPosition::get_cachedTransform()
extern "C" Transform_t9 * TweenPosition_get_cachedTransform_m2190 (TweenPosition_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenPosition::get_position()
extern "C" Vector3_t34  TweenPosition_get_position_m2191 (TweenPosition_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::set_position(UnityEngine.Vector3)
extern "C" void TweenPosition_set_position_m2192 (TweenPosition_t293 * __this, Vector3_t34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenPosition::get_value()
extern "C" Vector3_t34  TweenPosition_get_value_m2193 (TweenPosition_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::set_value(UnityEngine.Vector3)
extern "C" void TweenPosition_set_value_m2194 (TweenPosition_t293 * __this, Vector3_t34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::Awake()
extern "C" void TweenPosition_Awake_m2195 (TweenPosition_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenPosition_OnUpdate_m2196 (TweenPosition_t293 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenPosition TweenPosition::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3)
extern "C" TweenPosition_t293 * TweenPosition_Begin_m2197 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, float ___duration, Vector3_t34  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenPosition TweenPosition::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3,System.Boolean)
extern "C" TweenPosition_t293 * TweenPosition_Begin_m2198 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, float ___duration, Vector3_t34  ___pos, bool ___worldSpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetStartToCurrentValue()
extern "C" void TweenPosition_SetStartToCurrentValue_m2199 (TweenPosition_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetEndToCurrentValue()
extern "C" void TweenPosition_SetEndToCurrentValue_m2200 (TweenPosition_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetCurrentValueToStart()
extern "C" void TweenPosition_SetCurrentValueToStart_m2201 (TweenPosition_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetCurrentValueToEnd()
extern "C" void TweenPosition_SetCurrentValueToEnd_m2202 (TweenPosition_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
