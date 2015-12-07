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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen_3.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m13990_gshared (Nullable_1_t2183 * __this, TimeSpan_t1400  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m13990(__this, ___value, method) (( void (*) (Nullable_1_t2183 *, TimeSpan_t1400 , const MethodInfo*))Nullable_1__ctor_m13990_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m13991_gshared (Nullable_1_t2183 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m13991(__this, method) (( bool (*) (Nullable_1_t2183 *, const MethodInfo*))Nullable_1_get_HasValue_m13991_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1400  Nullable_1_get_Value_m13992_gshared (Nullable_1_t2183 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m13992(__this, method) (( TimeSpan_t1400  (*) (Nullable_1_t2183 *, const MethodInfo*))Nullable_1_get_Value_m13992_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m24919_gshared (Nullable_1_t2183 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m24919(__this, ___other, method) (( bool (*) (Nullable_1_t2183 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m24919_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m24920_gshared (Nullable_1_t2183 * __this, Nullable_1_t2183  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m24920(__this, ___other, method) (( bool (*) (Nullable_1_t2183 *, Nullable_1_t2183 , const MethodInfo*))Nullable_1_Equals_m24920_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m24921_gshared (Nullable_1_t2183 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m24921(__this, method) (( int32_t (*) (Nullable_1_t2183 *, const MethodInfo*))Nullable_1_GetHashCode_m24921_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t1400  Nullable_1_GetValueOrDefault_m24922_gshared (Nullable_1_t2183 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m24922(__this, method) (( TimeSpan_t1400  (*) (Nullable_1_t2183 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m24922_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m24923_gshared (Nullable_1_t2183 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m24923(__this, method) (( String_t* (*) (Nullable_1_t2183 *, const MethodInfo*))Nullable_1_ToString_m24923_gshared)(__this, method)
