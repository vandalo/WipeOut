#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// VolumetricLines.VolumetricLineBehavior[]
struct VolumetricLineBehaviorU5BU5D_t787485609;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VolumetricLines.VolumetricMultiLineBehavior
struct  VolumetricMultiLineBehavior_t282279371  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject VolumetricLines.VolumetricMultiLineBehavior::m_volumetricLinePrefab
	GameObject_t3674682005 * ___m_volumetricLinePrefab_2;
	// UnityEngine.Vector3[] VolumetricLines.VolumetricMultiLineBehavior::m_lineVertices
	Vector3U5BU5D_t215400611* ___m_lineVertices_3;
	// VolumetricLines.VolumetricLineBehavior[] VolumetricLines.VolumetricMultiLineBehavior::m_volumetricLines
	VolumetricLineBehaviorU5BU5D_t787485609* ___m_volumetricLines_4;

public:
	inline static int32_t get_offset_of_m_volumetricLinePrefab_2() { return static_cast<int32_t>(offsetof(VolumetricMultiLineBehavior_t282279371, ___m_volumetricLinePrefab_2)); }
	inline GameObject_t3674682005 * get_m_volumetricLinePrefab_2() const { return ___m_volumetricLinePrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_m_volumetricLinePrefab_2() { return &___m_volumetricLinePrefab_2; }
	inline void set_m_volumetricLinePrefab_2(GameObject_t3674682005 * value)
	{
		___m_volumetricLinePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_volumetricLinePrefab_2, value);
	}

	inline static int32_t get_offset_of_m_lineVertices_3() { return static_cast<int32_t>(offsetof(VolumetricMultiLineBehavior_t282279371, ___m_lineVertices_3)); }
	inline Vector3U5BU5D_t215400611* get_m_lineVertices_3() const { return ___m_lineVertices_3; }
	inline Vector3U5BU5D_t215400611** get_address_of_m_lineVertices_3() { return &___m_lineVertices_3; }
	inline void set_m_lineVertices_3(Vector3U5BU5D_t215400611* value)
	{
		___m_lineVertices_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_lineVertices_3, value);
	}

	inline static int32_t get_offset_of_m_volumetricLines_4() { return static_cast<int32_t>(offsetof(VolumetricMultiLineBehavior_t282279371, ___m_volumetricLines_4)); }
	inline VolumetricLineBehaviorU5BU5D_t787485609* get_m_volumetricLines_4() const { return ___m_volumetricLines_4; }
	inline VolumetricLineBehaviorU5BU5D_t787485609** get_address_of_m_volumetricLines_4() { return &___m_volumetricLines_4; }
	inline void set_m_volumetricLines_4(VolumetricLineBehaviorU5BU5D_t787485609* value)
	{
		___m_volumetricLines_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_volumetricLines_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
