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

// GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct GADUInterstitialDidFailToReceiveAdWithErrorCallback_t158;
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

// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GADUInterstitialDidFailToReceiveAdWithErrorCallback__ctor_m870 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t158 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
extern "C" void GADUInterstitialDidFailToReceiveAdWithErrorCallback_Invoke_m871 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t158 * __this, IntPtr_t ___interstitialClient, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUInterstitialDidFailToReceiveAdWithErrorCallback_t158(Il2CppObject* delegate, IntPtr_t ___interstitialClient, String_t* ___error);
// System.IAsyncResult GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * GADUInterstitialDidFailToReceiveAdWithErrorCallback_BeginInvoke_m872 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t158 * __this, IntPtr_t ___interstitialClient, String_t* ___error, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.IOSInterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
extern "C" void GADUInterstitialDidFailToReceiveAdWithErrorCallback_EndInvoke_m873 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t158 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
