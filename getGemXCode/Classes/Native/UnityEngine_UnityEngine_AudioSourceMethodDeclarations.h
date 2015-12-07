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

// UnityEngine.AudioSource
struct AudioSource_t47;
// UnityEngine.AudioClip
struct AudioClip_t70;

#include "codegen/il2cpp-codegen.h"

// System.Single UnityEngine.AudioSource::get_volume()
extern "C" float AudioSource_get_volume_m572 (AudioSource_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m574 (AudioSource_t47 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::get_pitch()
extern "C" float AudioSource_get_pitch_m573 (AudioSource_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C" void AudioSource_set_pitch_m575 (AudioSource_t47 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" AudioClip_t70 * AudioSource_get_clip_m602 (AudioSource_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void AudioSource_set_clip_m601 (AudioSource_t47 * __this, AudioClip_t70 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m6075 (AudioSource_t47 * __this, uint64_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m3667 (AudioSource_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m3317 (AudioSource_t47 * __this, AudioClip_t70 * ___clip, float ___volumeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void AudioSource_PlayOneShot_m624 (AudioSource_t47 * __this, AudioClip_t70 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern "C" void AudioSource_set_playOnAwake_m600 (AudioSource_t47 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_priority(System.Int32)
extern "C" void AudioSource_set_priority_m3316 (AudioSource_t47 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
