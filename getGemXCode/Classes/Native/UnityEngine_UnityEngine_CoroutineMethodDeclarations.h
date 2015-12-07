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

// UnityEngine.Coroutine
struct Coroutine_t98;
struct Coroutine_t98_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5503 (Coroutine_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5504 (Coroutine_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5505 (Coroutine_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t98_marshal(const Coroutine_t98& unmarshaled, Coroutine_t98_marshaled& marshaled);
extern "C" void Coroutine_t98_marshal_back(const Coroutine_t98_marshaled& marshaled, Coroutine_t98& unmarshaled);
extern "C" void Coroutine_t98_marshal_cleanup(Coroutine_t98_marshaled& marshaled);
