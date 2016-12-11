#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AlphaButtonClickMask
struct  AlphaButtonClickMask_t1323679844  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image AlphaButtonClickMask::_image
	Image_t538875265 * ____image_2;

public:
	inline static int32_t get_offset_of__image_2() { return static_cast<int32_t>(offsetof(AlphaButtonClickMask_t1323679844, ____image_2)); }
	inline Image_t538875265 * get__image_2() const { return ____image_2; }
	inline Image_t538875265 ** get_address_of__image_2() { return &____image_2; }
	inline void set__image_2(Image_t538875265 * value)
	{
		____image_2 = value;
		Il2CppCodeGenWriteBarrier(&____image_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
