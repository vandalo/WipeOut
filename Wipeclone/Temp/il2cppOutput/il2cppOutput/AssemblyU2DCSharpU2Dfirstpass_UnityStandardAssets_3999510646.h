#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.SimpleMouseRotator
struct  SimpleMouseRotator_t3999510646  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.Utility.SimpleMouseRotator::rotationRange
	Vector2_t4282066565  ___rotationRange_2;
	// System.Single UnityStandardAssets.Utility.SimpleMouseRotator::rotationSpeed
	float ___rotationSpeed_3;
	// System.Single UnityStandardAssets.Utility.SimpleMouseRotator::dampingTime
	float ___dampingTime_4;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::autoZeroVerticalOnMobile
	bool ___autoZeroVerticalOnMobile_5;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::autoZeroHorizontalOnMobile
	bool ___autoZeroHorizontalOnMobile_6;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::relative
	bool ___relative_7;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_TargetAngles
	Vector3_t4282066566  ___m_TargetAngles_8;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_FollowAngles
	Vector3_t4282066566  ___m_FollowAngles_9;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_FollowVelocity
	Vector3_t4282066566  ___m_FollowVelocity_10;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.SimpleMouseRotator::m_OriginalRotation
	Quaternion_t1553702882  ___m_OriginalRotation_11;

public:
	inline static int32_t get_offset_of_rotationRange_2() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t3999510646, ___rotationRange_2)); }
	inline Vector2_t4282066565  get_rotationRange_2() const { return ___rotationRange_2; }
	inline Vector2_t4282066565 * get_address_of_rotationRange_2() { return &___rotationRange_2; }
	inline void set_rotationRange_2(Vector2_t4282066565  value)
	{
		___rotationRange_2 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t3999510646, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_dampingTime_4() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t3999510646, ___dampingTime_4)); }
	inline float get_dampingTime_4() const { return ___dampingTime_4; }
	inline float* get_address_of_dampingTime_4() { return &___dampingTime_4; }
	inline void set_dampingTime_4(float value)
	{
		___dampingTime_4 = value;
	}

	inline static int32_t get_offset_of_autoZeroVerticalOnMobile_5() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t3999510646, ___autoZeroVerticalOnMobile_5)); }
	inline bool get_autoZeroVerticalOnMobile_5() const { return ___autoZeroVerticalOnMobile_5; }
	inline bool* get_address_of_autoZeroVerticalOnMobile_5() { return &___autoZeroVerticalOnMobile_5; }
	inline void set_autoZeroVerticalOnMobile_5(bool value)
	{
		___autoZeroVerticalOnMobile_5 = value;
	}

	inline static int32_t get_offset_of_autoZeroHorizontalOnMobile_6() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t3999510646, ___autoZeroHorizontalOnMobile_6)); }
	inline bool get_autoZeroHorizontalOnMobile_6() const { return ___autoZeroHorizontalOnMobile_6; }
	inline bool* get_address_of_autoZeroHorizontalOnMobile_6() { return &___autoZeroHorizontalOnMobile_6; }
	inline void set_autoZeroHorizontalOnMobile_6(bool value)
	{
		___autoZeroHorizontalOnMobile_6 = value;
	}

	inline static int32_t get_offset_of_relative_7() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t3999510646, ___relative_7)); }
	inline bool get_relative_7() const { return ___relative_7; }
	inline bool* get_address_of_relative_7() { return &___relative_7; }
	inline void set_relative_7(bool value)
	{
		___relative_7 = value;
	}

	inline static int32_t get_offset_of_m_TargetAngles_8() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t3999510646, ___m_TargetAngles_8)); }
	inline Vector3_t4282066566  get_m_TargetAngles_8() const { return ___m_TargetAngles_8; }
	inline Vector3_t4282066566 * get_address_of_m_TargetAngles_8() { return &___m_TargetAngles_8; }
	inline void set_m_TargetAngles_8(Vector3_t4282066566  value)
	{
		___m_TargetAngles_8 = value;
	}

	inline static int32_t get_offset_of_m_FollowAngles_9() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t3999510646, ___m_FollowAngles_9)); }
	inline Vector3_t4282066566  get_m_FollowAngles_9() const { return ___m_FollowAngles_9; }
	inline Vector3_t4282066566 * get_address_of_m_FollowAngles_9() { return &___m_FollowAngles_9; }
	inline void set_m_FollowAngles_9(Vector3_t4282066566  value)
	{
		___m_FollowAngles_9 = value;
	}

	inline static int32_t get_offset_of_m_FollowVelocity_10() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t3999510646, ___m_FollowVelocity_10)); }
	inline Vector3_t4282066566  get_m_FollowVelocity_10() const { return ___m_FollowVelocity_10; }
	inline Vector3_t4282066566 * get_address_of_m_FollowVelocity_10() { return &___m_FollowVelocity_10; }
	inline void set_m_FollowVelocity_10(Vector3_t4282066566  value)
	{
		___m_FollowVelocity_10 = value;
	}

	inline static int32_t get_offset_of_m_OriginalRotation_11() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t3999510646, ___m_OriginalRotation_11)); }
	inline Quaternion_t1553702882  get_m_OriginalRotation_11() const { return ___m_OriginalRotation_11; }
	inline Quaternion_t1553702882 * get_address_of_m_OriginalRotation_11() { return &___m_OriginalRotation_11; }
	inline void set_m_OriginalRotation_11(Quaternion_t1553702882  value)
	{
		___m_OriginalRotation_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
