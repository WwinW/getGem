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

// GoogleMobileAds.iOS.IOSBannerClient
struct IOSBannerClient_t154;
// GoogleMobileAds.Common.IAdListener
struct IAdListener_t156;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdSize
struct AdSize_t138;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t137;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdPosition.h"

// System.Void GoogleMobileAds.iOS.IOSBannerClient::.ctor(GoogleMobileAds.Common.IAdListener)
extern "C" void IOSBannerClient__ctor_m851 (IOSBannerClient_t154 * __this, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.IOSBannerClient::get_BannerViewPtr()
extern "C" IntPtr_t IOSBannerClient_get_BannerViewPtr_m852 (IOSBannerClient_t154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::set_BannerViewPtr(System.IntPtr)
extern "C" void IOSBannerClient_set_BannerViewPtr_m853 (IOSBannerClient_t154 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C" void IOSBannerClient_CreateBannerView_m854 (IOSBannerClient_t154 * __this, String_t* ___adUnitId, AdSize_t138 * ___adSize, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C" void IOSBannerClient_LoadAd_m855 (IOSBannerClient_t154 * __this, AdRequest_t137 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::ShowBannerView()
extern "C" void IOSBannerClient_ShowBannerView_m856 (IOSBannerClient_t154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::HideBannerView()
extern "C" void IOSBannerClient_HideBannerView_m857 (IOSBannerClient_t154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::DestroyBannerView()
extern "C" void IOSBannerClient_DestroyBannerView_m858 (IOSBannerClient_t154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::AdViewDidReceiveAdCallback(System.IntPtr)
extern "C" void IOSBannerClient_AdViewDidReceiveAdCallback_m859 (Object_t * __this /* static, unused */, IntPtr_t ___bannerClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::AdViewDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C" void IOSBannerClient_AdViewDidFailToReceiveAdWithErrorCallback_m860 (Object_t * __this /* static, unused */, IntPtr_t ___bannerClient, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::AdViewWillPresentScreenCallback(System.IntPtr)
extern "C" void IOSBannerClient_AdViewWillPresentScreenCallback_m861 (Object_t * __this /* static, unused */, IntPtr_t ___bannerClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::AdViewWillDismissScreenCallback(System.IntPtr)
extern "C" void IOSBannerClient_AdViewWillDismissScreenCallback_m862 (Object_t * __this /* static, unused */, IntPtr_t ___bannerClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::AdViewDidDismissScreenCallback(System.IntPtr)
extern "C" void IOSBannerClient_AdViewDidDismissScreenCallback_m863 (Object_t * __this /* static, unused */, IntPtr_t ___bannerClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient::AdViewWillLeaveApplicationCallback(System.IntPtr)
extern "C" void IOSBannerClient_AdViewWillLeaveApplicationCallback_m864 (Object_t * __this /* static, unused */, IntPtr_t ___bannerClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.iOS.IOSBannerClient GoogleMobileAds.iOS.IOSBannerClient::IntPtrToBannerClient(System.IntPtr)
extern "C" IOSBannerClient_t154 * IOSBannerClient_IntPtrToBannerClient_m865 (Object_t * __this /* static, unused */, IntPtr_t ___bannerClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
