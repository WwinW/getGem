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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2316;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15282_gshared (Enumerator_t2322 * __this, Dictionary_2_t2316 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15282(__this, ___dictionary, method) (( void (*) (Enumerator_t2322 *, Dictionary_2_t2316 *, const MethodInfo*))Enumerator__ctor_m15282_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15283_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15283(__this, method) (( Object_t * (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15283_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m15284_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m15284(__this, method) (( void (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m15284_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t111  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15285_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15285(__this, method) (( DictionaryEntry_t111  (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15285_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15286_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15286(__this, method) (( Object_t * (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15286_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15287_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15287(__this, method) (( Object_t * (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15287_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15288_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15288(__this, method) (( bool (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_MoveNext_m15288_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2318  Enumerator_get_Current_m15289_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15289(__this, method) (( KeyValuePair_2_t2318  (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_get_Current_m15289_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m15290_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15290(__this, method) (( Object_t * (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_get_CurrentKey_m15290_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m15291_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15291(__this, method) (( int32_t (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_get_CurrentValue_m15291_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m15292_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_Reset_m15292(__this, method) (( void (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_Reset_m15292_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m15293_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15293(__this, method) (( void (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_VerifyState_m15293_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15294_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15294(__this, method) (( void (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_VerifyCurrent_m15294_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m15295_gshared (Enumerator_t2322 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15295(__this, method) (( void (*) (Enumerator_t2322 *, const MethodInfo*))Enumerator_Dispose_m15295_gshared)(__this, method)
