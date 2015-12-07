#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// cube
struct cube_t492;
// bullet
struct bullet_t491;
// UnityEngine.GameObject
struct GameObject_t24;
// UnityEngine.AudioSource
struct AudioSource_t47;
// UILabel
struct UILabel_t177;
// UnityEngine.LineRenderer
struct LineRenderer_t507;
// System.String
struct String_t;
// UnityEngine.Color[,]
struct ColorU5BU2CU5D_t49;
// System.Int32[]
struct Int32U5BU5D_t167;
// study/grid[,]
struct gridU5BU2CU5D_t509;
// System.EventHandler
struct EventHandler_t508;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_iPhoneTouch.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// study
struct  study_t506  : public MonoBehaviour_t6
{
	// cube study::cubeObject
	cube_t492 * ___cubeObject_6;
	// bullet study::bulletObject
	bullet_t491 * ___bulletObject_7;
	// UnityEngine.GameObject study::labelfab
	GameObject_t24 * ___labelfab_8;
	// UnityEngine.AudioSource study::mSoundBulletHit
	AudioSource_t47 * ___mSoundBulletHit_9;
	// UnityEngine.AudioSource study::mSoundBulletShoot
	AudioSource_t47 * ___mSoundBulletShoot_10;
	// UnityEngine.AudioSource study::mSoundFailure
	AudioSource_t47 * ___mSoundFailure_11;
	// UnityEngine.AudioSource study::mSoundSuccess
	AudioSource_t47 * ___mSoundSuccess_12;
	// System.Single study::speed
	float ___speed_13;
	// iPhoneTouch study::startTouch
	iPhoneTouch_t500  ___startTouch_16;
	// iPhoneTouch study::endTouch
	iPhoneTouch_t500  ___endTouch_17;
	// UnityEngine.Vector3 study::initConstantForce
	Vector3_t34  ___initConstantForce_18;
	// System.Single study::generateY
	float ___generateY_19;
	// System.Single study::intervalPos
	float ___intervalPos_20;
	// System.Single study::cubeMoveTime
	float ___cubeMoveTime_21;
	// System.Single study::cubeMoveTimeMin
	float ___cubeMoveTimeMin_22;
	// bullet study::objBullet
	bullet_t491 * ___objBullet_23;
	// bullet study::objBulletFired
	bullet_t491 * ___objBulletFired_24;
	// UILabel study::ScoreLabel
	UILabel_t177 * ___ScoreLabel_25;
	// UILabel study::mDestroyCubeCount
	UILabel_t177 * ___mDestroyCubeCount_26;
	// UILabel study::mLevelLabel
	UILabel_t177 * ___mLevelLabel_27;
	// UILabel study::mEndDialog_CurrLevel
	UILabel_t177 * ___mEndDialog_CurrLevel_28;
	// UILabel study::mEndDialog_BestLevel
	UILabel_t177 * ___mEndDialog_BestLevel_29;
	// System.Single study::MaxTime
	float ___MaxTime_30;
	// System.Single study::DeltaTime
	float ___DeltaTime_31;
	// System.Int32 study::indexDestory
	int32_t ___indexDestory_32;
	// System.Int32 study::mIndexXDestoryLevelUp
	int32_t ___mIndexXDestoryLevelUp_33;
	// System.Int32 study::mInitAdvanceBaseCount
	int32_t ___mInitAdvanceBaseCount_34;
	// System.Int32 study::mInitDeltaCount
	int32_t ___mInitDeltaCount_35;
	// System.Boolean study::mbGameing
	bool ___mbGameing_36;
	// System.Boolean study::mbPlayLevelUp
	bool ___mbPlayLevelUp_37;
	// System.Int32 study::DestroyCountOnce
	int32_t ___DestroyCountOnce_38;
	// System.Int32 study::DestroyCountAll
	int32_t ___DestroyCountAll_39;
	// UnityEngine.GameObject study::mEndPanel
	GameObject_t24 * ___mEndPanel_40;
	// UnityEngine.GameObject study::mEndDialog
	GameObject_t24 * ___mEndDialog_41;
	// System.Int64 study::mLevel
	int64_t ___mLevel_46;
	// System.Int32 study::LevelCount
	int32_t ___LevelCount_47;
	// System.Int32 study::mStepCount
	int32_t ___mStepCount_48;
	// UnityEngine.Vector3 study::mRopeInitPos
	Vector3_t34  ___mRopeInitPos_50;
	// UnityEngine.Vector3 study::mScorePanelPos
	Vector3_t34  ___mScorePanelPos_51;
	// UnityEngine.LineRenderer study::ropeLineRenderer
	LineRenderer_t507 * ___ropeLineRenderer_53;
	// System.Boolean study::mBulletPickup
	bool ___mBulletPickup_54;
	// UnityEngine.Vector3 study::mBulletFireDirection
	Vector3_t34  ___mBulletFireDirection_55;
	// System.Single study::magnitude
	float ___magnitude_56;
	// System.Single study::magnitudeMax
	float ___magnitudeMax_57;
	// System.Single study::mDisH
	float ___mDisH_58;
	// UnityEngine.Vector3 study::RelationRopeLeft
	Vector3_t34  ___RelationRopeLeft_59;
	// UnityEngine.Vector3 study::RelationRopeRight
	Vector3_t34  ___RelationRopeRight_60;
	// UnityEngine.Vector3 study::RelationDownPnt
	Vector3_t34  ___RelationDownPnt_61;
	// System.Single study::mAngle
	float ___mAngle_62;
	// System.String study::Prefs_Key_BestLevel
	String_t* ___Prefs_Key_BestLevel_63;
	// System.String study::Prefs_Key_IgnoreAdCount
	String_t* ___Prefs_Key_IgnoreAdCount_64;
	// System.Int32 study::IntersititialCount
	int32_t ___IntersititialCount_65;
	// UnityEngine.GameObject study::m_Finger_Spr
	GameObject_t24 * ___m_Finger_Spr_66;
	// System.EventHandler study::UpdateRecord
	EventHandler_t508 * ___UpdateRecord_70;
	// System.EventHandler study::openRecord
	EventHandler_t508 * ___openRecord_71;
	// System.EventHandler study::requestAdBanner
	EventHandler_t508 * ___requestAdBanner_72;
	// System.EventHandler study::requestAdInterstitial
	EventHandler_t508 * ___requestAdInterstitial_73;
	// System.EventHandler study::gameStart
	EventHandler_t508 * ___gameStart_74;
};
struct study_t506_StaticFields{
	// UnityEngine.Color study::color
	Color_t33  ___color_14;
	// System.Int64 study::mBestLevel
	int64_t ___mBestLevel_15;
	// System.Boolean study::mIsHaveCollision
	bool ___mIsHaveCollision_42;
	// System.Int32 study::mCollisionIndexX
	int32_t ___mCollisionIndexX_43;
	// System.Int32 study::mCollisionIndexY
	int32_t ___mCollisionIndexY_44;
	// UnityEngine.Color study::mCollosionBulletColor
	Color_t33  ___mCollosionBulletColor_45;
	// UnityEngine.Vector3 study::mBulletInitPos
	Vector3_t34  ___mBulletInitPos_49;
	// System.Int32 study::sDestroyCubeCount
	int32_t ___sDestroyCubeCount_52;
	// UnityEngine.Color[,] study::colorArray
	ColorU5BU2CU5D_t49* ___colorArray_67;
	// System.Int32[] study::RotationArray
	Int32U5BU5D_t167* ___RotationArray_68;
	// study/grid[,] study::gridArray
	gridU5BU2CU5D_t509* ___gridArray_69;
};
