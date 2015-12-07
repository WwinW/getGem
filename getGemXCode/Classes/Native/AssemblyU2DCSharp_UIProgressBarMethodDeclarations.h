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

// UIProgressBar
struct UIProgressBar_t221;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.Camera
struct Camera_t171;
// UIWidget
struct UIWidget_t176;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIProgressBar_FillDirection.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIProgressBar::.ctor()
extern "C" void UIProgressBar__ctor_m1378 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIProgressBar::get_cachedTransform()
extern "C" Transform_t9 * UIProgressBar_get_cachedTransform_m1379 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UIProgressBar::get_cachedCamera()
extern "C" Camera_t171 * UIProgressBar_get_cachedCamera_m1380 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget UIProgressBar::get_foregroundWidget()
extern "C" UIWidget_t176 * UIProgressBar_get_foregroundWidget_m1381 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_foregroundWidget(UIWidget)
extern "C" void UIProgressBar_set_foregroundWidget_m1382 (UIProgressBar_t221 * __this, UIWidget_t176 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget UIProgressBar::get_backgroundWidget()
extern "C" UIWidget_t176 * UIProgressBar_get_backgroundWidget_m1383 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_backgroundWidget(UIWidget)
extern "C" void UIProgressBar_set_backgroundWidget_m1384 (UIProgressBar_t221 * __this, UIWidget_t176 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIProgressBar/FillDirection UIProgressBar::get_fillDirection()
extern "C" int32_t UIProgressBar_get_fillDirection_m1385 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_fillDirection(UIProgressBar/FillDirection)
extern "C" void UIProgressBar_set_fillDirection_m1386 (UIProgressBar_t221 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::get_value()
extern "C" float UIProgressBar_get_value_m1387 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_value(System.Single)
extern "C" void UIProgressBar_set_value_m1388 (UIProgressBar_t221 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::get_alpha()
extern "C" float UIProgressBar_get_alpha_m1389 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::set_alpha(System.Single)
extern "C" void UIProgressBar_set_alpha_m1390 (UIProgressBar_t221 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIProgressBar::get_isHorizontal()
extern "C" bool UIProgressBar_get_isHorizontal_m1391 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIProgressBar::get_isInverted()
extern "C" bool UIProgressBar_get_isInverted_m1392 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::Start()
extern "C" void UIProgressBar_Start_m1393 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::Upgrade()
extern "C" void UIProgressBar_Upgrade_m1394 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::OnStart()
extern "C" void UIProgressBar_OnStart_m1395 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::Update()
extern "C" void UIProgressBar_Update_m1396 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::OnValidate()
extern "C" void UIProgressBar_OnValidate_m1397 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::ScreenToValue(UnityEngine.Vector2)
extern "C" float UIProgressBar_ScreenToValue_m1398 (UIProgressBar_t221 * __this, Vector2_t54  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIProgressBar::LocalToValue(UnityEngine.Vector2)
extern "C" float UIProgressBar_LocalToValue_m1399 (UIProgressBar_t221 * __this, Vector2_t54  ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::ForceUpdate()
extern "C" void UIProgressBar_ForceUpdate_m1400 (UIProgressBar_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar::SetThumbPosition(UnityEngine.Vector3)
extern "C" void UIProgressBar_SetThumbPosition_m1401 (UIProgressBar_t221 * __this, Vector3_t34  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
