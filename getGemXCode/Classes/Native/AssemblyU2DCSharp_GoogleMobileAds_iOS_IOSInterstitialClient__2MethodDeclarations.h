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

// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillDismissScreenCallback
struct GADUInterstitialWillDismissScreenCallback_t160;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillDismissScreenCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GADUInterstitialWillDismissScreenCallback__ctor_m878 (GADUInterstitialWillDismissScreenCallback_t160 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillDismissScreenCallback::Invoke(System.IntPtr)
extern "C" void GADUInterstitialWillDismissScreenCallback_Invoke_m879 (GADUInterstitialWillDismissScreenCallback_t160 * __this, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUInterstitialWillDismissScreenCallback_t160(Il2CppObject* delegate, IntPtr_t ___interstitialClient);
// System.IAsyncResult GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillDismissScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * GADUInterstitialWillDismissScreenCallback_BeginInvoke_m880 (GADUInterstitialWillDismissScreenCallback_t160 * __this, IntPtr_t ___interstitialClient, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillDismissScreenCallback::EndInvoke(System.IAsyncResult)
extern "C" void GADUInterstitialWillDismissScreenCallback_EndInvoke_m881 (GADUInterstitialWillDismissScreenCallback_t160 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
