#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FollowTarget
struct  FollowTarget_t260499262  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform UnityStandardAssets.Utility.FollowTarget::target
	Transform_t1659122786 * ___target_2;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.FollowTarget::offset
	Vector3_t4282066566  ___offset_3;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(FollowTarget_t260499262, ___target_2)); }
	inline Transform_t1659122786 * get_target_2() const { return ___target_2; }
	inline Transform_t1659122786 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t1659122786 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(FollowTarget_t260499262, ___offset_3)); }
	inline Vector3_t4282066566  get_offset_3() const { return ___offset_3; }
	inline Vector3_t4282066566 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t4282066566  value)
	{
		___offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
