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

// NGUIDebug
struct NGUIDebug_t347;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t72;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void NGUIDebug::.ctor()
extern "C" void NGUIDebug__ctor_m1651 (NGUIDebug_t347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::.cctor()
extern "C" void NGUIDebug__cctor_m1652 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIDebug::get_debugRaycast()
extern "C" bool NGUIDebug_get_debugRaycast_m1653 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::set_debugRaycast(System.Boolean)
extern "C" void NGUIDebug_set_debugRaycast_m1654 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::CreateInstance()
extern "C" void NGUIDebug_CreateInstance_m1655 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::LogString(System.String)
extern "C" void NGUIDebug_LogString_m1656 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::Log(System.Object[])
extern "C" void NGUIDebug_Log_m1657 (Object_t * __this /* static, unused */, ObjectU5BU5D_t72* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::Clear()
extern "C" void NGUIDebug_Clear_m1658 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::DrawBounds(UnityEngine.Bounds)
extern "C" void NGUIDebug_DrawBounds_m1659 (Object_t * __this /* static, unused */, Bounds_t269  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::OnGUI()
extern "C" void NGUIDebug_OnGUI_m1660 (NGUIDebug_t347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
