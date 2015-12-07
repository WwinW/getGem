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

// GoogleMobileAds.Api.BannerView
struct BannerView_t126;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdSize
struct AdSize_t138;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t139;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t140;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t137;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t129;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t128;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdPosition.h"

// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C" void BannerView__ctor_m731 (BannerView_t126 * __this, String_t* ___adUnitId, AdSize_t138 * ___adSize, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_AdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C" void BannerView_add_AdLoaded_m732 (BannerView_t126 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_AdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C" void BannerView_remove_AdLoaded_m733 (BannerView_t126 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_AdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C" void BannerView_add_AdFailedToLoad_m734 (BannerView_t126 * __this, EventHandler_1_t140 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_AdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C" void BannerView_remove_AdFailedToLoad_m735 (BannerView_t126 * __this, EventHandler_1_t140 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_AdOpened(System.EventHandler`1<System.EventArgs>)
extern "C" void BannerView_add_AdOpened_m736 (BannerView_t126 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_AdOpened(System.EventHandler`1<System.EventArgs>)
extern "C" void BannerView_remove_AdOpened_m737 (BannerView_t126 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_AdClosing(System.EventHandler`1<System.EventArgs>)
extern "C" void BannerView_add_AdClosing_m738 (BannerView_t126 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_AdClosing(System.EventHandler`1<System.EventArgs>)
extern "C" void BannerView_remove_AdClosing_m739 (BannerView_t126 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_AdClosed(System.EventHandler`1<System.EventArgs>)
extern "C" void BannerView_add_AdClosed_m740 (BannerView_t126 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_AdClosed(System.EventHandler`1<System.EventArgs>)
extern "C" void BannerView_remove_AdClosed_m741 (BannerView_t126 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_AdLeftApplication(System.EventHandler`1<System.EventArgs>)
extern "C" void BannerView_add_AdLeftApplication_m742 (BannerView_t126 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_AdLeftApplication(System.EventHandler`1<System.EventArgs>)
extern "C" void BannerView_remove_AdLeftApplication_m743 (BannerView_t126 * __this, EventHandler_1_t139 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::GoogleMobileAds.Common.IAdListener.FireAdLoaded()
extern "C" void BannerView_GoogleMobileAds_Common_IAdListener_FireAdLoaded_m744 (BannerView_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::GoogleMobileAds.Common.IAdListener.FireAdFailedToLoad(System.String)
extern "C" void BannerView_GoogleMobileAds_Common_IAdListener_FireAdFailedToLoad_m745 (BannerView_t126 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::GoogleMobileAds.Common.IAdListener.FireAdOpened()
extern "C" void BannerView_GoogleMobileAds_Common_IAdListener_FireAdOpened_m746 (BannerView_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::GoogleMobileAds.Common.IAdListener.FireAdClosing()
extern "C" void BannerView_GoogleMobileAds_Common_IAdListener_FireAdClosing_m747 (BannerView_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::GoogleMobileAds.Common.IAdListener.FireAdClosed()
extern "C" void BannerView_GoogleMobileAds_Common_IAdListener_FireAdClosed_m748 (BannerView_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::GoogleMobileAds.Common.IAdListener.FireAdLeftApplication()
extern "C" void BannerView_GoogleMobileAds_Common_IAdListener_FireAdLeftApplication_m749 (BannerView_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C" void BannerView_LoadAd_m750 (BannerView_t126 * __this, AdRequest_t137 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::Hide()
extern "C" void BannerView_Hide_m751 (BannerView_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::Show()
extern "C" void BannerView_Show_m752 (BannerView_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
extern "C" void BannerView_Destroy_m753 (BannerView_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<AdLoaded>m__2(System.Object,System.EventArgs)
extern "C" void BannerView_U3CAdLoadedU3Em__2_m754 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t129 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<AdFailedToLoad>m__3(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C" void BannerView_U3CAdFailedToLoadU3Em__3_m755 (Object_t * __this /* static, unused */, Object_t * p0, AdFailedToLoadEventArgs_t128 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<AdOpened>m__4(System.Object,System.EventArgs)
extern "C" void BannerView_U3CAdOpenedU3Em__4_m756 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t129 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<AdClosing>m__5(System.Object,System.EventArgs)
extern "C" void BannerView_U3CAdClosingU3Em__5_m757 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t129 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<AdClosed>m__6(System.Object,System.EventArgs)
extern "C" void BannerView_U3CAdClosedU3Em__6_m758 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t129 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<AdLeftApplication>m__7(System.Object,System.EventArgs)
extern "C" void BannerView_U3CAdLeftApplicationU3Em__7_m759 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t129 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
