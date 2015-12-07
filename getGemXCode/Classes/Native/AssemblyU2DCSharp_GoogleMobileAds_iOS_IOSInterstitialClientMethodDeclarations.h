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

// GoogleMobileAds.iOS.IOSInterstitialClient
struct IOSInterstitialClient_t163;
// GoogleMobileAds.Common.IAdListener
struct IAdListener_t156;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t137;
// GoogleMobileAds.Common.IInAppPurchaseListener
struct IInAppPurchaseListener_t517;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::.ctor(GoogleMobileAds.Common.IAdListener)
extern "C" void IOSInterstitialClient__ctor_m890 (IOSInterstitialClient_t163 * __this, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.IOSInterstitialClient::get_InterstitialPtr()
extern "C" IntPtr_t IOSInterstitialClient_get_InterstitialPtr_m891 (IOSInterstitialClient_t163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::set_InterstitialPtr(System.IntPtr)
extern "C" void IOSInterstitialClient_set_InterstitialPtr_m892 (IOSInterstitialClient_t163 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::CreateInterstitialAd(System.String)
extern "C" void IOSInterstitialClient_CreateInterstitialAd_m893 (IOSInterstitialClient_t163 * __this, String_t* ___adUnitId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C" void IOSInterstitialClient_LoadAd_m894 (IOSInterstitialClient_t163 * __this, AdRequest_t137 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.IOSInterstitialClient::IsLoaded()
extern "C" bool IOSInterstitialClient_IsLoaded_m895 (IOSInterstitialClient_t163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::ShowInterstitial()
extern "C" void IOSInterstitialClient_ShowInterstitial_m896 (IOSInterstitialClient_t163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::DestroyInterstitial()
extern "C" void IOSInterstitialClient_DestroyInterstitial_m897 (IOSInterstitialClient_t163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::InterstitialDidReceiveAdCallback(System.IntPtr)
extern "C" void IOSInterstitialClient_InterstitialDidReceiveAdCallback_m898 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::InterstitialDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C" void IOSInterstitialClient_InterstitialDidFailToReceiveAdWithErrorCallback_m899 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::InterstitialWillPresentScreenCallback(System.IntPtr)
extern "C" void IOSInterstitialClient_InterstitialWillPresentScreenCallback_m900 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::InterstitialWillDismissScreenCallback(System.IntPtr)
extern "C" void IOSInterstitialClient_InterstitialWillDismissScreenCallback_m901 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::InterstitialDidDismissScreenCallback(System.IntPtr)
extern "C" void IOSInterstitialClient_InterstitialDidDismissScreenCallback_m902 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::InterstitialWillLeaveApplicationCallback(System.IntPtr)
extern "C" void IOSInterstitialClient_InterstitialWillLeaveApplicationCallback_m903 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.iOS.IOSInterstitialClient GoogleMobileAds.iOS.IOSInterstitialClient::IntPtrToInterstitialClient(System.IntPtr)
extern "C" IOSInterstitialClient_t163 * IOSInterstitialClient_IntPtrToInterstitialClient_m904 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient::SetInAppPurchaseParams(GoogleMobileAds.Common.IInAppPurchaseListener,System.String)
extern "C" void IOSInterstitialClient_SetInAppPurchaseParams_m905 (IOSInterstitialClient_t163 * __this, Object_t * ___listener, String_t* ___publicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
