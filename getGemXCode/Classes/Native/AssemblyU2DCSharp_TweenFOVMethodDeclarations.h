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

// TweenFOV
struct TweenFOV_t411;
// UnityEngine.Camera
struct Camera_t171;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"

// System.Void TweenFOV::.ctor()
extern "C" void TweenFOV__ctor_m2155 (TweenFOV_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera TweenFOV::get_cachedCamera()
extern "C" Camera_t171 * TweenFOV_get_cachedCamera_m2156 (TweenFOV_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenFOV::get_fov()
extern "C" float TweenFOV_get_fov_m2157 (TweenFOV_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::set_fov(System.Single)
extern "C" void TweenFOV_set_fov_m2158 (TweenFOV_t411 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenFOV::get_value()
extern "C" float TweenFOV_get_value_m2159 (TweenFOV_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::set_value(System.Single)
extern "C" void TweenFOV_set_value_m2160 (TweenFOV_t411 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenFOV_OnUpdate_m2161 (TweenFOV_t411 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenFOV TweenFOV::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C" TweenFOV_t411 * TweenFOV_Begin_m2162 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, float ___duration, float ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetStartToCurrentValue()
extern "C" void TweenFOV_SetStartToCurrentValue_m2163 (TweenFOV_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetEndToCurrentValue()
extern "C" void TweenFOV_SetEndToCurrentValue_m2164 (TweenFOV_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetCurrentValueToStart()
extern "C" void TweenFOV_SetCurrentValueToStart_m2165 (TweenFOV_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetCurrentValueToEnd()
extern "C" void TweenFOV_SetCurrentValueToEnd_m2166 (TweenFOV_t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
