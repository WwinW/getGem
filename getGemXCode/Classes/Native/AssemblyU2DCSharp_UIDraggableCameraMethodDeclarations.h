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

// UIDraggableCamera
struct UIDraggableCamera_t252;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIDraggableCamera::.ctor()
extern "C" void UIDraggableCamera__ctor_m1189 (UIDraggableCamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIDraggableCamera::get_currentMomentum()
extern "C" Vector2_t54  UIDraggableCamera_get_currentMomentum_m1190 (UIDraggableCamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::set_currentMomentum(UnityEngine.Vector2)
extern "C" void UIDraggableCamera_set_currentMomentum_m1191 (UIDraggableCamera_t252 * __this, Vector2_t54  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Start()
extern "C" void UIDraggableCamera_Start_m1192 (UIDraggableCamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDraggableCamera::CalculateConstrainOffset()
extern "C" Vector3_t34  UIDraggableCamera_CalculateConstrainOffset_m1193 (UIDraggableCamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggableCamera::ConstrainToBounds(System.Boolean)
extern "C" bool UIDraggableCamera_ConstrainToBounds_m1194 (UIDraggableCamera_t252 * __this, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Press(System.Boolean)
extern "C" void UIDraggableCamera_Press_m1195 (UIDraggableCamera_t252 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Drag(UnityEngine.Vector2)
extern "C" void UIDraggableCamera_Drag_m1196 (UIDraggableCamera_t252 * __this, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Scroll(System.Single)
extern "C" void UIDraggableCamera_Scroll_m1197 (UIDraggableCamera_t252 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Update()
extern "C" void UIDraggableCamera_Update_m1198 (UIDraggableCamera_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
