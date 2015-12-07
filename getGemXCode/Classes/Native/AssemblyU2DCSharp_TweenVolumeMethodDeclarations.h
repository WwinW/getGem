﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// TweenVolume
struct TweenVolume_t417;
// UnityEngine.AudioSource
struct AudioSource_t47;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"

// System.Void TweenVolume::.ctor()
extern "C" void TweenVolume__ctor_m2231 (TweenVolume_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource TweenVolume::get_audioSource()
extern "C" AudioSource_t47 * TweenVolume_get_audioSource_m2232 (TweenVolume_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenVolume::get_volume()
extern "C" float TweenVolume_get_volume_m2233 (TweenVolume_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::set_volume(System.Single)
extern "C" void TweenVolume_set_volume_m2234 (TweenVolume_t417 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenVolume::get_value()
extern "C" float TweenVolume_get_value_m2235 (TweenVolume_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::set_value(System.Single)
extern "C" void TweenVolume_set_value_m2236 (TweenVolume_t417 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenVolume_OnUpdate_m2237 (TweenVolume_t417 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenVolume TweenVolume::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C" TweenVolume_t417 * TweenVolume_Begin_m2238 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, float ___duration, float ___targetVolume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::SetStartToCurrentValue()
extern "C" void TweenVolume_SetStartToCurrentValue_m2239 (TweenVolume_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::SetEndToCurrentValue()
extern "C" void TweenVolume_SetEndToCurrentValue_m2240 (TweenVolume_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
