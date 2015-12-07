#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Common.IGoogleMobileAdsBannerClient
struct IGoogleMobileAdsBannerClient_t141;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t139;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t140;

#include "mscorlib_System_Object.h"

// GoogleMobileAds.Api.BannerView
struct  BannerView_t126  : public Object_t
{
	// GoogleMobileAds.Common.IGoogleMobileAdsBannerClient GoogleMobileAds.Api.BannerView::client
	Object_t * ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::AdLoaded
	EventHandler_1_t139 * ___AdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::AdFailedToLoad
	EventHandler_1_t140 * ___AdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::AdOpened
	EventHandler_1_t139 * ___AdOpened_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::AdClosing
	EventHandler_1_t139 * ___AdClosing_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::AdClosed
	EventHandler_1_t139 * ___AdClosed_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::AdLeftApplication
	EventHandler_1_t139 * ___AdLeftApplication_6;
};
struct BannerView_t126_StaticFields{
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::<>f__am$cache7
	EventHandler_1_t139 * ___U3CU3Ef__amU24cache7_7;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::<>f__am$cache8
	EventHandler_1_t140 * ___U3CU3Ef__amU24cache8_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::<>f__am$cache9
	EventHandler_1_t139 * ___U3CU3Ef__amU24cache9_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::<>f__am$cacheA
	EventHandler_1_t139 * ___U3CU3Ef__amU24cacheA_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::<>f__am$cacheB
	EventHandler_1_t139 * ___U3CU3Ef__amU24cacheB_11;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::<>f__am$cacheC
	EventHandler_1_t139 * ___U3CU3Ef__amU24cacheC_12;
};
