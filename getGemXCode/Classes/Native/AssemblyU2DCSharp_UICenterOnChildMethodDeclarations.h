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

// UICenterOnChild
struct UICenterOnChild_t248;
// UnityEngine.GameObject
struct GameObject_t24;
// UnityEngine.Transform
struct Transform_t9;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UICenterOnChild::.ctor()
extern "C" void UICenterOnChild__ctor_m1122 (UICenterOnChild_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICenterOnChild::get_centeredObject()
extern "C" GameObject_t24 * UICenterOnChild_get_centeredObject_m1123 (UICenterOnChild_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::Start()
extern "C" void UICenterOnChild_Start_m1124 (UICenterOnChild_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::OnEnable()
extern "C" void UICenterOnChild_OnEnable_m1125 (UICenterOnChild_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::OnDisable()
extern "C" void UICenterOnChild_OnDisable_m1126 (UICenterOnChild_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::OnDragFinished()
extern "C" void UICenterOnChild_OnDragFinished_m1127 (UICenterOnChild_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::OnValidate()
extern "C" void UICenterOnChild_OnValidate_m1128 (UICenterOnChild_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::Recenter()
extern "C" void UICenterOnChild_Recenter_m1129 (UICenterOnChild_t248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::CenterOn(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void UICenterOnChild_CenterOn_m1130 (UICenterOnChild_t248 * __this, Transform_t9 * ___target, Vector3_t34  ___panelCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild::CenterOn(UnityEngine.Transform)
extern "C" void UICenterOnChild_CenterOn_m1131 (UICenterOnChild_t248 * __this, Transform_t9 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
