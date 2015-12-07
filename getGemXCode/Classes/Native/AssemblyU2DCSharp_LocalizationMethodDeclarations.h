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

// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t346;
// System.String[]
struct StringU5BU5D_t76;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t518;
// System.Byte[]
struct ByteU5BU5D_t337;
// BetterList`1<System.String>
struct BetterList_1_t338;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t53;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t136;
// System.Object[]
struct ObjectU5BU5D_t72;

#include "codegen/il2cpp-codegen.h"

// System.Void Localization::.cctor()
extern "C" void Localization__cctor_m1627 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]> Localization::get_dictionary()
extern "C" Dictionary_2_t346 * Localization_get_dictionary_m1628 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_dictionary(System.Collections.Generic.Dictionary`2<System.String,System.String[]>)
extern "C" void Localization_set_dictionary_m1629 (Object_t * __this /* static, unused */, Dictionary_2_t346 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Localization::get_knownLanguages()
extern "C" StringU5BU5D_t76* Localization_get_knownLanguages_m1630 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::get_language()
extern "C" String_t* Localization_get_language_m1631 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_language(System.String)
extern "C" void Localization_set_language_m1632 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadDictionary(System.String)
extern "C" bool Localization_LoadDictionary_m1633 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadAndSelect(System.String)
extern "C" bool Localization_LoadAndSelect_m1634 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Load(UnityEngine.TextAsset)
extern "C" void Localization_Load_m1635 (Object_t * __this /* static, unused */, TextAsset_t518 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.Byte[])
extern "C" void Localization_Set_m1636 (Object_t * __this /* static, unused */, String_t* ___languageName, ByteU5BU5D_t337* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(UnityEngine.TextAsset,System.Boolean)
extern "C" bool Localization_LoadCSV_m1637 (Object_t * __this /* static, unused */, TextAsset_t518 * ___asset, bool ___merge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(System.Byte[],System.Boolean)
extern "C" bool Localization_LoadCSV_m1638 (Object_t * __this /* static, unused */, ByteU5BU5D_t337* ___bytes, bool ___merge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::HasLanguage(System.String)
extern "C" bool Localization_HasLanguage_m1639 (Object_t * __this /* static, unused */, String_t* ___languageName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(System.Byte[],UnityEngine.TextAsset,System.Boolean)
extern "C" bool Localization_LoadCSV_m1640 (Object_t * __this /* static, unused */, ByteU5BU5D_t337* ___bytes, TextAsset_t518 * ___asset, bool ___merge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::AddCSV(BetterList`1<System.String>,System.String[],System.Collections.Generic.Dictionary`2<System.String,System.Int32>)
extern "C" void Localization_AddCSV_m1641 (Object_t * __this /* static, unused */, BetterList_1_t338 * ___newValues, StringU5BU5D_t76* ___newLanguages, Dictionary_2_t53 * ___languageIndices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Localization::ExtractStrings(BetterList`1<System.String>,System.String[],System.Collections.Generic.Dictionary`2<System.String,System.Int32>)
extern "C" StringU5BU5D_t76* Localization_ExtractStrings_m1642 (Object_t * __this /* static, unused */, BetterList_1_t338 * ___added, StringU5BU5D_t76* ___newLanguages, Dictionary_2_t53 * ___languageIndices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::SelectLanguage(System.String)
extern "C" bool Localization_SelectLanguage_m1643 (Object_t * __this /* static, unused */, String_t* ___language, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void Localization_Set_m1644 (Object_t * __this /* static, unused */, String_t* ___languageName, Dictionary_2_t136 * ___dictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.String)
extern "C" void Localization_Set_m1645 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Get(System.String)
extern "C" String_t* Localization_Get_m1646 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Format(System.String,System.Object[])
extern "C" String_t* Localization_Format_m1647 (Object_t * __this /* static, unused */, String_t* ___key, ObjectU5BU5D_t72* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::get_isActive()
extern "C" bool Localization_get_isActive_m1648 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Localize(System.String)
extern "C" String_t* Localization_Localize_m1649 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::Exists(System.String)
extern "C" bool Localization_Exists_m1650 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
