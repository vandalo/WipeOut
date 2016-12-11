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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct  InputAxisScrollbar_t275793993  : public MonoBehaviour_t667441552
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::axis
	String_t* ___axis_2;

public:
	inline static int32_t get_offset_of_axis_2() { return static_cast<int32_t>(offsetof(InputAxisScrollbar_t275793993, ___axis_2)); }
	inline String_t* get_axis_2() const { return ___axis_2; }
	inline String_t** get_address_of_axis_2() { return &___axis_2; }
	inline void set_axis_2(String_t* value)
	{
		___axis_2 = value;
		Il2CppCodeGenWriteBarrier(&___axis_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
