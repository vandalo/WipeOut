#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FPSCounter
struct  FPSCounter_t953038383  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_FpsAccumulator
	int32_t ___m_FpsAccumulator_4;
	// System.Single UnityStandardAssets.Utility.FPSCounter::m_FpsNextPeriod
	float ___m_FpsNextPeriod_5;
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_CurrentFps
	int32_t ___m_CurrentFps_6;
	// UnityEngine.UI.Text UnityStandardAssets.Utility.FPSCounter::m_Text
	Text_t9039225 * ___m_Text_7;

public:
	inline static int32_t get_offset_of_m_FpsAccumulator_4() { return static_cast<int32_t>(offsetof(FPSCounter_t953038383, ___m_FpsAccumulator_4)); }
	inline int32_t get_m_FpsAccumulator_4() const { return ___m_FpsAccumulator_4; }
	inline int32_t* get_address_of_m_FpsAccumulator_4() { return &___m_FpsAccumulator_4; }
	inline void set_m_FpsAccumulator_4(int32_t value)
	{
		___m_FpsAccumulator_4 = value;
	}

	inline static int32_t get_offset_of_m_FpsNextPeriod_5() { return static_cast<int32_t>(offsetof(FPSCounter_t953038383, ___m_FpsNextPeriod_5)); }
	inline float get_m_FpsNextPeriod_5() const { return ___m_FpsNextPeriod_5; }
	inline float* get_address_of_m_FpsNextPeriod_5() { return &___m_FpsNextPeriod_5; }
	inline void set_m_FpsNextPeriod_5(float value)
	{
		___m_FpsNextPeriod_5 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFps_6() { return static_cast<int32_t>(offsetof(FPSCounter_t953038383, ___m_CurrentFps_6)); }
	inline int32_t get_m_CurrentFps_6() const { return ___m_CurrentFps_6; }
	inline int32_t* get_address_of_m_CurrentFps_6() { return &___m_CurrentFps_6; }
	inline void set_m_CurrentFps_6(int32_t value)
	{
		___m_CurrentFps_6 = value;
	}

	inline static int32_t get_offset_of_m_Text_7() { return static_cast<int32_t>(offsetof(FPSCounter_t953038383, ___m_Text_7)); }
	inline Text_t9039225 * get_m_Text_7() const { return ___m_Text_7; }
	inline Text_t9039225 ** get_address_of_m_Text_7() { return &___m_Text_7; }
	inline void set_m_Text_7(Text_t9039225 * value)
	{
		___m_Text_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
