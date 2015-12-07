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

// System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>
struct Predicate_1_t3035;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m24681_gshared (Predicate_1_t3035 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m24681(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3035 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m24681_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m24682_gshared (Predicate_1_t3035 * __this, CustomAttributeNamedArgument_t1752  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m24682(__this, ___obj, method) (( bool (*) (Predicate_1_t3035 *, CustomAttributeNamedArgument_t1752 , const MethodInfo*))Predicate_1_Invoke_m24682_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m24683_gshared (Predicate_1_t3035 * __this, CustomAttributeNamedArgument_t1752  ___obj, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m24683(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3035 *, CustomAttributeNamedArgument_t1752 , AsyncCallback_t40 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24683_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m24684_gshared (Predicate_1_t3035 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m24684(__this, ___result, method) (( bool (*) (Predicate_1_t3035 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24684_gshared)(__this, ___result, method)
