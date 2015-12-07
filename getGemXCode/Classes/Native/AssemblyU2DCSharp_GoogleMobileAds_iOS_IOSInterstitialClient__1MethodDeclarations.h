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

// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillPresentScreenCallback
struct GADUInterstitialWillPresentScreenCallback_t159;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillPresentScreenCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GADUInterstitialWillPresentScreenCallback__ctor_m874 (GADUInterstitialWillPresentScreenCallback_t159 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillPresentScreenCallback::Invoke(System.IntPtr)
extern "C" void GADUInterstitialWillPresentScreenCallback_Invoke_m875 (GADUInterstitialWillPresentScreenCallback_t159 * __this, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUInterstitialWillPresentScreenCallback_t159(Il2CppObject* delegate, IntPtr_t ___interstitialClient);
// System.IAsyncResult GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillPresentScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * GADUInterstitialWillPresentScreenCallback_BeginInvoke_m876 (GADUInterstitialWillPresentScreenCallback_t159 * __this, IntPtr_t ___interstitialClient, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillPresentScreenCallback::EndInvoke(System.IAsyncResult)
extern "C" void GADUInterstitialWillPresentScreenCallback_EndInvoke_m877 (GADUInterstitialWillPresentScreenCallback_t159 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
