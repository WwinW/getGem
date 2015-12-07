#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.GameObject
struct GameObject_t24;
// SpawnPool
struct SpawnPool_t10;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t20;

#include "mscorlib_System_Object.h"

// PrefabPool
struct  PrefabPool_t22  : public Object_t
{
	// UnityEngine.Transform PrefabPool::prefab
	Transform_t9 * ___prefab_0;
	// UnityEngine.GameObject PrefabPool::prefabGO
	GameObject_t24 * ___prefabGO_1;
	// System.Int32 PrefabPool::preloadAmount
	int32_t ___preloadAmount_2;
	// System.Boolean PrefabPool::preloadTime
	bool ___preloadTime_3;
	// System.Int32 PrefabPool::preloadFrames
	int32_t ___preloadFrames_4;
	// System.Single PrefabPool::preloadDelay
	float ___preloadDelay_5;
	// System.Boolean PrefabPool::limitInstances
	bool ___limitInstances_6;
	// System.Int32 PrefabPool::limitAmount
	int32_t ___limitAmount_7;
	// System.Boolean PrefabPool::limitFIFO
	bool ___limitFIFO_8;
	// System.Boolean PrefabPool::cullDespawned
	bool ___cullDespawned_9;
	// System.Int32 PrefabPool::cullAbove
	int32_t ___cullAbove_10;
	// System.Int32 PrefabPool::cullDelay
	int32_t ___cullDelay_11;
	// System.Int32 PrefabPool::cullMaxPerPass
	int32_t ___cullMaxPerPass_12;
	// System.Boolean PrefabPool::_logMessages
	bool ____logMessages_13;
	// System.Boolean PrefabPool::forceLoggingSilent
	bool ___forceLoggingSilent_14;
	// SpawnPool PrefabPool::spawnPool
	SpawnPool_t10 * ___spawnPool_15;
	// System.Boolean PrefabPool::cullingActive
	bool ___cullingActive_16;
	// System.Collections.Generic.List`1<UnityEngine.Transform> PrefabPool::_spawned
	List_1_t20 * ____spawned_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> PrefabPool::_despawned
	List_1_t20 * ____despawned_18;
	// System.Boolean PrefabPool::_preloaded
	bool ____preloaded_19;
};
