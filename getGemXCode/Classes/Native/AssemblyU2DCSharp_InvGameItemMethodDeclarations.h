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

// InvGameItem
struct InvGameItem_t178;
// InvBaseItem
struct InvBaseItem_t184;
// System.String
struct String_t;
// System.Collections.Generic.List`1<InvStat>
struct List_1_t185;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void InvGameItem::.ctor(System.Int32)
extern "C" void InvGameItem__ctor_m958 (InvGameItem_t178 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvGameItem::.ctor(System.Int32,InvBaseItem)
extern "C" void InvGameItem__ctor_m959 (InvGameItem_t178 * __this, int32_t ___id, InvBaseItem_t184 * ___bi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvGameItem::get_baseItemID()
extern "C" int32_t InvGameItem_get_baseItemID_m960 (InvGameItem_t178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvGameItem::get_baseItem()
extern "C" InvBaseItem_t184 * InvGameItem_get_baseItem_m961 (InvGameItem_t178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InvGameItem::get_name()
extern "C" String_t* InvGameItem_get_name_m962 (InvGameItem_t178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InvGameItem::get_statMultiplier()
extern "C" float InvGameItem_get_statMultiplier_m963 (InvGameItem_t178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color InvGameItem::get_color()
extern "C" Color_t33  InvGameItem_get_color_m964 (InvGameItem_t178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<InvStat> InvGameItem::CalculateStats()
extern "C" List_1_t185 * InvGameItem_CalculateStats_m965 (InvGameItem_t178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
