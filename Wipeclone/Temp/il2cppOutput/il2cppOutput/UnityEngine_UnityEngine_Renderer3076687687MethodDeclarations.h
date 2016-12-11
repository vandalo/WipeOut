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

// UnityEngine.Renderer
struct Renderer_t3076687687;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"

// System.Boolean UnityEngine.Renderer::get_enabled()
extern "C"  bool Renderer_get_enabled_m1971819706 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m2514140131 (Renderer_t3076687687 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t3870600107 * Renderer_get_material_m2720864603 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C"  void Renderer_set_material_m1012580896 (Renderer_t3076687687 * __this, Material_t3870600107 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C"  Material_t3870600107 * Renderer_get_sharedMaterial_m835478880 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C"  MaterialU5BU5D_t170856778* Renderer_get_materials_m3755041148 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
extern "C"  void Renderer_set_materials_m268031319 (Renderer_t3076687687 * __this, MaterialU5BU5D_t170856778* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
extern "C"  MaterialU5BU5D_t170856778* Renderer_get_sharedMaterials_m1981818007 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C"  int32_t Renderer_get_sortingLayerID_m1954594923 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C"  int32_t Renderer_get_sortingOrder_m3623465101 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
