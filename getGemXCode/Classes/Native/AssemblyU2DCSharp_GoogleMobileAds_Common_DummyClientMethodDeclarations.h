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

// GoogleMobileAds.Common.DummyClient
struct DummyClient_t145;
// GoogleMobileAds.Common.IAdListener
struct IAdListener_t156;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdSize
struct AdSize_t138;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t137;
// GoogleMobileAds.Common.IInAppPurchaseListener
struct IInAppPurchaseListener_t517;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdPosition.h"

// System.Void GoogleMobileAds.Common.DummyClient::.ctor(GoogleMobileAds.Common.IAdListener)
extern "C" void DummyClient__ctor_m792 (DummyClient_t145 * __this, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C" void DummyClient_CreateBannerView_m793 (DummyClient_t145 * __this, String_t* ___adUnitId, AdSize_t138 * ___adSize, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C" void DummyClient_LoadAd_m794 (DummyClient_t145 * __this, AdRequest_t137 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::ShowBannerView()
extern "C" void DummyClient_ShowBannerView_m795 (DummyClient_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::HideBannerView()
extern "C" void DummyClient_HideBannerView_m796 (DummyClient_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::DestroyBannerView()
extern "C" void DummyClient_DestroyBannerView_m797 (DummyClient_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::CreateInterstitialAd(System.String)
extern "C" void DummyClient_CreateInterstitialAd_m798 (DummyClient_t145 * __this, String_t* ___adUnitId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.Common.DummyClient::IsLoaded()
extern "C" bool DummyClient_IsLoaded_m799 (DummyClient_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::ShowInterstitial()
extern "C" void DummyClient_ShowInterstitial_m800 (DummyClient_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::DestroyInterstitial()
extern "C" void DummyClient_DestroyInterstitial_m801 (DummyClient_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::SetInAppPurchaseParams(GoogleMobileAds.Common.IInAppPurchaseListener,System.String)
extern "C" void DummyClient_SetInAppPurchaseParams_m802 (DummyClient_t145 * __this, Object_t * ___listener, String_t* ___androidPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
