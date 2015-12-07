﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t90;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t132;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t136;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "mscorlib_System_Nullable_1_gen_1.h"
#include "mscorlib_System_Nullable_1_gen_2.h"

// GoogleMobileAds.Api.AdRequest
struct  AdRequest_t137  : public Object_t
{
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::testDevices
	List_1_t90 * ___testDevices_2;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::keywords
	HashSet_1_t132 * ___keywords_3;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::birthday
	Nullable_1_t133  ___birthday_4;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::gender
	Nullable_1_t134  ___gender_5;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::tagForChildDirectedTreatment
	Nullable_1_t135  ___tagForChildDirectedTreatment_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::extras
	Dictionary_2_t136 * ___extras_7;
};