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

// UIEventTrigger
struct UIEventTrigger_t271;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIEventTrigger::.ctor()
extern "C" void UIEventTrigger__ctor_m1199 (UIEventTrigger_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnHover(System.Boolean)
extern "C" void UIEventTrigger_OnHover_m1200 (UIEventTrigger_t271 * __this, bool ___isOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnPress(System.Boolean)
extern "C" void UIEventTrigger_OnPress_m1201 (UIEventTrigger_t271 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnSelect(System.Boolean)
extern "C" void UIEventTrigger_OnSelect_m1202 (UIEventTrigger_t271 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnClick()
extern "C" void UIEventTrigger_OnClick_m1203 (UIEventTrigger_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnDoubleClick()
extern "C" void UIEventTrigger_OnDoubleClick_m1204 (UIEventTrigger_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnDragStart()
extern "C" void UIEventTrigger_OnDragStart_m1205 (UIEventTrigger_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnDragEnd()
extern "C" void UIEventTrigger_OnDragEnd_m1206 (UIEventTrigger_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnDragOver(UnityEngine.GameObject)
extern "C" void UIEventTrigger_OnDragOver_m1207 (UIEventTrigger_t271 * __this, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnDragOut(UnityEngine.GameObject)
extern "C" void UIEventTrigger_OnDragOut_m1208 (UIEventTrigger_t271 * __this, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventTrigger::OnDrag(UnityEngine.Vector2)
extern "C" void UIEventTrigger_OnDrag_m1209 (UIEventTrigger_t271 * __this, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
