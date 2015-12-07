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

// UITweener
struct UITweener_t408;
// EventDelegate/Callback
struct Callback_t227;
// EventDelegate
struct EventDelegate_t340;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"

// System.Void UITweener::.ctor()
extern "C" void UITweener__ctor_m2253 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITweener::get_amountPerDelta()
extern "C" float UITweener_get_amountPerDelta_m2254 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITweener::get_tweenFactor()
extern "C" float UITweener_get_tweenFactor_m2255 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::set_tweenFactor(System.Single)
extern "C" void UITweener_set_tweenFactor_m2256 (UITweener_t408 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AnimationOrTween.Direction UITweener::get_direction()
extern "C" int32_t UITweener_get_direction_m2257 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Reset()
extern "C" void UITweener_Reset_m2258 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Start()
extern "C" void UITweener_Start_m2259 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Update()
extern "C" void UITweener_Update_m2260 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::SetOnFinished(EventDelegate/Callback)
extern "C" void UITweener_SetOnFinished_m2261 (UITweener_t408 * __this, Callback_t227 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::SetOnFinished(EventDelegate)
extern "C" void UITweener_SetOnFinished_m2262 (UITweener_t408 * __this, EventDelegate_t340 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::AddOnFinished(EventDelegate/Callback)
extern "C" void UITweener_AddOnFinished_m2263 (UITweener_t408 * __this, Callback_t227 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::AddOnFinished(EventDelegate)
extern "C" void UITweener_AddOnFinished_m2264 (UITweener_t408 * __this, EventDelegate_t340 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::RemoveOnFinished(EventDelegate)
extern "C" void UITweener_RemoveOnFinished_m2265 (UITweener_t408 * __this, EventDelegate_t340 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::OnDisable()
extern "C" void UITweener_OnDisable_m2266 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Sample(System.Single,System.Boolean)
extern "C" void UITweener_Sample_m2267 (UITweener_t408 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UITweener::BounceLogic(System.Single)
extern "C" float UITweener_BounceLogic_m2268 (UITweener_t408 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Play()
extern "C" void UITweener_Play_m2269 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::PlayForward()
extern "C" void UITweener_PlayForward_m2270 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::PlayReverse()
extern "C" void UITweener_PlayReverse_m2271 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Play(System.Boolean)
extern "C" void UITweener_Play_m2272 (UITweener_t408 * __this, bool ___forward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::ResetToBeginning()
extern "C" void UITweener_ResetToBeginning_m2273 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::Toggle()
extern "C" void UITweener_Toggle_m2274 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::SetStartToCurrentValue()
extern "C" void UITweener_SetStartToCurrentValue_m2275 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener::SetEndToCurrentValue()
extern "C" void UITweener_SetEndToCurrentValue_m2276 (UITweener_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
