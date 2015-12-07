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

// ByteReader
struct ByteReader_t336;
// System.Byte[]
struct ByteU5BU5D_t337;
// UnityEngine.TextAsset
struct TextAsset_t518;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t136;
// BetterList`1<System.String>
struct BetterList_1_t338;

#include "codegen/il2cpp-codegen.h"

// System.Void ByteReader::.ctor(System.Byte[])
extern "C" void ByteReader__ctor_m1568 (ByteReader_t336 * __this, ByteU5BU5D_t337* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ByteReader::.ctor(UnityEngine.TextAsset)
extern "C" void ByteReader__ctor_m1569 (ByteReader_t336 * __this, TextAsset_t518 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ByteReader::.cctor()
extern "C" void ByteReader__cctor_m1570 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ByteReader ByteReader::Open(System.String)
extern "C" ByteReader_t336 * ByteReader_Open_m1571 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ByteReader::get_canRead()
extern "C" bool ByteReader_get_canRead_m1572 (ByteReader_t336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ByteReader_ReadLine_m1573 (Object_t * __this /* static, unused */, ByteU5BU5D_t337* ___buffer, int32_t ___start, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine()
extern "C" String_t* ByteReader_ReadLine_m1574 (ByteReader_t336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine(System.Boolean)
extern "C" String_t* ByteReader_ReadLine_m1575 (ByteReader_t336 * __this, bool ___skipEmptyLines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> ByteReader::ReadDictionary()
extern "C" Dictionary_2_t136 * ByteReader_ReadDictionary_m1576 (ByteReader_t336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> ByteReader::ReadCSV()
extern "C" BetterList_1_t338 * ByteReader_ReadCSV_m1577 (ByteReader_t336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
