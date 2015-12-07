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
// UnityEngine.GameObject
struct GameObject_t24;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// study/grid
struct  grid_t505  : public Object_t
{
	// UnityEngine.Vector3 study/grid::pos
	Vector3_t34  ___pos_0;
	// cube study/grid::cube
	cube_t492 * ___cube_1;
	// UnityEngine.GameObject study/grid::labelObj
	GameObject_t24 * ___labelObj_2;
};
