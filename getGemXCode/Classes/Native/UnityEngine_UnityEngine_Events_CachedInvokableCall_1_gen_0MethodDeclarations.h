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

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t1120;
// UnityEngine.Object
struct Object_t85;
struct Object_t85_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t72;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m6774_gshared (CachedInvokableCall_1_t1120 * __this, Object_t85 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m6774(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t1120 *, Object_t85 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m6774_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m23791_gshared (CachedInvokableCall_1_t1120 * __this, ObjectU5BU5D_t72* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m23791(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t1120 *, ObjectU5BU5D_t72*, const MethodInfo*))CachedInvokableCall_1_Invoke_m23791_gshared)(__this, ___args, method)
