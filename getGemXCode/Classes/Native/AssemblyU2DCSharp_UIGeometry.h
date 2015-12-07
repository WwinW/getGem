#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t372;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t374;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t375;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// UIGeometry
struct  UIGeometry_t390  : public Object_t
{
	// BetterList`1<UnityEngine.Vector3> UIGeometry::verts
	BetterList_1_t372 * ___verts_0;
	// BetterList`1<UnityEngine.Vector2> UIGeometry::uvs
	BetterList_1_t374 * ___uvs_1;
	// BetterList`1<UnityEngine.Color32> UIGeometry::cols
	BetterList_1_t375 * ___cols_2;
	// BetterList`1<UnityEngine.Vector3> UIGeometry::mRtpVerts
	BetterList_1_t372 * ___mRtpVerts_3;
	// UnityEngine.Vector3 UIGeometry::mRtpNormal
	Vector3_t34  ___mRtpNormal_4;
	// UnityEngine.Vector4 UIGeometry::mRtpTan
	Vector4_t391  ___mRtpTan_5;
};
