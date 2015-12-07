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

// UIKeyNavigation
struct UIKeyNavigation_t241;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UIKeyNavigation::.ctor()
extern "C" void UIKeyNavigation__ctor_m1259 (UIKeyNavigation_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::.cctor()
extern "C" void UIKeyNavigation__cctor_m1260 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnEnable()
extern "C" void UIKeyNavigation_OnEnable_m1261 (UIKeyNavigation_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnDisable()
extern "C" void UIKeyNavigation_OnDisable_m1262 (UIKeyNavigation_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::GetLeft()
extern "C" GameObject_t24 * UIKeyNavigation_GetLeft_m1263 (UIKeyNavigation_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::GetRight()
extern "C" GameObject_t24 * UIKeyNavigation_GetRight_m1264 (UIKeyNavigation_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::GetUp()
extern "C" GameObject_t24 * UIKeyNavigation_GetUp_m1265 (UIKeyNavigation_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::GetDown()
extern "C" GameObject_t24 * UIKeyNavigation_GetDown_m1266 (UIKeyNavigation_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIKeyNavigation::Get(UnityEngine.Vector3,System.Boolean)
extern "C" GameObject_t24 * UIKeyNavigation_Get_m1267 (UIKeyNavigation_t241 * __this, Vector3_t34  ___myDir, bool ___horizontal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIKeyNavigation::GetCenter(UnityEngine.GameObject)
extern "C" Vector3_t34  UIKeyNavigation_GetCenter_m1268 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnKey(UnityEngine.KeyCode)
extern "C" void UIKeyNavigation_OnKey_m1269 (UIKeyNavigation_t241 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIKeyNavigation::OnClick()
extern "C" void UIKeyNavigation_OnClick_m1270 (UIKeyNavigation_t241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
