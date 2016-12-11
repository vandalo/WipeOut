#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SemaphorController
struct  SemaphorController_t2625702109  : public MonoBehaviour_t667441552
{
public:
	// System.Single SemaphorController::timer
	float ___timer_2;
	// UnityEngine.Texture2D SemaphorController::semaphor1
	Texture2D_t3884108195 * ___semaphor1_3;
	// UnityEngine.Texture2D SemaphorController::semaphor2
	Texture2D_t3884108195 * ___semaphor2_4;
	// UnityEngine.Texture2D SemaphorController::semaphor3
	Texture2D_t3884108195 * ___semaphor3_5;
	// UnityEngine.Texture2D SemaphorController::semaphor4
	Texture2D_t3884108195 * ___semaphor4_6;
	// UnityEngine.GameObject SemaphorController::semaphor
	GameObject_t3674682005 * ___semaphor_7;

public:
	inline static int32_t get_offset_of_timer_2() { return static_cast<int32_t>(offsetof(SemaphorController_t2625702109, ___timer_2)); }
	inline float get_timer_2() const { return ___timer_2; }
	inline float* get_address_of_timer_2() { return &___timer_2; }
	inline void set_timer_2(float value)
	{
		___timer_2 = value;
	}

	inline static int32_t get_offset_of_semaphor1_3() { return static_cast<int32_t>(offsetof(SemaphorController_t2625702109, ___semaphor1_3)); }
	inline Texture2D_t3884108195 * get_semaphor1_3() const { return ___semaphor1_3; }
	inline Texture2D_t3884108195 ** get_address_of_semaphor1_3() { return &___semaphor1_3; }
	inline void set_semaphor1_3(Texture2D_t3884108195 * value)
	{
		___semaphor1_3 = value;
		Il2CppCodeGenWriteBarrier(&___semaphor1_3, value);
	}

	inline static int32_t get_offset_of_semaphor2_4() { return static_cast<int32_t>(offsetof(SemaphorController_t2625702109, ___semaphor2_4)); }
	inline Texture2D_t3884108195 * get_semaphor2_4() const { return ___semaphor2_4; }
	inline Texture2D_t3884108195 ** get_address_of_semaphor2_4() { return &___semaphor2_4; }
	inline void set_semaphor2_4(Texture2D_t3884108195 * value)
	{
		___semaphor2_4 = value;
		Il2CppCodeGenWriteBarrier(&___semaphor2_4, value);
	}

	inline static int32_t get_offset_of_semaphor3_5() { return static_cast<int32_t>(offsetof(SemaphorController_t2625702109, ___semaphor3_5)); }
	inline Texture2D_t3884108195 * get_semaphor3_5() const { return ___semaphor3_5; }
	inline Texture2D_t3884108195 ** get_address_of_semaphor3_5() { return &___semaphor3_5; }
	inline void set_semaphor3_5(Texture2D_t3884108195 * value)
	{
		___semaphor3_5 = value;
		Il2CppCodeGenWriteBarrier(&___semaphor3_5, value);
	}

	inline static int32_t get_offset_of_semaphor4_6() { return static_cast<int32_t>(offsetof(SemaphorController_t2625702109, ___semaphor4_6)); }
	inline Texture2D_t3884108195 * get_semaphor4_6() const { return ___semaphor4_6; }
	inline Texture2D_t3884108195 ** get_address_of_semaphor4_6() { return &___semaphor4_6; }
	inline void set_semaphor4_6(Texture2D_t3884108195 * value)
	{
		___semaphor4_6 = value;
		Il2CppCodeGenWriteBarrier(&___semaphor4_6, value);
	}

	inline static int32_t get_offset_of_semaphor_7() { return static_cast<int32_t>(offsetof(SemaphorController_t2625702109, ___semaphor_7)); }
	inline GameObject_t3674682005 * get_semaphor_7() const { return ___semaphor_7; }
	inline GameObject_t3674682005 ** get_address_of_semaphor_7() { return &___semaphor_7; }
	inline void set_semaphor_7(GameObject_t3674682005 * value)
	{
		___semaphor_7 = value;
		Il2CppCodeGenWriteBarrier(&___semaphor_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
