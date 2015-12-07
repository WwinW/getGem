#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UICamera>
struct BetterList_1_t451;
// UICamera/GetKeyStateFunc
struct GetKeyStateFunc_t436;
// UICamera/GetAxisFunc
struct GetAxisFunc_t437;
// UICamera/OnScreenResize
struct OnScreenResize_t438;
// System.String
struct String_t;
// UICamera/OnCustomInput
struct OnCustomInput_t439;
// UICamera
struct UICamera_t449;
// UnityEngine.Camera
struct Camera_t171;
// UICamera/MouseOrTouch
struct MouseOrTouch_t262;
// UnityEngine.GameObject
struct GameObject_t24;
// UICamera/VoidDelegate
struct VoidDelegate_t441;
// UICamera/BoolDelegate
struct BoolDelegate_t442;
// UICamera/FloatDelegate
struct FloatDelegate_t443;
// UICamera/VectorDelegate
struct VectorDelegate_t444;
// UICamera/ObjectDelegate
struct ObjectDelegate_t445;
// UICamera/KeyCodeDelegate
struct KeyCodeDelegate_t446;
// UICamera/MoveDelegate
struct MoveDelegate_t440;
// UICamera/MouseOrTouch[]
struct MouseOrTouchU5BU5D_t452;
// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>
struct Dictionary_2_t453;
// BetterList`1<UICamera/DepthEntry>
struct BetterList_1_t454;
// UICamera/GetTouchCountCallback
struct GetTouchCountCallback_t447;
// UICamera/GetTouchCallback
struct GetTouchCallback_t448;
// BetterList`1/CompareFunc<UICamera/DepthEntry>
struct CompareFunc_t455;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UICamera_EventType.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_KeyCode.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "AssemblyU2DCSharp_UICamera_ControlScheme.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry.h"
#include "UnityEngine_UnityEngine_Plane.h"

