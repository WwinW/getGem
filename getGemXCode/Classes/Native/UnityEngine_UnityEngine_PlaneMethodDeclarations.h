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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Plane.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Plane__ctor_m3113 (Plane_t268 * __this, Vector3_t34  ___inNormal, Vector3_t34  ___inPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,System.Single)
extern "C" void Plane__ctor_m3536 (Plane_t268 * __this, Vector3_t34  ___inNormal, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Plane__ctor_m3122 (Plane_t268 * __this, Vector3_t34  ___a, Vector3_t34  ___b, Vector3_t34  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" Vector3_t34  Plane_get_normal_m5755 (Plane_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
extern "C" float Plane_get_distance_m5756 (Plane_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C" bool Plane_Raycast_m3114 (Plane_t268 * __this, Ray_t119  ___ray, float* ___enter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
