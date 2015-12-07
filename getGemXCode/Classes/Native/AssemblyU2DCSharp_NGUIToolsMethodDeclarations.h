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

// UnityEngine.AudioSource
struct AudioSource_t47;
// UnityEngine.AudioClip
struct AudioClip_t70;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t24;
// UnityEngine.Camera
struct Camera_t171;
// UnityEngine.BoxCollider
struct BoxCollider_t520;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t521;
// UnityEngine.Object
struct Object_t85;
struct Object_t85_marshaled;
// UIWidget[]
struct UIWidgetU5BU5D_t489;
// UIPanel
struct UIPanel_t266;
// UnityEngine.Transform
struct Transform_t9;
// UISprite
struct UISprite_t172;
// UIAtlas
struct UIAtlas_t173;
// System.Object
struct Object_t;
// UnityEngine.Behaviour
struct Behaviour_t522;
// System.Byte[]
struct ByteU5BU5D_t337;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void NGUITools::.cctor()
extern "C" void NGUITools__cctor_m1749 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUITools::get_soundVolume()
extern "C" float NGUITools_get_soundVolume_m1750 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::set_soundVolume(System.Single)
extern "C" void NGUITools_set_soundVolume_m1751 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::get_fileAccess()
extern "C" bool NGUITools_get_fileAccess_m1752 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip)
extern "C" AudioSource_t47 * NGUITools_PlaySound_m1753 (Object_t * __this /* static, unused */, AudioClip_t70 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip,System.Single)
extern "C" AudioSource_t47 * NGUITools_PlaySound_m1754 (Object_t * __this /* static, unused */, AudioClip_t70 * ___clip, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip,System.Single,System.Single)
extern "C" AudioSource_t47 * NGUITools_PlaySound_m1755 (Object_t * __this /* static, unused */, AudioClip_t70 * ___clip, float ___volume, float ___pitch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::RandomRange(System.Int32,System.Int32)
extern "C" int32_t NGUITools_RandomRange_m1756 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetHierarchy(UnityEngine.GameObject)
extern "C" String_t* NGUITools_GetHierarchy_m1757 (Object_t * __this /* static, unused */, GameObject_t24 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera NGUITools::FindCameraForLayer(System.Int32)
extern "C" Camera_t171 * NGUITools_FindCameraForLayer_m1758 (Object_t * __this /* static, unused */, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::AddWidgetCollider(UnityEngine.GameObject)
extern "C" void NGUITools_AddWidgetCollider_m1759 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::AddWidgetCollider(UnityEngine.GameObject,System.Boolean)
extern "C" void NGUITools_AddWidgetCollider_m1760 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.GameObject)
extern "C" void NGUITools_UpdateWidgetCollider_m1761 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.GameObject,System.Boolean)
extern "C" void NGUITools_UpdateWidgetCollider_m1762 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.BoxCollider,System.Boolean)
extern "C" void NGUITools_UpdateWidgetCollider_m1763 (Object_t * __this /* static, unused */, BoxCollider_t520 * ___box, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.BoxCollider2D,System.Boolean)
extern "C" void NGUITools_UpdateWidgetCollider_m1764 (Object_t * __this /* static, unused */, BoxCollider2D_t521 * ___box, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetTypeName(UnityEngine.Object)
extern "C" String_t* NGUITools_GetTypeName_m1765 (Object_t * __this /* static, unused */, Object_t85 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::RegisterUndo(UnityEngine.Object,System.String)
extern "C" void NGUITools_RegisterUndo_m1766 (Object_t * __this /* static, unused */, Object_t85 * ___obj, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetDirty(UnityEngine.Object)
extern "C" void NGUITools_SetDirty_m1767 (Object_t * __this /* static, unused */, Object_t85 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject)
extern "C" GameObject_t24 * NGUITools_AddChild_m1768 (Object_t * __this /* static, unused */, GameObject_t24 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject,System.Boolean)
extern "C" GameObject_t24 * NGUITools_AddChild_m1769 (Object_t * __this /* static, unused */, GameObject_t24 * ___parent, bool ___undo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" GameObject_t24 * NGUITools_AddChild_m1770 (Object_t * __this /* static, unused */, GameObject_t24 * ___parent, GameObject_t24 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateRaycastDepth(UnityEngine.GameObject)
extern "C" int32_t NGUITools_CalculateRaycastDepth_m1771 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateNextDepth(UnityEngine.GameObject)
extern "C" int32_t NGUITools_CalculateNextDepth_m1772 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateNextDepth(UnityEngine.GameObject,System.Boolean)
extern "C" int32_t NGUITools_CalculateNextDepth_m1773 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, bool ___ignoreChildrenWithColliders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::AdjustDepth(UnityEngine.GameObject,System.Int32)
extern "C" int32_t NGUITools_AdjustDepth_m1774 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, int32_t ___adjustment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::BringForward(UnityEngine.GameObject)
extern "C" void NGUITools_BringForward_m1775 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::PushBack(UnityEngine.GameObject)
extern "C" void NGUITools_PushBack_m1776 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeDepths()
extern "C" void NGUITools_NormalizeDepths_m1777 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeWidgetDepths()
extern "C" void NGUITools_NormalizeWidgetDepths_m1778 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeWidgetDepths(UnityEngine.GameObject)
extern "C" void NGUITools_NormalizeWidgetDepths_m1779 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeWidgetDepths(UIWidget[])
extern "C" void NGUITools_NormalizeWidgetDepths_m1780 (Object_t * __this /* static, unused */, UIWidgetU5BU5D_t489* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizePanelDepths()
extern "C" void NGUITools_NormalizePanelDepths_m1781 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel NGUITools::CreateUI(System.Boolean)
extern "C" UIPanel_t266 * NGUITools_CreateUI_m1782 (Object_t * __this /* static, unused */, bool ___advanced3D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel NGUITools::CreateUI(System.Boolean,System.Int32)
extern "C" UIPanel_t266 * NGUITools_CreateUI_m1783 (Object_t * __this /* static, unused */, bool ___advanced3D, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel NGUITools::CreateUI(UnityEngine.Transform,System.Boolean,System.Int32)
extern "C" UIPanel_t266 * NGUITools_CreateUI_m1784 (Object_t * __this /* static, unused */, Transform_t9 * ___trans, bool ___advanced3D, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetChildLayer(UnityEngine.Transform,System.Int32)
extern "C" void NGUITools_SetChildLayer_m1785 (Object_t * __this /* static, unused */, Transform_t9 * ___t, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite NGUITools::AddSprite(UnityEngine.GameObject,UIAtlas,System.String)
extern "C" UISprite_t172 * NGUITools_AddSprite_m1786 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, UIAtlas_t173 * ___atlas, String_t* ___spriteName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::GetRoot(UnityEngine.GameObject)
extern "C" GameObject_t24 * NGUITools_GetRoot_m1787 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Destroy(UnityEngine.Object)
extern "C" void NGUITools_Destroy_m1788 (Object_t * __this /* static, unused */, Object_t85 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::DestroyImmediate(UnityEngine.Object)
extern "C" void NGUITools_DestroyImmediate_m1789 (Object_t * __this /* static, unused */, Object_t85 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Broadcast(System.String)
extern "C" void NGUITools_Broadcast_m1790 (Object_t * __this /* static, unused */, String_t* ___funcName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Broadcast(System.String,System.Object)
extern "C" void NGUITools_Broadcast_m1791 (Object_t * __this /* static, unused */, String_t* ___funcName, Object_t * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::IsChild(UnityEngine.Transform,UnityEngine.Transform)
extern "C" bool NGUITools_IsChild_m1792 (Object_t * __this /* static, unused */, Transform_t9 * ___parent, Transform_t9 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Activate(UnityEngine.Transform)
extern "C" void NGUITools_Activate_m1793 (Object_t * __this /* static, unused */, Transform_t9 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Activate(UnityEngine.Transform,System.Boolean)
extern "C" void NGUITools_Activate_m1794 (Object_t * __this /* static, unused */, Transform_t9 * ___t, bool ___compatibilityMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Deactivate(UnityEngine.Transform)
extern "C" void NGUITools_Deactivate_m1795 (Object_t * __this /* static, unused */, Transform_t9 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C" void NGUITools_SetActive_m1796 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActive(UnityEngine.GameObject,System.Boolean,System.Boolean)
extern "C" void NGUITools_SetActive_m1797 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, bool ___state, bool ___compatibilityMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::CallCreatePanel(UnityEngine.Transform)
extern "C" void NGUITools_CallCreatePanel_m1798 (Object_t * __this /* static, unused */, Transform_t9 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActiveChildren(UnityEngine.GameObject,System.Boolean)
extern "C" void NGUITools_SetActiveChildren_m1799 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::IsActive(UnityEngine.Behaviour)
extern "C" bool NGUITools_IsActive_m1800 (Object_t * __this /* static, unused */, Behaviour_t522 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::GetActive(UnityEngine.Behaviour)
extern "C" bool NGUITools_GetActive_m1801 (Object_t * __this /* static, unused */, Behaviour_t522 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::GetActive(UnityEngine.GameObject)
extern "C" bool NGUITools_GetActive_m1802 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActiveSelf(UnityEngine.GameObject,System.Boolean)
extern "C" void NGUITools_SetActiveSelf_m1803 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetLayer(UnityEngine.GameObject,System.Int32)
extern "C" void NGUITools_SetLayer_m1804 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUITools::Round(UnityEngine.Vector3)
extern "C" Vector3_t34  NGUITools_Round_m1805 (Object_t * __this /* static, unused */, Vector3_t34  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::MakePixelPerfect(UnityEngine.Transform)
extern "C" void NGUITools_MakePixelPerfect_m1806 (Object_t * __this /* static, unused */, Transform_t9 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::Save(System.String,System.Byte[])
extern "C" bool NGUITools_Save_m1807 (Object_t * __this /* static, unused */, String_t* ___fileName, ByteU5BU5D_t337* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] NGUITools::Load(System.String)
extern "C" ByteU5BU5D_t337* NGUITools_Load_m1808 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUITools::ApplyPMA(UnityEngine.Color)
extern "C" Color_t33  NGUITools_ApplyPMA_m1809 (Object_t * __this /* static, unused */, Color_t33  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::MarkParentAsChanged(UnityEngine.GameObject)
extern "C" void NGUITools_MarkParentAsChanged_m1810 (Object_t * __this /* static, unused */, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::get_clipboard()
extern "C" String_t* NGUITools_get_clipboard_m1811 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::set_clipboard(System.String)
extern "C" void NGUITools_set_clipboard_m1812 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::EncodeColor(UnityEngine.Color)
extern "C" String_t* NGUITools_EncodeColor_m1813 (Object_t * __this /* static, unused */, Color_t33  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUITools::ParseColor(System.String,System.Int32)
extern "C" Color_t33  NGUITools_ParseColor_m1814 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::StripSymbols(System.String)
extern "C" String_t* NGUITools_StripSymbols_m1815 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera)
extern "C" Vector3U5BU5D_t36* NGUITools_GetSides_m1816 (Object_t * __this /* static, unused */, Camera_t171 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera,System.Single)
extern "C" Vector3U5BU5D_t36* NGUITools_GetSides_m1817 (Object_t * __this /* static, unused */, Camera_t171 * ___cam, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera,UnityEngine.Transform)
extern "C" Vector3U5BU5D_t36* NGUITools_GetSides_m1818 (Object_t * __this /* static, unused */, Camera_t171 * ___cam, Transform_t9 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetSides(UnityEngine.Camera,System.Single,UnityEngine.Transform)
extern "C" Vector3U5BU5D_t36* NGUITools_GetSides_m1819 (Object_t * __this /* static, unused */, Camera_t171 * ___cam, float ___depth, Transform_t9 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera)
extern "C" Vector3U5BU5D_t36* NGUITools_GetWorldCorners_m1820 (Object_t * __this /* static, unused */, Camera_t171 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera,System.Single)
extern "C" Vector3U5BU5D_t36* NGUITools_GetWorldCorners_m1821 (Object_t * __this /* static, unused */, Camera_t171 * ___cam, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera,UnityEngine.Transform)
extern "C" Vector3U5BU5D_t36* NGUITools_GetWorldCorners_m1822 (Object_t * __this /* static, unused */, Camera_t171 * ___cam, Transform_t9 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUITools::GetWorldCorners(UnityEngine.Camera,System.Single,UnityEngine.Transform)
extern "C" Vector3U5BU5D_t36* NGUITools_GetWorldCorners_m1823 (Object_t * __this /* static, unused */, Camera_t171 * ___cam, float ___depth, Transform_t9 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetFuncName(System.Object,System.String)
extern "C" String_t* NGUITools_GetFuncName_m1824 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::ImmediatelyCreateDrawCalls(UnityEngine.GameObject)
extern "C" void NGUITools_ImmediatelyCreateDrawCalls_m1825 (Object_t * __this /* static, unused */, GameObject_t24 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUITools::get_screenSize()
extern "C" Vector2_t54  NGUITools_get_screenSize_m1826 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
