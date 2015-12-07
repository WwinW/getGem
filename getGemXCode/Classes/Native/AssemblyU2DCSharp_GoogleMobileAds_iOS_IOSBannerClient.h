#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Common.IAdListener
struct IAdListener_t156;
// System.Collections.Generic.Dictionary`2<System.IntPtr,GoogleMobileAds.iOS.IOSBannerClient>
struct Dictionary_2_t155;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"

// GoogleMobileAds.iOS.IOSBannerClient
struct  IOSBannerClient_t154  : public Object_t
{
	// GoogleMobileAds.Common.IAdListener GoogleMobileAds.iOS.IOSBannerClient::listener
	Object_t * ___listener_0;
	// System.IntPtr GoogleMobileAds.iOS.IOSBannerClient::bannerViewPtr
	IntPtr_t ___bannerViewPtr_1;
};
struct IOSBannerClient_t154_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.IntPtr,GoogleMobileAds.iOS.IOSBannerClient> GoogleMobileAds.iOS.IOSBannerClient::bannerClients
	Dictionary_2_t155 * ___bannerClients_2;
};
