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

// UnityEngine.Component
struct Component_t109;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.GameObject
struct GameObject_t24;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t826;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m5936 (Component_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t9 * Component_get_transform_m475 (Component_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t24 * Component_get_gameObject_m468 (Component_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t109 * Component_GetComponent_m5448 (Component_t109 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m5937 (Component_t109 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t109 * Component_GetComponentInChildren_m5938 (Component_t109 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C" Component_t109 * Component_GetComponentInParent_m5939 (Component_t109 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m5940 (Component_t109 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m5238 (Component_t109 * __this, Type_t * ___type, List_1_t826 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C" String_t* Component_get_tag_m3462 (Component_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::set_tag(System.String)
extern "C" void Component_set_tag_m3463 (Component_t109 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m3637 (Component_t109 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m3021 (Component_t109 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
