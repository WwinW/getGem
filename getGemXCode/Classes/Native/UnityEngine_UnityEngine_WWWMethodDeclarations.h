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

// UnityEngine.WWW
struct WWW_t199;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t337;
// System.String[]
struct StringU5BU5D_t76;
// UnityEngine.Texture2D
struct Texture2D_t71;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" void WWW__ctor_m3013 (WWW_t199 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m3016 (WWW_t199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m5837 (WWW_t199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m5838 (WWW_t199 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m5839 (WWW_t199 * __this, String_t* ___url, ByteU5BU5D_t337* ___postData, StringU5BU5D_t76* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::GetTexture(System.Boolean)
extern "C" Texture2D_t71 * WWW_GetTexture_m5840 (WWW_t199 * __this, bool ___markNonReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
extern "C" Texture2D_t71 * WWW_get_texture_m3014 (WWW_t199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
