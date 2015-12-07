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

// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillLeaveApplicationCallback
struct GADUAdViewWillLeaveApplicationCallback_t153;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillLeaveApplicationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GADUAdViewWillLeaveApplicationCallback__ctor_m847 (GADUAdViewWillLeaveApplicationCallback_t153 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillLeaveApplicationCallback::Invoke(System.IntPtr)
extern "C" void GADUAdViewWillLeaveApplicationCallback_Invoke_m848 (GADUAdViewWillLeaveApplicationCallback_t153 * __this, IntPtr_t ___bannerClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUAdViewWillLeaveApplicationCallback_t153(Il2CppObject* delegate, IntPtr_t ___bannerClient);
// System.IAsyncResult GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillLeaveApplicationCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * GADUAdViewWillLeaveApplicationCallback_BeginInvoke_m849 (GADUAdViewWillLeaveApplicationCallback_t153 * __this, IntPtr_t ___bannerClient, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillLeaveApplicationCallback::EndInvoke(System.IAsyncResult)
extern "C" void GADUAdViewWillLeaveApplicationCallback_EndInvoke_m850 (GADUAdViewWillLeaveApplicationCallback_t153 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
