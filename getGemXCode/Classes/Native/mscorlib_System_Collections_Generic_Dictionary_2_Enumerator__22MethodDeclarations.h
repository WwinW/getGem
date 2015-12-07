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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2921;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__22.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23650_gshared (Enumerator_t2928 * __this, Dictionary_2_t2921 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23650(__this, ___dictionary, method) (( void (*) (Enumerator_t2928 *, Dictionary_2_t2921 *, const MethodInfo*))Enumerator__ctor_m23650_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23651_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23651(__this, method) (( Object_t * (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23651_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23652_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m23652(__this, method) (( void (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m23652_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t111  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23653_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23653(__this, method) (( DictionaryEntry_t111  (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23653_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23654_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23654(__this, method) (( Object_t * (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23654_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23655_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23655(__this, method) (( Object_t * (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23656_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23656(__this, method) (( bool (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_MoveNext_m23656_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2923  Enumerator_get_Current_m23657_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23657(__this, method) (( KeyValuePair_2_t2923  (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_get_Current_m23657_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m23658_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23658(__this, method) (( Object_t * (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_get_CurrentKey_m23658_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m23659_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23659(__this, method) (( int32_t (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_get_CurrentValue_m23659_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m23660_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_Reset_m23660(__this, method) (( void (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_Reset_m23660_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m23661_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23661(__this, method) (( void (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_VerifyState_m23661_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23662_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23662(__this, method) (( void (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_VerifyCurrent_m23662_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m23663_gshared (Enumerator_t2928 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23663(__this, method) (( void (*) (Enumerator_t2928 *, const MethodInfo*))Enumerator_Dispose_m23663_gshared)(__this, method)
