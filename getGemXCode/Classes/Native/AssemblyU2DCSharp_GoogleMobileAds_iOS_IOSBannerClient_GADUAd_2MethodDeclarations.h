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

// GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillDismissScreenCallback
struct GADUAdViewWillDismissScreenCallback_t151;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillDismissScreenCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GADUAdViewWillDismissScreenCallback__ctor_m839 (GADUAdViewWillDismissScreenCallback_t151 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillDismissScreenCallback::Invoke(System.IntPtr)
extern "C" void GADUAdViewWillDismissScreenCallback_Invoke_m840 (GADUAdViewWillDismissScreenCallback_t151 * __this, IntPtr_t ___bannerClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUAdViewWillDismissScreenCallback_t151(Il2CppObject* delegate, IntPtr_t ___bannerClient);
// System.IAsyncResult GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillDismissScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * GADUAdViewWillDismissScreenCallback_BeginInvoke_m841 (GADUAdViewWillDismissScreenCallback_t151 * __this, IntPtr_t ___bannerClient, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSBannerClient/GADUAdViewWillDismissScreenCallback::EndInvoke(System.IAsyncResult)
extern "C" void GADUAdViewWillDismissScreenCallback_EndInvoke_m842 (GADUAdViewWillDismissScreenCallback_t151 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
