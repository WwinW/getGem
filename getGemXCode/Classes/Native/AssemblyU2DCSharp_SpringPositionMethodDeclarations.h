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

// SpringPosition
struct SpringPosition_t406;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void SpringPosition::.ctor()
extern "C" void SpringPosition__ctor_m2128 (SpringPosition_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::Start()
extern "C" void SpringPosition_Start_m2129 (SpringPosition_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::Update()
extern "C" void SpringPosition_Update_m2130 (SpringPosition_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::NotifyListeners()
extern "C" void SpringPosition_NotifyListeners_m2131 (SpringPosition_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpringPosition SpringPosition::Begin(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" SpringPosition_t406 * SpringPosition_Begin_m2132 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, Vector3_t34  ___pos, float ___strength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
