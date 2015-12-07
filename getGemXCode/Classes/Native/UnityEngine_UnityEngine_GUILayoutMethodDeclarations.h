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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t96;
// UnityEngine.GUIContent
struct GUIContent_t564;
// UnityEngine.GUIStyle
struct GUIStyle_t992;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t998;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m538 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t96* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m6315 (Object_t * __this /* static, unused */, GUIContent_t564 * ___content, GUIStyle_t992 * ___style, GUILayoutOptionU5BU5D_t96* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Button_m540 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t96* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoButton_m6316 (Object_t * __this /* static, unused */, GUIContent_t564 * ___content, GUIStyle_t992 * ___style, GUILayoutOptionU5BU5D_t96* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m539 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t96* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m6317 (Object_t * __this /* static, unused */, GUIContent_t564 * ___content, GUIStyle_t992 * ___style, GUILayoutOptionU5BU5D_t96* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C" void GUILayout_EndHorizontal_m542 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t998 * GUILayout_Width_m6318 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t998 * GUILayout_Height_m6319 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
