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

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t1491;
// System.Globalization.CultureInfo
struct CultureInfo_t1113;
// System.Globalization.TextInfo
struct TextInfo_t1559;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
extern "C" void CaseInsensitiveHashCodeProvider__ctor_m10353 (CaseInsensitiveHashCodeProvider_t1491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
extern "C" void CaseInsensitiveHashCodeProvider__ctor_m10354 (CaseInsensitiveHashCodeProvider_t1491 * __this, CultureInfo_t1113 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
extern "C" void CaseInsensitiveHashCodeProvider__cctor_m10355 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
extern "C" bool CaseInsensitiveHashCodeProvider_AreEqual_m10356 (Object_t * __this /* static, unused */, CultureInfo_t1113 * ___a, CultureInfo_t1113 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
extern "C" bool CaseInsensitiveHashCodeProvider_AreEqual_m10357 (Object_t * __this /* static, unused */, TextInfo_t1559 * ___info, CultureInfo_t1113 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
extern "C" CaseInsensitiveHashCodeProvider_t1491 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m8755 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
extern "C" int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m10358 (CaseInsensitiveHashCodeProvider_t1491 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
