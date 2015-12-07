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

// GameCenter
struct GameCenter_t122;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t24;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t129;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t514;

#include "codegen/il2cpp-codegen.h"

// System.Void GameCenter::.ctor()
extern "C" void GameCenter__ctor_m678 (GameCenter_t122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter::Start()
extern "C" void GameCenter_Start_m679 (GameCenter_t122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter::Update()
extern "C" void GameCenter_Update_m680 (GameCenter_t122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter::ProcessAuthentication(System.Boolean)
extern "C" void GameCenter_ProcessAuthentication_m681 (GameCenter_t122 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter::ReportScore(System.Int64,System.String)
extern "C" void GameCenter_ReportScore_m682 (GameCenter_t122 * __this, int64_t ___score, String_t* ___leaderboardID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter::OnRecordClick(UnityEngine.GameObject)
extern "C" void GameCenter_OnRecordClick_m683 (GameCenter_t122 * __this, GameObject_t24 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter::ShowLeaderboard()
extern "C" void GameCenter_ShowLeaderboard_m684 (GameCenter_t122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter::onUpdateRecord(System.Object,System.EventArgs)
extern "C" void GameCenter_onUpdateRecord_m685 (GameCenter_t122 * __this, Object_t * ___sender, EventArgs_t129 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter::onOpenRecord(System.Object,System.EventArgs)
extern "C" void GameCenter_onOpenRecord_m686 (GameCenter_t122 * __this, Object_t * ___sender, EventArgs_t129 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter::<ProcessAuthentication>m__0(UnityEngine.SocialPlatforms.IScore[])
extern "C" void GameCenter_U3CProcessAuthenticationU3Em__0_m687 (Object_t * __this /* static, unused */, IScoreU5BU5D_t514* ___scores, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter::<ReportScore>m__1(System.Boolean)
extern "C" void GameCenter_U3CReportScoreU3Em__1_m688 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
