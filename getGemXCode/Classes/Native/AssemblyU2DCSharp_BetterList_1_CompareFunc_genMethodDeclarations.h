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

// BetterList`1/CompareFunc<UICamera/DepthEntry>
struct CompareFunc_t455;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry.h"

// System.Void BetterList`1/CompareFunc<UICamera/DepthEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m3552_gshared (CompareFunc_t455 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m3552(__this, ___object, ___method, method) (( void (*) (CompareFunc_t455 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m3552_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UICamera/DepthEntry>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m18185_gshared (CompareFunc_t455 * __this, DepthEntry_t434  ___left, DepthEntry_t434  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m18185(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t455 *, DepthEntry_t434 , DepthEntry_t434 , const MethodInfo*))CompareFunc_Invoke_m18185_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UICamera/DepthEntry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m18186_gshared (CompareFunc_t455 * __this, DepthEntry_t434  ___left, DepthEntry_t434  ___right, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m18186(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t455 *, DepthEntry_t434 , DepthEntry_t434 , AsyncCallback_t40 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m18186_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UICamera/DepthEntry>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m18187_gshared (CompareFunc_t455 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m18187(__this, ___result, method) (( int32_t (*) (CompareFunc_t455 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m18187_gshared)(__this, ___result, method)
