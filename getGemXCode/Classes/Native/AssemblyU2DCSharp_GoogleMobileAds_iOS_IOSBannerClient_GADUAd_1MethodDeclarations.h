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

// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillPresentScreenCallback
struct GADUAdViewWillPresentScreenCallback_t150;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillPresentScreenCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GADUAdViewWillPresentScreenCallback__ctor_m835 (GADUAdViewWillPresentScreenCallback_t150 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillPresentScreenCallback::Invoke(System.IntPtr)
extern "C" void GADUAdViewWillPresentScreenCallback_Invoke_m836 (GADUAdViewWillPresentScreenCallback_t150 * __this, IntPtr_t ___bannerClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUAdViewWillPresentScreenCallback_t150(Il2CppObject* delegate, IntPtr_t ___bannerClient);
// System.IAsyncResult GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillPresentScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * GADUAdViewWillPresentScreenCallback_BeginInvoke_m837 (GADUAdViewWillPresentScreenCallback_t150 * __this, IntPtr_t ___bannerClient, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillPresentScreenCallback::EndInvoke(System.IAsyncResult)
extern "C" void GADUAdViewWillPresentScreenCallback_EndInvoke_m838 (GADUAdViewWillPresentScreenCallback_t150 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
