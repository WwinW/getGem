﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_t1045;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t527;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t124;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t123;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern "C" Object_t * Social_get_Active_m6593 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern "C" Object_t * Social_get_localUser_m2945 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C" void Social_ReportScore_m2950 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___board, Action_1_t124 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern "C" void Social_LoadScores_m2948 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, Action_1_t123 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ShowLeaderboardUI()
extern "C" void Social_ShowLeaderboardUI_m2951 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
