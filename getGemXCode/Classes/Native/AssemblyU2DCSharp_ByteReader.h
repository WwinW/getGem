#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t337;
// BetterList`1<System.String>
struct BetterList_1_t338;

#include "mscorlib_System_Object.h"

// ByteReader
struct  ByteReader_t336  : public Object_t
{
	// System.Byte[] ByteReader::mBuffer
	ByteU5BU5D_t337* ___mBuffer_0;
	// System.Int32 ByteReader::mOffset
	int32_t ___mOffset_1;
};
struct ByteReader_t336_StaticFields{
	// BetterList`1<System.String> ByteReader::mTemp
	BetterList_1_t338 * ___mTemp_2;
};
