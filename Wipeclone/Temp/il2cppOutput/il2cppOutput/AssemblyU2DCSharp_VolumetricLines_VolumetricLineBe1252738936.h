#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VolumetricLines.VolumetricLineBehavior
struct  VolumetricLineBehavior_t1252738936  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean VolumetricLines.VolumetricLineBehavior::m_updateLineColor
	bool ___m_updateLineColor_2;
	// System.Boolean VolumetricLines.VolumetricLineBehavior::m_updateLineWidth
	bool ___m_updateLineWidth_3;
	// UnityEngine.Vector3 VolumetricLines.VolumetricLineBehavior::m_startPos
	Vector3_t4282066566  ___m_startPos_4;
	// UnityEngine.Vector3 VolumetricLines.VolumetricLineBehavior::m_endPos
	Vector3_t4282066566  ___m_endPos_5;
	// System.Boolean VolumetricLines.VolumetricLineBehavior::m_setLinePropertiesAtStart
	bool ___m_setLinePropertiesAtStart_6;
	// UnityEngine.Color VolumetricLines.VolumetricLineBehavior::m_lineColor
	Color_t4194546905  ___m_lineColor_7;
	// System.Single VolumetricLines.VolumetricLineBehavior::m_lineWidth
	float ___m_lineWidth_8;

public:
	inline static int32_t get_offset_of_m_updateLineColor_2() { return static_cast<int32_t>(offsetof(VolumetricLineBehavior_t1252738936, ___m_updateLineColor_2)); }
	inline bool get_m_updateLineColor_2() const { return ___m_updateLineColor_2; }
	inline bool* get_address_of_m_updateLineColor_2() { return &___m_updateLineColor_2; }
	inline void set_m_updateLineColor_2(bool value)
	{
		___m_updateLineColor_2 = value;
	}

	inline static int32_t get_offset_of_m_updateLineWidth_3() { return static_cast<int32_t>(offsetof(VolumetricLineBehavior_t1252738936, ___m_updateLineWidth_3)); }
	inline bool get_m_updateLineWidth_3() const { return ___m_updateLineWidth_3; }
	inline bool* get_address_of_m_updateLineWidth_3() { return &___m_updateLineWidth_3; }
	inline void set_m_updateLineWidth_3(bool value)
	{
		___m_updateLineWidth_3 = value;
	}

	inline static int32_t get_offset_of_m_startPos_4() { return static_cast<int32_t>(offsetof(VolumetricLineBehavior_t1252738936, ___m_startPos_4)); }
	inline Vector3_t4282066566  get_m_startPos_4() const { return ___m_startPos_4; }
	inline Vector3_t4282066566 * get_address_of_m_startPos_4() { return &___m_startPos_4; }
	inline void set_m_startPos_4(Vector3_t4282066566  value)
	{
		___m_startPos_4 = value;
	}

	inline static int32_t get_offset_of_m_endPos_5() { return static_cast<int32_t>(offsetof(VolumetricLineBehavior_t1252738936, ___m_endPos_5)); }
	inline Vector3_t4282066566  get_m_endPos_5() const { return ___m_endPos_5; }
	inline Vector3_t4282066566 * get_address_of_m_endPos_5() { return &___m_endPos_5; }
	inline void set_m_endPos_5(Vector3_t4282066566  value)
	{
		___m_endPos_5 = value;
	}

	inline static int32_t get_offset_of_m_setLinePropertiesAtStart_6() { return static_cast<int32_t>(offsetof(VolumetricLineBehavior_t1252738936, ___m_setLinePropertiesAtStart_6)); }
	inline bool get_m_setLinePropertiesAtStart_6() const { return ___m_setLinePropertiesAtStart_6; }
	inline bool* get_address_of_m_setLinePropertiesAtStart_6() { return &___m_setLinePropertiesAtStart_6; }
	inline void set_m_setLinePropertiesAtStart_6(bool value)
	{
		___m_setLinePropertiesAtStart_6 = value;
	}

	inline static int32_t get_offset_of_m_lineColor_7() { return static_cast<int32_t>(offsetof(VolumetricLineBehavior_t1252738936, ___m_lineColor_7)); }
	inline Color_t4194546905  get_m_lineColor_7() const { return ___m_lineColor_7; }
	inline Color_t4194546905 * get_address_of_m_lineColor_7() { return &___m_lineColor_7; }
	inline void set_m_lineColor_7(Color_t4194546905  value)
	{
		___m_lineColor_7 = value;
	}

	inline static int32_t get_offset_of_m_lineWidth_8() { return static_cast<int32_t>(offsetof(VolumetricLineBehavior_t1252738936, ___m_lineWidth_8)); }
	inline float get_m_lineWidth_8() const { return ___m_lineWidth_8; }
	inline float* get_address_of_m_lineWidth_8() { return &___m_lineWidth_8; }
	inline void set_m_lineWidth_8(float value)
	{
		___m_lineWidth_8 = value;
	}
};

struct VolumetricLineBehavior_t1252738936_StaticFields
{
public:
	// UnityEngine.Vector2[] VolumetricLines.VolumetricLineBehavior::m_vline_texCoords
	Vector2U5BU5D_t4024180168* ___m_vline_texCoords_9;
	// UnityEngine.Vector2[] VolumetricLines.VolumetricLineBehavior::m_vline_vertexOffsets
	Vector2U5BU5D_t4024180168* ___m_vline_vertexOffsets_10;
	// System.Int32[] VolumetricLines.VolumetricLineBehavior::m_vline_indices
	Int32U5BU5D_t3230847821* ___m_vline_indices_11;

public:
	inline static int32_t get_offset_of_m_vline_texCoords_9() { return static_cast<int32_t>(offsetof(VolumetricLineBehavior_t1252738936_StaticFields, ___m_vline_texCoords_9)); }
	inline Vector2U5BU5D_t4024180168* get_m_vline_texCoords_9() const { return ___m_vline_texCoords_9; }
	inline Vector2U5BU5D_t4024180168** get_address_of_m_vline_texCoords_9() { return &___m_vline_texCoords_9; }
	inline void set_m_vline_texCoords_9(Vector2U5BU5D_t4024180168* value)
	{
		___m_vline_texCoords_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_vline_texCoords_9, value);
	}

	inline static int32_t get_offset_of_m_vline_vertexOffsets_10() { return static_cast<int32_t>(offsetof(VolumetricLineBehavior_t1252738936_StaticFields, ___m_vline_vertexOffsets_10)); }
	inline Vector2U5BU5D_t4024180168* get_m_vline_vertexOffsets_10() const { return ___m_vline_vertexOffsets_10; }
	inline Vector2U5BU5D_t4024180168** get_address_of_m_vline_vertexOffsets_10() { return &___m_vline_vertexOffsets_10; }
	inline void set_m_vline_vertexOffsets_10(Vector2U5BU5D_t4024180168* value)
	{
		___m_vline_vertexOffsets_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_vline_vertexOffsets_10, value);
	}

	inline static int32_t get_offset_of_m_vline_indices_11() { return static_cast<int32_t>(offsetof(VolumetricLineBehavior_t1252738936_StaticFields, ___m_vline_indices_11)); }
	inline Int32U5BU5D_t3230847821* get_m_vline_indices_11() const { return ___m_vline_indices_11; }
	inline Int32U5BU5D_t3230847821** get_address_of_m_vline_indices_11() { return &___m_vline_indices_11; }
	inline void set_m_vline_indices_11(Int32U5BU5D_t3230847821* value)
	{
		___m_vline_indices_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_vline_indices_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
