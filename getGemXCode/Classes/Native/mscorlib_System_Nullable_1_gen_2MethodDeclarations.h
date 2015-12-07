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
#include "mscorlib_System_Nullable_1_gen_2.h"

// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
extern "C" void Nullable_1__ctor_m2961_gshared (Nullable_1_t135 * __this, bool ___value, const MethodInfo* method);
#define Nullable_1__ctor_m2961(__this, ___value, method) (( void (*) (Nullable_1_t135 *, bool, const MethodInfo*))Nullable_1__ctor_m2961_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m2981_gshared (Nullable_1_t135 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m2981(__this, method) (( bool (*) (Nullable_1_t135 *, const MethodInfo*))Nullable_1_get_HasValue_m2981_gshared)(__this, method)
// T System.Nullable`1<System.Boolean>::get_Value()
extern "C" bool Nullable_1_get_Value_m15617_gshared (Nullable_1_t135 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m15617(__this, method) (( bool (*) (Nullable_1_t135 *, const MethodInfo*))Nullable_1_get_Value_m15617_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Boolean>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m15618_gshared (Nullable_1_t135 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m15618(__this, ___other, method) (( bool (*) (Nullable_1_t135 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m15618_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Boolean>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m15619_gshared (Nullable_1_t135 * __this, Nullable_1_t135  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m15619(__this, ___other, method) (( bool (*) (Nullable_1_t135 *, Nullable_1_t135 , const MethodInfo*))Nullable_1_Equals_m15619_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Boolean>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m15620_gshared (Nullable_1_t135 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m15620(__this, method) (( int32_t (*) (Nullable_1_t135 *, const MethodInfo*))Nullable_1_GetHashCode_m15620_gshared)(__this, method)
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
extern "C" bool Nullable_1_GetValueOrDefault_m2982_gshared (Nullable_1_t135 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m2982(__this, method) (( bool (*) (Nullable_1_t135 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m2982_gshared)(__this, method)
// System.String System.Nullable`1<System.Boolean>::ToString()
extern "C" String_t* Nullable_1_ToString_m15621_gshared (Nullable_1_t135 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m15621(__this, method) (( String_t* (*) (Nullable_1_t135 *, const MethodInfo*))Nullable_1_ToString_m15621_gshared)(__this, method)
