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

// UIRoot
struct UIRoot_t258;
// UnityEngine.GameObject
struct GameObject_t24;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIRoot_Constraint.h"
#include "AssemblyU2DCSharp_UIRoot_Scaling.h"

// System.Void UIRoot::.ctor()
extern "C" void UIRoot__ctor_m2738 (UIRoot_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::.cctor()
extern "C" void UIRoot__cctor_m2739 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRoot/Constraint UIRoot::get_constraint()
extern "C" int32_t UIRoot_get_constraint_m2740 (UIRoot_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRoot/Scaling UIRoot::get_activeScaling()
extern "C" int32_t UIRoot_get_activeScaling_m2741 (UIRoot_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIRoot::get_activeHeight()
extern "C" int32_t UIRoot_get_activeHeight_m2742 (UIRoot_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::get_pixelSizeAdjustment()
extern "C" float UIRoot_get_pixelSizeAdjustment_m2743 (UIRoot_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::GetPixelSizeAdjustment(UnityEngine.GameObject)
extern "C" float UIRoot_GetPixelSizeAdjustment_m2744 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::GetPixelSizeAdjustment(System.Int32)
extern "C" float UIRoot_GetPixelSizeAdjustment_m2745 (UIRoot_t258 * __this, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Awake()
extern "C" void UIRoot_Awake_m2746 (UIRoot_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::OnEnable()
extern "C" void UIRoot_OnEnable_m2747 (UIRoot_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::OnDisable()
extern "C" void UIRoot_OnDisable_m2748 (UIRoot_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Start()
extern "C" void UIRoot_Start_m2749 (UIRoot_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Update()
extern "C" void UIRoot_Update_m2750 (UIRoot_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Broadcast(System.String)
extern "C" void UIRoot_Broadcast_m2751 (Object_t * __this /* static, unused */, String_t* ___funcName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Broadcast(System.String,System.Object)
extern "C" void UIRoot_Broadcast_m2752 (Object_t * __this /* static, unused */, String_t* ___funcName, Object_t * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
