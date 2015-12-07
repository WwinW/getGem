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

// UICamera
struct UICamera_t449;
// UnityEngine.GameObject
struct GameObject_t24;
// UnityEngine.Camera
struct Camera_t171;
// UnityEngine.Rigidbody
struct Rigidbody_t105;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t523;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UICamera/MouseOrTouch
struct MouseOrTouch_t262;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry.h"
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UICamera::.ctor()
extern "C" void UICamera__ctor_m2389 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::.cctor()
extern "C" void UICamera__cctor_m2390 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_stickyPress()
extern "C" bool UICamera_get_stickyPress_m2391 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UICamera::get_currentRay()
extern "C" Ray_t119  UICamera_get_currentRay_m2392 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_genericEventHandler()
extern "C" GameObject_t24 * UICamera_get_genericEventHandler_m2393 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_genericEventHandler(UnityEngine.GameObject)
extern "C" void UICamera_set_genericEventHandler_m2394 (Object_t * __this /* static, unused */, GameObject_t24 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_handlesEvents()
extern "C" bool UICamera_get_handlesEvents_m2395 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_cachedCamera()
extern "C" Camera_t171 * UICamera_get_cachedCamera_m2396 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_isOverUI()
extern "C" bool UICamera_get_isOverUI_m2397 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_selectedObject()
extern "C" GameObject_t24 * UICamera_get_selectedObject_m2398 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_selectedObject(UnityEngine.GameObject)
extern "C" void UICamera_set_selectedObject_m2399 (Object_t * __this /* static, unused */, GameObject_t24 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsPressed(UnityEngine.GameObject)
extern "C" bool UICamera_IsPressed_m2400 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_touchCount()
extern "C" int32_t UICamera_get_touchCount_m2401 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_dragCount()
extern "C" int32_t UICamera_get_dragCount_m2402 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_mainCamera()
extern "C" Camera_t171 * UICamera_get_mainCamera_m2403 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::get_eventHandler()
extern "C" UICamera_t449 * UICamera_get_eventHandler_m2404 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::CompareFunc(UICamera,UICamera)
extern "C" int32_t UICamera_CompareFunc_m2405 (Object_t * __this /* static, unused */, UICamera_t449 * ___a, UICamera_t449 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UICamera::FindRootRigidbody(UnityEngine.Transform)
extern "C" Rigidbody_t105 * UICamera_FindRootRigidbody_m2406 (Object_t * __this /* static, unused */, Transform_t9 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UICamera::FindRootRigidbody2D(UnityEngine.Transform)
extern "C" Rigidbody2D_t523 * UICamera_FindRootRigidbody2D_m2407 (Object_t * __this /* static, unused */, Transform_t9 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::Raycast(UnityEngine.Vector3)
extern "C" bool UICamera_Raycast_m2408 (Object_t * __this /* static, unused */, Vector3_t34  ___inPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UnityEngine.Vector3,UnityEngine.GameObject)
extern "C" bool UICamera_IsVisible_m2409 (Object_t * __this /* static, unused */, Vector3_t34  ___worldPoint, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UICamera/DepthEntry&)
extern "C" bool UICamera_IsVisible_m2410 (Object_t * __this /* static, unused */, DepthEntry_t434 * ___de, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsHighlighted(UnityEngine.GameObject)
extern "C" bool UICamera_IsHighlighted_m2411 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::FindCameraForLayer(System.Int32)
extern "C" UICamera_t449 * UICamera_FindCameraForLayer_m2412 (Object_t * __this /* static, unused */, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C" int32_t UICamera_GetDirection_m2413 (Object_t * __this /* static, unused */, int32_t ___up, int32_t ___down, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C" int32_t UICamera_GetDirection_m2414 (Object_t * __this /* static, unused */, int32_t ___up0, int32_t ___up1, int32_t ___down0, int32_t ___down1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(System.String)
extern "C" int32_t UICamera_GetDirection_m2415 (Object_t * __this /* static, unused */, String_t* ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Notify(UnityEngine.GameObject,System.String,System.Object)
extern "C" void UICamera_Notify_m2416 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, String_t* ___funcName, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::GetMouse(System.Int32)
extern "C" MouseOrTouch_t262 * UICamera_GetMouse_m2417 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::GetTouch(System.Int32)
extern "C" MouseOrTouch_t262 * UICamera_GetTouch_m2418 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::RemoveTouch(System.Int32)
extern "C" void UICamera_RemoveTouch_m2419 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Awake()
extern "C" void UICamera_Awake_m2420 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnEnable()
extern "C" void UICamera_OnEnable_m2421 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnDisable()
extern "C" void UICamera_OnDisable_m2422 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Start()
extern "C" void UICamera_Start_m2423 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Update()
extern "C" void UICamera_Update_m2424 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::LateUpdate()
extern "C" void UICamera_LateUpdate_m2425 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessMouse()
extern "C" void UICamera_ProcessMouse_m2426 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouches()
extern "C" void UICamera_ProcessTouches_m2427 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessFakeTouches()
extern "C" void UICamera_ProcessFakeTouches_m2428 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessOthers()
extern "C" void UICamera_ProcessOthers_m2429 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessPress(System.Boolean,System.Single,System.Single)
extern "C" void UICamera_ProcessPress_m2430 (UICamera_t449 * __this, bool ___pressed, float ___click, float ___drag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessRelease(System.Boolean,System.Single)
extern "C" void UICamera_ProcessRelease_m2431 (UICamera_t449 * __this, bool ___isMouse, float ___drag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouch(System.Boolean,System.Boolean)
extern "C" void UICamera_ProcessTouch_m2432 (UICamera_t449 * __this, bool ___pressed, bool ___released, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ShowTooltip(System.Boolean)
extern "C" void UICamera_ShowTooltip_m2433 (UICamera_t449 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnApplicationPause()
extern "C" void UICamera_OnApplicationPause_m2434 (UICamera_t449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::<Raycast>m__10(UICamera/DepthEntry,UICamera/DepthEntry)
extern "C" int32_t UICamera_U3CRaycastU3Em__10_m2435 (Object_t * __this /* static, unused */, DepthEntry_t434  ___r1, DepthEntry_t434  ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::<Raycast>m__11(UICamera/DepthEntry,UICamera/DepthEntry)
extern "C" int32_t UICamera_U3CRaycastU3Em__11_m2436 (Object_t * __this /* static, unused */, DepthEntry_t434  ___r1, DepthEntry_t434  ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
