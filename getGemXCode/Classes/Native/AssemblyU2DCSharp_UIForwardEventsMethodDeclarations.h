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

// UIForwardEvents
struct UIForwardEvents_t272;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIForwardEvents::.ctor()
extern "C" void UIForwardEvents__ctor_m1210 (UIForwardEvents_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnHover(System.Boolean)
extern "C" void UIForwardEvents_OnHover_m1211 (UIForwardEvents_t272 * __this, bool ___isOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnPress(System.Boolean)
extern "C" void UIForwardEvents_OnPress_m1212 (UIForwardEvents_t272 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnClick()
extern "C" void UIForwardEvents_OnClick_m1213 (UIForwardEvents_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnDoubleClick()
extern "C" void UIForwardEvents_OnDoubleClick_m1214 (UIForwardEvents_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnSelect(System.Boolean)
extern "C" void UIForwardEvents_OnSelect_m1215 (UIForwardEvents_t272 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnDrag(UnityEngine.Vector2)
extern "C" void UIForwardEvents_OnDrag_m1216 (UIForwardEvents_t272 * __this, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnDrop(UnityEngine.GameObject)
extern "C" void UIForwardEvents_OnDrop_m1217 (UIForwardEvents_t272 * __this, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnSubmit()
extern "C" void UIForwardEvents_OnSubmit_m1218 (UIForwardEvents_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnScroll(System.Single)
extern "C" void UIForwardEvents_OnScroll_m1219 (UIForwardEvents_t272 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
