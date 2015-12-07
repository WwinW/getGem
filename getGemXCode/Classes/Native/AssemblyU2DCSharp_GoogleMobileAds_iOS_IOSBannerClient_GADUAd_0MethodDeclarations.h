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

// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback
struct GADUAdViewDidFailToReceiveAdWithErrorCallback_t149;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GADUAdViewDidFailToReceiveAdWithErrorCallback__ctor_m831 (GADUAdViewDidFailToReceiveAdWithErrorCallback_t149 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
extern "C" void GADUAdViewDidFailToReceiveAdWithErrorCallback_Invoke_m832 (GADUAdViewDidFailToReceiveAdWithErrorCallback_t149 * __this, IntPtr_t ___bannerClient, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUAdViewDidFailToReceiveAdWithErrorCallback_t149(Il2CppObject* delegate, IntPtr_t ___bannerClient, String_t* ___error);
// System.IAsyncResult GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * GADUAdViewDidFailToReceiveAdWithErrorCallback_BeginInvoke_m833 (GADUAdViewDidFailToReceiveAdWithErrorCallback_t149 * __this, IntPtr_t ___bannerClient, String_t* ___error, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
extern "C" void GADUAdViewDidFailToReceiveAdWithErrorCallback_EndInvoke_m834 (GADUAdViewDidFailToReceiveAdWithErrorCallback_t149 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
