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

// UIEventListener
struct UIEventListener_t389;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UIEventListener::.ctor()
extern "C" void UIEventListener__ctor_m1965 (UIEventListener_t389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnSubmit()
extern "C" void UIEventListener_OnSubmit_m1966 (UIEventListener_t389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnClick()
extern "C" void UIEventListener_OnClick_m1967 (UIEventListener_t389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDoubleClick()
extern "C" void UIEventListener_OnDoubleClick_m1968 (UIEventListener_t389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnHover(System.Boolean)
extern "C" void UIEventListener_OnHover_m1969 (UIEventListener_t389 * __this, bool ___isOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnPress(System.Boolean)
extern "C" void UIEventListener_OnPress_m1970 (UIEventListener_t389 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnSelect(System.Boolean)
extern "C" void UIEventListener_OnSelect_m1971 (UIEventListener_t389 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnScroll(System.Single)
extern "C" void UIEventListener_OnScroll_m1972 (UIEventListener_t389 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDragStart()
extern "C" void UIEventListener_OnDragStart_m1973 (UIEventListener_t389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDrag(UnityEngine.Vector2)
extern "C" void UIEventListener_OnDrag_m1974 (UIEventListener_t389 * __this, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDragOver()
extern "C" void UIEventListener_OnDragOver_m1975 (UIEventListener_t389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDragOut()
extern "C" void UIEventListener_OnDragOut_m1976 (UIEventListener_t389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDragEnd()
extern "C" void UIEventListener_OnDragEnd_m1977 (UIEventListener_t389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDrop(UnityEngine.GameObject)
extern "C" void UIEventListener_OnDrop_m1978 (UIEventListener_t389 * __this, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnKey(UnityEngine.KeyCode)
extern "C" void UIEventListener_OnKey_m1979 (UIEventListener_t389 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnTooltip(System.Boolean)
extern "C" void UIEventListener_OnTooltip_m1980 (UIEventListener_t389 * __this, bool ___show, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIEventListener UIEventListener::Get(UnityEngine.GameObject)
extern "C" UIEventListener_t389 * UIEventListener_Get_m1981 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
