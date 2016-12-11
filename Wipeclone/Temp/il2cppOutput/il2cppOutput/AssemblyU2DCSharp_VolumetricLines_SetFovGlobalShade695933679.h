#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VolumetricLines.SetFovGlobalShaderVariable
struct  SetFovGlobalShaderVariable_t695933679  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Camera VolumetricLines.SetFovGlobalShaderVariable::m_camera
	Camera_t2727095145 * ___m_camera_2;

public:
	inline static int32_t get_offset_of_m_camera_2() { return static_cast<int32_t>(offsetof(SetFovGlobalShaderVariable_t695933679, ___m_camera_2)); }
	inline Camera_t2727095145 * get_m_camera_2() const { return ___m_camera_2; }
	inline Camera_t2727095145 ** get_address_of_m_camera_2() { return &___m_camera_2; }
	inline void set_m_camera_2(Camera_t2727095145 * value)
	{
		___m_camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_camera_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
