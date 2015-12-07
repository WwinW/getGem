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

// UITextList
struct UITextList_t196;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UITextList::.ctor()
extern "C" void UITextList__ctor_m2804 (UITextList_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITextList::get_isValid()
extern "C" bool UITextList_get_isValid_m2805 (UITextList_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITextList::get_scrollValue()
extern "C" float UITextList_get_scrollValue_m2806 (UITextList_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::set_scrollValue(System.Single)
extern "C" void UITextList_set_scrollValue_m2807 (UITextList_t196 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITextList::get_lineHeight()
extern "C" float UITextList_get_lineHeight_m2808 (UITextList_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UITextList::get_scrollHeight()
extern "C" int32_t UITextList_get_scrollHeight_m2809 (UITextList_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Clear()
extern "C" void UITextList_Clear_m2810 (UITextList_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Start()
extern "C" void UITextList_Start_m2811 (UITextList_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Update()
extern "C" void UITextList_Update_m2812 (UITextList_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnScroll(System.Single)
extern "C" void UITextList_OnScroll_m2813 (UITextList_t196 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnDrag(UnityEngine.Vector2)
extern "C" void UITextList_OnDrag_m2814 (UITextList_t196 * __this, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnScrollBar()
extern "C" void UITextList_OnScrollBar_m2815 (UITextList_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Add(System.String)
extern "C" void UITextList_Add_m2816 (UITextList_t196 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Add(System.String,System.Boolean)
extern "C" void UITextList_Add_m2817 (UITextList_t196 * __this, String_t* ___text, bool ___updateVisible, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Rebuild()
extern "C" void UITextList_Rebuild_m2818 (UITextList_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::UpdateVisibleText()
extern "C" void UITextList_UpdateVisibleText_m2819 (UITextList_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
