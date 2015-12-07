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

// UIGrid
struct UIGrid_t259;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t20;
// UnityEngine.Transform
struct Transform_t9;

#include "codegen/il2cpp-codegen.h"

// System.Void UIGrid::.ctor()
extern "C" void UIGrid__ctor_m1224 (UIGrid_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::set_repositionNow(System.Boolean)
extern "C" void UIGrid_set_repositionNow_m1225 (UIGrid_t259 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> UIGrid::GetChildList()
extern "C" List_1_t20 * UIGrid_GetChildList_m1226 (UIGrid_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIGrid::GetChild(System.Int32)
extern "C" Transform_t9 * UIGrid_GetChild_m1227 (UIGrid_t259 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::GetIndex(UnityEngine.Transform)
extern "C" int32_t UIGrid_GetIndex_m1228 (UIGrid_t259 * __this, Transform_t9 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::AddChild(UnityEngine.Transform)
extern "C" void UIGrid_AddChild_m1229 (UIGrid_t259 * __this, Transform_t9 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::AddChild(UnityEngine.Transform,System.Boolean)
extern "C" void UIGrid_AddChild_m1230 (UIGrid_t259 * __this, Transform_t9 * ___trans, bool ___sort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGrid::RemoveChild(UnityEngine.Transform)
extern "C" bool UIGrid_RemoveChild_m1231 (UIGrid_t259 * __this, Transform_t9 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Init()
extern "C" void UIGrid_Init_m1232 (UIGrid_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Start()
extern "C" void UIGrid_Start_m1233 (UIGrid_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Update()
extern "C" void UIGrid_Update_m1234 (UIGrid_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::OnValidate()
extern "C" void UIGrid_OnValidate_m1235 (UIGrid_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortByName(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t UIGrid_SortByName_m1236 (Object_t * __this /* static, unused */, Transform_t9 * ___a, Transform_t9 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortHorizontal(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t UIGrid_SortHorizontal_m1237 (Object_t * __this /* static, unused */, Transform_t9 * ___a, Transform_t9 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortVertical(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t UIGrid_SortVertical_m1238 (Object_t * __this /* static, unused */, Transform_t9 * ___a, Transform_t9 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Sort(System.Collections.Generic.List`1<UnityEngine.Transform>)
extern "C" void UIGrid_Sort_m1239 (UIGrid_t259 * __this, List_1_t20 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Reposition()
extern "C" void UIGrid_Reposition_m1240 (UIGrid_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::ConstrainWithinPanel()
extern "C" void UIGrid_ConstrainWithinPanel_m1241 (UIGrid_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::ResetPosition(System.Collections.Generic.List`1<UnityEngine.Transform>)
extern "C" void UIGrid_ResetPosition_m1242 (UIGrid_t259 * __this, List_1_t20 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
