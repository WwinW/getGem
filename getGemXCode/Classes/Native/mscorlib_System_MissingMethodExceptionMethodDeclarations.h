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

// System.MissingMethodException
struct MissingMethodException_t2107;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingMethodException::.ctor()
extern "C" void MissingMethodException__ctor_m13602 (MissingMethodException_t2107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String)
extern "C" void MissingMethodException__ctor_m13603 (MissingMethodException_t2107 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingMethodException__ctor_m13604 (MissingMethodException_t2107 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String,System.String)
extern "C" void MissingMethodException__ctor_m13605 (MissingMethodException_t2107 * __this, String_t* ___className, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMethodException::get_Message()
extern "C" String_t* MissingMethodException_get_Message_m13606 (MissingMethodException_t2107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
