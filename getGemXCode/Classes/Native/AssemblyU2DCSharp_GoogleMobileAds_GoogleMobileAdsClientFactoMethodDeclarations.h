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

// GoogleMobileAds.GoogleMobileAdsClientFactory
struct GoogleMobileAdsClientFactory_t146;
// GoogleMobileAds.Common.IGoogleMobileAdsBannerClient
struct IGoogleMobileAdsBannerClient_t141;
// GoogleMobileAds.Common.IAdListener
struct IAdListener_t156;
// GoogleMobileAds.Common.IGoogleMobileAdsInterstitialClient
struct IGoogleMobileAdsInterstitialClient_t143;

#include "codegen/il2cpp-codegen.h"

// System.Void GoogleMobileAds.GoogleMobileAdsClientFactory::.ctor()
extern "C" void GoogleMobileAdsClientFactory__ctor_m803 (GoogleMobileAdsClientFactory_t146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Common.IGoogleMobileAdsBannerClient GoogleMobileAds.GoogleMobileAdsClientFactory::GetGoogleMobileAdsBannerClient(GoogleMobileAds.Common.IAdListener)
extern "C" Object_t * GoogleMobileAdsClientFactory_GetGoogleMobileAdsBannerClient_m804 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Common.IGoogleMobileAdsInterstitialClient GoogleMobileAds.GoogleMobileAdsClientFactory::GetGoogleMobileAdsInterstitialClient(GoogleMobileAds.Common.IAdListener)
extern "C" Object_t * GoogleMobileAdsClientFactory_GetGoogleMobileAdsInterstitialClient_m805 (Object_t * __this /* static, unused */, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
