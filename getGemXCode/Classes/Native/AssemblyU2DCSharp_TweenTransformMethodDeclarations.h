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

// TweenTransform
struct TweenTransform_t416;
// UnityEngine.GameObject
struct GameObject_t24;
// UnityEngine.Transform
struct Transform_t9;

#include "codegen/il2cpp-codegen.h"

// System.Void TweenTransform::.ctor()
extern "C" void TweenTransform__ctor_m2227 (TweenTransform_t416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenTransform::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenTransform_OnUpdate_m2228 (TweenTransform_t416 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform)
extern "C" TweenTransform_t416 * TweenTransform_Begin_m2229 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, float ___duration, Transform_t9 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform,UnityEngine.Transform)
extern "C" TweenTransform_t416 * TweenTransform_Begin_m2230 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, float ___duration, Transform_t9 * ___from, Transform_t9 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
