#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpringJoint
struct SpringJoint_t558455091;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.DragRigidbody
struct  DragRigidbody_t1067467903  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.SpringJoint UnityStandardAssets.Utility.DragRigidbody::m_SpringJoint
	SpringJoint_t558455091 * ___m_SpringJoint_8;

public:
	inline static int32_t get_offset_of_m_SpringJoint_8() { return static_cast<int32_t>(offsetof(DragRigidbody_t1067467903, ___m_SpringJoint_8)); }
	inline SpringJoint_t558455091 * get_m_SpringJoint_8() const { return ___m_SpringJoint_8; }
	inline SpringJoint_t558455091 ** get_address_of_m_SpringJoint_8() { return &___m_SpringJoint_8; }
	inline void set_m_SpringJoint_8(SpringJoint_t558455091 * value)
	{
		___m_SpringJoint_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_SpringJoint_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
