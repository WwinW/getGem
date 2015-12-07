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

// BetterList`1/CompareFunc<System.Single>
struct CompareFunc_t2493;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void BetterList`1/CompareFunc<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m17435_gshared (CompareFunc_t2493 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m17435(__this, ___object, ___method, method) (( void (*) (CompareFunc_t2493 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m17435_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<System.Single>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m17436_gshared (CompareFunc_t2493 * __this, float ___left, float ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m17436(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t2493 *, float, float, const MethodInfo*))CompareFunc_Invoke_m17436_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<System.Single>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m17437_gshared (CompareFunc_t2493 * __this, float ___left, float ___right, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m17437(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t2493 *, float, float, AsyncCallback_t40 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m17437_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m17438_gshared (CompareFunc_t2493 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m17438(__this, ___result, method) (( int32_t (*) (CompareFunc_t2493 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m17438_gshared)(__this, ___result, method)
