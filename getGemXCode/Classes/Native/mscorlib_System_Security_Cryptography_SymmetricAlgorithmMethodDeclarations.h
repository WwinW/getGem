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

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1134;
// System.Byte[]
struct ByteU5BU5D_t337;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1152;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1146;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
extern "C" void SymmetricAlgorithm__ctor_m6850 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::System.IDisposable.Dispose()
extern "C" void SymmetricAlgorithm_System_IDisposable_Dispose_m12614 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Finalize()
extern "C" void SymmetricAlgorithm_Finalize_m7763 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Clear()
extern "C" void SymmetricAlgorithm_Clear_m7782 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
extern "C" void SymmetricAlgorithm_Dispose_m6858 (SymmetricAlgorithm_t1134 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize()
extern "C" int32_t SymmetricAlgorithm_get_BlockSize_m12615 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_BlockSize(System.Int32)
extern "C" void SymmetricAlgorithm_set_BlockSize_m12616 (SymmetricAlgorithm_t1134 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
extern "C" int32_t SymmetricAlgorithm_get_FeedbackSize_m12617 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
extern "C" ByteU5BU5D_t337* SymmetricAlgorithm_get_IV_m6852 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
extern "C" void SymmetricAlgorithm_set_IV_m6853 (SymmetricAlgorithm_t1134 * __this, ByteU5BU5D_t337* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
extern "C" ByteU5BU5D_t337* SymmetricAlgorithm_get_Key_m6854 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
extern "C" void SymmetricAlgorithm_set_Key_m6855 (SymmetricAlgorithm_t1134 * __this, ByteU5BU5D_t337* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
extern "C" int32_t SymmetricAlgorithm_get_KeySize_m6856 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
extern "C" void SymmetricAlgorithm_set_KeySize_m6857 (SymmetricAlgorithm_t1134 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::get_LegalKeySizes()
extern "C" KeySizesU5BU5D_t1152* SymmetricAlgorithm_get_LegalKeySizes_m12618 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
extern "C" int32_t SymmetricAlgorithm_get_Mode_m12619 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
extern "C" void SymmetricAlgorithm_set_Mode_m12620 (SymmetricAlgorithm_t1134 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
extern "C" int32_t SymmetricAlgorithm_get_Padding_m12621 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
extern "C" void SymmetricAlgorithm_set_Padding_m12622 (SymmetricAlgorithm_t1134 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor()
extern "C" Object_t * SymmetricAlgorithm_CreateDecryptor_m12623 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor()
extern "C" Object_t * SymmetricAlgorithm_CreateEncryptor_m12624 (SymmetricAlgorithm_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
extern "C" SymmetricAlgorithm_t1134 * SymmetricAlgorithm_Create_m7781 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
