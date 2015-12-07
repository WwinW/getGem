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
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m2959_gshared (Nullable_1_t133 * __this, DateTime_t515  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m2959(__this, ___value, method) (( void (*) (Nullable_1_t133 *, DateTime_t515 , const MethodInfo*))Nullable_1__ctor_m2959_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m2974_gshared (Nullable_1_t133 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m2974(__this, method) (( bool (*) (Nullable_1_t133 *, const MethodInfo*))Nullable_1_get_HasValue_m2974_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::get_Value()
extern "C" DateTime_t515  Nullable_1_get_Value_m15607_gshared (Nullable_1_t133 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m15607(__this, method) (( DateTime_t515  (*) (Nullable_1_t133 *, const MethodInfo*))Nullable_1_get_Value_m15607_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m15608_gshared (Nullable_1_t133 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m15608(__this, ___other, method) (( bool (*) (Nullable_1_t133 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m15608_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m15609_gshared (Nullable_1_t133 * __this, Nullable_1_t133  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m15609(__this, ___other, method) (( bool (*) (Nullable_1_t133 *, Nullable_1_t133 , const MethodInfo*))Nullable_1_Equals_m15609_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m15610_gshared (Nullable_1_t133 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m15610(__this, method) (( int32_t (*) (Nullable_1_t133 *, const MethodInfo*))Nullable_1_GetHashCode_m15610_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::GetValueOrDefault()
extern "C" DateTime_t515  Nullable_1_GetValueOrDefault_m2975_gshared (Nullable_1_t133 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m2975(__this, method) (( DateTime_t515  (*) (Nullable_1_t133 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m2975_gshared)(__this, method)
// System.String System.Nullable`1<System.DateTime>::ToString()
extern "C" String_t* Nullable_1_ToString_m15611_gshared (Nullable_1_t133 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m15611(__this, method) (( String_t* (*) (Nullable_1_t133 *, const MethodInfo*))Nullable_1_ToString_m15611_gshared)(__this, method)
