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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_0MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m5080(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t620 *, UnityAction_1_t621 *, UnityAction_1_t621 *, const MethodInfo*))ObjectPool_1__ctor_m18909_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m18910(__this, method) (( int32_t (*) (ObjectPool_1_t620 *, const MethodInfo*))ObjectPool_1_get_countAll_m18911_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m18912(__this, ___value, method) (( void (*) (ObjectPool_1_t620 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m18913_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m18914(__this, method) (( int32_t (*) (ObjectPool_1_t620 *, const MethodInfo*))ObjectPool_1_get_countActive_m18915_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m18916(__this, method) (( int32_t (*) (ObjectPool_1_t620 *, const MethodInfo*))ObjectPool_1_get_countInactive_m18917_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m18918(__this, method) (( List_1_t797 * (*) (ObjectPool_1_t620 *, const MethodInfo*))ObjectPool_1_Get_m18919_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m18920(__this, ___element, method) (( void (*) (ObjectPool_1_t620 *, List_1_t797 *, const MethodInfo*))ObjectPool_1_Release_m18921_gshared)(__this, ___element, method)
