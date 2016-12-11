#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VolumetricLines.VolumetricLineStripBehavior
struct  VolumetricLineStripBehavior_t789978498  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean VolumetricLines.VolumetricLineStripBehavior::m_updateLineColor
	bool ___m_updateLineColor_2;
	// System.Boolean VolumetricLines.VolumetricLineStripBehavior::m_updateLineWidth
	bool ___m_updateLineWidth_3;
	// System.Boolean VolumetricLines.VolumetricLineStripBehavior::m_setLineColorAtStart
	bool ___m_setLineColorAtStart_4;
	// UnityEngine.Color VolumetricLines.VolumetricLineStripBehavior::m_lineColor
	Color_t4194546905  ___m_lineColor_5;
	// System.Single VolumetricLines.VolumetricLineStripBehavior::m_lineWidth
	float ___m_lineWidth_6;
	// UnityEngine.Vector3[] VolumetricLines.VolumetricLineStripBehavior::m_lineVertices
	Vector3U5BU5D_t215400611* ___m_lineVertices_7;

public:
	inline static int32_t get_offset_of_m_updateLineColor_2() { return static_cast<int32_t>(offsetof(VolumetricLineStripBehavior_t789978498, ___m_updateLineColor_2)); }
	inline bool get_m_updateLineColor_2() const { return ___m_updateLineColor_2; }
	inline bool* get_address_of_m_updateLineColor_2() { return &___m_updateLineColor_2; }
	inline void set_m_updateLineColor_2(bool value)
	{
		___m_updateLineColor_2 = value;
	}

	inline static int32_t get_offset_of_m_updateLineWidth_3() { return static_cast<int32_t>(offsetof(VolumetricLineStripBehavior_t789978498, ___m_updateLineWidth_3)); }
	inline bool get_m_updateLineWidth_3() const { return ___m_updateLineWidth_3; }
	inline bool* get_address_of_m_updateLineWidth_3() { return &___m_updateLineWidth_3; }
	inline void set_m_updateLineWidth_3(bool value)
	{
		___m_updateLineWidth_3 = value;
	}

	inline static int32_t get_offset_of_m_setLineColorAtStart_4() { return static_cast<int32_t>(offsetof(VolumetricLineStripBehavior_t789978498, ___m_setLineColorAtStart_4)); }
	inline bool get_m_setLineColorAtStart_4() const { return ___m_setLineColorAtStart_4; }
	inline bool* get_address_of_m_setLineColorAtStart_4() { return &___m_setLineColorAtStart_4; }
	inline void set_m_setLineColorAtStart_4(bool value)
	{
		___m_setLineColorAtStart_4 = value;
	}

	inline static int32_t get_offset_of_m_lineColor_5() { return static_cast<int32_t>(offsetof(VolumetricLineStripBehavior_t789978498, ___m_lineColor_5)); }
	inline Color_t4194546905  get_m_lineColor_5() const { return ___m_lineColor_5; }
	inline Color_t4194546905 * get_address_of_m_lineColor_5() { return &___m_lineColor_5; }
	inline void set_m_lineColor_5(Color_t4194546905  value)
	{
		___m_lineColor_5 = value;
	}

	inline static int32_t get_offset_of_m_lineWidth_6() { return static_cast<int32_t>(offsetof(VolumetricLineStripBehavior_t789978498, ___m_lineWidth_6)); }
	inline float get_m_lineWidth_6() const { return ___m_lineWidth_6; }
	inline float* get_address_of_m_lineWidth_6() { return &___m_lineWidth_6; }
	inline void set_m_lineWidth_6(float value)
	{
		___m_lineWidth_6 = value;
	}

	inline static int32_t get_offset_of_m_lineVertices_7() { return static_cast<int32_t>(offsetof(VolumetricLineStripBehavior_t789978498, ___m_lineVertices_7)); }
	inline Vector3U5BU5D_t215400611* get_m_lineVertices_7() const { return ___m_lineVertices_7; }
	inline Vector3U5BU5D_t215400611** get_address_of_m_lineVertices_7() { return &___m_lineVertices_7; }
	inline void set_m_lineVertices_7(Vector3U5BU5D_t215400611* value)
	{
		___m_lineVertices_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_lineVertices_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
