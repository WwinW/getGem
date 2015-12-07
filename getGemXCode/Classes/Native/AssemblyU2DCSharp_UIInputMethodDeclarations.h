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

// UIInput
struct UIInput_t197;
// System.String
struct String_t;
// UITexture
struct UITexture_t200;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIInput::.ctor()
extern "C" void UIInput__ctor_m2487 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::.cctor()
extern "C" void UIInput__cctor_m2488 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_defaultText()
extern "C" String_t* UIInput_get_defaultText_m2489 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_defaultText(System.String)
extern "C" void UIInput_set_defaultText_m2490 (UIInput_t197 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_inputShouldBeHidden()
extern "C" bool UIInput_get_inputShouldBeHidden_m2491 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_text()
extern "C" String_t* UIInput_get_text_m2492 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_text(System.String)
extern "C" void UIInput_set_text_m2493 (UIInput_t197 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_value()
extern "C" String_t* UIInput_get_value_m2494 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_value(System.String)
extern "C" void UIInput_set_value_m2495 (UIInput_t197 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_selected()
extern "C" bool UIInput_get_selected_m2496 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_selected(System.Boolean)
extern "C" void UIInput_set_selected_m2497 (UIInput_t197 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_isSelected()
extern "C" bool UIInput_get_isSelected_m2498 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_isSelected(System.Boolean)
extern "C" void UIInput_set_isSelected_m2499 (UIInput_t197 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::get_cursorPosition()
extern "C" int32_t UIInput_get_cursorPosition_m2500 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_cursorPosition(System.Int32)
extern "C" void UIInput_set_cursorPosition_m2501 (UIInput_t197 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::get_selectionStart()
extern "C" int32_t UIInput_get_selectionStart_m2502 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_selectionStart(System.Int32)
extern "C" void UIInput_set_selectionStart_m2503 (UIInput_t197 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::get_selectionEnd()
extern "C" int32_t UIInput_get_selectionEnd_m2504 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_selectionEnd(System.Int32)
extern "C" void UIInput_set_selectionEnd_m2505 (UIInput_t197 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UITexture UIInput::get_caret()
extern "C" UITexture_t200 * UIInput_get_caret_m2506 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::Validate(System.String)
extern "C" String_t* UIInput_Validate_m2507 (UIInput_t197 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Start()
extern "C" void UIInput_Start_m2508 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Init()
extern "C" void UIInput_Init_m2509 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::SaveToPlayerPrefs(System.String)
extern "C" void UIInput_SaveToPlayerPrefs_m2510 (UIInput_t197 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnSelect(System.Boolean)
extern "C" void UIInput_OnSelect_m2511 (UIInput_t197 * __this, bool ___isSelected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnSelectEvent()
extern "C" void UIInput_OnSelectEvent_m2512 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnDeselectEvent()
extern "C" void UIInput_OnDeselectEvent_m2513 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Update()
extern "C" void UIInput_Update_m2514 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::DoBackspace()
extern "C" void UIInput_DoBackspace_m2515 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Insert(System.String)
extern "C" void UIInput_Insert_m2516 (UIInput_t197 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::GetLeftText()
extern "C" String_t* UIInput_GetLeftText_m2517 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::GetRightText()
extern "C" String_t* UIInput_GetRightText_m2518 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::GetSelection()
extern "C" String_t* UIInput_GetSelection_m2519 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIInput::GetCharUnderMouse()
extern "C" int32_t UIInput_GetCharUnderMouse_m2520 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnPress(System.Boolean)
extern "C" void UIInput_OnPress_m2521 (UIInput_t197 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnDrag(UnityEngine.Vector2)
extern "C" void UIInput_OnDrag_m2522 (UIInput_t197 * __this, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnDisable()
extern "C" void UIInput_OnDisable_m2523 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Cleanup()
extern "C" void UIInput_Cleanup_m2524 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Submit()
extern "C" void UIInput_Submit_m2525 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::UpdateLabel()
extern "C" void UIInput_UpdateLabel_m2526 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::SetPivotToLeft()
extern "C" void UIInput_SetPivotToLeft_m2527 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::SetPivotToRight()
extern "C" void UIInput_SetPivotToRight_m2528 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::RestoreLabelPivot()
extern "C" void UIInput_RestoreLabelPivot_m2529 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput::Validate(System.String,System.Int32,System.Char)
extern "C" uint16_t UIInput_Validate_m2530 (UIInput_t197 * __this, String_t* ___text, int32_t ___pos, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::ExecuteOnChange()
extern "C" void UIInput_ExecuteOnChange_m2531 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::RemoveFocus()
extern "C" void UIInput_RemoveFocus_m2532 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::SaveValue()
extern "C" void UIInput_SaveValue_m2533 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::LoadValue()
extern "C" void UIInput_LoadValue_m2534 (UIInput_t197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
