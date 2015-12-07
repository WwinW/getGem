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

// UISlider
struct UISlider_t305;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UISlider::.ctor()
extern "C" void UISlider__ctor_m1457 (UISlider_t305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISlider::get_sliderValue()
extern "C" float UISlider_get_sliderValue_m1458 (UISlider_t305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_sliderValue(System.Single)
extern "C" void UISlider_set_sliderValue_m1459 (UISlider_t305 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISlider::get_inverted()
extern "C" bool UISlider_get_inverted_m1460 (UISlider_t305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_inverted(System.Boolean)
extern "C" void UISlider_set_inverted_m1461 (UISlider_t305 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Upgrade()
extern "C" void UISlider_Upgrade_m1462 (UISlider_t305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnStart()
extern "C" void UISlider_OnStart_m1463 (UISlider_t305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPressBackground(UnityEngine.GameObject,System.Boolean)
extern "C" void UISlider_OnPressBackground_m1464 (UISlider_t305 * __this, GameObject_t24 * ___go, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDragBackground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void UISlider_OnDragBackground_m1465 (UISlider_t305 * __this, GameObject_t24 * ___go, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPressForeground(UnityEngine.GameObject,System.Boolean)
extern "C" void UISlider_OnPressForeground_m1466 (UISlider_t305 * __this, GameObject_t24 * ___go, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDragForeground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void UISlider_OnDragForeground_m1467 (UISlider_t305 * __this, GameObject_t24 * ___go, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnKey(UnityEngine.KeyCode)
extern "C" void UISlider_OnKey_m1468 (UISlider_t305 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
