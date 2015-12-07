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

// UIScrollView
struct UIScrollView_t230;
// UIPanel
struct UIPanel_t266;
// UIProgressBar
struct UIProgressBar_t221;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIScrollView::.ctor()
extern "C" void UIScrollView__ctor_m1423 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::.cctor()
extern "C" void UIScrollView__cctor_m1424 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIScrollView::get_panel()
extern "C" UIPanel_t266 * UIScrollView_get_panel_m1425 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_isDragging()
extern "C" bool UIScrollView_get_isDragging_m1426 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIScrollView::get_bounds()
extern "C" Bounds_t269  UIScrollView_get_bounds_m1427 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_canMoveHorizontally()
extern "C" bool UIScrollView_get_canMoveHorizontally_m1428 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_canMoveVertically()
extern "C" bool UIScrollView_get_canMoveVertically_m1429 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_shouldMoveHorizontally()
extern "C" bool UIScrollView_get_shouldMoveHorizontally_m1430 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_shouldMoveVertically()
extern "C" bool UIScrollView_get_shouldMoveVertically_m1431 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::get_shouldMove()
extern "C" bool UIScrollView_get_shouldMove_m1432 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIScrollView::get_currentMomentum()
extern "C" Vector3_t34  UIScrollView_get_currentMomentum_m1433 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::set_currentMomentum(UnityEngine.Vector3)
extern "C" void UIScrollView_set_currentMomentum_m1434 (UIScrollView_t230 * __this, Vector3_t34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Awake()
extern "C" void UIScrollView_Awake_m1435 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnEnable()
extern "C" void UIScrollView_OnEnable_m1436 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Start()
extern "C" void UIScrollView_Start_m1437 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::CheckScrollbars()
extern "C" void UIScrollView_CheckScrollbars_m1438 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnDisable()
extern "C" void UIScrollView_OnDisable_m1439 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::RestrictWithinBounds(System.Boolean)
extern "C" bool UIScrollView_RestrictWithinBounds_m1440 (UIScrollView_t230 * __this, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollView::RestrictWithinBounds(System.Boolean,System.Boolean,System.Boolean)
extern "C" bool UIScrollView_RestrictWithinBounds_m1441 (UIScrollView_t230 * __this, bool ___instant, bool ___horizontal, bool ___vertical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::DisableSpring()
extern "C" void UIScrollView_DisableSpring_m1442 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdateScrollbars()
extern "C" void UIScrollView_UpdateScrollbars_m1443 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdateScrollbars(System.Boolean)
extern "C" void UIScrollView_UpdateScrollbars_m1444 (UIScrollView_t230 * __this, bool ___recalculateBounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdateScrollbars(UIProgressBar,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" void UIScrollView_UpdateScrollbars_m1445 (UIScrollView_t230 * __this, UIProgressBar_t221 * ___slider, float ___contentMin, float ___contentMax, float ___contentSize, float ___viewSize, bool ___inverted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::SetDragAmount(System.Single,System.Single,System.Boolean)
extern "C" void UIScrollView_SetDragAmount_m1446 (UIScrollView_t230 * __this, float ___x, float ___y, bool ___updateScrollbars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::InvalidateBounds()
extern "C" void UIScrollView_InvalidateBounds_m1447 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::ResetPosition()
extern "C" void UIScrollView_ResetPosition_m1448 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::UpdatePosition()
extern "C" void UIScrollView_UpdatePosition_m1449 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::OnScrollBar()
extern "C" void UIScrollView_OnScrollBar_m1450 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::MoveRelative(UnityEngine.Vector3)
extern "C" void UIScrollView_MoveRelative_m1451 (UIScrollView_t230 * __this, Vector3_t34  ___relative, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::MoveAbsolute(UnityEngine.Vector3)
extern "C" void UIScrollView_MoveAbsolute_m1452 (UIScrollView_t230 * __this, Vector3_t34  ___absolute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Press(System.Boolean)
extern "C" void UIScrollView_Press_m1453 (UIScrollView_t230 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Drag()
extern "C" void UIScrollView_Drag_m1454 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::Scroll(System.Single)
extern "C" void UIScrollView_Scroll_m1455 (UIScrollView_t230 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView::LateUpdate()
extern "C" void UIScrollView_LateUpdate_m1456 (UIScrollView_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
