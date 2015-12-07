#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// UIEventListener/VoidDelegate
struct VoidDelegate_t383;
// UIEventListener/BoolDelegate
struct BoolDelegate_t384;
// UIEventListener/FloatDelegate
struct FloatDelegate_t385;
// UIEventListener/VectorDelegate
struct VectorDelegate_t386;
// UIEventListener/ObjectDelegate
struct ObjectDelegate_t387;
// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t388;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UIEventListener
struct  UIEventListener_t389  : public MonoBehaviour_t6
{
	// System.Object UIEventListener::parameter
	Object_t * ___parameter_2;
	// UIEventListener/VoidDelegate UIEventListener::onSubmit
	VoidDelegate_t383 * ___onSubmit_3;
	// UIEventListener/VoidDelegate UIEventListener::onClick
	VoidDelegate_t383 * ___onClick_4;
	// UIEventListener/VoidDelegate UIEventListener::onDoubleClick
	VoidDelegate_t383 * ___onDoubleClick_5;
	// UIEventListener/BoolDelegate UIEventListener::onHover
	BoolDelegate_t384 * ___onHover_6;
	// UIEventListener/BoolDelegate UIEventListener::onPress
	BoolDelegate_t384 * ___onPress_7;
	// UIEventListener/BoolDelegate UIEventListener::onSelect
	BoolDelegate_t384 * ___onSelect_8;
	// UIEventListener/FloatDelegate UIEventListener::onScroll
	FloatDelegate_t385 * ___onScroll_9;
	// UIEventListener/VoidDelegate UIEventListener::onDragStart
	VoidDelegate_t383 * ___onDragStart_10;
	// UIEventListener/VectorDelegate UIEventListener::onDrag
	VectorDelegate_t386 * ___onDrag_11;
	// UIEventListener/VoidDelegate UIEventListener::onDragOver
	VoidDelegate_t383 * ___onDragOver_12;
	// UIEventListener/VoidDelegate UIEventListener::onDragOut
	VoidDelegate_t383 * ___onDragOut_13;
	// UIEventListener/VoidDelegate UIEventListener::onDragEnd
	VoidDelegate_t383 * ___onDragEnd_14;
	// UIEventListener/ObjectDelegate UIEventListener::onDrop
	ObjectDelegate_t387 * ___onDrop_15;
	// UIEventListener/KeyCodeDelegate UIEventListener::onKey
	KeyCodeDelegate_t388 * ___onKey_16;
	// UIEventListener/BoolDelegate UIEventListener::onTooltip
	BoolDelegate_t384 * ___onTooltip_17;
};
