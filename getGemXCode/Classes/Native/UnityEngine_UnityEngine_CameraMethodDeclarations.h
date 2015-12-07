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

// UnityEngine.Camera
struct Camera_t171;
// UnityEngine.RenderTexture
struct RenderTexture_t908;
// UnityEngine.Camera[]
struct CameraU5BU5D_t557;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TransparencySortMode.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"

// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C" float Camera_get_fieldOfView_m3494 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C" void Camera_set_fieldOfView_m3495 (Camera_t171 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m3378 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
extern "C" void Camera_set_nearClipPlane_m3354 (Camera_t171 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m3379 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
extern "C" void Camera_set_farClipPlane_m3355 (Camera_t171 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C" float Camera_get_orthographicSize_m3380 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" void Camera_set_orthographicSize_m3357 (Camera_t171 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Camera::get_orthographic()
extern "C" bool Camera_get_orthographic_m2995 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern "C" void Camera_set_orthographic_m3356 (Camera_t171 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TransparencySortMode UnityEngine.Camera::get_transparencySortMode()
extern "C" int32_t Camera_get_transparencySortMode_m3562 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_transparencySortMode(UnityEngine.TransparencySortMode)
extern "C" void Camera_set_transparencySortMode_m3563 (Camera_t171 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m3347 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depth(System.Single)
extern "C" void Camera_set_depth_m3353 (Camera_t171 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m3318 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C" void Camera_set_cullingMask_m3348 (Camera_t171 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m5856 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_eventMask(System.Int32)
extern "C" void Camera_set_eventMask_m3564 (Camera_t171 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern "C" void Camera_set_backgroundColor_m3352 (Camera_t171 * __this, Color_t33  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_set_backgroundColor_m5857 (Camera_t171 * __this, Color_t33 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_rect()
extern "C" Rect_t55  Camera_get_rect_m3127 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern "C" void Camera_set_rect_m3647 (Camera_t171 * __this, Rect_t55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_rect_m5858 (Camera_t171 * __this, Rect_t55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_set_rect_m5859 (Camera_t171 * __this, Rect_t55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t55  Camera_get_pixelRect_m3517 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m5860 (Camera_t171 * __this, Rect_t55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t908 * Camera_get_targetTexture_m5861 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m3346 (Camera_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C" void Camera_set_clearFlags_m3351 (Camera_t171 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern "C" Vector3_t34  Camera_WorldToScreenPoint_m3162 (Camera_t171 * __this, Vector3_t34  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t34  Camera_INTERNAL_CALL_WorldToScreenPoint_m5862 (Object_t * __this /* static, unused */, Camera_t171 * ___self, Vector3_t34 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t34  Camera_WorldToViewportPoint_m3054 (Camera_t171 * __this, Vector3_t34  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t34  Camera_INTERNAL_CALL_WorldToViewportPoint_m5863 (Object_t * __this /* static, unused */, Camera_t171 * ___self, Vector3_t34 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t34  Camera_ViewportToWorldPoint_m2994 (Camera_t171 * __this, Vector3_t34  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ViewportToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t34  Camera_INTERNAL_CALL_ViewportToWorldPoint_m5864 (Object_t * __this /* static, unused */, Camera_t171 * ___self, Vector3_t34 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t34  Camera_ScreenToWorldPoint_m3132 (Camera_t171 * __this, Vector3_t34  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t34  Camera_INTERNAL_CALL_ScreenToWorldPoint_m5865 (Object_t * __this /* static, unused */, Camera_t171 * ___self, Vector3_t34 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t34  Camera_ScreenToViewportPoint_m3544 (Camera_t171 * __this, Vector3_t34  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t34  Camera_INTERNAL_CALL_ScreenToViewportPoint_m5866 (Object_t * __this /* static, unused */, Camera_t171 * ___self, Vector3_t34 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t119  Camera_ScreenPointToRay_m2934 (Camera_t171 * __this, Vector3_t34  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t119  Camera_INTERNAL_CALL_ScreenPointToRay_m5867 (Object_t * __this /* static, unused */, Camera_t171 * ___self, Vector3_t34 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t171 * Camera_get_main_m3313 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m3319 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m3320 (Object_t * __this /* static, unused */, CameraU5BU5D_t557* ___cameras, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C" void Camera_FireOnPreCull_m5868 (Object_t * __this /* static, unused */, Camera_t171 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPreRender_m5869 (Object_t * __this /* static, unused */, Camera_t171 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPostRender_m5870 (Object_t * __this /* static, unused */, Camera_t171 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t24 * Camera_RaycastTry_m5871 (Camera_t171 * __this, Ray_t119  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" GameObject_t24 * Camera_INTERNAL_CALL_RaycastTry_m5872 (Object_t * __this /* static, unused */, Camera_t171 * ___self, Ray_t119 * ___ray, float ___distance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t24 * Camera_RaycastTry2D_m5873 (Camera_t171 * __this, Ray_t119  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t24 * Camera_INTERNAL_CALL_RaycastTry2D_m5874 (Object_t * __this /* static, unused */, Camera_t171 * ___self, Ray_t119 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
