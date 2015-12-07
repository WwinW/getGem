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

// TweenWidth
struct TweenWidth_t418;
// UIWidget
struct UIWidget_t176;

#include "codegen/il2cpp-codegen.h"

// System.Void TweenWidth::.ctor()
extern "C" void TweenWidth__ctor_m2241 (TweenWidth_t418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget TweenWidth::get_cachedWidget()
extern "C" UIWidget_t176 * TweenWidth_get_cachedWidget_m2242 (TweenWidth_t418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TweenWidth::get_width()
extern "C" int32_t TweenWidth_get_width_m2243 (TweenWidth_t418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::set_width(System.Int32)
extern "C" void TweenWidth_set_width_m2244 (TweenWidth_t418 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TweenWidth::get_value()
extern "C" int32_t TweenWidth_get_value_m2245 (TweenWidth_t418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::set_value(System.Int32)
extern "C" void TweenWidth_set_value_m2246 (TweenWidth_t418 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenWidth_OnUpdate_m2247 (TweenWidth_t418 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenWidth TweenWidth::Begin(UIWidget,System.Single,System.Int32)
extern "C" TweenWidth_t418 * TweenWidth_Begin_m2248 (Object_t * __this /* static, unused */, UIWidget_t176 * ___widget, float ___duration, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::SetStartToCurrentValue()
extern "C" void TweenWidth_SetStartToCurrentValue_m2249 (TweenWidth_t418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::SetEndToCurrentValue()
extern "C" void TweenWidth_SetEndToCurrentValue_m2250 (TweenWidth_t418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::SetCurrentValueToStart()
extern "C" void TweenWidth_SetCurrentValueToStart_m2251 (TweenWidth_t418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::SetCurrentValueToEnd()
extern "C" void TweenWidth_SetCurrentValueToEnd_m2252 (TweenWidth_t418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
