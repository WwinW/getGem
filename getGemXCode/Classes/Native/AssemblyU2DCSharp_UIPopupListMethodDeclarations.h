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

// UIPopupList
struct UIPopupList_t226;
// UnityEngine.Object
struct Object_t85;
struct Object_t85_marshaled;
// UIPopupList/LegacyEvent
struct LegacyEvent_t291;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UILabel
struct UILabel_t177;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// UnityEngine.GameObject
struct GameObject_t24;
// UIWidget
struct UIWidget_t176;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UIPopupList::.ctor()
extern "C" void UIPopupList__ctor_m1331 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UIPopupList::get_ambigiousFont()
extern "C" Object_t85 * UIPopupList_get_ambigiousFont_m1332 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_ambigiousFont(UnityEngine.Object)
extern "C" void UIPopupList_set_ambigiousFont_m1333 (UIPopupList_t226 * __this, Object_t85 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPopupList/LegacyEvent UIPopupList::get_onSelectionChange()
extern "C" LegacyEvent_t291 * UIPopupList_get_onSelectionChange_m1334 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_onSelectionChange(UIPopupList/LegacyEvent)
extern "C" void UIPopupList_set_onSelectionChange_m1335 (UIPopupList_t226 * __this, LegacyEvent_t291 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_isOpen()
extern "C" bool UIPopupList_get_isOpen_m1336 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPopupList::get_value()
extern "C" String_t* UIPopupList_get_value_m1337 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_value(System.String)
extern "C" void UIPopupList_set_value_m1338 (UIPopupList_t226 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UIPopupList::get_data()
extern "C" Object_t * UIPopupList_get_data_m1339 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPopupList::get_selection()
extern "C" String_t* UIPopupList_get_selection_m1340 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_selection(System.String)
extern "C" void UIPopupList_set_selection_m1341 (UIPopupList_t226 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_handleEvents()
extern "C" bool UIPopupList_get_handleEvents_m1342 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_handleEvents(System.Boolean)
extern "C" void UIPopupList_set_handleEvents_m1343 (UIPopupList_t226 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_isValid()
extern "C" bool UIPopupList_get_isValid_m1344 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPopupList::get_activeFontSize()
extern "C" int32_t UIPopupList_get_activeFontSize_m1345 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPopupList::get_activeFontScale()
extern "C" float UIPopupList_get_activeFontScale_m1346 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Clear()
extern "C" void UIPopupList_Clear_m1347 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AddItem(System.String)
extern "C" void UIPopupList_AddItem_m1348 (UIPopupList_t226 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AddItem(System.String,System.Object)
extern "C" void UIPopupList_AddItem_m1349 (UIPopupList_t226 * __this, String_t* ___text, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::TriggerCallbacks()
extern "C" void UIPopupList_TriggerCallbacks_m1350 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnEnable()
extern "C" void UIPopupList_OnEnable_m1351 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnValidate()
extern "C" void UIPopupList_OnValidate_m1352 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Start()
extern "C" void UIPopupList_Start_m1353 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnLocalize()
extern "C" void UIPopupList_OnLocalize_m1354 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Highlight(UILabel,System.Boolean)
extern "C" void UIPopupList_Highlight_m1355 (UIPopupList_t226 * __this, UILabel_t177 * ___lbl, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPopupList::GetHighlightPosition()
extern "C" Vector3_t34  UIPopupList_GetHighlightPosition_m1356 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIPopupList::UpdateTweenPosition()
extern "C" Object_t * UIPopupList_UpdateTweenPosition_m1357 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemHover(UnityEngine.GameObject,System.Boolean)
extern "C" void UIPopupList_OnItemHover_m1358 (UIPopupList_t226 * __this, GameObject_t24 * ___go, bool ___isOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Select(UILabel,System.Boolean)
extern "C" void UIPopupList_Select_m1359 (UIPopupList_t226 * __this, UILabel_t177 * ___lbl, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemPress(UnityEngine.GameObject,System.Boolean)
extern "C" void UIPopupList_OnItemPress_m1360 (UIPopupList_t226 * __this, GameObject_t24 * ___go, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemClick(UnityEngine.GameObject)
extern "C" void UIPopupList_OnItemClick_m1361 (UIPopupList_t226 * __this, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnKey(UnityEngine.KeyCode)
extern "C" void UIPopupList_OnKey_m1362 (UIPopupList_t226 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnDisable()
extern "C" void UIPopupList_OnDisable_m1363 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnSelect(System.Boolean)
extern "C" void UIPopupList_OnSelect_m1364 (UIPopupList_t226 * __this, bool ___isSelected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Close()
extern "C" void UIPopupList_Close_m1365 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateColor(UIWidget)
extern "C" void UIPopupList_AnimateColor_m1366 (UIPopupList_t226 * __this, UIWidget_t176 * ___widget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimatePosition(UIWidget,System.Boolean,System.Single)
extern "C" void UIPopupList_AnimatePosition_m1367 (UIPopupList_t226 * __this, UIWidget_t176 * ___widget, bool ___placeAbove, float ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateScale(UIWidget,System.Boolean,System.Single)
extern "C" void UIPopupList_AnimateScale_m1368 (UIPopupList_t226 * __this, UIWidget_t176 * ___widget, bool ___placeAbove, float ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Animate(UIWidget,System.Boolean,System.Single)
extern "C" void UIPopupList_Animate_m1369 (UIPopupList_t226 * __this, UIWidget_t176 * ___widget, bool ___placeAbove, float ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnClick()
extern "C" void UIPopupList_OnClick_m1370 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnDoubleClick()
extern "C" void UIPopupList_OnDoubleClick_m1371 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIPopupList::CloseIfUnselected()
extern "C" Object_t * UIPopupList_CloseIfUnselected_m1372 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Show()
extern "C" void UIPopupList_Show_m1373 (UIPopupList_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
