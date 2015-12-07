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

// ActiveAnimation
struct ActiveAnimation_t324;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t213;
// UnityEngine.Animator
struct Animator_t284;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition.h"
#include "AssemblyU2DCSharp_AnimationOrTween_DisableCondition.h"

// System.Void ActiveAnimation::.ctor()
extern "C" void ActiveAnimation__ctor_m1524 (ActiveAnimation_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ActiveAnimation::get_playbackTime()
extern "C" float ActiveAnimation_get_playbackTime_m1525 (ActiveAnimation_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ActiveAnimation::get_isPlaying()
extern "C" bool ActiveAnimation_get_isPlaying_m1526 (ActiveAnimation_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Finish()
extern "C" void ActiveAnimation_Finish_m1527 (ActiveAnimation_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Reset()
extern "C" void ActiveAnimation_Reset_m1528 (ActiveAnimation_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Start()
extern "C" void ActiveAnimation_Start_m1529 (ActiveAnimation_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Update()
extern "C" void ActiveAnimation_Update_m1530 (ActiveAnimation_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Play(System.String,AnimationOrTween.Direction)
extern "C" void ActiveAnimation_Play_m1531 (ActiveAnimation_t324 * __this, String_t* ___clipName, int32_t ___playDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction,AnimationOrTween.EnableCondition,AnimationOrTween.DisableCondition)
extern "C" ActiveAnimation_t324 * ActiveAnimation_Play_m1532 (Object_t * __this /* static, unused */, Animation_t213 * ___anim, String_t* ___clipName, int32_t ___playDirection, int32_t ___enableBeforePlay, int32_t ___disableCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction)
extern "C" ActiveAnimation_t324 * ActiveAnimation_Play_m1533 (Object_t * __this /* static, unused */, Animation_t213 * ___anim, String_t* ___clipName, int32_t ___playDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,AnimationOrTween.Direction)
extern "C" ActiveAnimation_t324 * ActiveAnimation_Play_m1534 (Object_t * __this /* static, unused */, Animation_t213 * ___anim, int32_t ___playDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animator,System.String,AnimationOrTween.Direction,AnimationOrTween.EnableCondition,AnimationOrTween.DisableCondition)
extern "C" ActiveAnimation_t324 * ActiveAnimation_Play_m1535 (Object_t * __this /* static, unused */, Animator_t284 * ___anim, String_t* ___clipName, int32_t ___playDirection, int32_t ___enableBeforePlay, int32_t ___disableCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
