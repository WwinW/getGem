﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t1423;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1424;
// System.Collections.IDictionary
struct IDictionary_t1293;
// System.String[]
struct StringU5BU5D_t76;
// System.Int32[]
struct Int32U5BU5D_t167;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "System_System_Text_RegularExpressions_RegexOptions.h"

// System.Text.RegularExpressions.Regex
struct  Regex_t1117  : public Object_t
{
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	Object_t * ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	Object_t * ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t76* ___group_names_5;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t167* ___group_numbers_6;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_7;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_8;
};
struct Regex_t1117_StaticFields{
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t1423 * ___cache_0;
};
