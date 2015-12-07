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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2451;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17003_gshared (Enumerator_t2457 * __this, Dictionary_2_t2451 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17003(__this, ___dictionary, method) (( void (*) (Enumerator_t2457 *, Dictionary_2_t2451 *, const MethodInfo*))Enumerator__ctor_m17003_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17004_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17004(__this, method) (( Object_t * (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17004_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m17005_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m17005(__this, method) (( void (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m17005_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t111  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17006_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17006(__this, method) (( DictionaryEntry_t111  (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17006_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17007_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17007(__this, method) (( Object_t * (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17007_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17008_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17008(__this, method) (( Object_t * (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17008_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17009_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17009(__this, method) (( bool (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_MoveNext_m17009_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2453  Enumerator_get_Current_m17010_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17010(__this, method) (( KeyValuePair_2_t2453  (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_get_Current_m17010_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m17011_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17011(__this, method) (( int32_t (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_get_CurrentKey_m17011_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m17012_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17012(__this, method) (( Object_t * (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_get_CurrentValue_m17012_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m17013_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_Reset_m17013(__this, method) (( void (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_Reset_m17013_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m17014_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17014(__this, method) (( void (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_VerifyState_m17014_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17015_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17015(__this, method) (( void (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_VerifyCurrent_m17015_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m17016_gshared (Enumerator_t2457 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17016(__this, method) (( void (*) (Enumerator_t2457 *, const MethodInfo*))Enumerator_Dispose_m17016_gshared)(__this, method)
