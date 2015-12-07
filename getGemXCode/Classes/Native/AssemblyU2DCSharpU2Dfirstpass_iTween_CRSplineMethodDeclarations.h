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

// iTween/CRSpline
struct CRSpline_t35;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
extern "C" void CRSpline__ctor_m164 (CRSpline_t35 * __this, Vector3U5BU5D_t36* ___pts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
extern "C" Vector3_t34  CRSpline_Interp_m165 (CRSpline_t35 * __this, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
