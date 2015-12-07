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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>
struct DefaultComparer_t2487;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::.ctor()
extern "C" void DefaultComparer__ctor_m17398_gshared (DefaultComparer_t2487 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17398(__this, method) (( void (*) (DefaultComparer_t2487 *, const MethodInfo*))DefaultComparer__ctor_m17398_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17399_gshared (DefaultComparer_t2487 * __this, Color_t33  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17399(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2487 *, Color_t33 , const MethodInfo*))DefaultComparer_GetHashCode_m17399_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17400_gshared (DefaultComparer_t2487 * __this, Color_t33  ___x, Color_t33  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17400(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2487 *, Color_t33 , Color_t33 , const MethodInfo*))DefaultComparer_Equals_m17400_gshared)(__this, ___x, ___y, method)
