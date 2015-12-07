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

// UnityEngine.Collider2D
struct Collider2D_t257;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t523;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Collider2D::set_isTrigger(System.Boolean)
extern "C" void Collider2D_set_isTrigger_m3323 (Collider2D_t257 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider2D::set_offset(UnityEngine.Vector2)
extern "C" void Collider2D_set_offset_m3184 (Collider2D_t257 * __this, Vector2_t54  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider2D::INTERNAL_set_offset(UnityEngine.Vector2&)
extern "C" void Collider2D_INTERNAL_set_offset_m6057 (Collider2D_t257 * __this, Vector2_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t523 * Collider2D_get_attachedRigidbody_m6058 (Collider2D_t257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
