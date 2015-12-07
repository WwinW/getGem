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

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t1777;
// System.Exception
struct Exception_t75;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m11633 (TargetInvocationException_t1777 * __this, Exception_t75 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetInvocationException__ctor_m11634 (TargetInvocationException_t1777 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
