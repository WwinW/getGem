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

// UIDragObject
struct UIDragObject_t265;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIDragObject::.ctor()
extern "C" void UIDragObject__ctor_m1164 (UIDragObject_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDragObject::get_dragMovement()
extern "C" Vector3_t34  UIDragObject_get_dragMovement_m1165 (UIDragObject_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::set_dragMovement(UnityEngine.Vector3)
extern "C" void UIDragObject_set_dragMovement_m1166 (UIDragObject_t265 * __this, Vector3_t34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnEnable()
extern "C" void UIDragObject_OnEnable_m1167 (UIDragObject_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnDisable()
extern "C" void UIDragObject_OnDisable_m1168 (UIDragObject_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::FindPanel()
extern "C" void UIDragObject_FindPanel_m1169 (UIDragObject_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::UpdateBounds()
extern "C" void UIDragObject_UpdateBounds_m1170 (UIDragObject_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnPress(System.Boolean)
extern "C" void UIDragObject_OnPress_m1171 (UIDragObject_t265 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnDrag(UnityEngine.Vector2)
extern "C" void UIDragObject_OnDrag_m1172 (UIDragObject_t265 * __this, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::Move(UnityEngine.Vector3)
extern "C" void UIDragObject_Move_m1173 (UIDragObject_t265 * __this, Vector3_t34  ___worldDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::LateUpdate()
extern "C" void UIDragObject_LateUpdate_m1174 (UIDragObject_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::CancelMovement()
extern "C" void UIDragObject_CancelMovement_m1175 (UIDragObject_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::CancelSpring()
extern "C" void UIDragObject_CancelSpring_m1176 (UIDragObject_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnScroll(System.Single)
extern "C" void UIDragObject_OnScroll_m1177 (UIDragObject_t265 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
