﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1691;
// System.IO.Stream
struct Stream_t1242;
// System.Text.Encoding
struct Encoding_t546;
// System.Char[]
struct CharU5BU5D_t486;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m11051 (UnexceptionalStreamWriter_t1691 * __this, Stream_t1242 * ___stream, Encoding_t546 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m11052 (UnexceptionalStreamWriter_t1691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m11053 (UnexceptionalStreamWriter_t1691 * __this, CharU5BU5D_t486* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m11054 (UnexceptionalStreamWriter_t1691 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m11055 (UnexceptionalStreamWriter_t1691 * __this, CharU5BU5D_t486* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m11056 (UnexceptionalStreamWriter_t1691 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
