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

// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct GADUInterstitialWillLeaveApplicationCallback_t162;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillLeaveApplicationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GADUInterstitialWillLeaveApplicationCallback__ctor_m886 (GADUInterstitialWillLeaveApplicationCallback_t162 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillLeaveApplicationCallback::Invoke(System.IntPtr)
extern "C" void GADUInterstitialWillLeaveApplicationCallback_Invoke_m887 (GADUInterstitialWillLeaveApplicationCallback_t162 * __this, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUInterstitialWillLeaveApplicationCallback_t162(Il2CppObject* delegate, IntPtr_t ___interstitialClient);
// System.IAsyncResult GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillLeaveApplicationCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * GADUInterstitialWillLeaveApplicationCallback_BeginInvoke_m888 (GADUInterstitialWillLeaveApplicationCallback_t162 * __this, IntPtr_t ___interstitialClient, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialWillLeaveApplicationCallback::EndInvoke(System.IAsyncResult)
extern "C" void GADUInterstitialWillLeaveApplicationCallback_EndInvoke_m889 (GADUInterstitialWillLeaveApplicationCallback_t162 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
