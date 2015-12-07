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

// TweenColor
struct TweenColor_t410;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void TweenColor::.ctor()
extern "C" void TweenColor__ctor_m2143 (TweenColor_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::Cache()
extern "C" void TweenColor_Cache_m2144 (TweenColor_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TweenColor::get_color()
extern "C" Color_t33  TweenColor_get_color_m2145 (TweenColor_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::set_color(UnityEngine.Color)
extern "C" void TweenColor_set_color_m2146 (TweenColor_t410 * __this, Color_t33  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TweenColor::get_value()
extern "C" Color_t33  TweenColor_get_value_m2147 (TweenColor_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::set_value(UnityEngine.Color)
extern "C" void TweenColor_set_value_m2148 (TweenColor_t410 * __this, Color_t33  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenColor_OnUpdate_m2149 (TweenColor_t410 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenColor TweenColor::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Color)
extern "C" TweenColor_t410 * TweenColor_Begin_m2150 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, float ___duration, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::SetStartToCurrentValue()
extern "C" void TweenColor_SetStartToCurrentValue_m2151 (TweenColor_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::SetEndToCurrentValue()
extern "C" void TweenColor_SetEndToCurrentValue_m2152 (TweenColor_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::SetCurrentValueToStart()
extern "C" void TweenColor_SetCurrentValueToStart_m2153 (TweenColor_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::SetCurrentValueToEnd()
extern "C" void TweenColor_SetCurrentValueToEnd_m2154 (TweenColor_t410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
