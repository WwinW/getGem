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

// SpringPanel
struct SpringPanel_t364;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void SpringPanel::.ctor()
extern "C" void SpringPanel__ctor_m1865 (SpringPanel_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel::Start()
extern "C" void SpringPanel_Start_m1866 (SpringPanel_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel::Update()
extern "C" void SpringPanel_Update_m1867 (SpringPanel_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel::AdvanceTowardsPosition()
extern "C" void SpringPanel_AdvanceTowardsPosition_m1868 (SpringPanel_t364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpringPanel SpringPanel::Begin(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" SpringPanel_t364 * SpringPanel_Begin_m1869 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, Vector3_t34  ___pos, float ___strength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
