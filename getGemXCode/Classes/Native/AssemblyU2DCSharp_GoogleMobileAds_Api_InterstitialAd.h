#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Common.IGoogleMobileAdsInterstitialClient
struct IGoogleMobileAdsInterstitialClient_t143;
// GoogleMobileAds.Api.IInAppPurchaseHandler
struct IInAppPurchaseHandler_t144;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t139;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t140;

#include "mscorlib_System_Object.h"

// GoogleMobileAds.Api.InterstitialAd
struct  InterstitialAd_t127  : public Object_t
{
	// GoogleMobileAds.Common.IGoogleMobileAdsInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	Object_t * ___client_0;
	// GoogleMobileAds.Api.IInAppPurchaseHandler GoogleMobileAds.Api.InterstitialAd::handler
	Object_t * ___handler_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::AdLoaded
	EventHandler_1_t139 * ___AdLoaded_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::AdFailedToLoad
	EventHandler_1_t140 * ___AdFailedToLoad_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::AdOpened
	EventHandler_1_t139 * ___AdOpened_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::AdClosing
	EventHandler_1_t139 * ___AdClosing_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::AdClosed
	EventHandler_1_t139 * ___AdClosed_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::AdLeftApplication
	EventHandler_1_t139 * ___AdLeftApplication_7;
};
struct InterstitialAd_t127_StaticFields{
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cache8
	EventHandler_1_t139 * ___U3CU3Ef__amU24cache8_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cache9
	EventHandler_1_t140 * ___U3CU3Ef__amU24cache9_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cacheA
	EventHandler_1_t139 * ___U3CU3Ef__amU24cacheA_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cacheB
	EventHandler_1_t139 * ___U3CU3Ef__amU24cacheB_11;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cacheC
	EventHandler_1_t139 * ___U3CU3Ef__amU24cacheC_12;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cacheD
	EventHandler_1_t139 * ___U3CU3Ef__amU24cacheD_13;
};
