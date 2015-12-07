#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t788;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t789;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t790;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t791;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t333;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.UI.VertexHelper
struct  VertexHelper_t787  : public Object_t
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t788 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t789 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t790 * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t790 * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t788 * ___m_Normals_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t791 * ___m_Tangents_5;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indicies
	List_1_t333 * ___m_Indicies_6;
};
struct VertexHelper_t787_StaticFields{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t391  ___s_DefaultTangent_7;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t34  ___s_DefaultNormal_8;
};
