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

// System.IO.FileStream
struct FileStream_t545;
// System.String
struct String_t;
// System.IO.StreamReader
struct StreamReader_t1683;
// System.Byte[]
struct ByteU5BU5D_t337;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_FileMode.h"

// System.IO.FileStream System.IO.File::Create(System.String)
extern "C" FileStream_t545 * File_Create_m3369 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Create(System.String,System.Int32)
extern "C" FileStream_t545 * File_Create_m10786 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Delete(System.String)
extern "C" void File_Delete_m3368 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C" bool File_Exists_m3367 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C" FileStream_t545 * File_Open_m10787 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" FileStream_t545 * File_OpenRead_m3233 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C" StreamReader_t1683 * File_OpenText_m10788 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
extern "C" ByteU5BU5D_t337* File_ReadAllBytes_m3370 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
