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

// System.Net.FileWebRequest
struct FileWebRequest_t1359;
// System.Uri
struct Uri_t1321;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern "C" void FileWebRequest__ctor_m7964 (FileWebRequest_t1359 * __this, Uri_t1321 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest__ctor_m7965 (FileWebRequest_t1359 * __this, SerializationInfo_t1094 * ___serializationInfo, StreamingContext_t1095  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m7966 (FileWebRequest_t1359 * __this, SerializationInfo_t1094 * ___serializationInfo, StreamingContext_t1095  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest_GetObjectData_m7967 (FileWebRequest_t1359 * __this, SerializationInfo_t1094 * ___serializationInfo, StreamingContext_t1095  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
