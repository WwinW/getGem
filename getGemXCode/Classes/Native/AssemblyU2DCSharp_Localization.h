#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Localization/LoadFunction
struct LoadFunction_t343;
// Localization/OnLocalizeNotification
struct OnLocalizeNotification_t344;
// System.String[]
struct StringU5BU5D_t76;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t136;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t346;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"

// Localization
struct  Localization_t345  : public Object_t
{
};
struct Localization_t345_StaticFields{
	// Localization/LoadFunction Localization::loadFunction
	LoadFunction_t343 * ___loadFunction_0;
	// Localization/OnLocalizeNotification Localization::onLocalize
	OnLocalizeNotification_t344 * ___onLocalize_1;
	// System.Boolean Localization::localizationHasBeenSet
	bool ___localizationHasBeenSet_2;
	// System.String[] Localization::mLanguages
	StringU5BU5D_t76* ___mLanguages_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Localization::mOldDictionary
	Dictionary_2_t136 * ___mOldDictionary_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String[]> Localization::mDictionary
	Dictionary_2_t346 * ___mDictionary_5;
	// System.Int32 Localization::mLanguageIndex
	int32_t ___mLanguageIndex_6;
	// System.String Localization::mLanguage
	String_t* ___mLanguage_7;
	// System.Boolean Localization::mMerging
	bool ___mMerging_8;
};
