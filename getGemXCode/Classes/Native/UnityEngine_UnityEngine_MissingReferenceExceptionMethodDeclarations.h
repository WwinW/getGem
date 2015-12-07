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

// UnityEngine.MissingReferenceException
struct MissingReferenceException_t91;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void UnityEngine.MissingReferenceException::.ctor()
extern "C" void MissingReferenceException__ctor_m6619 (MissingReferenceException_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MissingReferenceException::.ctor(System.String)
extern "C" void MissingReferenceException__ctor_m520 (MissingReferenceException_t91 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MissingReferenceException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingReferenceException__ctor_m6620 (MissingReferenceException_t91 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
