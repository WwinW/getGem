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

// GoogleMobileAds.Api.AdRequest
struct AdRequest_t137;
// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t131;
// System.Collections.Generic.List`1<System.String>
struct List_1_t90;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t132;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t136;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "mscorlib_System_Nullable_1_gen_1.h"
#include "mscorlib_System_Nullable_1_gen_2.h"

// System.Void GoogleMobileAds.Api.AdRequest::.ctor(GoogleMobileAds.Api.AdRequest/Builder)
extern "C" void AdRequest__ctor_m718 (AdRequest_t137 * __this, Builder_t131 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::get_TestDevices()
extern "C" List_1_t90 * AdRequest_get_TestDevices_m719 (AdRequest_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::get_Keywords()
extern "C" HashSet_1_t132 * AdRequest_get_Keywords_m720 (AdRequest_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::get_Birthday()
extern "C" Nullable_1_t133  AdRequest_get_Birthday_m721 (AdRequest_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::get_Gender()
extern "C" Nullable_1_t134  AdRequest_get_Gender_m722 (AdRequest_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::get_TagForChildDirectedTreatment()
extern "C" Nullable_1_t135  AdRequest_get_TagForChildDirectedTreatment_m723 (AdRequest_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::get_Extras()
extern "C" Dictionary_2_t136 * AdRequest_get_Extras_m724 (AdRequest_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
