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

// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t131;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t137;
// System.Collections.Generic.List`1<System.String>
struct List_1_t90;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t132;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t136;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_Gender.h"
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "mscorlib_System_Nullable_1_gen_1.h"
#include "mscorlib_System_Nullable_1_gen_2.h"

// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
extern "C" void Builder__ctor_m704 (Builder_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddKeyword(System.String)
extern "C" Builder_t131 * Builder_AddKeyword_m705 (Builder_t131 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddTestDevice(System.String)
extern "C" Builder_t131 * Builder_AddTestDevice_m706 (Builder_t131 * __this, String_t* ___deviceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
extern "C" AdRequest_t137 * Builder_Build_m707 (Builder_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::SetBirthday(System.DateTime)
extern "C" Builder_t131 * Builder_SetBirthday_m708 (Builder_t131 * __this, DateTime_t515  ___birthday, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::SetGender(GoogleMobileAds.Api.Gender)
extern "C" Builder_t131 * Builder_SetGender_m709 (Builder_t131 * __this, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::TagForChildDirectedTreatment(System.Boolean)
extern "C" Builder_t131 * Builder_TagForChildDirectedTreatment_m710 (Builder_t131 * __this, bool ___tagForChildDirectedTreatment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddExtra(System.String,System.String)
extern "C" Builder_t131 * Builder_AddExtra_m711 (Builder_t131 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_TestDevices()
extern "C" List_1_t90 * Builder_get_TestDevices_m712 (Builder_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Keywords()
extern "C" HashSet_1_t132 * Builder_get_Keywords_m713 (Builder_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest/Builder::get_Birthday()
extern "C" Nullable_1_t133  Builder_get_Birthday_m714 (Builder_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest/Builder::get_Gender()
extern "C" Nullable_1_t134  Builder_get_Gender_m715 (Builder_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest/Builder::get_ChildDirectedTreatmentTag()
extern "C" Nullable_1_t135  Builder_get_ChildDirectedTreatmentTag_m716 (Builder_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Extras()
extern "C" Dictionary_2_t136 * Builder_get_Extras_m717 (Builder_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
