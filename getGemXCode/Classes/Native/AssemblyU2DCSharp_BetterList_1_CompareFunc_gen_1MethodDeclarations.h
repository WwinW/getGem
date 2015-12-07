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

// BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>
struct CompareFunc_t2417;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_TypewriterEffect_FadeEntry.h"

// System.Void BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m16478_gshared (CompareFunc_t2417 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m16478(__this, ___object, ___method, method) (( void (*) (CompareFunc_t2417 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m16478_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m16479_gshared (CompareFunc_t2417 * __this, FadeEntry_t228  ___left, FadeEntry_t228  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m16479(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t2417 *, FadeEntry_t228 , FadeEntry_t228 , const MethodInfo*))CompareFunc_Invoke_m16479_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m16480_gshared (CompareFunc_t2417 * __this, FadeEntry_t228  ___left, FadeEntry_t228  ___right, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m16480(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t2417 *, FadeEntry_t228 , FadeEntry_t228 , AsyncCallback_t40 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m16480_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m16481_gshared (CompareFunc_t2417 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m16481(__this, ___result, method) (( int32_t (*) (CompareFunc_t2417 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m16481_gshared)(__this, ___result, method)