// UICamera
struct  UICamera_t449  : public MonoBehaviour_t6
{
	// UICamera/EventType UICamera::eventType
	int32_t ___eventType_8;
	// System.Boolean UICamera::eventsGoToColliders
	bool ___eventsGoToColliders_9;
	// UnityEngine.LayerMask UICamera::eventReceiverMask
	LayerMask_t450  ___eventReceiverMask_10;
	// System.Boolean UICamera::debug
	bool ___debug_11;
	// System.Boolean UICamera::useMouse
	bool ___useMouse_12;
	// System.Boolean UICamera::useTouch
	bool ___useTouch_13;
	// System.Boolean UICamera::allowMultiTouch
	bool ___allowMultiTouch_14;
	// System.Boolean UICamera::useKeyboard
	bool ___useKeyboard_15;
	// System.Boolean UICamera::useController
	bool ___useController_16;
	// System.Boolean UICamera::stickyTooltip
	bool ___stickyTooltip_17;
	// System.Single UICamera::tooltipDelay
	float ___tooltipDelay_18;
	// System.Single UICamera::mouseDragThreshold
	float ___mouseDragThreshold_19;
	// System.Single UICamera::mouseClickThreshold
	float ___mouseClickThreshold_20;
	// System.Single UICamera::touchDragThreshold
	float ___touchDragThreshold_21;
	// System.Single UICamera::touchClickThreshold
	float ___touchClickThreshold_22;
	// System.Single UICamera::rangeDistance
	float ___rangeDistance_23;
	// System.String UICamera::scrollAxisName
	String_t* ___scrollAxisName_24;
	// System.String UICamera::verticalAxisName
	String_t* ___verticalAxisName_25;
	// System.String UICamera::horizontalAxisName
	String_t* ___horizontalAxisName_26;
	// System.Boolean UICamera::commandClick
	bool ___commandClick_27;
	// UnityEngine.KeyCode UICamera::submitKey0
	int32_t ___submitKey0_28;
	// UnityEngine.KeyCode UICamera::submitKey1
	int32_t ___submitKey1_29;
	// UnityEngine.KeyCode UICamera::cancelKey0
	int32_t ___cancelKey0_30;
	// UnityEngine.KeyCode UICamera::cancelKey1
	int32_t ___cancelKey1_31;
	// UnityEngine.GameObject UICamera::mTooltip
	GameObject_t24 * ___mTooltip_69;
	// UnityEngine.Camera UICamera::mCam
	Camera_t171 * ___mCam_70;
	// System.Single UICamera::mTooltipTime
	float ___mTooltipTime_71;
	// System.Single UICamera::mNextRaycast
	float ___mNextRaycast_72;
};
struct UICamera_t449_StaticFields{
	// BetterList`1<UICamera> UICamera::list
	BetterList_1_t451 * ___list_2;
	// UICamera/GetKeyStateFunc UICamera::GetKeyDown
	GetKeyStateFunc_t436 * ___GetKeyDown_3;
	// UICamera/GetKeyStateFunc UICamera::GetKeyUp
	GetKeyStateFunc_t436 * ___GetKeyUp_4;
	// UICamera/GetKeyStateFunc UICamera::GetKey
	GetKeyStateFunc_t436 * ___GetKey_5;
	// UICamera/GetAxisFunc UICamera::GetAxis
	GetAxisFunc_t437 * ___GetAxis_6;
	// UICamera/OnScreenResize UICamera::onScreenResize
	OnScreenResize_t438 * ___onScreenResize_7;
	// UICamera/OnCustomInput UICamera::onCustomInput
	OnCustomInput_t439 * ___onCustomInput_32;
	// System.Boolean UICamera::showTooltips
	bool ___showTooltips_33;
	// UnityEngine.Vector2 UICamera::lastTouchPosition
	Vector2_t54  ___lastTouchPosition_34;
	// UnityEngine.Vector3 UICamera::lastWorldPosition
	Vector3_t34  ___lastWorldPosition_35;
	// UnityEngine.RaycastHit UICamera::lastHit
	RaycastHit_t120  ___lastHit_36;
	// UICamera UICamera::current
	UICamera_t449 * ___current_37;
	// UnityEngine.Camera UICamera::currentCamera
	Camera_t171 * ___currentCamera_38;
	// UICamera/ControlScheme UICamera::currentScheme
	int32_t ___currentScheme_39;
	// System.Int32 UICamera::currentTouchID
	int32_t ___currentTouchID_40;
	// UnityEngine.KeyCode UICamera::currentKey
	int32_t ___currentKey_41;
	// UICamera/MouseOrTouch UICamera::currentTouch
	MouseOrTouch_t262 * ___currentTouch_42;
	// System.Boolean UICamera::inputHasFocus
	bool ___inputHasFocus_43;
	// UnityEngine.GameObject UICamera::mGenericHandler
	GameObject_t24 * ___mGenericHandler_44;
	// UnityEngine.GameObject UICamera::fallThrough
	GameObject_t24 * ___fallThrough_45;
	// UICamera/VoidDelegate UICamera::onClick
	VoidDelegate_t441 * ___onClick_46;
	// UICamera/VoidDelegate UICamera::onDoubleClick
	VoidDelegate_t441 * ___onDoubleClick_47;
	// UICamera/BoolDelegate UICamera::onHover
	BoolDelegate_t442 * ___onHover_48;
	// UICamera/BoolDelegate UICamera::onPress
	BoolDelegate_t442 * ___onPress_49;
	// UICamera/BoolDelegate UICamera::onSelect
	BoolDelegate_t442 * ___onSelect_50;
	// UICamera/FloatDelegate UICamera::onScroll
	FloatDelegate_t443 * ___onScroll_51;
	// UICamera/VectorDelegate UICamera::onDrag
	VectorDelegate_t444 * ___onDrag_52;
	// UICamera/VoidDelegate UICamera::onDragStart
	VoidDelegate_t441 * ___onDragStart_53;
	// UICamera/ObjectDelegate UICamera::onDragOver
	ObjectDelegate_t445 * ___onDragOver_54;
	// UICamera/ObjectDelegate UICamera::onDragOut
	ObjectDelegate_t445 * ___onDragOut_55;
	// UICamera/VoidDelegate UICamera::onDragEnd
	VoidDelegate_t441 * ___onDragEnd_56;
	// UICamera/ObjectDelegate UICamera::onDrop
	ObjectDelegate_t445 * ___onDrop_57;
	// UICamera/KeyCodeDelegate UICamera::onKey
	KeyCodeDelegate_t446 * ___onKey_58;
	// UICamera/BoolDelegate UICamera::onTooltip
	BoolDelegate_t442 * ___onTooltip_59;
	// UICamera/MoveDelegate UICamera::onMouseMove
	MoveDelegate_t440 * ___onMouseMove_60;
	// UnityEngine.GameObject UICamera::mCurrentSelection
	GameObject_t24 * ___mCurrentSelection_61;
	// UICamera/MouseOrTouch[] UICamera::mMouse
	MouseOrTouchU5BU5D_t452* ___mMouse_62;
	// UnityEngine.GameObject UICamera::mHover
	GameObject_t24 * ___mHover_63;
	// UICamera/MouseOrTouch UICamera::controller
	MouseOrTouch_t262 * ___controller_64;
	// System.Single UICamera::mNextEvent
	float ___mNextEvent_65;
	// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch> UICamera::mTouches
	Dictionary_2_t453 * ___mTouches_66;
	// System.Int32 UICamera::mWidth
	int32_t ___mWidth_67;
	// System.Int32 UICamera::mHeight
	int32_t ___mHeight_68;
	// System.Boolean UICamera::isDragging
	bool ___isDragging_73;
	// UnityEngine.GameObject UICamera::hoveredObject
	GameObject_t24 * ___hoveredObject_74;
	// UICamera/DepthEntry UICamera::mHit
	DepthEntry_t434  ___mHit_75;
	// BetterList`1<UICamera/DepthEntry> UICamera::mHits
	BetterList_1_t454 * ___mHits_76;
	// UnityEngine.Plane UICamera::m2DPlane
	Plane_t268  ___m2DPlane_77;
	// System.Int32 UICamera::mNotifying
	int32_t ___mNotifying_78;
	// System.Boolean UICamera::mUsingTouchEvents
	bool ___mUsingTouchEvents_79;
	// UICamera/GetTouchCountCallback UICamera::GetInputTouchCount
	GetTouchCountCallback_t447 * ___GetInputTouchCount_80;
	// UICamera/GetTouchCallback UICamera::GetInputTouch
	GetTouchCallback_t448 * ___GetInputTouch_81;
	// BetterList`1/CompareFunc<UICamera/DepthEntry> UICamera::<>f__am$cache50
	CompareFunc_t455 * ___U3CU3Ef__amU24cache50_82;
	// BetterList`1/CompareFunc<UICamera/DepthEntry> UICamera::<>f__am$cache51
	CompareFunc_t455 * ___U3CU3Ef__amU24cache51_83;
};
