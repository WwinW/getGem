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

// TweenHeight
struct TweenHeight_t412;
// UIWidget
struct UIWidget_t176;

#include "codegen/il2cpp-codegen.h"

// System.Void TweenHeight::.ctor()
extern "C" void TweenHeight__ctor_m2167 (TweenHeight_t412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget TweenHeight::get_cachedWidget()
extern "C" UIWidget_t176 * TweenHeight_get_cachedWidget_m2168 (TweenHeight_t412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TweenHeight::get_height()
extern "C" int32_t TweenHeight_get_height_m2169 (TweenHeight_t412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::set_height(System.Int32)
extern "C" void TweenHeight_set_height_m2170 (TweenHeight_t412 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TweenHeight::get_value()
extern "C" int32_t TweenHeight_get_value_m2171 (TweenHeight_t412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::set_value(System.Int32)
extern "C" void TweenHeight_set_value_m2172 (TweenHeight_t412 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenHeight_OnUpdate_m2173 (TweenHeight_t412 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenHeight TweenHeight::Begin(UIWidget,System.Single,System.Int32)
extern "C" TweenHeight_t412 * TweenHeight_Begin_m2174 (Object_t * __this /* static, unused */, UIWidget_t176 * ___widget, float ___duration, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::SetStartToCurrentValue()
extern "C" void TweenHeight_SetStartToCurrentValue_m2175 (TweenHeight_t412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::SetEndToCurrentValue()
extern "C" void TweenHeight_SetEndToCurrentValue_m2176 (TweenHeight_t412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::SetCurrentValueToStart()
extern "C" void TweenHeight_SetCurrentValueToStart_m2177 (TweenHeight_t412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::SetCurrentValueToEnd()
extern "C" void TweenHeight_SetCurrentValueToEnd_m2178 (TweenHeight_t412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
