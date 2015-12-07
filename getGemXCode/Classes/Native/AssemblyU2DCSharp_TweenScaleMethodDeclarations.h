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

// TweenScale
struct TweenScale_t415;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TweenScale::.ctor()
extern "C" void TweenScale__ctor_m2215 (TweenScale_t415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenScale::get_cachedTransform()
extern "C" Transform_t9 * TweenScale_get_cachedTransform_m2216 (TweenScale_t415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenScale::get_value()
extern "C" Vector3_t34  TweenScale_get_value_m2217 (TweenScale_t415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::set_value(UnityEngine.Vector3)
extern "C" void TweenScale_set_value_m2218 (TweenScale_t415 * __this, Vector3_t34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenScale::get_scale()
extern "C" Vector3_t34  TweenScale_get_scale_m2219 (TweenScale_t415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::set_scale(UnityEngine.Vector3)
extern "C" void TweenScale_set_scale_m2220 (TweenScale_t415 * __this, Vector3_t34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenScale_OnUpdate_m2221 (TweenScale_t415 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenScale TweenScale::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3)
extern "C" TweenScale_t415 * TweenScale_Begin_m2222 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, float ___duration, Vector3_t34  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetStartToCurrentValue()
extern "C" void TweenScale_SetStartToCurrentValue_m2223 (TweenScale_t415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetEndToCurrentValue()
extern "C" void TweenScale_SetEndToCurrentValue_m2224 (TweenScale_t415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetCurrentValueToStart()
extern "C" void TweenScale_SetCurrentValueToStart_m2225 (TweenScale_t415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::SetCurrentValueToEnd()
extern "C" void TweenScale_SetCurrentValueToEnd_m2226 (TweenScale_t415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
