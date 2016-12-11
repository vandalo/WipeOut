#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreateSinShapedLineStrip
struct  CreateSinShapedLineStrip_t2259349541  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 CreateSinShapedLineStrip::m_numVertices
	int32_t ___m_numVertices_2;
	// UnityEngine.Material CreateSinShapedLineStrip::m_volumetricLineStripMaterial
	Material_t3870600107 * ___m_volumetricLineStripMaterial_3;
	// UnityEngine.Color CreateSinShapedLineStrip::m_color
	Color_t4194546905  ___m_color_4;
	// System.Single CreateSinShapedLineStrip::m_start
	float ___m_start_5;
	// System.Single CreateSinShapedLineStrip::m_end
	float ___m_end_6;

public:
	inline static int32_t get_offset_of_m_numVertices_2() { return static_cast<int32_t>(offsetof(CreateSinShapedLineStrip_t2259349541, ___m_numVertices_2)); }
	inline int32_t get_m_numVertices_2() const { return ___m_numVertices_2; }
	inline int32_t* get_address_of_m_numVertices_2() { return &___m_numVertices_2; }
	inline void set_m_numVertices_2(int32_t value)
	{
		___m_numVertices_2 = value;
	}

	inline static int32_t get_offset_of_m_volumetricLineStripMaterial_3() { return static_cast<int32_t>(offsetof(CreateSinShapedLineStrip_t2259349541, ___m_volumetricLineStripMaterial_3)); }
	inline Material_t3870600107 * get_m_volumetricLineStripMaterial_3() const { return ___m_volumetricLineStripMaterial_3; }
	inline Material_t3870600107 ** get_address_of_m_volumetricLineStripMaterial_3() { return &___m_volumetricLineStripMaterial_3; }
	inline void set_m_volumetricLineStripMaterial_3(Material_t3870600107 * value)
	{
		___m_volumetricLineStripMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_volumetricLineStripMaterial_3, value);
	}

	inline static int32_t get_offset_of_m_color_4() { return static_cast<int32_t>(offsetof(CreateSinShapedLineStrip_t2259349541, ___m_color_4)); }
	inline Color_t4194546905  get_m_color_4() const { return ___m_color_4; }
	inline Color_t4194546905 * get_address_of_m_color_4() { return &___m_color_4; }
	inline void set_m_color_4(Color_t4194546905  value)
	{
		___m_color_4 = value;
	}

	inline static int32_t get_offset_of_m_start_5() { return static_cast<int32_t>(offsetof(CreateSinShapedLineStrip_t2259349541, ___m_start_5)); }
	inline float get_m_start_5() const { return ___m_start_5; }
	inline float* get_address_of_m_start_5() { return &___m_start_5; }
	inline void set_m_start_5(float value)
	{
		___m_start_5 = value;
	}

	inline static int32_t get_offset_of_m_end_6() { return static_cast<int32_t>(offsetof(CreateSinShapedLineStrip_t2259349541, ___m_end_6)); }
	inline float get_m_end_6() const { return ___m_end_6; }
	inline float* get_address_of_m_end_6() { return &___m_end_6; }
	inline void set_m_end_6(float value)
	{
		___m_end_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
