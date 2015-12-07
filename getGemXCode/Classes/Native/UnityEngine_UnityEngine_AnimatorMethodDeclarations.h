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

// UnityEngine.Animator
struct Animator_t284;
// System.String
struct String_t;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t858;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m5392 (Animator_t284 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m5391 (Animator_t284 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C" AnimatorStateInfo_t543  Animator_GetCurrentAnimatorStateInfo_m3211 (Animator_t284 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C" void Animator_Play_m3219 (Animator_t284 * __this, String_t* ___stateName, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C" void Animator_Play_m6135 (Animator_t284 * __this, int32_t ___stateNameHash, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t858 * Animator_get_runtimeAnimatorController_m5390 (Animator_t284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m6136 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m6137 (Animator_t284 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m6138 (Animator_t284 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Update(System.Single)
extern "C" void Animator_Update_m3220 (Animator_t284 * __this, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
