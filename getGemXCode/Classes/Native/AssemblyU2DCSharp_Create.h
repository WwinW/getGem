#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t118;
// UnityEngine.GameObject
struct GameObject_t24;
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t121;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Create
struct  Create_t117  : public MonoBehaviour_t6
{
	// UnityEngine.GameObject[] Create::Cubes
	GameObjectU5BU5D_t118* ___Cubes_2;
	// UnityEngine.Ray Create::myRay
	Ray_t119  ___myRay_3;
	// UnityEngine.RaycastHit Create::Hit
	RaycastHit_t120  ___Hit_4;
	// UnityEngine.Vector3 Create::Position1
	Vector3_t34  ___Position1_5;
	// UnityEngine.Vector3 Create::Position2
	Vector3_t34  ___Position2_6;
	// UnityEngine.GameObject Create::Cube1
	GameObject_t24 * ___Cube1_7;
	// UnityEngine.GameObject Create::Cube2
	GameObject_t24 * ___Cube2_8;
	// System.Int32 Create::Click
	int32_t ___Click_9;
	// System.Boolean Create::Checked
	bool ___Checked_10;
	// System.Boolean Create::GamerOver
	bool ___GamerOver_11;
	// UnityEngine.Vector3 Create::Direction
	Vector3_t34  ___Direction_12;
	// System.Int32 Create::RowSames
	int32_t ___RowSames_13;
	// System.Int32 Create::ColumSames
	int32_t ___ColumSames_14;
	// System.Int32 Create::Score
	int32_t ___Score_15;
	// System.Int32 Create::Grade
	int32_t ___Grade_16;
	// System.Single Create::GameTime
	float ___GameTime_17;
	// UnityEngine.GameObject[,] Create::myGameObject
	GameObjectU5BU2CU5D_t121* ___myGameObject_18;
};
