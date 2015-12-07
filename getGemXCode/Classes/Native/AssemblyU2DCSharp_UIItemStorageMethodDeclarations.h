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

// UIItemStorage
struct UIItemStorage_t179;
// System.Collections.Generic.List`1<InvGameItem>
struct List_1_t180;
// InvGameItem
struct InvGameItem_t178;

#include "codegen/il2cpp-codegen.h"

// System.Void UIItemStorage::.ctor()
extern "C" void UIItemStorage__ctor_m928 (UIItemStorage_t179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<InvGameItem> UIItemStorage::get_items()
extern "C" List_1_t180 * UIItemStorage_get_items_m929 (UIItemStorage_t179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem UIItemStorage::GetItem(System.Int32)
extern "C" InvGameItem_t178 * UIItemStorage_GetItem_m930 (UIItemStorage_t179 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem UIItemStorage::Replace(System.Int32,InvGameItem)
extern "C" InvGameItem_t178 * UIItemStorage_Replace_m931 (UIItemStorage_t179 * __this, int32_t ___slot, InvGameItem_t178 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemStorage::Start()
extern "C" void UIItemStorage_Start_m932 (UIItemStorage_t179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
