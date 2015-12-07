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

// TweenAlpha
struct TweenAlpha_t407;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"

// System.Void TweenAlpha::.ctor()
extern "C" void TweenAlpha__ctor_m2133 (TweenAlpha_t407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenAlpha::get_alpha()
extern "C" float TweenAlpha_get_alpha_m2134 (TweenAlpha_t407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::set_alpha(System.Single)
extern "C" void TweenAlpha_set_alpha_m2135 (TweenAlpha_t407 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::Cache()
extern "C" void TweenAlpha_Cache_m2136 (TweenAlpha_t407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenAlpha::get_value()
extern "C" float TweenAlpha_get_value_m2137 (TweenAlpha_t407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::set_value(System.Single)
extern "C" void TweenAlpha_set_value_m2138 (TweenAlpha_t407 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenAlpha_OnUpdate_m2139 (TweenAlpha_t407 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenAlpha TweenAlpha::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C" TweenAlpha_t407 * TweenAlpha_Begin_m2140 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, float ___duration, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::SetStartToCurrentValue()
extern "C" void TweenAlpha_SetStartToCurrentValue_m2141 (TweenAlpha_t407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::SetEndToCurrentValue()
extern "C" void TweenAlpha_SetEndToCurrentValue_m2142 (TweenAlpha_t407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
