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

// study
struct study_t506;
// System.EventHandler
struct EventHandler_t508;
// cube
struct cube_t492;
// UnityEngine.GameObject
struct GameObject_t24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void study::.ctor()
extern "C" void study__ctor_m2891 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::.cctor()
extern "C" void study__cctor_m2892 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::add_UpdateRecord(System.EventHandler)
extern "C" void study_add_UpdateRecord_m2893 (study_t506 * __this, EventHandler_t508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::remove_UpdateRecord(System.EventHandler)
extern "C" void study_remove_UpdateRecord_m2894 (study_t506 * __this, EventHandler_t508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::add_openRecord(System.EventHandler)
extern "C" void study_add_openRecord_m2895 (study_t506 * __this, EventHandler_t508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::remove_openRecord(System.EventHandler)
extern "C" void study_remove_openRecord_m2896 (study_t506 * __this, EventHandler_t508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::add_requestAdBanner(System.EventHandler)
extern "C" void study_add_requestAdBanner_m2897 (study_t506 * __this, EventHandler_t508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::remove_requestAdBanner(System.EventHandler)
extern "C" void study_remove_requestAdBanner_m2898 (study_t506 * __this, EventHandler_t508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::add_requestAdInterstitial(System.EventHandler)
extern "C" void study_add_requestAdInterstitial_m2899 (study_t506 * __this, EventHandler_t508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::remove_requestAdInterstitial(System.EventHandler)
extern "C" void study_remove_requestAdInterstitial_m2900 (study_t506 * __this, EventHandler_t508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::add_gameStart(System.EventHandler)
extern "C" void study_add_gameStart_m2901 (study_t506 * __this, EventHandler_t508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::remove_gameStart(System.EventHandler)
extern "C" void study_remove_gameStart_m2902 (study_t506 * __this, EventHandler_t508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color study::getColor()
extern "C" Color_t33  study_getColor_m2903 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::Start()
extern "C" void study_Start_m2904 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::Update()
extern "C" void study_Update_m2905 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::GameInit()
extern "C" void study_GameInit_m2906 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::FireBullet()
extern "C" void study_FireBullet_m2907 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::createNewBullet()
extern "C" void study_createNewBullet_m2908 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::DealCollision(System.Int32,System.Int32,UnityEngine.Color)
extern "C" void study_DealCollision_m2909 (study_t506 * __this, int32_t ___indexX, int32_t ___indexY, Color_t33  ___materialColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// cube study::findCube(System.Int32,System.Int32,System.Int32&)
extern "C" cube_t492 * study_findCube_m2910 (study_t506 * __this, int32_t ___x, int32_t ___y, int32_t* ___finalY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::findSameColorCube(System.Int32,System.Int32,UnityEngine.Color)
extern "C" void study_findSameColorCube_m2911 (study_t506 * __this, int32_t ___x, int32_t ___y, Color_t33  ___bulletColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::LevelUpPlay()
extern "C" void study_LevelUpPlay_m2912 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::caluDestroyScore()
extern "C" void study_caluDestroyScore_m2913 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::dealDestroyCube()
extern "C" void study_dealDestroyCube_m2914 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::upFindCube()
extern "C" void study_upFindCube_m2915 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::OnApplicationQuit()
extern "C" void study_OnApplicationQuit_m2916 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::OnStartClick(UnityEngine.GameObject)
extern "C" void study_OnStartClick_m2917 (study_t506 * __this, GameObject_t24 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::OnPauseClick(UnityEngine.GameObject)
extern "C" void study_OnPauseClick_m2918 (study_t506 * __this, GameObject_t24 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::OnReStartClick(UnityEngine.GameObject)
extern "C" void study_OnReStartClick_m2919 (study_t506 * __this, GameObject_t24 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::OnRateClick(UnityEngine.GameObject)
extern "C" void study_OnRateClick_m2920 (study_t506 * __this, GameObject_t24 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::OnRecordClick(UnityEngine.GameObject)
extern "C" void study_OnRecordClick_m2921 (study_t506 * __this, GameObject_t24 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::FixedUpdate()
extern "C" void study_FixedUpdate_m2922 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::LevelUIEffect()
extern "C" void study_LevelUIEffect_m2923 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void study::openMenu()
extern "C" void study_openMenu_m2924 (study_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
