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

// iTween
struct iTween_t43;
// System.Collections.Hashtable
struct Hashtable_t46;
// UnityEngine.GameObject
struct GameObject_t24;
// UnityEngine.AudioClip
struct AudioClip_t70;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// UnityEngine.Transform[]
struct TransformU5BU5D_t64;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;
// UnityEngine.Texture2D
struct Texture2D_t71;
// UnityEngine.Transform
struct Transform_t9;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t72;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void iTween::.ctor(System.Collections.Hashtable)
extern "C" void iTween__ctor_m192 (iTween_t43 * __this, Hashtable_t46 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::.cctor()
extern "C" void iTween__cctor_m193 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Init(UnityEngine.GameObject)
extern "C" void iTween_Init_m194 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeFrom(System.Single,System.Single)
extern "C" void iTween_CameraFadeFrom_m195 (Object_t * __this /* static, unused */, float ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeFrom(System.Collections.Hashtable)
extern "C" void iTween_CameraFadeFrom_m196 (Object_t * __this /* static, unused */, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeTo(System.Single,System.Single)
extern "C" void iTween_CameraFadeTo_m197 (Object_t * __this /* static, unused */, float ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeTo(System.Collections.Hashtable)
extern "C" void iTween_CameraFadeTo_m198 (Object_t * __this /* static, unused */, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ValueTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ValueTo_m199 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Single,System.Single)
extern "C" void iTween_FadeFrom_m200 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, float ___alpha, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_FadeFrom_m201 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Single,System.Single)
extern "C" void iTween_FadeTo_m202 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, float ___alpha, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_FadeTo_m203 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorFrom(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" void iTween_ColorFrom_m204 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Color_t33  ___color, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ColorFrom_m205 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorTo(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" void iTween_ColorTo_m206 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Color_t33  ___color, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ColorTo_m207 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" void iTween_AudioFrom_m208 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_AudioFrom_m209 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" void iTween_AudioTo_m210 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_AudioTo_m211 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stab(UnityEngine.GameObject,UnityEngine.AudioClip,System.Single)
extern "C" void iTween_Stab_m212 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, AudioClip_t70 * ___audioclip, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stab(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_Stab_m213 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_LookFrom_m214 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___looktarget, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_LookFrom_m215 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_LookTo_m216 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___looktarget, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_LookTo_m217 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveTo_m218 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___position, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveTo_m219 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveFrom_m220 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___position, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveFrom_m221 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveAdd_m222 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveAdd_m223 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveBy_m224 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveBy_m225 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleTo_m226 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___scale, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleTo_m227 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleFrom_m228 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___scale, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleFrom_m229 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleAdd_m230 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleAdd_m231 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleBy_m232 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleBy_m233 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateTo_m234 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___rotation, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateTo_m235 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateFrom_m236 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___rotation, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateFrom_m237 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateAdd_m238 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateAdd_m239 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateBy_m240 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateBy_m241 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakePosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ShakePosition_m242 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakePosition(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ShakePosition_m243 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ShakeScale_m244 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeScale(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ShakeScale_m245 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ShakeRotation_m246 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ShakeRotation_m247 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchPosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_PunchPosition_m248 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchPosition(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_PunchPosition_m249 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_PunchRotation_m250 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchRotation(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_PunchRotation_m251 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_PunchScale_m252 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchScale(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_PunchScale_m253 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateTargets()
extern "C" void iTween_GenerateTargets_m254 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRectTargets()
extern "C" void iTween_GenerateRectTargets_m255 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateColorTargets()
extern "C" void iTween_GenerateColorTargets_m256 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateVector3Targets()
extern "C" void iTween_GenerateVector3Targets_m257 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateVector2Targets()
extern "C" void iTween_GenerateVector2Targets_m258 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateFloatTargets()
extern "C" void iTween_GenerateFloatTargets_m259 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateColorToTargets()
extern "C" void iTween_GenerateColorToTargets_m260 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateAudioToTargets()
extern "C" void iTween_GenerateAudioToTargets_m261 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateStabTargets()
extern "C" void iTween_GenerateStabTargets_m262 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateLookToTargets()
extern "C" void iTween_GenerateLookToTargets_m263 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveToPathTargets()
extern "C" void iTween_GenerateMoveToPathTargets_m264 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveToTargets()
extern "C" void iTween_GenerateMoveToTargets_m265 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveByTargets()
extern "C" void iTween_GenerateMoveByTargets_m266 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleToTargets()
extern "C" void iTween_GenerateScaleToTargets_m267 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleByTargets()
extern "C" void iTween_GenerateScaleByTargets_m268 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleAddTargets()
extern "C" void iTween_GenerateScaleAddTargets_m269 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateToTargets()
extern "C" void iTween_GenerateRotateToTargets_m270 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateAddTargets()
extern "C" void iTween_GenerateRotateAddTargets_m271 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateByTargets()
extern "C" void iTween_GenerateRotateByTargets_m272 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakePositionTargets()
extern "C" void iTween_GenerateShakePositionTargets_m273 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakeScaleTargets()
extern "C" void iTween_GenerateShakeScaleTargets_m274 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakeRotationTargets()
extern "C" void iTween_GenerateShakeRotationTargets_m275 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchPositionTargets()
extern "C" void iTween_GeneratePunchPositionTargets_m276 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchRotationTargets()
extern "C" void iTween_GeneratePunchRotationTargets_m277 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchScaleTargets()
extern "C" void iTween_GeneratePunchScaleTargets_m278 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRectTargets()
extern "C" void iTween_ApplyRectTargets_m279 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyColorTargets()
extern "C" void iTween_ApplyColorTargets_m280 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyVector3Targets()
extern "C" void iTween_ApplyVector3Targets_m281 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyVector2Targets()
extern "C" void iTween_ApplyVector2Targets_m282 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyFloatTargets()
extern "C" void iTween_ApplyFloatTargets_m283 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyColorToTargets()
extern "C" void iTween_ApplyColorToTargets_m284 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyAudioToTargets()
extern "C" void iTween_ApplyAudioToTargets_m285 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyStabTargets()
extern "C" void iTween_ApplyStabTargets_m286 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveToPathTargets()
extern "C" void iTween_ApplyMoveToPathTargets_m287 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveToTargets()
extern "C" void iTween_ApplyMoveToTargets_m288 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveByTargets()
extern "C" void iTween_ApplyMoveByTargets_m289 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyScaleToTargets()
extern "C" void iTween_ApplyScaleToTargets_m290 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyLookToTargets()
extern "C" void iTween_ApplyLookToTargets_m291 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRotateToTargets()
extern "C" void iTween_ApplyRotateToTargets_m292 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRotateAddTargets()
extern "C" void iTween_ApplyRotateAddTargets_m293 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakePositionTargets()
extern "C" void iTween_ApplyShakePositionTargets_m294 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakeScaleTargets()
extern "C" void iTween_ApplyShakeScaleTargets_m295 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakeRotationTargets()
extern "C" void iTween_ApplyShakeRotationTargets_m296 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchPositionTargets()
extern "C" void iTween_ApplyPunchPositionTargets_m297 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchRotationTargets()
extern "C" void iTween_ApplyPunchRotationTargets_m298 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchScaleTargets()
extern "C" void iTween_ApplyPunchScaleTargets_m299 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::TweenDelay()
extern "C" Object_t * iTween_TweenDelay_m300 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenStart()
extern "C" void iTween_TweenStart_m301 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::TweenRestart()
extern "C" Object_t * iTween_TweenRestart_m302 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenUpdate()
extern "C" void iTween_TweenUpdate_m303 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenComplete()
extern "C" void iTween_TweenComplete_m304 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenLoop()
extern "C" void iTween_TweenLoop_m305 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect iTween::RectUpdate(UnityEngine.Rect,UnityEngine.Rect,System.Single)
extern "C" Rect_t55  iTween_RectUpdate_m306 (Object_t * __this /* static, unused */, Rect_t55  ___currentValue, Rect_t55  ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::Vector3Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t34  iTween_Vector3Update_m307 (Object_t * __this /* static, unused */, Vector3_t34  ___currentValue, Vector3_t34  ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 iTween::Vector2Update(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" Vector2_t54  iTween_Vector2Update_m308 (Object_t * __this /* static, unused */, Vector2_t54  ___currentValue, Vector2_t54  ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::FloatUpdate(System.Single,System.Single,System.Single)
extern "C" float iTween_FloatUpdate_m309 (Object_t * __this /* static, unused */, float ___currentValue, float ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_FadeUpdate_m310 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Single,System.Single)
extern "C" void iTween_FadeUpdate_m311 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, float ___alpha, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ColorUpdate_m312 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" void iTween_ColorUpdate_m313 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Color_t33  ___color, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_AudioUpdate_m314 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" void iTween_AudioUpdate_m315 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateUpdate_m316 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateUpdate_m317 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___rotation, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleUpdate_m318 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleUpdate_m319 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___scale, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveUpdate_m320 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveUpdate_m321 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___position, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_LookUpdate_m322 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_LookUpdate_m323 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3_t34  ___looktarget, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::PathLength(UnityEngine.Transform[])
extern "C" float iTween_PathLength_m324 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::PathLength(UnityEngine.Vector3[])
extern "C" float iTween_PathLength_m325 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D iTween::CameraTexture(UnityEngine.Color)
extern "C" Texture2D_t71 * iTween_CameraTexture_m326 (Object_t * __this /* static, unused */, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C" void iTween_PutOnPath_m327 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Vector3U5BU5D_t36* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Vector3[],System.Single)
extern "C" void iTween_PutOnPath_m328 (Object_t * __this /* static, unused */, Transform_t9 * ___target, Vector3U5BU5D_t36* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Transform[],System.Single)
extern "C" void iTween_PutOnPath_m329 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, TransformU5BU5D_t64* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Transform[],System.Single)
extern "C" void iTween_PutOnPath_m330 (Object_t * __this /* static, unused */, Transform_t9 * ___target, TransformU5BU5D_t64* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Transform[],System.Single)
extern "C" Vector3_t34  iTween_PointOnPath_m331 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Vector3[])
extern "C" void iTween_DrawLine_m332 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawLine_m333 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___line, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Transform[])
extern "C" void iTween_DrawLine_m334 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawLine_m335 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___line, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[])
extern "C" void iTween_DrawLineGizmos_m336 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawLineGizmos_m337 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___line, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[])
extern "C" void iTween_DrawLineGizmos_m338 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawLineGizmos_m339 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___line, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[])
extern "C" void iTween_DrawLineHandles_m340 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawLineHandles_m341 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___line, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[])
extern "C" void iTween_DrawLineHandles_m342 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawLineHandles_m343 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___line, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Vector3[],System.Single)
extern "C" Vector3_t34  iTween_PointOnPath_m344 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Vector3[])
extern "C" void iTween_DrawPath_m345 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawPath_m346 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___path, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Transform[])
extern "C" void iTween_DrawPath_m347 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawPath_m348 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___path, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[])
extern "C" void iTween_DrawPathGizmos_m349 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawPathGizmos_m350 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___path, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[])
extern "C" void iTween_DrawPathGizmos_m351 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawPathGizmos_m352 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___path, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[])
extern "C" void iTween_DrawPathHandles_m353 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawPathHandles_m354 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___path, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[])
extern "C" void iTween_DrawPathHandles_m355 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawPathHandles_m356 (Object_t * __this /* static, unused */, TransformU5BU5D_t64* ___path, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeDepth(System.Int32)
extern "C" void iTween_CameraFadeDepth_m357 (Object_t * __this /* static, unused */, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeDestroy()
extern "C" void iTween_CameraFadeDestroy_m358 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeSwap(UnityEngine.Texture2D)
extern "C" void iTween_CameraFadeSwap_m359 (Object_t * __this /* static, unused */, Texture2D_t71 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D,System.Int32)
extern "C" GameObject_t24 * iTween_CameraFadeAdd_m360 (Object_t * __this /* static, unused */, Texture2D_t71 * ___texture, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D)
extern "C" GameObject_t24 * iTween_CameraFadeAdd_m361 (Object_t * __this /* static, unused */, Texture2D_t71 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd()
extern "C" GameObject_t24 * iTween_CameraFadeAdd_m362 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject)
extern "C" void iTween_Resume_m363 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.Boolean)
extern "C" void iTween_Resume_m364 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.String)
extern "C" void iTween_Resume_m365 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_Resume_m366 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume()
extern "C" void iTween_Resume_m367 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(System.String)
extern "C" void iTween_Resume_m368 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject)
extern "C" void iTween_Pause_m369 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.Boolean)
extern "C" void iTween_Pause_m370 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.String)
extern "C" void iTween_Pause_m371 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_Pause_m372 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause()
extern "C" void iTween_Pause_m373 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(System.String)
extern "C" void iTween_Pause_m374 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count()
extern "C" int32_t iTween_Count_m375 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(System.String)
extern "C" int32_t iTween_Count_m376 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(UnityEngine.GameObject)
extern "C" int32_t iTween_Count_m377 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(UnityEngine.GameObject,System.String)
extern "C" int32_t iTween_Count_m378 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop()
extern "C" void iTween_Stop_m379 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(System.String)
extern "C" void iTween_Stop_m380 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(System.String)
extern "C" void iTween_StopByName_m381 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject)
extern "C" void iTween_Stop_m382 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.Boolean)
extern "C" void iTween_Stop_m383 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.String)
extern "C" void iTween_Stop_m384 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String)
extern "C" void iTween_StopByName_m385 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_Stop_m386 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_StopByName_m387 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, String_t* ___name, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable iTween::Hash(System.Object[])
extern "C" Hashtable_t46 * iTween_Hash_m388 (Object_t * __this /* static, unused */, ObjectU5BU5D_t72* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Awake()
extern "C" void iTween_Awake_m389 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::Start()
extern "C" Object_t * iTween_Start_m390 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Update()
extern "C" void iTween_Update_m391 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FixedUpdate()
extern "C" void iTween_FixedUpdate_m392 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LateUpdate()
extern "C" void iTween_LateUpdate_m393 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::OnEnable()
extern "C" void iTween_OnEnable_m394 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::OnDisable()
extern "C" void iTween_OnDisable_m395 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
extern "C" void iTween_DrawLineHelper_m396 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___line, Color_t33  ___color, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
extern "C" void iTween_DrawPathHelper_m397 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___path, Color_t33  ___color, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] iTween::PathControlPointGenerator(UnityEngine.Vector3[])
extern "C" Vector3U5BU5D_t36* iTween_PathControlPointGenerator_m398 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::Interp(UnityEngine.Vector3[],System.Single)
extern "C" Vector3_t34  iTween_Interp_m399 (Object_t * __this /* static, unused */, Vector3U5BU5D_t36* ___pts, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Launch(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_Launch_m400 (Object_t * __this /* static, unused */, GameObject_t24 * ___target, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable iTween::CleanArgs(System.Collections.Hashtable)
extern "C" Hashtable_t46 * iTween_CleanArgs_m401 (Object_t * __this /* static, unused */, Hashtable_t46 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String iTween::GenerateID()
extern "C" String_t* iTween_GenerateID_m402 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RetrieveArgs()
extern "C" void iTween_RetrieveArgs_m403 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GetEasingFunction()
extern "C" void iTween_GetEasingFunction_m404 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::UpdatePercentage()
extern "C" void iTween_UpdatePercentage_m405 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CallBack(System.String)
extern "C" void iTween_CallBack_m406 (iTween_t43 * __this, String_t* ___callbackType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Dispose()
extern "C" void iTween_Dispose_m407 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ConflictCheck()
extern "C" void iTween_ConflictCheck_m408 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::EnableKinematic()
extern "C" void iTween_EnableKinematic_m409 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DisableKinematic()
extern "C" void iTween_DisableKinematic_m410 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ResumeDelay()
extern "C" void iTween_ResumeDelay_m411 (iTween_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::linear(System.Single,System.Single,System.Single)
extern "C" float iTween_linear_m412 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::clerp(System.Single,System.Single,System.Single)
extern "C" float iTween_clerp_m413 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::spring(System.Single,System.Single,System.Single)
extern "C" float iTween_spring_m414 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuad_m415 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuad_m416 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuad_m417 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInCubic_m418 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutCubic_m419 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutCubic_m420 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuart_m421 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuart_m422 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuart_m423 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuint_m424 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuint_m425 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuint_m426 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInSine(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInSine_m427 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutSine(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutSine_m428 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutSine(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutSine_m429 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInExpo(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInExpo_m430 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutExpo(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutExpo_m431 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutExpo(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutExpo_m432 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInCirc(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInCirc_m433 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutCirc(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutCirc_m434 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutCirc(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutCirc_m435 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInBounce_m436 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutBounce_m437 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutBounce_m438 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInBack_m439 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutBack_m440 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutBack_m441 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::punch(System.Single,System.Single)
extern "C" float iTween_punch_m442 (iTween_t43 * __this, float ___amplitude, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInElastic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInElastic_m443 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutElastic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutElastic_m444 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutElastic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutElastic_m445 (iTween_t43 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
