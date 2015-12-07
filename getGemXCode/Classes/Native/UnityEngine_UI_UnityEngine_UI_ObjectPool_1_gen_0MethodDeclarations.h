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

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2598;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2600;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m18909_gshared (ObjectPool_1_t2598 * __this, UnityAction_1_t2600 * ___actionOnGet, UnityAction_1_t2600 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m18909(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2598 *, UnityAction_1_t2600 *, UnityAction_1_t2600 *, const MethodInfo*))ObjectPool_1__ctor_m18909_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m18911_gshared (ObjectPool_1_t2598 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m18911(__this, method) (( int32_t (*) (ObjectPool_1_t2598 *, const MethodInfo*))ObjectPool_1_get_countAll_m18911_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m18913_gshared (ObjectPool_1_t2598 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m18913(__this, ___value, method) (( void (*) (ObjectPool_1_t2598 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m18913_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m18915_gshared (ObjectPool_1_t2598 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m18915(__this, method) (( int32_t (*) (ObjectPool_1_t2598 *, const MethodInfo*))ObjectPool_1_get_countActive_m18915_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m18917_gshared (ObjectPool_1_t2598 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m18917(__this, method) (( int32_t (*) (ObjectPool_1_t2598 *, const MethodInfo*))ObjectPool_1_get_countInactive_m18917_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m18919_gshared (ObjectPool_1_t2598 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m18919(__this, method) (( Object_t * (*) (ObjectPool_1_t2598 *, const MethodInfo*))ObjectPool_1_Get_m18919_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m18921_gshared (ObjectPool_1_t2598 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m18921(__this, ___element, method) (( void (*) (ObjectPool_1_t2598 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m18921_gshared)(__this, ___element, method)
