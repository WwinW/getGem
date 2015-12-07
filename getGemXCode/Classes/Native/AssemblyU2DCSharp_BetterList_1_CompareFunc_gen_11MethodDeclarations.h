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

// BetterList`1/CompareFunc<UnityEngine.Vector2>
struct CompareFunc_t2503;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m17519_gshared (CompareFunc_t2503 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m17519(__this, ___object, ___method, method) (( void (*) (CompareFunc_t2503 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m17519_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m17520_gshared (CompareFunc_t2503 * __this, Vector2_t54  ___left, Vector2_t54  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m17520(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t2503 *, Vector2_t54 , Vector2_t54 , const MethodInfo*))CompareFunc_Invoke_m17520_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m17521_gshared (CompareFunc_t2503 * __this, Vector2_t54  ___left, Vector2_t54  ___right, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m17521(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t2503 *, Vector2_t54 , Vector2_t54 , AsyncCallback_t40 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m17521_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m17522_gshared (CompareFunc_t2503 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m17522(__this, ___result, method) (( int32_t (*) (CompareFunc_t2503 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m17522_gshared)(__this, ___result, method)
