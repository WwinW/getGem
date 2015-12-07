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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
struct DefaultComparer_t2521;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::.ctor()
extern "C" void DefaultComparer__ctor_m17729_gshared (DefaultComparer_t2521 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17729(__this, method) (( void (*) (DefaultComparer_t2521 *, const MethodInfo*))DefaultComparer__ctor_m17729_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17730_gshared (DefaultComparer_t2521 * __this, Vector4_t391  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17730(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2521 *, Vector4_t391 , const MethodInfo*))DefaultComparer_GetHashCode_m17730_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17731_gshared (DefaultComparer_t2521 * __this, Vector4_t391  ___x, Vector4_t391  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17731(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2521 *, Vector4_t391 , Vector4_t391 , const MethodInfo*))DefaultComparer_Equals_m17731_gshared)(__this, ___x, ___y, method)
