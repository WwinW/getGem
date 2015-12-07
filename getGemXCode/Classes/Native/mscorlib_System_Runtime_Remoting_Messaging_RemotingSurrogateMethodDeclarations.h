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

// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t1872;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1875;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern "C" void RemotingSurrogate__ctor_m11951 (RemotingSurrogate_t1872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern "C" Object_t * RemotingSurrogate_SetObjectData_m11952 (RemotingSurrogate_t1872 * __this, Object_t * ___obj, SerializationInfo_t1094 * ___si, StreamingContext_t1095  ___sc, Object_t * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
