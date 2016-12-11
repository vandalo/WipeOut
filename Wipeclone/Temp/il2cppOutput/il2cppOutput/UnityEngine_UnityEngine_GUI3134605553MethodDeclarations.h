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

// UnityEngine.GUISkin
struct GUISkin_t3371348110;
// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t2749288659;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// UnityEngine.Material
struct Material_t3870600107;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "UnityEngine_UnityEngine_GUISkin3371348110.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "UnityEngine_UnityEngine_ScaleMode3023293187.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction2749288659.h"
#include "UnityEngine_UnityEngine_GUIStyle2990928826.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1345698031 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m3820512796 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m1213959601 (Il2CppObject * __this /* static, unused */, GUISkin_t3371348110 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t3371348110 * GUI_get_skin_m4001454842 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C"  void GUI_DoSetSkin_m800823745 (Il2CppObject * __this /* static, unused */, GUISkin_t3371348110 * ___newSkin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C"  void GUI_DrawTexture_m418809280 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, Texture_t2526458961 * ___image1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C"  void GUI_DrawTexture_m2033906102 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, Texture_t2526458961 * ___image1, int32_t ___scaleMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
extern "C"  void GUI_DrawTexture_m1717108487 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, Texture_t2526458961 * ___image1, int32_t ___scaleMode2, bool ___alphaBlend3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C"  void GUI_DrawTexture_m1839804844 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___position0, Texture_t2526458961 * ___image1, int32_t ___scaleMode2, bool ___alphaBlend3, float ___imageAspect4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m2260338804 (Il2CppObject * __this /* static, unused */, WindowFunction_t2749288659 * ___func0, int32_t ___id1, GUISkin_t3371348110 * ____skin2, int32_t ___forceRect3, float ___width4, float ___height5, GUIStyle_t2990928826 * ___style6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C"  Color_t4194546905  GUI_get_color_m1489208189 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C"  void GUI_INTERNAL_get_color_m1047250244 (Il2CppObject * __this /* static, unused */, Color_t4194546905 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m727947722 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C"  Material_t3870600107 * GUI_get_blendMaterial_m3392847228 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C"  Material_t3870600107 * GUI_get_blitMaterial_m1516673786 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
