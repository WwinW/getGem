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

// System.Security.Policy.Hash
struct Hash_t2001;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t337;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Policy.Hash::.ctor()
extern "C" void Hash__ctor_m12673 (Hash_t2001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hash__ctor_m12674 (Hash_t2001 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hash_GetObjectData_m12675 (Hash_t2001 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Hash::ToString()
extern "C" String_t* Hash_ToString_m12676 (Hash_t2001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Policy.Hash::GetData()
extern "C" ByteU5BU5D_t337* Hash_GetData_m12677 (Hash_t2001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
