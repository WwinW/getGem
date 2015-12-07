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

// GoogleMobileAds.iOS.Externs
struct Externs_t147;
// System.String
struct String_t;
// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidReceiveAdCallback
struct GADUAdViewDidReceiveAdCallback_t148;
// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback
struct GADUAdViewDidFailToReceiveAdWithErrorCallback_t149;
// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillPresentScreenCallback
struct GADUAdViewWillPresentScreenCallback_t150;
// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillDismissScreenCallback
struct GADUAdViewWillDismissScreenCallback_t151;
// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidDismissScreenCallback
struct GADUAdViewDidDismissScreenCallback_t152;
// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillLeaveApplicationCallback
struct GADUAdViewWillLeaveApplicationCallback_t153;
// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidReceiveAdCallback
struct GADUInterstitialDidReceiveAdCallback_t157;
// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct GADUInterstitialDidFailToReceiveAdWithErrorCallback_t158;
// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillPresentScreenCallback
struct GADUInterstitialWillPresentScreenCallback_t159;
// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillDismissScreenCallback
struct GADUInterstitialWillDismissScreenCallback_t160;
// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidDismissScreenCallback
struct GADUInterstitialDidDismissScreenCallback_t161;
// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct GADUInterstitialWillLeaveApplicationCallback_t162;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.Externs::.ctor()
extern "C" void Externs__ctor_m806 (Externs_t147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRequest()
extern "C" IntPtr_t Externs_GADUCreateRequest_m807 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUAddTestDevice(System.IntPtr,System.String)
extern "C" void Externs_GADUAddTestDevice_m808 (Object_t * __this /* static, unused */, IntPtr_t ___request, String_t* ___deviceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUAddKeyword(System.IntPtr,System.String)
extern "C" void Externs_GADUAddKeyword_m809 (Object_t * __this /* static, unused */, IntPtr_t ___request, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBirthday(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Externs_GADUSetBirthday_m810 (Object_t * __this /* static, unused */, IntPtr_t ___request, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetGender(System.IntPtr,System.Int32)
extern "C" void Externs_GADUSetGender_m811 (Object_t * __this /* static, unused */, IntPtr_t ___request, int32_t ___genderCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUTagForChildDirectedTreatment(System.IntPtr,System.Boolean)
extern "C" void Externs_GADUTagForChildDirectedTreatment_m812 (Object_t * __this /* static, unused */, IntPtr_t ___request, bool ___childDirectedTreatment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetExtra(System.IntPtr,System.String,System.String)
extern "C" void Externs_GADUSetExtra_m813 (Object_t * __this /* static, unused */, IntPtr_t ___request, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURelease(System.IntPtr)
extern "C" void Externs_GADURelease_m814 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateBannerView(System.IntPtr,System.String,System.Int32,System.Int32,System.Int32)
extern "C" IntPtr_t Externs_GADUCreateBannerView_m815 (Object_t * __this /* static, unused */, IntPtr_t ___bannerClient, String_t* ___adUnitId, int32_t ___width, int32_t ___height, int32_t ___positionAtTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateSmartBannerView(System.IntPtr,System.String,System.Int32)
extern "C" IntPtr_t Externs_GADUCreateSmartBannerView_m816 (Object_t * __this /* static, unused */, IntPtr_t ___bannerClient, String_t* ___adUnitId, int32_t ___positionAtTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBannerCallbacks(System.IntPtr,GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidReceiveAdCallback,GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillPresentScreenCallback,GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillDismissScreenCallback,GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidDismissScreenCallback,GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillLeaveApplicationCallback)
extern "C" void Externs_GADUSetBannerCallbacks_m817 (Object_t * __this /* static, unused */, IntPtr_t ___bannerView, GADUAdViewDidReceiveAdCallback_t148 * ___adReceivedCallback, GADUAdViewDidFailToReceiveAdWithErrorCallback_t149 * ___adFailedCallback, GADUAdViewWillPresentScreenCallback_t150 * ___willPresentCallback, GADUAdViewWillDismissScreenCallback_t151 * ___willDismissCallback, GADUAdViewDidDismissScreenCallback_t152 * ___didDismissCallback, GADUAdViewWillLeaveApplicationCallback_t153 * ___willLeaveCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUHideBannerView(System.IntPtr)
extern "C" void Externs_GADUHideBannerView_m818 (Object_t * __this /* static, unused */, IntPtr_t ___bannerView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowBannerView(System.IntPtr)
extern "C" void Externs_GADUShowBannerView_m819 (Object_t * __this /* static, unused */, IntPtr_t ___bannerView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURemoveBannerView(System.IntPtr)
extern "C" void Externs_GADURemoveBannerView_m820 (Object_t * __this /* static, unused */, IntPtr_t ___bannerView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestBannerAd(System.IntPtr,System.IntPtr)
extern "C" void Externs_GADURequestBannerAd_m821 (Object_t * __this /* static, unused */, IntPtr_t ___bannerView, IntPtr_t ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateInterstitial(System.IntPtr,System.String)
extern "C" IntPtr_t Externs_GADUCreateInterstitial_m822 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, String_t* ___adUnitId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetInterstitialCallbacks(System.IntPtr,GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidReceiveAdCallback,GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillPresentScreenCallback,GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillDismissScreenCallback,GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidDismissScreenCallback,GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillLeaveApplicationCallback)
extern "C" void Externs_GADUSetInterstitialCallbacks_m823 (Object_t * __this /* static, unused */, IntPtr_t ___interstitial, GADUInterstitialDidReceiveAdCallback_t157 * ___adReceivedCallback, GADUInterstitialDidFailToReceiveAdWithErrorCallback_t158 * ___adFailedCallback, GADUInterstitialWillPresentScreenCallback_t159 * ___willPresentCallback, GADUInterstitialWillDismissScreenCallback_t160 * ___willDismissCallback, GADUInterstitialDidDismissScreenCallback_t161 * ___didDismissCallback, GADUInterstitialWillLeaveApplicationCallback_t162 * ___willLeaveCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.Externs::GADUInterstitialReady(System.IntPtr)
extern "C" bool Externs_GADUInterstitialReady_m824 (Object_t * __this /* static, unused */, IntPtr_t ___interstitial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowInterstitial(System.IntPtr)
extern "C" void Externs_GADUShowInterstitial_m825 (Object_t * __this /* static, unused */, IntPtr_t ___interstitial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestInterstitial(System.IntPtr,System.IntPtr)
extern "C" void Externs_GADURequestInterstitial_m826 (Object_t * __this /* static, unused */, IntPtr_t ___interstitial, IntPtr_t ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
