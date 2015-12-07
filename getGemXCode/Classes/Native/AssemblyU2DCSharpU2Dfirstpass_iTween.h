#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Hashtable>
struct List_1_t52;
// UnityEngine.GameObject
struct GameObject_t24;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t46;
// iTween/EasingFunction
struct EasingFunction_t37;
// iTween/ApplyTween
struct ApplyTween_t41;
// UnityEngine.AudioSource
struct AudioSource_t47;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t48;
// UnityEngine.Color[,]
struct ColorU5BU2CU5D_t49;
// System.Single[]
struct SingleU5BU5D_t50;
// UnityEngine.Rect[]
struct RectU5BU5D_t51;
// iTween/CRSpline
struct CRSpline_t35;
// UnityEngine.Transform
struct Transform_t9;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t53;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharpU2Dfirstpass_iTween_EaseType.h"
#include "AssemblyU2DCSharpU2Dfirstpass_iTween_LoopType.h"
#include "UnityEngine_UnityEngine_Space.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_iTween_NamedValueColor.h"

// iTween
struct  iTween_t43  : public MonoBehaviour_t6
{
	// System.String iTween::id
	String_t* ___id_4;
	// System.String iTween::type
	String_t* ___type_5;
	// System.String iTween::method
	String_t* ___method_6;
	// iTween/EaseType iTween::easeType
	int32_t ___easeType_7;
	// System.Single iTween::time
	float ___time_8;
	// System.Single iTween::delay
	float ___delay_9;
	// iTween/LoopType iTween::loopType
	int32_t ___loopType_10;
	// System.Boolean iTween::isRunning
	bool ___isRunning_11;
	// System.Boolean iTween::isPaused
	bool ___isPaused_12;
	// System.String iTween::_name
	String_t* ____name_13;
	// System.Single iTween::runningTime
	float ___runningTime_14;
	// System.Single iTween::percentage
	float ___percentage_15;
	// System.Single iTween::delayStarted
	float ___delayStarted_16;
	// System.Boolean iTween::kinematic
	bool ___kinematic_17;
	// System.Boolean iTween::isLocal
	bool ___isLocal_18;
	// System.Boolean iTween::loop
	bool ___loop_19;
	// System.Boolean iTween::reverse
	bool ___reverse_20;
	// System.Boolean iTween::wasPaused
	bool ___wasPaused_21;
	// System.Boolean iTween::physics
	bool ___physics_22;
	// System.Collections.Hashtable iTween::tweenArguments
	Hashtable_t46 * ___tweenArguments_23;
	// UnityEngine.Space iTween::space
	int32_t ___space_24;
	// iTween/EasingFunction iTween::ease
	EasingFunction_t37 * ___ease_25;
	// iTween/ApplyTween iTween::apply
	ApplyTween_t41 * ___apply_26;
	// UnityEngine.AudioSource iTween::audioSource
	AudioSource_t47 * ___audioSource_27;
	// UnityEngine.Vector3[] iTween::vector3s
	Vector3U5BU5D_t36* ___vector3s_28;
	// UnityEngine.Vector2[] iTween::vector2s
	Vector2U5BU5D_t48* ___vector2s_29;
	// UnityEngine.Color[,] iTween::colors
	ColorU5BU2CU5D_t49* ___colors_30;
	// System.Single[] iTween::floats
	SingleU5BU5D_t50* ___floats_31;
	// UnityEngine.Rect[] iTween::rects
	RectU5BU5D_t51* ___rects_32;
	// iTween/CRSpline iTween::path
	CRSpline_t35 * ___path_33;
	// UnityEngine.Vector3 iTween::preUpdate
	Vector3_t34  ___preUpdate_34;
	// UnityEngine.Vector3 iTween::postUpdate
	Vector3_t34  ___postUpdate_35;
	// iTween/NamedValueColor iTween::namedcolorvalue
	int32_t ___namedcolorvalue_36;
	// System.Single iTween::lastRealTime
	float ___lastRealTime_37;
	// System.Boolean iTween::useRealTime
	bool ___useRealTime_38;
	// UnityEngine.Transform iTween::thisTransform
	Transform_t9 * ___thisTransform_39;
};
struct iTween_t43_StaticFields{
	// System.Collections.Generic.List`1<System.Collections.Hashtable> iTween::tweens
	List_1_t52 * ___tweens_2;
	// UnityEngine.GameObject iTween::cameraFade
	GameObject_t24 * ___cameraFade_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map0
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map0_40;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map1
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map1_41;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map2
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map2_42;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map3
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map3_43;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map4
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map4_44;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map5
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map5_45;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map6
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map6_46;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map7
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map7_47;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map8
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map8_48;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map9
	Dictionary_2_t53 * ___U3CU3Ef__switchU24map9_49;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapA
	Dictionary_2_t53 * ___U3CU3Ef__switchU24mapA_50;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapB
	Dictionary_2_t53 * ___U3CU3Ef__switchU24mapB_51;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapC
	Dictionary_2_t53 * ___U3CU3Ef__switchU24mapC_52;
};
