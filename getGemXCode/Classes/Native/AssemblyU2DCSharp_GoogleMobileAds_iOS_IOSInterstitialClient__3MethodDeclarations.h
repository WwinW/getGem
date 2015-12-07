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

// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidDismissScreenCallback
struct GADUInterstitialDidDismissScreenCallback_t161;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidDismissScreenCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GADUInterstitialDidDismissScreenCallback__ctor_m882 (GADUInterstitialDidDismissScreenCallback_t161 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidDismissScreenCallback::Invoke(System.IntPtr)
extern "C" void GADUInterstitialDidDismissScreenCallback_Invoke_m883 (GADUInterstitialDidDismissScreenCallback_t161 * __this, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUInterstitialDidDismissScreenCallback_t161(Il2CppObject* delegate, IntPtr_t ___interstitialClient);
// System.IAsyncResult GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidDismissScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * GADUInterstitialDidDismissScreenCallback_BeginInvoke_m884 (GADUInterstitialDidDismissScreenCallback_t161 * __this, IntPtr_t ___interstitialClient, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidDismissScreenCallback::EndInvoke(System.IAsyncResult)
extern "C" void GADUInterstitialDidDismissScreenCallback_EndInvoke_m885 (GADUInterstitialDidDismissScreenCallback_t161 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
