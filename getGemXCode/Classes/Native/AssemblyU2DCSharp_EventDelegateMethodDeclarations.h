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

// EventDelegate
struct EventDelegate_t340;
// EventDelegate/Callback
struct Callback_t227;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t6;
// System.String
struct String_t;
// EventDelegate/Parameter[]
struct ParameterU5BU5D_t341;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t231;

#include "codegen/il2cpp-codegen.h"

// System.Void EventDelegate::.ctor()
extern "C" void EventDelegate__ctor_m1588 (EventDelegate_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.ctor(EventDelegate/Callback)
extern "C" void EventDelegate__ctor_m1589 (EventDelegate_t340 * __this, Callback_t227 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.ctor(UnityEngine.MonoBehaviour,System.String)
extern "C" void EventDelegate__ctor_m1590 (EventDelegate_t340 * __this, MonoBehaviour_t6 * ___target, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.cctor()
extern "C" void EventDelegate__cctor_m1591 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MonoBehaviour EventDelegate::get_target()
extern "C" MonoBehaviour_t6 * EventDelegate_get_target_m1592 (EventDelegate_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::set_target(UnityEngine.MonoBehaviour)
extern "C" void EventDelegate_set_target_m1593 (EventDelegate_t340 * __this, MonoBehaviour_t6 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::get_methodName()
extern "C" String_t* EventDelegate_get_methodName_m1594 (EventDelegate_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::set_methodName(System.String)
extern "C" void EventDelegate_set_methodName_m1595 (EventDelegate_t340 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventDelegate/Parameter[] EventDelegate::get_parameters()
extern "C" ParameterU5BU5D_t341* EventDelegate_get_parameters_m1596 (EventDelegate_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::get_isValid()
extern "C" bool EventDelegate_get_isValid_m1597 (EventDelegate_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::get_isEnabled()
extern "C" bool EventDelegate_get_isEnabled_m1598 (EventDelegate_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::GetMethodName(EventDelegate/Callback)
extern "C" String_t* EventDelegate_GetMethodName_m1599 (Object_t * __this /* static, unused */, Callback_t227 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::IsValid(EventDelegate/Callback)
extern "C" bool EventDelegate_IsValid_m1600 (Object_t * __this /* static, unused */, Callback_t227 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Equals(System.Object)
extern "C" bool EventDelegate_Equals_m1601 (EventDelegate_t340 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EventDelegate::GetHashCode()
extern "C" int32_t EventDelegate_GetHashCode_m1602 (EventDelegate_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(EventDelegate/Callback)
extern "C" void EventDelegate_Set_m1603 (EventDelegate_t340 * __this, Callback_t227 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(UnityEngine.MonoBehaviour,System.String)
extern "C" void EventDelegate_Set_m1604 (EventDelegate_t340 * __this, MonoBehaviour_t6 * ___target, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Cache()
extern "C" void EventDelegate_Cache_m1605 (EventDelegate_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Execute()
extern "C" bool EventDelegate_Execute_m1606 (EventDelegate_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Clear()
extern "C" void EventDelegate_Clear_m1607 (EventDelegate_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::ToString()
extern "C" String_t* EventDelegate_ToString_m1608 (EventDelegate_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Execute(System.Collections.Generic.List`1<EventDelegate>)
extern "C" void EventDelegate_Execute_m1609 (Object_t * __this /* static, unused */, List_1_t231 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::IsValid(System.Collections.Generic.List`1<EventDelegate>)
extern "C" bool EventDelegate_IsValid_m1610 (Object_t * __this /* static, unused */, List_1_t231 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventDelegate EventDelegate::Set(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
extern "C" EventDelegate_t340 * EventDelegate_Set_m1611 (Object_t * __this /* static, unused */, List_1_t231 * ___list, Callback_t227 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(System.Collections.Generic.List`1<EventDelegate>,EventDelegate)
extern "C" void EventDelegate_Set_m1612 (Object_t * __this /* static, unused */, List_1_t231 * ___list, EventDelegate_t340 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventDelegate EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
extern "C" EventDelegate_t340 * EventDelegate_Add_m1613 (Object_t * __this /* static, unused */, List_1_t231 * ___list, Callback_t227 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventDelegate EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback,System.Boolean)
extern "C" EventDelegate_t340 * EventDelegate_Add_m1614 (Object_t * __this /* static, unused */, List_1_t231 * ___list, Callback_t227 * ___callback, bool ___oneShot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate)
extern "C" void EventDelegate_Add_m1615 (Object_t * __this /* static, unused */, List_1_t231 * ___list, EventDelegate_t340 * ___ev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate,System.Boolean)
extern "C" void EventDelegate_Add_m1616 (Object_t * __this /* static, unused */, List_1_t231 * ___list, EventDelegate_t340 * ___ev, bool ___oneShot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Remove(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
extern "C" bool EventDelegate_Remove_m1617 (Object_t * __this /* static, unused */, List_1_t231 * ___list, Callback_t227 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Remove(System.Collections.Generic.List`1<EventDelegate>,EventDelegate)
extern "C" bool EventDelegate_Remove_m1618 (Object_t * __this /* static, unused */, List_1_t231 * ___list, EventDelegate_t340 * ___ev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
