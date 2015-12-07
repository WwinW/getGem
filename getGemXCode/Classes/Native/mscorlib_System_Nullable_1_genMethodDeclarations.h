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
#include "mscorlib_System_Nullable_1_gen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(T)
extern "C" void Nullable_1__ctor_m15402_gshared (Nullable_1_t103 * __this, Vector3_t34  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m15402(__this, ___value, method) (( void (*) (Nullable_1_t103 *, Vector3_t34 , const MethodInfo*))Nullable_1__ctor_m15402_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m577_gshared (Nullable_1_t103 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m577(__this, method) (( bool (*) (Nullable_1_t103 *, const MethodInfo*))Nullable_1_get_HasValue_m577_gshared)(__this, method)
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
extern "C" Vector3_t34  Nullable_1_get_Value_m578_gshared (Nullable_1_t103 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m578(__this, method) (( Vector3_t34  (*) (Nullable_1_t103 *, const MethodInfo*))Nullable_1_get_Value_m578_gshared)(__this, method)
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m15403_gshared (Nullable_1_t103 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m15403(__this, ___other, method) (( bool (*) (Nullable_1_t103 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m15403_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m15404_gshared (Nullable_1_t103 * __this, Nullable_1_t103  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m15404(__this, ___other, method) (( bool (*) (Nullable_1_t103 *, Nullable_1_t103 , const MethodInfo*))Nullable_1_Equals_m15404_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<UnityEngine.Vector3>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m15405_gshared (Nullable_1_t103 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m15405(__this, method) (( int32_t (*) (Nullable_1_t103 *, const MethodInfo*))Nullable_1_GetHashCode_m15405_gshared)(__this, method)
// T System.Nullable`1<UnityEngine.Vector3>::GetValueOrDefault()
extern "C" Vector3_t34  Nullable_1_GetValueOrDefault_m15406_gshared (Nullable_1_t103 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m15406(__this, method) (( Vector3_t34  (*) (Nullable_1_t103 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m15406_gshared)(__this, method)
// System.String System.Nullable`1<UnityEngine.Vector3>::ToString()
extern "C" String_t* Nullable_1_ToString_m15407_gshared (Nullable_1_t103 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m15407(__this, method) (( String_t* (*) (Nullable_1_t103 *, const MethodInfo*))Nullable_1_ToString_m15407_gshared)(__this, method)
