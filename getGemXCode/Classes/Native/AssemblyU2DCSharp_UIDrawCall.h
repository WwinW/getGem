#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIDrawCall>
struct BetterList_1_t381;
// UIPanel
struct UIPanel_t266;
// UnityEngine.Texture2D
struct Texture2D_t71;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t372;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t373;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t374;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t375;
// UnityEngine.Material
struct Material_t89;
// UnityEngine.Texture
struct Texture_t376;
// UnityEngine.Shader
struct Shader_t377;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.Mesh
struct Mesh_t378;
// UnityEngine.MeshFilter
struct MeshFilter_t379;
// UnityEngine.MeshRenderer
struct MeshRenderer_t380;
// System.Int32[]
struct Int32U5BU5D_t167;
// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t370;
// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_t382;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UIDrawCall
struct  UIDrawCall_t371  : public MonoBehaviour_t6
{
	// System.Int32 UIDrawCall::widgetCount
	int32_t ___widgetCount_5;
	// System.Int32 UIDrawCall::depthStart
	int32_t ___depthStart_6;
	// System.Int32 UIDrawCall::depthEnd
	int32_t ___depthEnd_7;
	// UIPanel UIDrawCall::manager
	UIPanel_t266 * ___manager_8;
	// UIPanel UIDrawCall::panel
	UIPanel_t266 * ___panel_9;
	// UnityEngine.Texture2D UIDrawCall::clipTexture
	Texture2D_t71 * ___clipTexture_10;
	// System.Boolean UIDrawCall::alwaysOnScreen
	bool ___alwaysOnScreen_11;
	// BetterList`1<UnityEngine.Vector3> UIDrawCall::verts
	BetterList_1_t372 * ___verts_12;
	// BetterList`1<UnityEngine.Vector3> UIDrawCall::norms
	BetterList_1_t372 * ___norms_13;
	// BetterList`1<UnityEngine.Vector4> UIDrawCall::tans
	BetterList_1_t373 * ___tans_14;
	// BetterList`1<UnityEngine.Vector2> UIDrawCall::uvs
	BetterList_1_t374 * ___uvs_15;
	// BetterList`1<UnityEngine.Color32> UIDrawCall::cols
	BetterList_1_t375 * ___cols_16;
	// UnityEngine.Material UIDrawCall::mMaterial
	Material_t89 * ___mMaterial_17;
	// UnityEngine.Texture UIDrawCall::mTexture
	Texture_t376 * ___mTexture_18;
	// UnityEngine.Shader UIDrawCall::mShader
	Shader_t377 * ___mShader_19;
	// System.Int32 UIDrawCall::mClipCount
	int32_t ___mClipCount_20;
	// UnityEngine.Transform UIDrawCall::mTrans
	Transform_t9 * ___mTrans_21;
	// UnityEngine.Mesh UIDrawCall::mMesh
	Mesh_t378 * ___mMesh_22;
	// UnityEngine.MeshFilter UIDrawCall::mFilter
	MeshFilter_t379 * ___mFilter_23;
	// UnityEngine.MeshRenderer UIDrawCall::mRenderer
	MeshRenderer_t380 * ___mRenderer_24;
	// UnityEngine.Material UIDrawCall::mDynamicMat
	Material_t89 * ___mDynamicMat_25;
	// System.Int32[] UIDrawCall::mIndices
	Int32U5BU5D_t167* ___mIndices_26;
	// System.Boolean UIDrawCall::mRebuildMat
	bool ___mRebuildMat_27;
	// System.Boolean UIDrawCall::mLegacyShader
	bool ___mLegacyShader_28;
	// System.Int32 UIDrawCall::mRenderQueue
	int32_t ___mRenderQueue_29;
	// System.Int32 UIDrawCall::mTriangles
	int32_t ___mTriangles_30;
	// System.Boolean UIDrawCall::isDirty
	bool ___isDirty_31;
	// System.Boolean UIDrawCall::mTextureClip
	bool ___mTextureClip_32;
	// UIDrawCall/OnRenderCallback UIDrawCall::onRender
	OnRenderCallback_t370 * ___onRender_33;
};
struct UIDrawCall_t371_StaticFields{
	// BetterList`1<UIDrawCall> UIDrawCall::mActiveList
	BetterList_1_t381 * ___mActiveList_3;
	// BetterList`1<UIDrawCall> UIDrawCall::mInactiveList
	BetterList_1_t381 * ___mInactiveList_4;
	// System.Collections.Generic.List`1<System.Int32[]> UIDrawCall::mCache
	List_1_t382 * ___mCache_34;
	// System.Int32[] UIDrawCall::ClipRange
	Int32U5BU5D_t167* ___ClipRange_35;
	// System.Int32[] UIDrawCall::ClipArgs
	Int32U5BU5D_t167* ___ClipArgs_36;
};
