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

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t127;
// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t139;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t140;
// GoogleMobileAds.Api.IInAppPurchaseResult
struct IInAppPurchaseResult_t516;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t137;
// GoogleMobileAds.Api.IInAppPurchaseHandler
struct IInAppPurchaseHandler_t144;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t129;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t128;

#include "codegen/il2cpp-codegen.h"

// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
extern "C" void InterstitialAd__ctor_m760 (InterstitialAd_t127 * __this, String_t* ___adUnitId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_AdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C" void InterstitialAd_add_AdLoaded_m761 (InterstitialAd_t127 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_AdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C" void InterstitialAd_remove_AdLoaded_m762 (InterstitialAd_t127 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_AdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C" void InterstitialAd_add_AdFailedToLoad_m763 (InterstitialAd_t127 * __this, EventHandler_1_t140 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_AdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C" void InterstitialAd_remove_AdFailedToLoad_m764 (InterstitialAd_t127 * __this, EventHandler_1_t140 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_AdOpened(System.EventHandler`1<System.EventArgs>)
extern "C" void InterstitialAd_add_AdOpened_m765 (InterstitialAd_t127 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_AdOpened(System.EventHandler`1<System.EventArgs>)
extern "C" void InterstitialAd_remove_AdOpened_m766 (InterstitialAd_t127 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_AdClosing(System.EventHandler`1<System.EventArgs>)
extern "C" void InterstitialAd_add_AdClosing_m767 (InterstitialAd_t127 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_AdClosing(System.EventHandler`1<System.EventArgs>)
extern "C" void InterstitialAd_remove_AdClosing_m768 (InterstitialAd_t127 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_AdClosed(System.EventHandler`1<System.EventArgs>)
extern "C" void InterstitialAd_add_AdClosed_m769 (InterstitialAd_t127 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_AdClosed(System.EventHandler`1<System.EventArgs>)
extern "C" void InterstitialAd_remove_AdClosed_m770 (InterstitialAd_t127 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_AdLeftApplication(System.EventHandler`1<System.EventArgs>)
extern "C" void InterstitialAd_add_AdLeftApplication_m771 (InterstitialAd_t127 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_AdLeftApplication(System.EventHandler`1<System.EventArgs>)
extern "C" void InterstitialAd_remove_AdLeftApplication_m772 (InterstitialAd_t127 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::GoogleMobileAds.Common.IAdListener.FireAdLoaded()
extern "C" void InterstitialAd_GoogleMobileAds_Common_IAdListener_FireAdLoaded_m773 (InterstitialAd_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::GoogleMobileAds.Common.IAdListener.FireAdFailedToLoad(System.String)
extern "C" void InterstitialAd_GoogleMobileAds_Common_IAdListener_FireAdFailedToLoad_m774 (InterstitialAd_t127 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::GoogleMobileAds.Common.IAdListener.FireAdOpened()
extern "C" void InterstitialAd_GoogleMobileAds_Common_IAdListener_FireAdOpened_m775 (InterstitialAd_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::GoogleMobileAds.Common.IAdListener.FireAdClosing()
extern "C" void InterstitialAd_GoogleMobileAds_Common_IAdListener_FireAdClosing_m776 (InterstitialAd_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::GoogleMobileAds.Common.IAdListener.FireAdClosed()
extern "C" void InterstitialAd_GoogleMobileAds_Common_IAdListener_FireAdClosed_m777 (InterstitialAd_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::GoogleMobileAds.Common.IAdListener.FireAdLeftApplication()
extern "C" void InterstitialAd_GoogleMobileAds_Common_IAdListener_FireAdLeftApplication_m778 (InterstitialAd_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.Api.InterstitialAd::GoogleMobileAds.Common.IInAppPurchaseListener.FireIsValidPurchase(System.String)
extern "C" bool InterstitialAd_GoogleMobileAds_Common_IInAppPurchaseListener_FireIsValidPurchase_m779 (InterstitialAd_t127 * __this, String_t* ___sku, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::GoogleMobileAds.Common.IInAppPurchaseListener.FireOnInAppPurchaseFinished(GoogleMobileAds.Api.IInAppPurchaseResult)
extern "C" void InterstitialAd_GoogleMobileAds_Common_IInAppPurchaseListener_FireOnInAppPurchaseFinished_m780 (InterstitialAd_t127 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C" void InterstitialAd_LoadAd_m781 (InterstitialAd_t127 * __this, AdRequest_t137 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
extern "C" bool InterstitialAd_IsLoaded_m782 (InterstitialAd_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
extern "C" void InterstitialAd_Show_m783 (InterstitialAd_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
extern "C" void InterstitialAd_Destroy_m784 (InterstitialAd_t127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::SetInAppPurchaseHandler(GoogleMobileAds.Api.IInAppPurchaseHandler)
extern "C" void InterstitialAd_SetInAppPurchaseHandler_m785 (InterstitialAd_t127 * __this, Object_t * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<AdLoaded>m__8(System.Object,System.EventArgs)
extern "C" void InterstitialAd_U3CAdLoadedU3Em__8_m786 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t129 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<AdFailedToLoad>m__9(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C" void InterstitialAd_U3CAdFailedToLoadU3Em__9_m787 (Object_t * __this /* static, unused */, Object_t * p0, AdFailedToLoadEventArgs_t128 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<AdOpened>m__A(System.Object,System.EventArgs)
extern "C" void InterstitialAd_U3CAdOpenedU3Em__A_m788 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t129 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<AdClosing>m__B(System.Object,System.EventArgs)
extern "C" void InterstitialAd_U3CAdClosingU3Em__B_m789 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t129 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<AdClosed>m__C(System.Object,System.EventArgs)
extern "C" void InterstitialAd_U3CAdClosedU3Em__C_m790 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t129 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<AdLeftApplication>m__D(System.Object,System.EventArgs)
extern "C" void InterstitialAd_U3CAdLeftApplicationU3Em__D_m791 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t129 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
