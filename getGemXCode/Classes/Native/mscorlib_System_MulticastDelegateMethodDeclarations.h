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

// System.MulticastDelegate
struct MulticastDelegate_t38;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t2165;
// System.Delegate
struct Delegate_t530;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m9405 (MulticastDelegate_t38 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m9406 (MulticastDelegate_t38 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m9407 (MulticastDelegate_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2165* MulticastDelegate_GetInvocationList_m9408 (MulticastDelegate_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t530 * MulticastDelegate_CombineImpl_m9409 (MulticastDelegate_t38 * __this, Delegate_t530 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m9410 (MulticastDelegate_t38 * __this, MulticastDelegate_t38 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t38 * MulticastDelegate_KPM_m9411 (Object_t * __this /* static, unused */, MulticastDelegate_t38 * ___needle, MulticastDelegate_t38 * ___haystack, MulticastDelegate_t38 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t530 * MulticastDelegate_RemoveImpl_m9412 (MulticastDelegate_t38 * __this, Delegate_t530 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::op_Inequality(System.MulticastDelegate,System.MulticastDelegate)
extern "C" bool MulticastDelegate_op_Inequality_m3464 (Object_t * __this /* static, unused */, MulticastDelegate_t38 * ___d1, MulticastDelegate_t38 * ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
