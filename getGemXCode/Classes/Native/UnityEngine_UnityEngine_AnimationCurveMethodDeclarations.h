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

// UnityEngine.AnimationCurve
struct AnimationCurve_t421;
struct AnimationCurve_t421_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t569;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m3507 (AnimationCurve_t421 * __this, KeyframeU5BU5D_t569* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m6101 (AnimationCurve_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m6102 (AnimationCurve_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m6103 (AnimationCurve_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m3508 (AnimationCurve_t421 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m6104 (AnimationCurve_t421 * __this, KeyframeU5BU5D_t569* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t421_marshal(const AnimationCurve_t421& unmarshaled, AnimationCurve_t421_marshaled& marshaled);
extern "C" void AnimationCurve_t421_marshal_back(const AnimationCurve_t421_marshaled& marshaled, AnimationCurve_t421& unmarshaled);
extern "C" void AnimationCurve_t421_marshal_cleanup(AnimationCurve_t421_marshaled& marshaled);
