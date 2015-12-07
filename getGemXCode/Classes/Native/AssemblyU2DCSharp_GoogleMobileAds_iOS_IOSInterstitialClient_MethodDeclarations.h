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

// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidReceiveAdCallback
struct GADUInterstitialDidReceiveAdCallback_t157;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GADUInterstitialDidReceiveAdCallback__ctor_m866 (GADUInterstitialDidReceiveAdCallback_t157 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidReceiveAdCallback::Invoke(System.IntPtr)
extern "C" void GADUInterstitialDidReceiveAdCallback_Invoke_m867 (GADUInterstitialDidReceiveAdCallback_t157 * __this, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUInterstitialDidReceiveAdCallback_t157(Il2CppObject* delegate, IntPtr_t ___interstitialClient);
// System.IAsyncResult GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidReceiveAdCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * GADUInterstitialDidReceiveAdCallback_BeginInvoke_m868 (GADUInterstitialDidReceiveAdCallback_t157 * __this, IntPtr_t ___interstitialClient, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidReceiveAdCallback::EndInvoke(System.IAsyncResult)
extern "C" void GADUInterstitialDidReceiveAdCallback_EndInvoke_m869 (GADUInterstitialDidReceiveAdCallback_t157 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
