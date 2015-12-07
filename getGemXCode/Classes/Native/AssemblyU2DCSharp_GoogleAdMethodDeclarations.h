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

// GoogleAd
struct GoogleAd_t125;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void GoogleAd::.ctor()
extern "C" void GoogleAd__ctor_m689 (GoogleAd_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAd::Start()
extern "C" void GoogleAd_Start_m690 (GoogleAd_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAd::Update()
extern "C" void GoogleAd_Update_m691 (GoogleAd_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAd::RequestBanner()
extern "C" void GoogleAd_RequestBanner_m692 (GoogleAd_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAd::RequestInterstitial()
extern "C" void GoogleAd_RequestInterstitial_m693 (GoogleAd_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAd::OpenInterstitial()
extern "C" void GoogleAd_OpenInterstitial_m694 (GoogleAd_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAd::onGameStart(System.Object,System.EventArgs)
extern "C" void GoogleAd_onGameStart_m695 (GoogleAd_t125 * __this, Object_t * ___sender, EventArgs_t129 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAd::onIntersititialAdClose(System.Object,System.EventArgs)
extern "C" void GoogleAd_onIntersititialAdClose_m696 (GoogleAd_t125 * __this, Object_t * ___sender, EventArgs_t129 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAd::onIntersititialAdFailedToLoad(System.Object,System.EventArgs)
extern "C" void GoogleAd_onIntersititialAdFailedToLoad_m697 (GoogleAd_t125 * __this, Object_t * ___sender, EventArgs_t129 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAd::onRequestAdBanner(System.Object,System.EventArgs)
extern "C" void GoogleAd_onRequestAdBanner_m698 (GoogleAd_t125 * __this, Object_t * ___sender, EventArgs_t129 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAd::onRequestAdInterstitial(System.Object,System.EventArgs)
extern "C" void GoogleAd_onRequestAdInterstitial_m699 (GoogleAd_t125 * __this, Object_t * ___sender, EventArgs_t129 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAd::OnDestroy()
extern "C" void GoogleAd_OnDestroy_m700 (GoogleAd_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
