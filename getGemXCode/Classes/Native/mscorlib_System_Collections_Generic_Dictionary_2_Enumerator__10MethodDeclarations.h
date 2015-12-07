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

// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t2361;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15844_gshared (Enumerator_t2368 * __this, Dictionary_2_t2361 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15844(__this, ___dictionary, method) (( void (*) (Enumerator_t2368 *, Dictionary_2_t2361 *, const MethodInfo*))Enumerator__ctor_m15844_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15845_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15845(__this, method) (( Object_t * (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15845_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m15846_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m15846(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m15846_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t111  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15847_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15847(__this, method) (( DictionaryEntry_t111  (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15847_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15848_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15848(__this, method) (( Object_t * (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15848_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15849_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15849(__this, method) (( Object_t * (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15849_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15850_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15850(__this, method) (( bool (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_MoveNext_m15850_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2363  Enumerator_get_Current_m15851_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15851(__this, method) (( KeyValuePair_2_t2363  (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_get_Current_m15851_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::get_CurrentKey()
extern "C" IntPtr_t Enumerator_get_CurrentKey_m15852_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15852(__this, method) (( IntPtr_t (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_get_CurrentKey_m15852_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m15853_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15853(__this, method) (( Object_t * (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_get_CurrentValue_m15853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::Reset()
extern "C" void Enumerator_Reset_m15854_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_Reset_m15854(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_Reset_m15854_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m15855_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15855(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_VerifyState_m15855_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15856_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15856(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_VerifyCurrent_m15856_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m15857_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15857(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_Dispose_m15857_gshared)(__this, method)
