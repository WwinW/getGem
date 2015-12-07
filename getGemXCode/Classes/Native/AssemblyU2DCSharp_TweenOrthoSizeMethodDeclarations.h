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

// TweenOrthoSize
struct TweenOrthoSize_t413;
// UnityEngine.Camera
struct Camera_t171;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"

// System.Void TweenOrthoSize::.ctor()
extern "C" void TweenOrthoSize__ctor_m2179 (TweenOrthoSize_t413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera TweenOrthoSize::get_cachedCamera()
extern "C" Camera_t171 * TweenOrthoSize_get_cachedCamera_m2180 (TweenOrthoSize_t413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenOrthoSize::get_orthoSize()
extern "C" float TweenOrthoSize_get_orthoSize_m2181 (TweenOrthoSize_t413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::set_orthoSize(System.Single)
extern "C" void TweenOrthoSize_set_orthoSize_m2182 (TweenOrthoSize_t413 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenOrthoSize::get_value()
extern "C" float TweenOrthoSize_get_value_m2183 (TweenOrthoSize_t413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::set_value(System.Single)
extern "C" void TweenOrthoSize_set_value_m2184 (TweenOrthoSize_t413 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenOrthoSize_OnUpdate_m2185 (TweenOrthoSize_t413 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenOrthoSize TweenOrthoSize::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C" TweenOrthoSize_t413 * TweenOrthoSize_Begin_m2186 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, float ___duration, float ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::SetStartToCurrentValue()
extern "C" void TweenOrthoSize_SetStartToCurrentValue_m2187 (TweenOrthoSize_t413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::SetEndToCurrentValue()
extern "C" void TweenOrthoSize_SetEndToCurrentValue_m2188 (TweenOrthoSize_t413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
