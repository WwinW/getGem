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

// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidReceiveAdCallback
struct GADUAdViewDidReceiveAdCallback_t148;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GADUAdViewDidReceiveAdCallback__ctor_m827 (GADUAdViewDidReceiveAdCallback_t148 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidReceiveAdCallback::Invoke(System.IntPtr)
extern "C" void GADUAdViewDidReceiveAdCallback_Invoke_m828 (GADUAdViewDidReceiveAdCallback_t148 * __this, IntPtr_t ___bannerClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUAdViewDidReceiveAdCallback_t148(Il2CppObject* delegate, IntPtr_t ___bannerClient);
// System.IAsyncResult GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidReceiveAdCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * GADUAdViewDidReceiveAdCallback_BeginInvoke_m829 (GADUAdViewDidReceiveAdCallback_t148 * __this, IntPtr_t ___bannerClient, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidReceiveAdCallback::EndInvoke(System.IAsyncResult)
extern "C" void GADUAdViewDidReceiveAdCallback_EndInvoke_m830 (GADUAdViewDidReceiveAdCallback_t148 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
