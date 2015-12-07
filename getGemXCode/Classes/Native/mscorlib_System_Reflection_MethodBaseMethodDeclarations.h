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

// System.Reflection.MethodBase
struct MethodBase_t1116;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t72;
// System.Type[]
struct TypeU5BU5D_t1092;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeMethodHandle.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Reflection.MethodBase::.ctor()
extern "C" void MethodBase__ctor_m11446 (MethodBase_t1116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
extern "C" MethodBase_t1116 * MethodBase_GetMethodFromHandleNoGenericCheck_m11447 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t2122  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t1116 * MethodBase_GetMethodFromIntPtr_m11448 (Object_t * __this /* static, unused */, IntPtr_t ___handle, IntPtr_t ___declaringType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
extern "C" MethodBase_t1116 * MethodBase_GetMethodFromHandle_m11449 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t2122  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t1116 * MethodBase_GetMethodFromHandleInternalType_m11450 (Object_t * __this /* static, unused */, IntPtr_t ___method_handle, IntPtr_t ___type_handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MethodBase::GetParameterCount()
extern "C" int32_t MethodBase_GetParameterCount_m11451 (MethodBase_t1116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C" Object_t * MethodBase_Invoke_m11452 (MethodBase_t1116 * __this, Object_t * ___obj, ObjectU5BU5D_t72* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
extern "C" int32_t MethodBase_get_CallingConvention_m11453 (MethodBase_t1116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C" bool MethodBase_get_IsPublic_m11454 (MethodBase_t1116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" bool MethodBase_get_IsStatic_m11455 (MethodBase_t1116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern "C" bool MethodBase_get_IsVirtual_m11456 (MethodBase_t1116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsAbstract()
extern "C" bool MethodBase_get_IsAbstract_m11457 (MethodBase_t1116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MethodBase::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t MethodBase_get_next_table_index_m11458 (MethodBase_t1116 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
extern "C" TypeU5BU5D_t1092* MethodBase_GetGenericArguments_m11459 (MethodBase_t1116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
extern "C" bool MethodBase_get_ContainsGenericParameters_m11460 (MethodBase_t1116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
extern "C" bool MethodBase_get_IsGenericMethodDefinition_m11461 (MethodBase_t1116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
extern "C" bool MethodBase_get_IsGenericMethod_m11462 (MethodBase_t1116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
