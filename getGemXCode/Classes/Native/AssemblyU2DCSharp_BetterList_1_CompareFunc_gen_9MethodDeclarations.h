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

// BetterList`1/CompareFunc<UnityEngine.Vector3>
struct CompareFunc_t2497;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m17465_gshared (CompareFunc_t2497 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m17465(__this, ___object, ___method, method) (( void (*) (CompareFunc_t2497 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m17465_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m17466_gshared (CompareFunc_t2497 * __this, Vector3_t34  ___left, Vector3_t34  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m17466(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t2497 *, Vector3_t34 , Vector3_t34 , const MethodInfo*))CompareFunc_Invoke_m17466_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m17467_gshared (CompareFunc_t2497 * __this, Vector3_t34  ___left, Vector3_t34  ___right, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m17467(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t2497 *, Vector3_t34 , Vector3_t34 , AsyncCallback_t40 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m17467_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m17468_gshared (CompareFunc_t2497 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m17468(__this, ___result, method) (( int32_t (*) (CompareFunc_t2497 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m17468_gshared)(__this, ___result, method)
