#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t3896396478;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenu
struct  MainMenu_t55996120  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Button MainMenu::playButton
	Button_t3896396478 * ___playButton_2;

public:
	inline static int32_t get_offset_of_playButton_2() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___playButton_2)); }
	inline Button_t3896396478 * get_playButton_2() const { return ___playButton_2; }
	inline Button_t3896396478 ** get_address_of_playButton_2() { return &___playButton_2; }
	inline void set_playButton_2(Button_t3896396478 * value)
	{
		___playButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___playButton_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
