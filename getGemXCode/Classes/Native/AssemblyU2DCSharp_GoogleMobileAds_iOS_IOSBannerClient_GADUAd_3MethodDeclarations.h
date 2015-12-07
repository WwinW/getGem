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

// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidDismissScreenCallback
struct GADUAdViewDidDismissScreenCallback_t152;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidDismissScreenCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GADUAdViewDidDismissScreenCallback__ctor_m843 (GADUAdViewDidDismissScreenCallback_t152 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidDismissScreenCallback::Invoke(System.IntPtr)
extern "C" void GADUAdViewDidDismissScreenCallback_Invoke_m844 (GADUAdViewDidDismissScreenCallback_t152 * __this, IntPtr_t ___bannerClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUAdViewDidDismissScreenCallback_t152(Il2CppObject* delegate, IntPtr_t ___bannerClient);
// System.IAsyncResult GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidDismissScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * GADUAdViewDidDismissScreenCallback_BeginInvoke_m845 (GADUAdViewDidDismissScreenCallback_t152 * __this, IntPtr_t ___bannerClient, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewDidDismissScreenCallback::EndInvoke(System.IAsyncResult)
extern "C" void GADUAdViewDidDismissScreenCallback_EndInvoke_m846 (GADUAdViewDidDismissScreenCallback_t152 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
