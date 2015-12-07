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

// UnityEngine.ParticleSystem
struct ParticleSystem_t15;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1087;
// UnityEngine.Transform
struct Transform_t9;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t1088;

#include "codegen/il2cpp-codegen.h"

// System.Single UnityEngine.ParticleSystem::get_startDelay()
extern "C" float ParticleSystem_get_startDelay_m485 (ParticleSystem_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Clear()
extern "C" void ParticleSystem_Internal_Clear_m6012 (ParticleSystem_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_IsAlive()
extern "C" bool ParticleSystem_Internal_IsAlive_m6013 (ParticleSystem_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
extern "C" void ParticleSystem_Clear_m486 (ParticleSystem_t15 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
extern "C" bool ParticleSystem_IsAlive_m487 (ParticleSystem_t15 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern "C" ParticleSystemU5BU5D_t1087* ParticleSystem_GetParticleSystems_m6014 (Object_t * __this /* static, unused */, ParticleSystem_t15 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m6015 (Object_t * __this /* static, unused */, Transform_t9 * ___transform, List_1_t1088 * ___particleSystems, const MethodInfo* method) IL2CPP_METHOD_ATTR;
