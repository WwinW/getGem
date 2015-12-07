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

// UIDragCamera
struct UIDragCamera_t251;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIDragCamera::.ctor()
extern "C" void UIDragCamera__ctor_m1134 (UIDragCamera_t251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::Awake()
extern "C" void UIDragCamera_Awake_m1135 (UIDragCamera_t251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::OnPress(System.Boolean)
extern "C" void UIDragCamera_OnPress_m1136 (UIDragCamera_t251 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::OnDrag(UnityEngine.Vector2)
extern "C" void UIDragCamera_OnDrag_m1137 (UIDragCamera_t251 * __this, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::OnScroll(System.Single)
extern "C" void UIDragCamera_OnScroll_m1138 (UIDragCamera_t251 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
