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

// UnityEngine.Animation
struct Animation_t213;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// UnityEngine.AnimationState
struct AnimationState_t537;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_PlayMode.h"

// System.Void UnityEngine.Animation::Sample()
extern "C" void Animation_Sample_m3218 (Animation_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
extern "C" void Animation_INTERNAL_CALL_Sample_m6109 (Object_t * __this /* static, unused */, Animation_t213 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::get_isPlaying()
extern "C" bool Animation_get_isPlaying_m3222 (Animation_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::IsPlaying(System.String)
extern "C" bool Animation_IsPlaying_m3214 (Animation_t213 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play()
extern "C" bool Animation_Play_m3223 (Animation_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" bool Animation_Play_m6110 (Animation_t213 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C" bool Animation_Play_m6111 (Animation_t213 * __this, String_t* ___animation, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C" bool Animation_Play_m3040 (Animation_t213 * __this, String_t* ___animation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C" void Animation_CrossFade_m6112 (Animation_t213 * __this, String_t* ___animation, float ___fadeLength, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String)
extern "C" void Animation_CrossFade_m3043 (Animation_t213 * __this, String_t* ___animation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" bool Animation_PlayDefaultAnimation_m6113 (Animation_t213 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C" Object_t * Animation_GetEnumerator_m3037 (Animation_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t537 * Animation_GetStateAtIndex_m6114 (Animation_t213 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m6115 (Animation_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
