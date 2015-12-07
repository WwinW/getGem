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

// cube
struct cube_t492;
// UnityEngine.Collision
struct Collision_t524;

#include "codegen/il2cpp-codegen.h"

// System.Void cube::.ctor()
extern "C" void cube__ctor_m2855 (cube_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cube::get_readyPos()
extern "C" bool cube_get_readyPos_m2856 (cube_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cube::set_readyPos(System.Boolean)
extern "C" void cube_set_readyPos_m2857 (cube_t492 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cube::get_IsKilled()
extern "C" bool cube_get_IsKilled_m2858 (cube_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cube::set_IsKilled(System.Boolean)
extern "C" void cube_set_IsKilled_m2859 (cube_t492 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cube::get_IsChecked()
extern "C" bool cube_get_IsChecked_m2860 (cube_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cube::set_IsChecked(System.Boolean)
extern "C" void cube_set_IsChecked_m2861 (cube_t492 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cube::setIndex(System.Int32,System.Int32)
extern "C" void cube_setIndex_m2862 (cube_t492 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cube::AnimationEnd()
extern "C" void cube_AnimationEnd_m2863 (cube_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cube::gotoScorePanelAnimEnd()
extern "C" void cube_gotoScorePanelAnimEnd_m2864 (cube_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cube::Start()
extern "C" void cube_Start_m2865 (cube_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cube::Update()
extern "C" void cube_Update_m2866 (cube_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cube::OnCollisionEnter(UnityEngine.Collision)
extern "C" void cube_OnCollisionEnter_m2867 (cube_t492 * __this, Collision_t524 * ___otherObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
