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

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t993;
// UnityEngine.GUIStyle
struct GUIStyle_t992;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t96;
// UnityEngine.RectOffset
struct RectOffset_t779;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry__ctor_m6339 (GUILayoutEntry_t993 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t992 * ____style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutEntry__ctor_m6340 (GUILayoutEntry_t993 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t992 * ____style, GUILayoutOptionU5BU5D_t96* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern "C" void GUILayoutEntry__cctor_m6341 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" GUIStyle_t992 * GUILayoutEntry_get_style_m6342 (GUILayoutEntry_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_set_style_m6343 (GUILayoutEntry_t993 * __this, GUIStyle_t992 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern "C" RectOffset_t779 * GUILayoutEntry_get_margin_m6344 (GUILayoutEntry_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern "C" void GUILayoutEntry_CalcWidth_m6345 (GUILayoutEntry_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern "C" void GUILayoutEntry_CalcHeight_m6346 (GUILayoutEntry_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetHorizontal_m6347 (GUILayoutEntry_t993 * __this, float ___x, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutEntry_SetVertical_m6348 (GUILayoutEntry_t993 * __this, float ___y, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_ApplyStyleSettings_m6349 (GUILayoutEntry_t993 * __this, GUIStyle_t992 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutEntry_ApplyOptions_m6350 (GUILayoutEntry_t993 * __this, GUILayoutOptionU5BU5D_t96* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutEntry::ToString()
extern "C" String_t* GUILayoutEntry_ToString_m6351 (GUILayoutEntry_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
