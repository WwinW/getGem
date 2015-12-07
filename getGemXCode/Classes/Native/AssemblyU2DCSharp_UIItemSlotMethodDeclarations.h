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

// UIItemSlot
struct UIItemSlot_t175;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIItemSlot::.ctor()
extern "C" void UIItemSlot__ctor_m921 (UIItemSlot_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemSlot::OnTooltip(System.Boolean)
extern "C" void UIItemSlot_OnTooltip_m922 (UIItemSlot_t175 * __this, bool ___show, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemSlot::OnClick()
extern "C" void UIItemSlot_OnClick_m923 (UIItemSlot_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemSlot::OnDrag(UnityEngine.Vector2)
extern "C" void UIItemSlot_OnDrag_m924 (UIItemSlot_t175 * __this, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemSlot::OnDrop(UnityEngine.GameObject)
extern "C" void UIItemSlot_OnDrop_m925 (UIItemSlot_t175 * __this, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemSlot::UpdateCursor()
extern "C" void UIItemSlot_UpdateCursor_m926 (UIItemSlot_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemSlot::Update()
extern "C" void UIItemSlot_Update_m927 (UIItemSlot_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
