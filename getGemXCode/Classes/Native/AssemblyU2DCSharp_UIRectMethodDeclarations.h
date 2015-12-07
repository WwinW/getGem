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

// UIRect
struct UIRect_t267;
// UnityEngine.GameObject
struct GameObject_t24;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.Camera
struct Camera_t171;
// UIRoot
struct UIRoot_t258;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;
// UIRect/AnchorPoint
struct AnchorPoint_t392;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIRect::.ctor()
extern "C" void UIRect__ctor_m1997 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::.cctor()
extern "C" void UIRect__cctor_m1998 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIRect::get_cachedGameObject()
extern "C" GameObject_t24 * UIRect_get_cachedGameObject_m1999 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIRect::get_cachedTransform()
extern "C" Transform_t9 * UIRect_get_cachedTransform_m2000 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UIRect::get_anchorCamera()
extern "C" Camera_t171 * UIRect_get_anchorCamera_m2001 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isFullyAnchored()
extern "C" bool UIRect_get_isFullyAnchored_m2002 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isAnchoredHorizontally()
extern "C" bool UIRect_get_isAnchoredHorizontally_m2003 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isAnchoredVertically()
extern "C" bool UIRect_get_isAnchoredVertically_m2004 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_canBeAnchored()
extern "C" bool UIRect_get_canBeAnchored_m2005 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRect UIRect::get_parent()
extern "C" UIRect_t267 * UIRect_get_parent_m2006 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIRoot UIRect::get_root()
extern "C" UIRoot_t258 * UIRect_get_root_m2007 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIRect::get_isAnchored()
extern "C" bool UIRect_get_isAnchored_m2008 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRect::get_cameraRayDistance()
extern "C" float UIRect_get_cameraRayDistance_m2009 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::Invalidate(System.Boolean)
extern "C" void UIRect_Invalidate_m2010 (UIRect_t267 * __this, bool ___includeChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIRect::GetSides(UnityEngine.Transform)
extern "C" Vector3U5BU5D_t36* UIRect_GetSides_m2011 (UIRect_t267 * __this, Transform_t9 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIRect::GetLocalPos(UIRect/AnchorPoint,UnityEngine.Transform)
extern "C" Vector3_t34  UIRect_GetLocalPos_m2012 (UIRect_t267 * __this, AnchorPoint_t392 * ___ac, Transform_t9 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnEnable()
extern "C" void UIRect_OnEnable_m2013 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnInit()
extern "C" void UIRect_OnInit_m2014 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnDisable()
extern "C" void UIRect_OnDisable_m2015 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::Start()
extern "C" void UIRect_Start_m2016 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::Update()
extern "C" void UIRect_Update_m2017 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::UpdateAnchors()
extern "C" void UIRect_UpdateAnchors_m2018 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::SetAnchor(UnityEngine.Transform)
extern "C" void UIRect_SetAnchor_m2019 (UIRect_t267 * __this, Transform_t9 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::SetAnchor(UnityEngine.GameObject)
extern "C" void UIRect_SetAnchor_m2020 (UIRect_t267 * __this, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::SetAnchor(UnityEngine.GameObject,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void UIRect_SetAnchor_m2021 (UIRect_t267 * __this, GameObject_t24 * ___go, int32_t ___left, int32_t ___bottom, int32_t ___right, int32_t ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::ResetAnchors()
extern "C" void UIRect_ResetAnchors_m2022 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::ResetAndUpdateAnchors()
extern "C" void UIRect_ResetAndUpdateAnchors_m2023 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::FindCameraFor(UIRect/AnchorPoint)
extern "C" void UIRect_FindCameraFor_m2024 (UIRect_t267 * __this, AnchorPoint_t392 * ___ap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::ParentHasChanged()
extern "C" void UIRect_ParentHasChanged_m2025 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect::OnUpdate()
extern "C" void UIRect_OnUpdate_m2026 (UIRect_t267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
