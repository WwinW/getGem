#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<PrefabPool>
struct List_1_t17;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t18;
// PrefabsDict
struct PrefabsDict_t19;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t20;
// UnityEngine.Transform
struct Transform_t9;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// SpawnPool
struct  SpawnPool_t10  : public MonoBehaviour_t6
{
	// System.String SpawnPool::poolName
	String_t* ___poolName_2;
	// System.Boolean SpawnPool::matchPoolScale
	bool ___matchPoolScale_3;
	// System.Boolean SpawnPool::matchPoolLayer
	bool ___matchPoolLayer_4;
	// System.Boolean SpawnPool::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_5;
	// System.Boolean SpawnPool::logMessages
	bool ___logMessages_6;
	// System.Collections.Generic.List`1<PrefabPool> SpawnPool::_perPrefabPoolOptions
	List_1_t17 * ____perPrefabPoolOptions_7;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean> SpawnPool::prefabsFoldOutStates
	Dictionary_2_t18 * ___prefabsFoldOutStates_8;
	// System.Single SpawnPool::maxParticleDespawnTime
	float ___maxParticleDespawnTime_9;
	// PrefabsDict SpawnPool::prefabs
	PrefabsDict_t19 * ___prefabs_10;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean> SpawnPool::_editorListItemStates
	Dictionary_2_t18 * ____editorListItemStates_11;
	// System.Collections.Generic.List`1<PrefabPool> SpawnPool::_prefabPools
	List_1_t17 * ____prefabPools_12;
	// System.Collections.Generic.List`1<UnityEngine.Transform> SpawnPool::_spawned
	List_1_t20 * ____spawned_13;
	// UnityEngine.Transform SpawnPool::<group>k__BackingField
	Transform_t9 * ___U3CgroupU3Ek__BackingField_14;
};
